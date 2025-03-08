#pragma once
#include <stdint.h>

#define EXTRACT_BITS(inst, s, w)  (((inst) >> (s)) & ((1U << (w)) - 1))

int32_t sign_extend_32(int32_t imm, int n) {
    if (imm & (1U << (n - 1))) {
        imm |= ~((1U << n) - 1);
    }

    return imm;
}
