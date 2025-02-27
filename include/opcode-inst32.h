#pragma once

#define OP_MASK(inst, s, w)  (((inst) >> (s)) & ((1U << (w)) - 1))

#define OP_ADD(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

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

#define OP_AMOADD_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b00000)

#define OP_AMOADD_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b00000)

#define OP_AMOAND_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b01100)

#define OP_AMOAND_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b01100)

#define OP_AMOMAX_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b10100)

#define OP_AMOMAX_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b10100)

#define OP_AMOMAXU_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b11100)

#define OP_AMOMAXU_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b11100)

#define OP_AMOMIN_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b10000)

#define OP_AMOMIN_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b10000)

#define OP_AMOMINU_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b11000)

#define OP_AMOMINU_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b11000)

#define OP_AMOOR_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b01000)

#define OP_AMOOR_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b01000)

#define OP_AMOSWAP_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b00001)

#define OP_AMOSWAP_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b00001)

#define OP_AMOXOR_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 27, 5) == 0b00100)

#define OP_AMOXOR_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b0101111 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 27, 5) == 0b00100)

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

#define OP_FADD_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_FADD_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_FCLASS_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 20, 12) == 0b111000100000)

#define OP_FCLASS_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 20, 12) == 0b111000000000)

#define OP_FCVT_D_L(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110100100010)

#define OP_FCVT_D_LU(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110100100011)

#define OP_FCVT_D_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b010000100000)

#define OP_FCVT_D_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110100100000)

#define OP_FCVT_D_WU(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110100100001)

#define OP_FCVT_L_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110000100010)

#define OP_FCVT_L_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110000000010)

#define OP_FCVT_LU_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110000100011)

#define OP_FCVT_LU_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110000000011)

#define OP_FCVT_S_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b010000000001)

#define OP_FCVT_S_L(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110100000010)

#define OP_FCVT_S_LU(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110100000011)

#define OP_FCVT_S_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110100000000)

#define OP_FCVT_S_WU(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110100000001)

#define OP_FCVT_W_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110000100000)

#define OP_FCVT_W_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110000000000)

#define OP_FCVT_WU_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110000100001)

#define OP_FCVT_WU_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b110000000001)

#define OP_FDIV_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0001101)

#define OP_FDIV_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0001100)

#define OP_FENCE(inst) \
    (OP_MASK(inst, 0, 20) == 0b00000000000000001111 && \
     OP_MASK(inst, 28, 4) == 0b0000)

#define OP_FENCE_I(inst) \
    (inst == 0b00000000000000000001000000001111)

#define OP_FEQ_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 25, 7) == 0b1010001)

#define OP_FEQ_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 25, 7) == 0b1010000)

#define OP_FLD(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000111 && \
     OP_MASK(inst, 12, 3) == 0b011)

#define OP_FLE_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b1010001)

#define OP_FLE_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b1010000)

#define OP_FLT_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b1010001)

#define OP_FLT_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b1010000)

#define OP_FLW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000111 && \
     OP_MASK(inst, 12, 3) == 0b010)

#define OP_FMADD_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1000011 && \
     OP_MASK(inst, 25, 2) == 0b01)

#define OP_FMADD_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1000011 && \
     OP_MASK(inst, 25, 2) == 0b00)

#define OP_FMAX_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b0010101)

#define OP_FMAX_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b0010100)

#define OP_FMIN_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0010101)

#define OP_FMIN_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0010100)

#define OP_FMSUB_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1000111 && \
     OP_MASK(inst, 25, 2) == 0b01)

#define OP_FMSUB_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1000111 && \
     OP_MASK(inst, 25, 2) == 0b00)

#define OP_FMUL_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0001001)

#define OP_FMUL_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0001000)

#define OP_FMV_D_X(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 20, 12) == 0b111100100000)

#define OP_FMV_W_X(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 20, 12) == 0b111100000000)

#define OP_FMV_X_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 20, 12) == 0b111000100000)

#define OP_FMV_X_W(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 20, 12) == 0b111000000000)

#define OP_FNMADD_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1001111 && \
     OP_MASK(inst, 25, 2) == 0b01)

#define OP_FNMADD_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1001111 && \
     OP_MASK(inst, 25, 2) == 0b00)

#define OP_FNMSUB_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1001011 && \
     OP_MASK(inst, 25, 2) == 0b01)

#define OP_FNMSUB_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1001011 && \
     OP_MASK(inst, 25, 2) == 0b00)

#define OP_FSD(inst) \
    (OP_MASK(inst, 0, 7) == 0b0100111 && \
     OP_MASK(inst, 12, 3) == 0b011)

#define OP_FSGNJ_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0010001)

#define OP_FSGNJ_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0010000)

#define OP_FSGNJN_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b0010001)

#define OP_FSGNJN_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b0010000)

#define OP_FSGNJX_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 25, 7) == 0b0010001)

#define OP_FSGNJX_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 25, 7) == 0b0010000)

#define OP_FSQRT_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b010110100000)

#define OP_FSQRT_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b010110000000)

#define OP_FSUB_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0000101)

#define OP_FSUB_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0000100)

#define OP_FSW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0100111 && \
     OP_MASK(inst, 12, 3) == 0b010)

#define OP_JAL(inst) \
    (OP_MASK(inst, 0, 7) == 0b1101111)

#define OP_JALR(inst) \
    (OP_MASK(inst, 0, 7) == 0b1100111 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_LB(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b000)

#define OP_LBU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b100)

#define OP_LD(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b011)

#define OP_LH(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b001)

#define OP_LHU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b101)

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

#define OP_LWU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0000011 && \
     OP_MASK(inst, 12, 3) == 0b110)

#define OP_MRET(inst) \
    (inst == 0b00110000001000000000000001110011)

#define OP_MUL(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_MULH(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 25, 7) == 0b00000001)

#define OP_MULHSU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b010 && \
     OP_MASK(inst, 25, 7) == 0b00000001)

#define OP_MULHU(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b011 && \
     OP_MASK(inst, 25, 7) == 0b00000001)

#define OP_MULW(inst) \
    (OP_MASK(inst, 0, 7) == 0b0111011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_OR(inst) \
    (OP_MASK(inst, 0, 7) == 0b0110011 && \
     OP_MASK(inst, 12, 3) == 0b110 && \
     OP_MASK(inst, 25, 7) == 0b0000000)

#define OP_ORI(inst) \
    (OP_MASK(inst, 0, 7) == 0b0010011 && \
     OP_MASK(inst, 12, 3) == 0b110)

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

#define OP_SFENCE_VMA(inst) \
    (OP_MASK(inst, 0, 7) == 0b1110011 && \
     OP_MASK(inst, 12, 3) == 0b000 && \
     OP_MASK(inst, 25, 7) == 0b0001001)

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
     OP_MASK(inst, 25, 7) == 0b0100000)

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
