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
    /* AUIPC */ 0x00000517,
    /* AUIPC */ 0x00000717,
    /* AUIPC */ 0x00010117,
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

        if (OP_I_AUIPC(inst)) {
            printf("Matched AUIPC instruction 0x%08X\n", inst);
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
