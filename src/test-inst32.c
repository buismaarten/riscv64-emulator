#include "opcode-inst32.h"
#include <stdint.h>
#include <stdio.h>

static uint32_t program32[] = {
    /* ADDI */  0x00178713,
    /* ADDI */  0x01650513,
    /* ADDI */  0x01850513,
    /* ADDI */  0x01C50513,
    /* ADDI */  0x02070713,
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
};

void test_inst32() {
    for (uint32_t i = 0; i < sizeof(program32) / sizeof(program32[0]); i++) {
        uint32_t inst = program32[i];
        uint32_t count = 0;

        if (OP_I_ADDI(inst)) {
            printf("Matched ADDI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_I_ADDIW(inst)) {
            printf("Matched ADDIW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_I_ADDW(inst)) {
            printf("Matched ADDW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_I_ANDI(inst)) {
            printf("Matched ANDI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_I_AUIPC(inst)) {
            printf("Matched AUIPC instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_I_BEQ(inst)) {
            printf("Matched BEQ instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_I_JAL(inst)) {
            printf("Matched JAL instruction 0x%08X\n", inst);
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
