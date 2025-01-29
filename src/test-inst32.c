#include "opcode-inst32.h"
#include <stdint.h>
#include <stdio.h>

static uint32_t program32[] = {
    /* ADDI */  0x00178713,
    /* ADDI */  0x01650513,
    /* ADDI */  0x01850513,
    /* ADDI */  0x01C50513,
    /* ADDI */  0x02070713,
    /* AUIPC */ 0x00000517,
    /* AUIPC */ 0x00000717,
    /* AUIPC */ 0x00010117,
};

void test_inst32() {
    for (uint32_t i = 0; i < sizeof(program32) / sizeof(program32[0]); i++) {
        uint32_t inst = program32[i];
        uint32_t count = 0;

        if (OP_I_ADDI(inst)) {
            printf("Matched ADDI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_I_AUIPC(inst)) {
            printf("Matched AUIPC instruction 0x%08X\n", inst);
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
