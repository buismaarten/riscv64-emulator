#include <stdint.h>
#include <stdio.h>

// #define OP(inst, s, w)    (((inst) >> (s)) & ((1U << (w)) - 1))
// #define OP_I_ADDI(inst)   (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b00100 && OP(inst, 12, 3) == 0b000)
// #define OP_I_AUIPC(inst)  (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b00101)
// #define OP_I_JAL(inst)    (OP(inst, 0, 2) == 0b11 && OP(inst, 2, 5) == 0b11011)

#define OP_C(inst)           (((inst) & 0b11))
#define OP_C_FUNCT2(inst)    (((inst) & 0b0000000001100000) >> 5)
#define OP_C_FUNCT3(inst)    (((inst) & 0b1110000000000000) >> 13)
#define OP_C_FUNCT4(inst)    (((inst) & 0b1111000000000000) >> 12)
#define OP_C_FUNCT6(inst)    (((inst) & 0b1111110000000000) >> 10)
#define OP_C_RS1(inst)       (((inst) & 0b0000111110000000) >> 7)
#define OP_C_RS2(inst)       (((inst) & 0b0000000001111100) >> 2)
#define OP_C_ADD(inst)       (OP_C(inst) == 0b10 && OP_C_FUNCT4(inst) == 0b1001 && OP_C_RS1(inst) != 0b00000 && OP_C_RS2(inst) != 0b00000)
#define OP_C_ADDI(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b000 && OP_C_RS1(inst) != 0b00000)
#define OP_C_ADDI16SP(inst)  (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b011 && OP_C_RS1(inst) == 0b00010)
#define OP_C_ADDI4SPN(inst)  (OP_C(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b000)
#define OP_C_ADDIW(inst)     (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b001 && OP_C_RS1(inst) != 0b00000)
#define OP_C_ADDW(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT6(inst) == 0b100111 && OP_C_FUNCT2(inst) == 0b01)
#define OP_C_AND(inst)       (OP_C(inst) == 0b01 && OP_C_FUNCT6(inst) == 0b100011 && OP_C_FUNCT2(inst) == 0b11)
#define OP_C_ANDI(inst)      (0) // TODO
#define OP_C_BEQZ(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b110)
#define OP_C_BNEZ(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b111)
#define OP_C_EBREAK(inst)    (OP_C(inst) == 0b10 && OP_C_FUNCT4(inst) == 0b1001 && OP_C_RS1(inst) == 0b00000 && OP_C_RS2(inst) == 0b00000)
#define OP_C_FLD(inst)       (OP_C(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b001)
#define OP_C_FLDSP(inst)     (OP_C(inst) == 0b10 && OP_C_FUNCT3(inst) == 0b001)
#define OP_C_FLW(inst)       (0) // TODO
#define OP_C_FLWSP(inst)     (0) // TODO
#define OP_C_FSD(inst)       (OP_C(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b101)
#define OP_C_FSDSP(inst)     (OP_C(inst) == 0b10 && OP_C_FUNCT3(inst) == 0b101)
#define OP_C_FSW(inst)       (0) // TODO
#define OP_C_FSWSP(inst)     (0) // TODO
#define OP_C_J(inst)         (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b101)
#define OP_C_JAL(inst)       (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b001 && OP_C_RS1(inst) == 0b00000)
#define OP_C_JALR(inst)      (OP_C(inst) == 0b10 && OP_C_FUNCT4(inst) == 0b1001 && OP_C_RS1(inst) != 0b00000 && OP_C_RS2(inst) == 0b00000)
#define OP_C_JR(inst)        (OP_C(inst) == 0b10 && OP_C_FUNCT4(inst) == 0b1000 && OP_C_RS2(inst) == 0b00000)
#define OP_C_LD(inst)        (OP_C(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b011)
#define OP_C_LDSP(inst)      (OP_C(inst) == 0b10 && OP_C_FUNCT3(inst) == 0b011 && OP_C_RS1(inst) != 0b00000)
#define OP_C_LI(inst)        (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b010 && OP_C_RS1(inst) != 0b00000)
#define OP_C_LUI(inst)       (OP_C(inst) == 0b01 && OP_C_FUNCT3(inst) == 0b011 && OP_C_RS1(inst) != 0b00000 && OP_C_RS1(inst) != 0b00010)
#define OP_C_LW(inst)        (OP_C(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b010)
#define OP_C_LWSP(inst)      (OP_C(inst) == 0b10 && OP_C_FUNCT3(inst) == 0b010)
#define OP_C_MV(inst)        (OP_C(inst) == 0b10 && OP_C_FUNCT4(inst) == 0b1000 && OP_C_RS1(inst) != 0b00000 && OP_C_RS2(inst) != 0b00000)
#define OP_C_NOP(inst)       (OP_C(inst) == 0b01 && OP_C_FUNCT4(inst) == 0b0000 && OP_C_RS1(inst) == 0b00000 && OP_C_RS2(inst) == 0b00000)
#define OP_C_OR(inst)        (OP_C(inst) == 0b01 && OP_C_FUNCT6(inst) == 0b100011 && OP_C_FUNCT2(inst) == 0b10)
#define OP_C_SD(inst)        (0) // TODO
#define OP_C_SDSP(inst)      (OP_C(inst) == 0b10 && OP_C_FUNCT3(inst) == 0b111)
#define OP_C_SLLI(inst)      (0) // TODO
#define OP_C_SRAI(inst)      (0) // TODO
#define OP_C_SRLI(inst)      (0) // TODO
#define OP_C_SUB(inst)       (OP_C(inst) == 0b01 && OP_C_FUNCT6(inst) == 0b100011 && OP_C_FUNCT2(inst) == 0b00)
#define OP_C_SUBW(inst)      (OP_C(inst) == 0b01 && OP_C_FUNCT6(inst) == 0b100111 && OP_C_FUNCT2(inst) == 0b00)
#define OP_C_SW(inst)        (OP_C(inst) == 0b00 && OP_C_FUNCT3(inst) == 0b110)
#define OP_C_SWSP(inst)      (0) // TODO
#define OP_C_XOR(inst)       (OP_C(inst) == 0b01 && OP_C_FUNCT6(inst) == 0b100011 && OP_C_FUNCT2(inst) == 0b01)

