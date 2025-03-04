#include "opcode-inst16.h"
#include <stdint.h>
#include <stdio.h>

static uint16_t program16[] = {
    /* C.ADD */      0x97BA,
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
    /* C.ANDI */     0x8A25,
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
    /* C.JR */       0x8082,
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
    /* C.MV */       0x833A,
    /* C.MV */       0x836A,
    /* C.MV */       0x8376,
    /* C.MV */       0x837A,
    /* C.MV */       0x837E,
    /* C.MV */       0x83A2,
    /* C.MV */       0x83EE,
    /* C.MV */       0x83F2,
    /* C.MV */       0x83F6,
    /* C.MV */       0x841E,
    /* C.MV */       0x842A,
    /* C.MV */       0x8452,
    /* C.MV */       0x8466,
    /* C.MV */       0x846A,
    /* C.MV */       0x84A2,
    /* C.MV */       0x84AA,
    /* C.MV */       0x84BA,
    /* C.MV */       0x84BE,
    /* C.MV */       0x84C2,
    /* C.MV */       0x84D2,
    /* C.MV */       0x84D6,
    /* C.MV */       0x84DE,
    /* C.MV */       0x84E6,
    /* C.MV */       0x8522,
    /* C.MV */       0x8526,
    /* C.MV */       0x853E,
    /* C.MV */       0x854E,
    /* C.MV */       0x8562,
    /* C.MV */       0x856E,
    /* C.MV */       0x85A2,
    /* C.MV */       0x85BA,
    /* C.MV */       0x85CA,
    /* C.MV */       0x85D2,
    /* C.MV */       0x85E6,
    /* C.MV */       0x85F2,
    /* C.MV */       0x85FA,
    /* C.MV */       0x863A,
    /* C.MV */       0x869E,
    /* C.MV */       0x86CA,
    /* C.MV */       0x86CE,
    /* C.MV */       0x86E6,
    /* C.MV */       0x86F6,
    /* C.MV */       0x871A,
    /* C.MV */       0x872E,
    /* C.MV */       0x873E,
    /* C.MV */       0x8756,
    /* C.MV */       0x875E,
    /* C.MV */       0x876A,
    /* C.MV */       0x8772,
    /* C.MV */       0x879E,
    /* C.MV */       0x87AA,
    /* C.MV */       0x87BA,
    /* C.MV */       0x87C6,
    /* C.MV */       0x87CE,
    /* C.MV */       0x87D6,
    /* C.MV */       0x8826,
    /* C.MV */       0x8856,
    /* C.MV */       0x886E,
    /* C.MV */       0x88BE,
    /* C.MV */       0x88CE,
    /* C.MV */       0x88D6,
    /* C.MV */       0x892E,
    /* C.MV */       0x8952,
    /* C.MV */       0x8956,
    /* C.MV */       0x8976,
    /* C.MV */       0x89A6,
    /* C.MV */       0x89B6,
    /* C.MV */       0x89C6,
    /* C.MV */       0x89D6,
    /* C.MV */       0x89E2,
    /* C.MV */       0x89F6,
    /* C.MV */       0x8A22,
    /* C.MV */       0x8A26,
    /* C.MV */       0x8A2E,
    /* C.MV */       0x8A3E,
    /* C.MV */       0x8A4A,
    /* C.MV */       0x8A56,
    /* C.MV */       0x8A5A,
    /* C.MV */       0x8A62,
    /* C.MV */       0x8AA6,
    /* C.MV */       0x8ABA,
    /* C.MV */       0x8ABE,
    /* C.MV */       0x8AC2,
    /* C.MV */       0x8AC6,
    /* C.MV */       0x8ACA,
    /* C.MV */       0x8ACE,
    /* C.MV */       0x8AD2,
    /* C.MV */       0x8ADA,
    /* C.MV */       0x8B52,
    /* C.MV */       0x8B66,
    /* C.MV */       0x8B6A,
    /* C.MV */       0x8B6E,
    /* C.MV */       0x8BA6,
    /* C.MV */       0x8BBA,
    /* C.MV */       0x8C4E,
    /* C.MV */       0x8C52,
    /* C.MV */       0x8C66,
    /* C.MV */       0x8C6E,
    /* C.MV */       0x8CA2,
    /* C.MV */       0x8CA6,
    /* C.MV */       0x8CAE,
    /* C.MV */       0x8CB6,
    /* C.MV */       0x8CDA,
    /* C.MV */       0x8CE2,
    /* C.MV */       0x8CEE,
    /* C.MV */       0x8D1A,
    /* C.MV */       0x8D22,
    /* C.MV */       0x8D3A,
    /* C.MV */       0x8D5A,
    /* C.MV */       0x8D9E,
    /* C.MV */       0x8DC2,
    /* C.MV */       0x8DDA,
    /* C.MV */       0x8DE2,
    /* C.MV */       0x8DE6,
    /* C.MV */       0x8E1E,
    /* C.MV */       0x8E2E,
    /* C.MV */       0x8E3A,
    /* C.MV */       0x8E7E,
    /* C.MV */       0x8E9A,
    /* C.MV */       0x8E9E,
    /* C.MV */       0x8EB6,
    /* C.MV */       0x8ECA,
    /* C.MV */       0x8ECE,
    /* C.MV */       0x8F26,
    /* C.MV */       0x8F5E,
    /* C.MV */       0x8F7E,
    /* C.NOP */      0x0001,
    /* C.OR */       0x8FD9,
    /* C.SD */       0xF550,
    /* C.SDSP */     0xE022,
    /* C.SDSP */     0xE0BA,
    /* C.SDSP */     0xE0BE,
    /* C.SDSP */     0xE142,
    /* C.SDSP */     0xE146,
    /* C.SDSP */     0xE1E2,
    /* C.SDSP */     0xE222,
    /* C.SDSP */     0xE406,
    /* C.SDSP */     0xE426,
    /* C.SDSP */     0xE43A,
    /* C.SDSP */     0xE43E,
    /* C.SDSP */     0xE4FA,
    /* C.SDSP */     0xE546,
    /* C.SDSP */     0xE572,
    /* C.SDSP */     0xE5DE,
    /* C.SDSP */     0xE606,
    /* C.SDSP */     0xE822,
    /* C.SDSP */     0xE82A,
    /* C.SDSP */     0xE876,
    /* C.SDSP */     0xE89A,
    /* C.SDSP */     0xE8F2,
    /* C.SDSP */     0xE976,
    /* C.SDSP */     0xE9DA,
    /* C.SDSP */     0xEC06,
    /* C.SDSP */     0xEC1E,
    /* C.SDSP */     0xEC26,
    /* C.SDSP */     0xEC9A,
    /* C.SDSP */     0xECAE,
    /* C.SDSP */     0xED1E,
    /* C.SDSP */     0xEDD6,
    /* C.SDSP */     0xF022,
    /* C.SDSP */     0xF076,
    /* C.SDSP */     0xF0B6,
    /* C.SDSP */     0xF0BA,
    /* C.SDSP */     0xF1D2,
    /* C.SDSP */     0xF406,
    /* C.SDSP */     0xF442,
    /* C.SDSP */     0xF446,
    /* C.SDSP */     0xF4B6,
    /* C.SDSP */     0xF4BE,
    /* C.SDSP */     0xF56E,
    /* C.SDSP */     0xF5CE,
    /* C.SDSP */     0xF82E,
    /* C.SDSP */     0xF842,
    /* C.SDSP */     0xF8FE,
    /* C.SDSP */     0xF96A,
    /* C.SDSP */     0xF9CA,
    /* C.SDSP */     0xFC16,
    /* C.SDSP */     0xFCAE,
    /* C.SDSP */     0xFCC2,
    /* C.SDSP */     0xFD66,
    /* C.SDSP */     0xFDA6,
    /* C.SLLI */     0x078E,
    /* C.SRAI */     0x878D,
    /* C.SRLI */     0x8389,
    /* C.SUB */      0x8F99,
    /* C.SUBW */     0x9C09,
    /* C.SUBW */     0x9F99,
    /* C.SW */       0xC000,
    /* C.SW */       0xC29C,
    /* C.SW */       0xC31C,
    /* C.SW */       0xC388,
    /* C.SW */       0xC398,
    /* C.SWSP */     0xC286,
    /* C.XOR */      0x8FB9,
};

