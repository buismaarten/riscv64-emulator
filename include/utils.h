#pragma once
#include <stdint.h>

#define EXTRACT_BITS(inst, e, s)  (((inst) >> (s)) & ((1U << (((e) - (s)) + 1U)) - 1U))

int16_t sign_extend_16(uint16_t imm, unsigned int n) {
    if (imm & (1U << (n - 1))) {
        imm |= ~((1U << n) - 1);
    }

    return imm;
}

int32_t sign_extend_32(uint32_t imm, unsigned int n) {
    if (imm & (1U << (n - 1))) {
        imm |= ~((1U << n) - 1);
    }

    return imm;
}
