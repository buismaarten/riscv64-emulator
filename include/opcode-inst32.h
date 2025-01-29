#pragma once

#define OP_MASK(inst, s, w)  (((inst) >> (s)) & ((1U << (w)) - 1))

#define OP_I_ADDI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_I_ADDIW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0011011 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_I_ADDW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_I_ANDI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b111)

#define OP_I_AUIPC(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010111)

#define OP_I_JAL(inst) \
    (OP_MASK(inst, 0, 7) == 0b1101111)
