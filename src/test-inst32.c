#include "opcode-inst32.h"
#include <stdint.h>
#include <stdio.h>

static uint32_t program32[] = {
    /* ADDI */  0x00178713,
    /* ADDI */  0x01650513,
    /* ADDI */  0x01850513,
    /* ADDI */  0x01C50513,
    /* ADDI */  0x02070713,
    /* ADDI */  0x04800793,
    /* ADDIW */ 0x0014069B,
    /* ADDIW */ 0x0014879B,
    /* ADDIW */ 0x0017059B,
    /* ADDIW */ 0x0017851B,
    /* ADDIW */ 0x0019051B,
    /* ADDIW */ 0x0019069B,
    /* ADDIW */ 0x0019079B,
    /* ADDIW */ 0x0019851B,
    /* ADDIW */ 0x001B051B,
    /* ADDIW */ 0x001C059B,
    /* ADDIW */ 0x001C0A9B,
    /* ADDIW */ 0x001C0B1B,
    /* ADDIW */ 0x001D0A9B,
    /* ADDIW */ 0x001D0B1B,
    /* ADDIW */ 0x001F051B,
    /* ADDIW */ 0xFFC5041B,
    /* ADDIW */ 0xFFC68B9B,
    /* ADDIW */ 0xFFC7849B,
    /* ADDIW */ 0xFFD50F1B,
    /* ADDIW */ 0xFFD58F1B,
    /* ADDIW */ 0xFFE4051B,
    /* ADDIW */ 0xFFE5049B,
    /* ADDIW */ 0xFFE50C1B,
    /* ADDIW */ 0xFFE50D9B,
    /* ADDIW */ 0xFFE5841B,
    /* ADDIW */ 0xFFE6891B,
    /* ADDIW */ 0xFFE7899B,
    /* ADDIW */ 0xFFEF0F9B,
    /* ADDIW */ 0xFFF4051B,
    /* ADDIW */ 0xFFF40A9B,
    /* ADDIW */ 0xFFF5069B,
    /* ADDIW */ 0xFFF5079B,
    /* ADDIW */ 0xFFF6851B,
    /* ADDIW */ 0xFFF7079B,
    /* ADDIW */ 0xFFF7859B,
    /* ADDIW */ 0xFFF7869B,
    /* ADDIW */ 0xFFF90B1B,
    /* ADDIW */ 0xFFFA871B,
    /* ADDIW */ 0xFFFA879B,
    /* ADDIW */ 0xFFFC079B,
    /* ADDIW */ 0xFFFC879B,
    /* ADDIW */ 0xFFFD879B,
    /* ADDW */  0x0054043B,
    /* ADDW */  0x005502BB,
    /* ADDW */  0x0059093B,
    /* ADDW */  0x005F02BB,
    /* ADDW */  0x0094053B,
    /* ADDW */  0x00A282BB,
    /* ADDW */  0x00A4843B,
    /* ADDW */  0x00A9093B,
    /* ADDW */  0x00B282BB,
    /* ADDW */  0x00DB0B3B,
    /* ADDW */  0x00DC0C3B,
    /* ADDW */  0x00FC0C3B,
    /* ADDW */  0x0125053B,
    /* ADDW */  0x0125093B,
    /* ADDW */  0x012686BB,
    /* ADDW */  0x0127853B,
    /* ADDW */  0x012787BB,
    /* ADDW */  0x0137853B,
    /* ADDW */  0x0159093B,
    /* ADDW */  0x015D0D3B,
    /* ADDW */  0x0165053B,
    /* ADDW */  0x016989BB,
    /* ADDW */  0x016D0D3B,
    /* ADDW */  0x018585BB,
    /* ADDW */  0x01870B3B,
    /* ADDW */  0x01878ABB,
    /* ADDW */  0x01AA8ABB,
    /* ADDW */  0x01AB0B3B,
    /* ANDI */  0xFFE37513,
    /* ANDI */  0xFFE47513,
    /* ANDI */  0xFFE47793,
    /* ANDI */  0xFFE4F793,
    /* ANDI */  0xFFE77413,
    /* ANDI */  0xFFE7F413,
    /* ANDI */  0xFFE7F693,
    /* ANDI */  0xFFE97793,
    /* ANDI */  0xFFE97C13,
    /* ANDI */  0xFFE9FC93,
    /* ANDI */  0xFFEAF713,
    /* ANDI */  0xFFEAF793,
    /* ANDI */  0xFFEBF693,
    /* ANDI */  0xFFEC7793,
    /* ANDI */  0xFFEDF793,
    /* ANDI */  0xFFEDFE93,
    /* ANDI */  0xFFEE7513,
    /* AUIPC */ 0x00000517,
    /* AUIPC */ 0x00000717,
    /* AUIPC */ 0x00010117,
    /* BEQ */   0x06C30A63,
    /* BEQ */   0x06C58A63,
    /* BEQ */   0x0DE70763,
    /* BEQ */   0x0DE78763,
    /* BEQ */   0x10BC8E63,
    /* BEQ */   0x11850E63,
    /* BEQ */   0x11F78663,
    /* BEQ */   0x13F68363,
    /* BEQ */   0x16968863,
    /* BEQ */   0x16FD0463,
    /* BEQ */   0x1A978863,
    /* BEQ */   0x1AEB0263,
    /* BEQ */   0x1D5A0A63,
    /* BEQ */   0x1F3A8863,
    /* BEQ */   0x22990663,
    /* BEQ */   0x25B40663,
    /* BEQ */   0x28850063,
    /* BEQ */   0x2A950263,
    /* BEQ */   0xFCCC08E3,
    /* BEQ */   0xFCCD89E3,
    /* BGE */   0x00895963,
    /* BGE */   0x2AA75B63,
    /* BGE */   0x2CA75D63,
    /* BLT */   0x00A7C763,
    /* BLT */   0x00E7C563,
    /* BNE */   0x02CC1C63,
    /* BNE */   0x02CD9B63,
    /* BNE */   0xD69512E3,
    /* BNE */   0xD88514E3,
    /* BNE */   0xDEC414E3,
    /* BNE */   0xE0C913E3,
    /* BNE */   0xE0CA9DE3,
    /* BNE */   0xE2CA9AE3,
    /* BNE */   0xE6C71EE3,
    /* BNE */   0xE6C79CE3,
    /* BNE */   0xEAC91FE3,
    /* BNE */   0xEAC99EE3,
    /* BNE */   0xEEC417E3,
    /* BNE */   0xEECD97E3,
    /* BNE */   0xF3E71DE3,
    /* BNE */   0xF3E79DE3,
    /* BNE */   0xF8C498E3,
    /* BNE */   0xFB341FE3,
    /* JAL */   0x0080006F,
    /* JAL */   0x0140006F,
    /* JAL */   0x0160006F,
    /* JAL */   0x0200006F,
    /* JAL */   0x0240006F,
    /* JAL */   0x0320006F,
    /* JAL */   0x0360006F,
    /* JAL */   0x0420006F,
    /* JAL */   0x05A0006F,
    /* JAL */   0x06C0006F,
    /* JAL */   0x2CA0006F,
    /* JAL */   0x2EE0006F,
    /* JAL */   0xD05FF0EF,
    /* JAL */   0xD0BFF0EF,
    /* JAL */   0xD11FF0EF,
    /* JAL */   0xD35FF0EF,
    /* JAL */   0xEABFF0EF,
    /* JAL */   0xEB5FF0EF,
    /* JAL */   0xFA1FF0EF,
    /* JAL */   0xFB3FF0EF,
    /* JAL */   0xFB7FF0EF,
    /* JAL */   0xFB9FF0EF,
    /* JAL */   0xFC1FF0EF,
    /* JAL */   0xFC9FF0EF,
    /* JAL */   0xFD3FF0EF,
    /* JAL */   0xFDBFF0EF,
    /* JAL */   0xFDDFF0EF,
    /* JAL */   0xFE1FF0EF,
    /* JAL */   0xFE5FF0EF,
    /* JAL */   0xFE9FF0EF,
    /* JAL */   0xFF1FF0EF,
    /* LBU */   0x00054783,
    /* LBU */   0x0007C783,
    /* LBU */   0x00154783,
    /* LBU */   0x00174783,
    /* LBU */   0xFDF44783,
    /* LD */    0xFE843783,
    /* LUI */   0x100006B7,
    /* LUI */   0x10000737,
    /* LUI */   0x100007B7,
    /* LW    */ 0xFDC42783,
    /* LW    */ 0xFE842703,
    /* LW    */ 0xFE842783,
    /* LW    */ 0xFEC42703,
    /* LW    */ 0xFEC42783,
    /* MULW */  0x0285053B,
    /* MULW */  0x02A7053B,
    /* MULW */  0x02A7853B,
    /* MULW */  0x02F707BB,
    /* SB */    0xFCF40FA3,
    /* SD */    0xFEA43423,
    /* SD */    0xFEE43423,
    /* SD */    0xFEF43423,
    /* SUBW */  0x4086843B,
    /* SUBW */  0x4087843B,
    /* SUBW */  0x40A3053B,
    /* SUBW */  0x40A5853B,
    /* SUBW */  0x40AF053B,
    /* SUBW */  0x40D503BB,
    /* SUBW */  0x40D50CBB,
    /* SUBW */  0x40D50D3B,
    /* SUBW */  0x40E7873B,
    /* SUBW */  0x40F583BB,
    /* SUBW */  0x40F70B3B,
    /* SUBW */  0x40FA0DBB,
    /* SUBW */  0x40FA84BB,
    /* SUBW */  0x40FA89BB,
    /* SUBW */  0x40FB0A3B,
    /* SUBW */  0x41850C3B,
    /* SUBW */  0x41958CBB,
    /* SUBW */  0x41DF0EBB,
    /* SW */    0xFCF42E23,
    /* SW */    0xFEF42223,
    /* SW */    0xFEF42423,
    /* SW */    0xFEF42623,
};

