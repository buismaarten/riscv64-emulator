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
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FNMADD_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FNMSUB_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FNMSUB_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FSD(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FSGNJ_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FSGNJ_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FSGNJN_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FSGNJN_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FSGNJX_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FSGNJX_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 20, 12) == XXX)

#define OP_FSQRT_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b010110100000)

#define OP_FSQRT_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 20, 12) == 0b010110000000)

#define OP_FSUB_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0000001)

#define OP_FSUB_S(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 25, 7) == 0b0000100)