uint16_t program[] = {
    /* C.ADD */      0x9852,
    /* C.ADDI */     0x0141,
    /* C.ADDI */     0x0505,
    /* C.ADDI */     0x0705,
    /* C.ADDI */     0x1101,
    /* C.ADDI */     0x1141,
    /* C.ADDI */     0x6151,
    /* C.ADDI */     0x716D,
    /* C.ADDI16SP */ 0x6105,
    /* C.ADDI16SP */ 0x6145,
    /* C.ADDI16SP */ 0x7179,
    /* C.ADDI4SPN */ 0x0800,
    /* C.ADDI4SPN */ 0x1000,
    /* C.ADDI4SPN */ 0x1800,
    /* C.ADDIW */    0x2781,
    /* C.ADDIW */    0x3379,
    /* C.ADDIW */    0x3479,
    /* C.ADDIW */    0x34F9,
    /* C.ADDIW */    0x356D,
    /* C.ADDIW */    0x357D,
    /* C.ADDIW */    0x35ED,
    /* C.ADDIW */    0x35F9,
    /* C.ADDIW */    0x3779,
    /* C.ADDIW */    0x37F9,
    /* C.ADDIW */    0x37FD,
    /* C.ADDIW */    0x3979,
    /* C.ADDIW */    0x39F9,
    /* C.ADDIW */    0x3AF9,
    /* C.ADDIW */    0x3BF9,
    /* C.ADDIW */    0x3E79,
    /* C.ADDW */     0x9CAD,
    /* C.ADDW */     0x9D2D,
    /* C.ADDW */     0x9EA1,
    /* C.ADDW */     0x9F29,
    /* C.ADDW */     0x9FA5,
    /* C.ADDW */     0x9FA9,
    /* C.ADDW */     0x9FB9,
    /* C.AND */      0x8FF9,
    /* C.BEQZ */     0xC001,
    /* C.BEQZ */     0xC791,
    /* C.BEQZ */     0xCB89,
    /* C.BNEZ */     0xE001,
    /* C.BNEZ */     0xE119,
    /* C.BNEZ */     0xE399,
    /* C.BNEZ */     0xF3ED,
    /* C.BNEZ */     0xFBFD,
    /* C.BNEZ */     0xFFE5,
    /* C.EBREAK */   0x9002,
    /* C.FLD */      0x239C,
    /* C.FLDSP */    0x2022,
    /* C.FSD */      0xA79C,
    /* C.FSDSP */    0xA43E,
    /* C.J */        0xA021,
    /* C.J */        0xA025,
    /* C.J */        0xA029,
    /* C.J */        0xA821,
    /* C.J */        0xA831,
    /* C.J */        0xA839,
    /* C.J */        0xB5ED,
    /* C.J */        0xB711,
    /* C.J */        0xBFC9,
    /* C.J */        0xBFF1,
    /* C.J */        0xBFF9,
    /* C.JAL */      0x3001,
    /* C.JALR */     0x9082,
    /* C.JR */       0x8782,
    /* C.LD */       0x60B2,
    /* C.LD */       0x6346,
    /* C.LD */       0x6366,
    /* C.LD */       0x63E2,
    /* C.LD */       0x63EA,
    /* C.LD */       0x6412,
    /* C.LD */       0x64A2,
    /* C.LD */       0x65E6,
    /* C.LD */       0x6706,
    /* C.LD */       0x6722,
    /* C.LD */       0x6742,
    /* C.LD */       0x6786,
    /* C.LD */       0x679C,
    /* C.LD */       0x67A2,
    /* C.LD */       0x67C2,
    /* C.LD */       0x680A,
    /* C.LD */       0x688A,
    /* C.LD */       0x68AA,
    /* C.LD */       0x6AEE,
    /* C.LD */       0x6B4E,
    /* C.LD */       0x6BAE,
    /* C.LD */       0x6C0E,
    /* C.LD */       0x6E2A,
    /* C.LD */       0x6E46,
    /* C.LD */       0x6ECA,
    /* C.LD */       0x6F26,
    /* C.LD */       0x72E2,
    /* C.LD */       0x74EE,
    /* C.LD */       0x75C2,
    /* C.LD */       0x75E6,
    /* C.LD */       0x7686,
    /* C.LD */       0x76A6,
    /* C.LD */       0x7706,
    /* C.LD */       0x77A6,
    /* C.LD */       0x7822,
    /* C.LD */       0x7842,
    /* C.LD */       0x7866,
    /* C.LD */       0x78A2,
    /* C.LD */       0x794E,
    /* C.LD */       0x79AE,
    /* C.LD */       0x7A0E,
    /* C.LD */       0x7CEA,
    /* C.LD */       0x7D4A,
    /* C.LD */       0x7DAA,
    /* C.LD */       0x7E82,
    /* C.LD */       0x7FC6,
    /* C.LDSP */     0x60A2,
    /* C.LDSP */     0x60E2,
    /* C.LDSP */     0x6402,
    /* C.LDSP */     0x6442,
    /* C.LDSP */     0x64E2,
    /* C.LDSP */     0x70A2,
    /* C.LDSP */     0x7402,
    /* C.LI */       0x4281,
    /* C.LI */       0x4401,
    /* C.LI */       0x4501,
    /* C.LI */       0x4505,
    /* C.LI */       0x450D,
    /* C.LI */       0x4515,
    /* C.LI */       0x4605,
    /* C.LI */       0x4701,
    /* C.LI */       0x4705,
    /* C.LI */       0x4781,
    /* C.LI */       0x4785,
    /* C.LI */       0x4795,
    /* C.LI */       0x479D,
    /* C.LI */       0x4901,
    /* C.LI */       0x4981,
    /* C.LI */       0x4B01,
    /* C.LI */       0x4C01,
    /* C.LI */       0x4D01,
    /* C.LUI */      0x67C9,
    /* C.LW */       0x4000,
    /* C.LWSP */     0x4792,
    /* C.MV */       0x84BE,
    /* C.MV */       0x853E,
    /* C.MV */       0x85BA,
    /* C.MV */       0x872E,
    /* C.MV */       0x873E,
    /* C.MV */       0x87AA,
    /* C.MV */       0x87BA,
    /* C.NOP */      0x0001,
    /* C.OR */       0x8FD9,
    /* C.SDSP */     0xE022,
    /* C.SDSP */     0xE406,
    /* C.SDSP */     0xE822,
    /* C.SDSP */     0xEC06,
    /* C.SDSP */     0xEC26,
    /* C.SDSP */     0xF022,
    /* C.SDSP */     0xF406,
    /* C.SUB */      0x8F99,
    /* C.SUBW */     0x9C09,
    /* C.SUBW */     0x9F99,
    /* C.SW */       0xC000,
    /* C.SW */       0xC29C,
    /* C.SW */       0xC31C,
    /* C.SW */       0xC388,
    /* C.SW */       0xC398,
    /* C.XOR */      0x8FB9,
};

