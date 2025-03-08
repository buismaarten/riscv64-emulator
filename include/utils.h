#pragma once
#include <stdint.h>

#define EXTRACT_BITS(inst, e, s)  (((inst) >> (s)) & ((1U << (((e) - (s)) + 1U)) - 1U))

int32_t sign_extend_32(int32_t imm, int n) {
    if (imm & (1U << (n - 1))) {
        imm |= ~((1U << n) - 1);
    }

    return imm;
}
