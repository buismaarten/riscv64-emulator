#include <stdint.h>
#include <stdio.h>

// #define OP(inst, s, w)    (((inst) >> (s)) & ((1U << (w)) - 1))
// #define OP_I_ADDI(inst)   (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b00100 && OP(inst, 12, 3) == 0b000)
// #define OP_I_AUIPC(inst)  (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b00101)
// #define OP_I_JAL(inst)    (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b11011)

#define OP_C_OPCODE(inst)    (((inst) & 0b11))
#define OP_C_FUNCT3(inst)    (((inst) & 0b01110000000000000) >> 13)
#define OP_C_ADD(inst)       (0) // TODO
#define OP_C_ADDI(inst)      (OP_C_OPCODE(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b000)
#define OP_C_ADDI16SP(inst)  (0) // TODO
#define OP_C_ADDI4SPN(inst)  (0) // TODO
#define OP_C_ADDIW(inst)     (0) // TODO
#define OP_C_ADDW(inst)      (0) // TODO
#define OP_C_AND(inst)       (0) // TODO
#define OP_C_ANDI(inst)      (0) // TODO
#define OP_C_BEQZ(inst)      (OP_C_OPCODE(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b110)
#define OP_C_BNEZ(inst)      (OP_C_OPCODE(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b111)
#define OP_C_EBREAK(inst)    (0) // TODO
#define OP_C_FLD(inst)       (0) // TODO
#define OP_C_FLDSP(inst)     (0) // TODO
#define OP_C_FLW(inst)       (0) // TODO
#define OP_C_FLWSP(inst)     (0) // TODO
#define OP_C_FSD(inst)       (0) // TODO
#define OP_C_FSDSP(inst)     (0) // TODO
#define OP_C_FSW(inst)       (0) // TODO
#define OP_C_FSWSP(inst)     (0) // TODO
#define OP_C_J(inst)         (0) // TODO
#define OP_C_JAL(inst)       (OP_C_OPCODE(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b001)
#define OP_C_JALR(inst)      (0) // TODO
#define OP_C_JR(inst)        (0) // TODO
#define OP_C_LD(inst)        (0) // TODO
#define OP_C_LDSP(inst)      (0) // TODO
#define OP_C_LI(inst)        (0) // TODO
#define OP_C_LUI(inst)       (0) // TODO
#define OP_C_LW(inst)        (OP_C_OPCODE(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b010)
#define OP_C_LWSP(inst)      (0) // TODO
#define OP_C_MV(inst)        (0) // TODO
#define OP_C_NOP(inst)       (0) // TODO
#define OP_C_OR(inst)        (0) // TODO
#define OP_C_SD(inst)        (0) // TODO
#define OP_C_SDSP(inst)      (OP_C_OPCODE(inst) == 0b10 && OP_C_FUNCT3(inst) == 0b111)
#define OP_C_SLLI(inst)      (0) // TODO
#define OP_C_SRAI(inst)      (0) // TODO
#define OP_C_SRLI(inst)      (0) // TODO
#define OP_C_SUB(inst)       (0) // TODO
#define OP_C_SUBW(inst)      (0) // TODO
#define OP_C_SW(inst)        (OP_C_OPCODE(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b110)
#define OP_C_SWSP(inst)      (0) // TODO
#define OP_C_XOR(inst)       (0) // TODO

uint16_t program[] = {
    /* C.ADDI */ 0x1101,
    /* C.BEQZ */ 0xC001,
    /* C.BNEZ */ 0xE001,
    /* C.JAL  */ 0x2781,
    /* C.JAL  */ 0x3001,
    /* C.LW   */ 0x4000,
    /* C.SDSP */ 0xE822,
    /* C.SDSP */ 0xEC06,
    /* C.SW   */ 0xC000,
};

int main() {
    for (uint16_t i = 0; i < sizeof(program) / sizeof(program[0]); i++) {
        uint16_t inst = program[i];
        uint16_t count = 0;

        if (OP_C_ADDI(inst)) {
            printf("Matched C.ADDI instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_BEQZ(inst)) {
            printf("Matched C.BEQZ instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_BNEZ(inst)) {
            printf("Matched C.BNEZ instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_JAL(inst)) {
            printf("Matched C.JAL instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_LW(inst)) {
            printf("Matched C.LW instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_SDSP(inst)) {
            printf("Matched C.SDSP instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_SW(inst)) {
            printf("Matched C.SW instruction 0x%X\n", inst);
            count++;
        }

        if (count == 0) {
            printf("Error: no match for instruction 0x%X\n", inst);
        }

        if (count >= 2) {
            printf("Error: multiple matches for instruction 0x%X\n", inst);
        }
    }

    return 0;
}