int main() {
    for (uint16_t i = 0; i < sizeof(program) / sizeof(program[0]); i++) {
        uint16_t inst = program[i];
        uint16_t count = 0;

        if (OP_C_ADD(inst)) {
            printf("Matched C.ADD instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_ADDI(inst)) {
            printf("Matched C.ADDI instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_ADDI4SPN(inst)) {
            printf("Matched C.ADDI4SPN instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_ADDI16SP(inst)) {
            printf("Matched C.ADDI16SP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_ADDIW(inst)) {
            printf("Matched C.ADDIW instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_ADDW(inst)) {
            printf("Matched C.ADDW instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_AND(inst)) {
            printf("Matched C.AND instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_BEQZ(inst)) {
            printf("Matched C.BEQZ instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_BNEZ(inst)) {
            printf("Matched C.BNEZ instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_EBREAK(inst)) {
            printf("Matched C.EBREAK instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_FLD(inst)) {
            printf("Matched C.FLD instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_FLDSP(inst)) {
            printf("Matched C.FLDSP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_FSD(inst)) {
            printf("Matched C.FSD instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_FSDSP(inst)) {
            printf("Matched C.FSDSP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_J(inst)) {
            printf("Matched C.J instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_JAL(inst)) {
            printf("Matched C.JAL instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_JALR(inst)) {
            printf("Matched C.JALR instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_JR(inst)) {
            printf("Matched C.JR instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_LD(inst)) {
            printf("Matched C.LD instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_LDSP(inst)) {
            printf("Matched C.LDSP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_LI(inst)) {
            printf("Matched C.LI instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_LUI(inst)) {
            printf("Matched C.LUI instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_LW(inst)) {
            printf("Matched C.LW instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_LWSP(inst)) {
            printf("Matched C.LWSP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_MV(inst)) {
            printf("Matched C.MV instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_NOP(inst)) {
            printf("Matched C.NOP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_OR(inst)) {
            printf("Matched C.OR instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SDSP(inst)) {
            printf("Matched C.SDSP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SUB(inst)) {
            printf("Matched C.SUB instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SUBW(inst)) {
            printf("Matched C.SUBW instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SW(inst)) {
            printf("Matched C.SW instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_XOR(inst)) {
            printf("Matched C.XOR instruction 0x%04X\n", inst);
            count++;
        }

        if (count == 0) {
            printf("Error: no match for instruction 0x%04X\n", inst);
        }

        if (count >= 2) {
            printf("Error: multiple matches for instruction 0x%04X\n", inst);
        }
    }

    return 0;
}