void test_inst32() {
    for (uint32_t i = 0; i < sizeof(program32) / sizeof(program32[0]); i++) {
        uint32_t inst = program32[i];
        uint32_t count = 0;

        if (OP_ADDI(inst)) {
            printf("Matched ADDI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_ADDIW(inst)) {
            printf("Matched ADDIW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_ADDW(inst)) {
            printf("Matched ADDW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_ANDI(inst)) {
            printf("Matched ANDI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AUIPC(inst)) {
            printf("Matched AUIPC instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BEQ(inst)) {
            printf("Matched BEQ instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BGE(inst)) {
            printf("Matched BGE instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BLT(inst)) {
            printf("Matched BLT instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BNE(inst)) {
            printf("Matched BNE instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_JAL(inst)) {
            printf("Matched JAL instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LBU(inst)) {
            printf("Matched LBU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LD(inst)) {
            printf("Matched LD instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LUI(inst)) {
            printf("Matched LUI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LW(inst)) {
            printf("Matched LW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_MULW(inst)) {
            printf("Matched MULW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SB(inst)) {
            printf("Matched SB instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SD(inst)) {
            printf("Matched SD instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SUBW(inst)) {
            printf("Matched SUBW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SW(inst)) {
            printf("Matched SW instruction 0x%08X\n", inst);
            count++;
        }

        if (count == 0) {
            printf("Error: no match for instruction 0x%08X\n", inst);
        }

        if (count >= 2) {
            printf("Error: multiple matches for instruction 0x%08X\n", inst);
        }
    }
}
