#include <stdint.h>
#include <stdio.h>

#define OP(inst, s, w)    (((inst) >> (s)) & ((1U << (w)) - 1))
#define OP_I_ADDI(inst)   (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b00100 && OP(inst, 12, 3) == 0b000)
#define OP_I_AUIPC(inst)  (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b00101)
#define OP_I_JAL(inst)    (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b11011)

#define OP_C_OPCODE(inst)   (((inst) & 0b11))
#define OP_C_FUNCT3(inst)   (((inst) & 0b01110000000000000) >> 13)
#define OP_C_ADDI(instr)    (OP_C_OPCODE(instr) == 0b01 && OP_C_FUNCT3(instr) == 0b0000)
#define OP_C_JAL(instr)     (OP_C_OPCODE(instr) == 0b01 && OP_C_FUNCT3(instr) == 0b0001)
#define OP_C_LW(instr)      (OP_C_OPCODE(instr) == 0b00 && OP_C_FUNCT3(instr) == 0b0010)
#define OP_C_SW(instr)      (OP_C_OPCODE(instr) == 0b00 && OP_C_FUNCT3(instr) == 0b0110)
#define OP_C_BEQZ(instr)    (OP_C_OPCODE(instr) == 0b01 && OP_C_FUNCT3(instr) == 0b1100)
#define OP_C_BNEZ(instr)    (OP_C_OPCODE(instr) == 0b01 && OP_C_FUNCT3(instr) == 0b1110)
#define OP_C_SDSP(instr)    (OP_C_OPCODE(instr) == 0b10 && OP_C_FUNCT3(instr) == 0b0111)

uint64_t pc = 0;
uint32_t program[] = {
    /* 80000000: */ 0x00010117,  // auipc sp,0x10
    /* 80000004: */ 0x00010113,  // mv sp,sp
    /* 80000008: */ 0x0320006F,  // j 8000003a <main>
    /* 8000000c: */ 0x00001101,  // addi sp,sp,-32 # 8000ffe0 <main+0xffa6>
    /* 8000000e: */ 0x0000EC06,  // sd ra,24(sp)
    /* 80000010: */ 0x0000E822,  // sd s0,16(sp)
    /* 80000012: */ 0x00001000,  // addi s0,sp,32
    /* 80000014: */ 0x000087AA,  // mv a5,a0
    /* 80000016: */ 0x0000872E,  // mv a4,a1
    /* 80000018: */ 0xFEF42623,  // sw a5,-20(s0)
    /* 8000001c: */ 0x000087BA,  // mv a5,a4
    /* 8000001e: */ 0xFEF42423,  // sw a5,-24(s0)
    /* 80000022: */ 0xFEC42783,  // lw a5,-20(s0)
    /* 80000026: */ 0x0000873E,  // mv a4,a5
    /* 80000028: */ 0xFE842783,  // lw a5,-24(s0)
    /* 8000002c: */ 0x00009FB9,  // addw a5,a5,a4
    /* 8000002e: */ 0x00002781,  // sext.w a5,a5
    /* 80000030: */ 0x0000853E,  // mv a0,a5
    /* 80000032: */ 0x000060E2,  // ld ra,24(sp)
    /* 80000034: */ 0x00006442,  // ld s0,16(sp)
    /* 80000036: */ 0x00006105,  // addi sp,sp,32
    /* 80000038: */ 0x00008082,  // ret
    /* 8000003a: */ 0x00001101,  // addi sp,sp,-32
    /* 8000003c: */ 0x0000EC06,  // sd ra,24(sp)
    /* 8000003e: */ 0x0000E822,  // sd s0,16(sp)
    /* 80000040: */ 0x00001000,  // addi s0,sp,32
    /* 80000042: */ 0x00004795,  // li a5,5
    /* 80000044: */ 0xFEF42623,  // sw a5,-20(s0)
    /* 80000048: */ 0x0000479D,  // li a5,7
    /* 8000004a: */ 0xFEF42423,  // sw a5,-24(s0)
    /* 8000004e: */ 0xFE842703,  // lw a4,-24(s0)
    /* 80000052: */ 0xFEC42783,  // lw a5,-20(s0)
    /* 80000056: */ 0x000085BA,  // mv a1,a4
    /* 80000058: */ 0x0000853E,  // mv a0,a5
    /* 8000005a: */ 0xFB3FF0EF,  // jal 8000000c <add>
    /* 8000005e: */ 0x000087AA,  // mv a5,a0
    /* 80000060: */ 0xFEF42223,  // sw a5,-28(s0)
    /* 80000064: */ 0x00004781,  // li a5,0
    /* 80000066: */ 0x0000853E,  // mv a0,a5
    /* 80000068: */ 0x000060E2,  // ld ra,24(sp)
    /* 8000006a: */ 0x00006442,  // ld s0,16(sp)
    /* 8000006c: */ 0x00006105,  // addi sp,sp,32
    /* 8000006e: */ 0x00008082,  // ret
};

int main() {
    for (uint32_t i = 0; i < sizeof(program) / sizeof(program[0]); i++) {
        uint32_t inst = program[i];

        if (OP_C_ADDI(inst)) {
            printf("Matched C.ADDI instruction at index %u!\n", i);
        }

        if (OP_C_JAL(inst)) {
            printf("Matched C.JAL instruction at index %u!\n", i);
        }

        if (OP_C_LW(inst)) {
            printf("Matched C.LW instruction at index %u!\n", i);
        }

        if (OP_C_SW(inst)) {
            printf("Matched C.SW instruction at index %u!\n", i);
        }

        if (OP_C_BEQZ(inst)) {
            printf("Matched C.BEQZ instruction at index %u!\n", i);
        }

        if (OP_C_BNEZ(inst)) {
            printf("Matched C.BNEZ instruction at index %u!\n", i);
        }

        if (OP_C_SDSP(inst)) {
            printf("Matched C.SDSP instruction at index %u!\n", i);
        }

        if (OP_I_ADDI(inst)) {
            printf("Matched ADDI instruction at index %u!\n", i);
        }

        if (OP_I_AUIPC(inst)) {
            printf("Matched AUIPC instruction at index %u!\n", i);
        }

        if (OP_I_JAL(inst)) {
            printf("Matched JAL instruction at index %u!\n", i);
        }
    }

    return 0;
}
