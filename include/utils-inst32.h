#pragma once
#include <stdint.h>

int32_t sign_extend_32(int32_t imm, int n) {
    if (imm & (1U << (n - 1))) {
        imm |= ~((1U << n) - 1);
    }

    return imm;
}
