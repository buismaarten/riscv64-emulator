#pragma once

#define OP_MASK(inst, s, w)  (((inst) >> (s)) & ((1U << (w)) - 1))

#define OP_ADD(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 27, 5) == 0b00000)

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

#define OP_AND(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b111 && \
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

#define OP_BGEU(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100011 && \
     OP_MASK(inst, 12, 3) == 0b111)

#define OP_BLT(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100011 && \
     OP_MASK(inst, 12, 3) == 0b100)

#define OP_BLTU(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100011 && \
     OP_MASK(inst, 12, 3) == 0b110)

#define OP_BNE(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100011 && \
     OP_MASK(inst, 12, 3) == 0b001)

#define OP_CSRRC(inst) \
    (OP_MASK(inst, 0, 7) == 0b1110011 && \
     OP_MASK(inst, 12, 3) == 0b011)

#define OP_CSRRCI(inst) \
    (OP_MASK(inst, 0, 7) == 0b1110011 && \
     OP_MASK(inst, 12, 3) == 0b111)

#define OP_CSRRS(inst) \
    (OP_MASK(inst, 0, 7) == 0b1110011 && \
     OP_MASK(inst, 12, 3) == 0b010)

#define OP_CSRRSI(inst) \
    (OP_MASK(inst, 0, 7) == 0b1110011 && \
     OP_MASK(inst, 12, 3) == 0b110)

#define OP_CSRRW(inst) \
    (OP_MASK(inst, 0, 7) == 0b1110011 && \
     OP_MASK(inst, 12, 3) == 0b001)

#define OP_CSRRWI(inst) \
    (OP_MASK(inst, 0, 7) == 0b1110011 && \
     OP_MASK(inst, 12, 3) == 0b101)

#define OP_DIV(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b100 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_DIVU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_DIVUW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_DIVW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b100 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_EBREAK(inst) \
    (inst == 0b00000000000100000000000001110011)

#define OP_ECALL(inst) \
    (inst == 0b00000000000000000000000001110011)

#define OP_FENCE(inst) \
    (OP_MASK(inst, 0, 20) == 0b00000000000000001111 && \
     OP_MASK(inst, 28, 4) == 0b0000)

#define OP_FENCE_I(inst) \
    (inst == 0b00000000000000000001000000001111)

#define OP_JAL(inst) \
    (OP_MASK(inst, 0, 7) == 0b1101111)

#define OP_JALR(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100111 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_LBU(inst) \
    (OP_MASK(inst, 0, 7) == 0b00000011 && \
     OP_MASK(inst, 12, 3) == 0b100)

#define OP_LD(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b011)

#define OP_LR_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b00010)

#define OP_LR_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b00010)

#define OP_LUI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110111)

#define OP_LW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b010)

#define OP_MRET(inst) \
    (inst == 0b00110000001000000000000001110011)

#define OP_MULW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_OR(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b110 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_REM(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b110 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_REMU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b111 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_REMUW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b111 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_REMW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b110 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_SB(inst) \
    (OP_MASK(inst, 0, 7) == 0b0100011 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_SC_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b00011)

#define OP_SC_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b00011)

#define OP_SD(inst) \
    (OP_MASK(inst, 0, 7) == 0b0100011 && \
     OP_MASK(inst, 12, 3) == 0b011)

#define OP_SH(inst) \
    (OP_MASK(inst, 0, 7) == 0b0100011 && \
     OP_MASK(inst, 12, 3) == 0b001)

#define OP_SLL(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_SLLI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 26, 6) == 0b000000)

#define OP_SLLIW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0011011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_SLLW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_SLT(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_SLTI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b010)

#define OP_SLTIU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b011)

#define OP_SLTU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_SRA(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 25, 7) == 0b0100000)

#define OP_SRAI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 26, 6) == 0b010000)

#define OP_SRAIW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0011011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 25, 7) == 0b0100000)

#define OP_SRAW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 25, 7) == 0b0100000)

#define OP_SRET(inst) \
    (inst == 0b00010000001000000000000001110011)

#define OP_SRL(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_SRLI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 26, 6) == 0b000000)

#define OP_SRLIW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0011011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_SRLW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b101 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_SUB(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 27, 5) == 0b01000)

#define OP_SUBW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0100000)

#define OP_SW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0100011 && \
     OP_MASK(inst, 12, 3) == 0b010)

#define OP_URET(inst) \
    (inst == 0b00000000001000000000000001110011)

#define OP_WFI(inst) \
    (inst == 0b00010000010100000000000001110011)

#define OP_XOR(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b100 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_XORI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b100)
