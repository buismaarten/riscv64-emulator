#define OP_FCLASS_D(inst) \
    (OP_MASK(inst, 0, 7) == 0b1010011 && \
     OP_MASK(inst, 12, 3) == 0b001 && \
     OP_MASK(inst, 20, 12) == 0b111000100000)

#define OP_FCLASS_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_D_L(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_D_LU(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_D_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_D_W(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_D_WU(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_L_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_L_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_LU_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_LU_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_S_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_S_L(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_S_LU(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_S_W(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_S_WU(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_W_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_W_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_WU_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FCVT_WU_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FDIV_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FDIV_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FEQ_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FEQ_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FLD(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FLE_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FLE_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FLT_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FLT_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FLW(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMADD_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMADD_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMAX_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMAX_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMIN_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMIN_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMSUB_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMSUB_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMUL_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMUL_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMV_D_X(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMV_W_X(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMV_X_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FMV_X_W(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FNMADD_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FNMADD_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FNMSUB_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FNMSUB_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSD(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSGNJ_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSGNJ_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSGNJN_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSGNJN_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSGNJX_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSGNJX_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSQRT_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSQRT_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSUB_D(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)

#define OP_FSUB_S(inst) \
    (OP_MASK(inst, 0, 7) == XXX && \
     OP_MASK(inst, 12, 3) == XXX && \
     OP_MASK(inst, 25, 7) == XXX)
