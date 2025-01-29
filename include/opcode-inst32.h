#pragma once

#define OP_MASK(inst, s, w)  (((inst) >> (s)) & ((1U << (w)) - 1))

#define OP_ADDI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_ADDIW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0011011 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_ADDW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_ANDI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b111)

#define OP_AUIPC(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010111)

#define OP_BEQ(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100011 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_BGE(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100011 && \
     OP_MASK(inst, 12, 3) == 0b101)

#define OP_BLT(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100011 && \
     OP_MASK(inst, 12, 3) == 0b100)

#define OP_BNE(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100011 && \
     OP_MASK(inst, 12, 3) == 0b001)

#define OP_JAL(inst) \
    (OP_MASK(inst, 0, 7) == 0b1101111)

#define OP_LBU(inst) \
    (OP_MASK(inst, 0, 7) == 0b00000011 && \
     OP_MASK(inst, 12, 3) == 0b100)

#define OP_LUI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110111)

#define OP_LW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b010)

#define OP_MULW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_SD(inst) \
    (OP_MASK(inst, 0, 7) == 0b0100011 && \
     OP_MASK(inst, 12, 3) == 0b011)

#define OP_SUBW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0100000)

#define OP_SW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0100011 && \
     OP_MASK(inst, 12, 3) == 0b010)
