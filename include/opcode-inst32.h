#pragma once
#include "utils.h"

#define OP_ADD(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_ADDI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000)

#define OP_ADDIW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0011011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000)

#define OP_ADDW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_AMOADD_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00000)

#define OP_AMOADD_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00000)

#define OP_AMOAND_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b01100)

#define OP_AMOAND_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b01100)

#define OP_AMOMAX_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b10100)

#define OP_AMOMAX_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b10100)

#define OP_AMOMAXU_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b11100)

#define OP_AMOMAXU_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b11100)

#define OP_AMOMIN_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b10000)

#define OP_AMOMIN_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b10000)

#define OP_AMOMINU_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b11000)

#define OP_AMOMINU_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b11000)

#define OP_AMOOR_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b01000)

#define OP_AMOOR_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b01000)

#define OP_AMOSWAP_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00001)

#define OP_AMOSWAP_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00001)

#define OP_AMOXOR_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00100)

#define OP_AMOXOR_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00100)

#define OP_AND(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b111 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_ANDI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b111)

#define OP_AUIPC(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010111)

#define OP_BEQ(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000)

#define OP_BGE(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101)

#define OP_BGEU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b111)

#define OP_BLT(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b100)

#define OP_BLTU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b110)

#define OP_BNE(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001)

#define OP_CSRRC(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011)

#define OP_CSRRCI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b111)

#define OP_CSRRS(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010)

#define OP_CSRRSI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b110)

#define OP_CSRRW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001)

#define OP_CSRRWI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101)

#define OP_DIV(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b100 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_DIVU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_DIVUW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_DIVW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b100 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_EBREAK(inst) \
    (inst == 0b00000000000100000000000001110011)

#define OP_ECALL(inst) \
    (inst == 0b00000000000000000000000001110011)

#define OP_FADD_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_FADD_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_FCLASS_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 20, 12) == 0b111000100000)

#define OP_FCLASS_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 20, 12) == 0b111000000000)

#define OP_FCVT_D_L(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110100100010)

#define OP_FCVT_D_LU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110100100011)

#define OP_FCVT_D_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b010000100000)

#define OP_FCVT_D_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110100100000)

#define OP_FCVT_D_WU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110100100001)

#define OP_FCVT_L_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110000100010)

#define OP_FCVT_L_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110000000010)

#define OP_FCVT_LU_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110000100011)

#define OP_FCVT_LU_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110000000011)

#define OP_FCVT_S_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b010000000001)

#define OP_FCVT_S_L(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110100000010)

#define OP_FCVT_S_LU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110100000011)

#define OP_FCVT_S_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110100000000)

#define OP_FCVT_S_WU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110100000001)

#define OP_FCVT_W_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110000100000)

#define OP_FCVT_W_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110000000000)

#define OP_FCVT_WU_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110000100001)

#define OP_FCVT_WU_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b110000000001)

#define OP_FDIV_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0001101)

#define OP_FDIV_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0001100)

#define OP_FENCE(inst) \
    (EXTRACT_BITS(inst, 0, 20) == 0b00000000000000001111 && \
     EXTRACT_BITS(inst, 28, 4) == 0b0000)

#define OP_FENCE_I(inst) \
    (inst == 0b00000000000000000001000000001111)

#define OP_FEQ_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 25, 7) == 0b1010001)

#define OP_FEQ_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 25, 7) == 0b1010000)

#define OP_FLD(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011)

#define OP_FLE_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b1010001)

#define OP_FLE_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b1010000)

#define OP_FLT_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b1010001)

#define OP_FLT_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b1010000)

#define OP_FLW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010)

#define OP_FMADD_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1000011 && \
     EXTRACT_BITS(inst, 25, 2) == 0b01)

#define OP_FMADD_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1000011 && \
     EXTRACT_BITS(inst, 25, 2) == 0b00)

#define OP_FMAX_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010101)

#define OP_FMAX_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010100)

#define OP_FMIN_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010101)

#define OP_FMIN_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010100)

