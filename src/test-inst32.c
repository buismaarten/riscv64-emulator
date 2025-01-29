#include "opcode-inst32.h"
#include <stdint.h>
#include <stdio.h>

static uint32_t program32[] = {
    //
};

void test_inst32() {
    for (uint32_t i = 0; i < sizeof(program32) / sizeof(program32[0]); i++) {
        uint32_t inst = program32[i];
        uint32_t count = 0;

        //

        if (count == 0) {
            printf("Error: no match for instruction 0x%08X\n", inst);
        }

        if (count >= 2) {
            printf("Error: multiple matches for instruction 0x%08X\n", inst);
        }
    }
}