void test_inst16() {
    for (uint16_t i = 0; i < sizeof(program16) / sizeof(program16[0]); i++) {
        uint16_t inst = program16[i];
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

        if (OP_C_ANDI(inst)) {
            printf("Matched C.ANDI instruction 0x%04X\n", inst);
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

        if (OP_C_SD(inst)) {
            printf("Matched C.SD instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SDSP(inst)) {
            printf("Matched C.SDSP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SLLI(inst)) {
            printf("Matched C.SLLI instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SRAI(inst)) {
            printf("Matched C.SRAI instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SRLI(inst)) {
            printf("Matched C.SRLI instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_SUB(inst)) {
            uint16_t rd  = 8 + ((inst & 0b1110000000) >> 7);
            uint16_t rs2 = 8 + ((inst & 0b11100) >> 2);

            printf("Matched C.SUB instruction 0x%04X: rd=%d, rs2=%d\n", inst, rd, rs2);
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

        if (OP_C_SWSP(inst)) {
            printf("Matched C.SWSP instruction 0x%04X\n", inst);
            count++;
        }

        if (OP_C_XOR(inst)) {
            printf("Matched C.XOR instruction 0x%04X\n", inst);
            count++;
        }

        if (count == 0) {
            printf("Error: no match for instruction 0x%04X\n", inst);
        }

        if (count > 1) {
            printf("Error: multiple matches for instruction 0x%04X\n", inst);
        }
    }
}