#define OP_FMSUB_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1000111 && \
     EXTRACT_BITS(inst, 25, 2) == 0b01)

#define OP_FMSUB_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1000111 && \
     EXTRACT_BITS(inst, 25, 2) == 0b00)

#define OP_FMUL_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0001001)

#define OP_FMUL_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0001000)

#define OP_FMV_D_X(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 20, 12) == 0b111100100000)

#define OP_FMV_W_X(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 20, 12) == 0b111100000000)

#define OP_FMV_X_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 20, 12) == 0b111000100000)

#define OP_FMV_X_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 20, 12) == 0b111000000000)

#define OP_FNMADD_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1001111 && \
     EXTRACT_BITS(inst, 25, 2) == 0b01)

#define OP_FNMADD_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1001111 && \
     EXTRACT_BITS(inst, 25, 2) == 0b00)

#define OP_FNMSUB_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1001011 && \
     EXTRACT_BITS(inst, 25, 2) == 0b01)

#define OP_FNMSUB_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1001011 && \
     EXTRACT_BITS(inst, 25, 2) == 0b00)

#define OP_FSD(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0100111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011)

#define OP_FSGNJ_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010001)

#define OP_FSGNJ_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010000)

#define OP_FSGNJN_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010001)

#define OP_FSGNJN_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010000)

#define OP_FSGNJX_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010001)

#define OP_FSGNJX_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0010000)

#define OP_FSQRT_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b010110100000)

#define OP_FSQRT_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 20, 12) == 0b010110000000)

#define OP_FSUB_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000101)

#define OP_FSUB_S(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1010011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000100)

#define OP_FSW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0100111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010)

#define OP_JAL(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1101111)

#define OP_JALR(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1100111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000)

#define OP_LB(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000)

#define OP_LBU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b100)

#define OP_LD(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011)

#define OP_LH(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001)

#define OP_LHU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101)

#define OP_LR_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00010)

#define OP_LR_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00010)

#define OP_LUI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110111)

#define OP_LW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010)

#define OP_LWU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0000011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b110)

#define OP_MRET(inst) \
    (inst == 0b00110000001000000000000001110011)

#define OP_MUL(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_MULH(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b00000001)

#define OP_MULHSU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 25, 7) == 0b00000001)

#define OP_MULHU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b00000001)

#define OP_MULW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_OR(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b110 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_ORI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b110)

#define OP_REM(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b110 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_REMU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b111 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_REMUW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b111 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_REMW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b110 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000001)

#define OP_SB(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000)

#define OP_SC_D(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00011)

#define OP_SC_W(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0101111 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 27, 5) == 0b00011)

#define OP_SD(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011)

#define OP_SFENCE_VMA(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b1110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0001001)

#define OP_SH(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001)

#define OP_SLL(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_SLLI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 26, 6) == 0b000000)

#define OP_SLLIW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0011011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_SLLW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b001 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_SLT(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_SLTI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010)

#define OP_SLTIU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011)

#define OP_SLTU(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b011 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_SRA(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0100000)

#define OP_SRAI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 26, 6) == 0b010000)

#define OP_SRAIW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0011011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0100000)

#define OP_SRAW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0100000)

#define OP_SRET(inst) \
    (inst == 0b00010000001000000000000001110011)

#define OP_SRL(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_SRLI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 26, 6) == 0b000000)

#define OP_SRLIW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0011011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_SRLW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b101 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_SUB(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0100000)

#define OP_SUBW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0111011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b000 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0100000)

#define OP_SW(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0100011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b010)

#define OP_URET(inst) \
    (inst == 0b00000000001000000000000001110011)

#define OP_WFI(inst) \
    (inst == 0b00010000010100000000000001110011)

#define OP_XOR(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0110011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b100 && \
     EXTRACT_BITS(inst, 25, 7) == 0b0000000)

#define OP_XORI(inst) \
    (EXTRACT_BITS(inst, 0, 7) == 0b0010011 && \
     EXTRACT_BITS(inst, 12, 3) == 0b100)
