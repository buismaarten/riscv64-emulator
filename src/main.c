#include <stdint.h>
#include <stdio.h>

// #define OP(inst, s, w)    (((inst) >> (s)) & ((1U << (w)) - 1))
// #define OP_I_ADDI(inst)   (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b00100 && OP(inst, 12, 3) == 0b000)
// #define OP_I_AUIPC(inst)  (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b00101)
// #define OP_I_JAL(inst)    (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b11011)

#define OP_C(inst)           (((inst) & 0b11))
#define OP_C_FUNCT3(inst)    (((inst) & 0b1110000000000000) >> 13)
#define OP_C_FUNCT4(inst)    (((inst) & 0b1111000000000000) >> 12)
#define OP_C_RS1(inst)       (((inst) & 0b0000111110000000) >> 7)
#define OP_C_RS2(inst)       (((inst) & 0b0000000001111100) >> 2)
#define OP_C_ADD(inst)       (OP_C(inst) == 0b10 && OP_C_FUNCT4(inst) == 0b1001 && OP_C_RS1(inst) != 0b00000 && OP_C_RS2(inst) != 0b00000)
#define OP_C_ADDI(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b000 && OP_C_RS1(inst) != 0b00000)
#define OP_C_ADDI16SP(inst)  (0) // TODO
#define OP_C_ADDI4SPN(inst)  (0) // TODO
#define OP_C_ADDIW(inst)     (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b001 && OP_C_RS1(inst) != 0b00000)
#define OP_C_ADDW(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT4(inst) == 0b1001)
#define OP_C_AND(inst)       (0) // TODO
#define OP_C_ANDI(inst)      (0) // TODO
#define OP_C_BEQZ(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b110)
#define OP_C_BNEZ(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b111)
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
#define OP_C_JAL(inst)       (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b001 && OP_C_RS1(inst) == 0b00000)
#define OP_C_JALR(inst)      (OP_C(inst) == 0b10 && OP_C_FUNCT4(inst) == 0b1001 && OP_C_RS2(inst) == 0b00000)
#define OP_C_JR(inst)        (0) // TODO
#define OP_C_LD(inst)        (0) // TODO
#define OP_C_LDSP(inst)      (0) // TODO
#define OP_C_LI(inst)        (0) // TODO
#define OP_C_LUI(inst)       (0) // TODO
#define OP_C_LW(inst)        (OP_C(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b010)
#define OP_C_LWSP(inst)      (0) // TODO
#define OP_C_MV(inst)        (0) // TODO
#define OP_C_NOP(inst)       (0) // TODO
#define OP_C_OR(inst)        (0) // TODO
#define OP_C_SD(inst)        (0) // TODO
#define OP_C_SDSP(inst)      (OP_C(inst) == 0b10 && OP_C_FUNCT3(inst) == 0b111)
#define OP_C_SLLI(inst)      (0) // TODO
#define OP_C_SRAI(inst)      (0) // TODO
#define OP_C_SRLI(inst)      (0) // TODO
#define OP_C_SUB(inst)       (0) // TODO
#define OP_C_SUBW(inst)      (0) // TODO
#define OP_C_SW(inst)        (OP_C(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b110)
#define OP_C_SWSP(inst)      (0) // TODO
#define OP_C_XOR(inst)       (0) // TODO

uint16_t program[] = {
    /* C.ADD  */  0x9852,
    /* C.ADDI */  0x0141,
    /* C.ADDI */  0x1101,
    /* C.ADDI */  0x1141,
    /* C.ADDIW */ 0x37F9,
    /* C.ADDIW */ 0x37FD,
    /* C.ADDW */  0x9FA5,
    /* C.ADDW */  0x9FB9,
    /* C.BEQZ */  0xC001,
    /* C.BNEZ */  0xE001,
    /* C.BNEZ */  0xE399,
    /* C.BNEZ */  0xF3ED,
    /* C.JAL  */  0x3001,
    /* C.JALR */  0x9002,
    /* C.LW   */  0x4000,
    /* C.SDSP */  0xE022,
    /* C.SDSP */  0xE406,
    /* C.SDSP */  0xE822,
    /* C.SDSP */  0xEC06,
    /* C.SDSP */  0xEC26,
    /* C.SDSP */  0xF022,
    /* C.SDSP */  0xF406,
    /* C.SW   */  0xC000,
    /* C.SW   */  0xC398,
};

int main() {
    for (uint16_t i = 0; i < sizeof(program) / sizeof(program[0]); i++) {
        uint16_t inst = program[i];
        uint16_t count = 0;

        if (OP_C_ADD(inst)) {
            printf("Matched C.ADD instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_ADDI(inst)) {
            printf("Matched C.ADDI instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_ADDIW(inst)) {
            printf("Matched C.ADDIW instruction 0x%X\n", inst);
            count++;
        }

        if (OP_C_ADDW(inst)) {
            printf("Matched C.ADDW instruction 0x%X\n", inst);
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

        if (OP_C_JALR(inst)) {
            printf("Matched C.JALR instruction 0x%X\n", inst);
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
