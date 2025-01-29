#pragma once

#define OP_MASK(inst, s, w)  (((inst) >> (s)) & ((1U << (w)) - 1))

#define OP_I_ADDI(inst) \
    (OP_MASK(inst, 0, 2) == 0b11 && \
     OP_MASK(inst, 2, 5) == 0b00100 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_I_ADDIW(inst) \
    (OP_MASK(inst, 0, 2) == 0b11 && \
     OP_MASK(inst, 2, 5) == 0b00110 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_I_AUIPC(inst) \
    (OP_MASK(inst, 0, 2) == 0b11 && \
     OP_MASK(inst, 2, 5) == 0b00101)

#define OP_I_JAL(inst) \
    (OP_MASK(inst, 0, 2) == 0b11 && \
     OP_MASK(inst, 2, 5) == 0b11011)
