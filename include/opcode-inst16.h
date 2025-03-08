#pragma once
#include "utils.h"

#define OP_C_OPCODE(inst)      EXTRACT_BITS(inst, 1, 0)
#define OP_C_FUNCT3(inst)      EXTRACT_BITS(inst, 15, 13)
#define OP_C_FUNCT4(inst)      EXTRACT_BITS(inst, 15, 12)
#define OP_C_RS1(inst)         EXTRACT_BITS(inst, 11, 7)
#define OP_C_RS1_TWO(inst)     EXTRACT_BITS(inst, 11, 10)
#define OP_C_RS2(inst)         EXTRACT_BITS(inst, 6, 2)
#define OP_C_RS2_TWO(inst)     EXTRACT_BITS(inst, 6, 5)

#define OP_C_ADD(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT4(inst) == 0b1001 && \
     OP_C_RS1(inst) != 0b00000 && \
     OP_C_RS2(inst) != 0b00000)

#define OP_C_ADDI(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b000 && \
     OP_C_RS1(inst) != 0b00000)

#define OP_C_ADDI16SP(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b011 && \
     OP_C_RS1(inst) == 0b00010)

#define OP_C_ADDI4SPN(inst) \
    (OP_C_OPCODE(inst) == 0b00 && \
     OP_C_FUNCT3(inst) == 0b000)

#define OP_C_ADDIW(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b001 && \
     OP_C_RS1(inst) != 0b00000)

#define OP_C_ADDW(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT4(inst) == 0b1001 && \
     OP_C_RS1_TWO(inst) == 0b11 && \
     OP_C_RS2_TWO(inst) == 0b01)

#define OP_C_AND(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT4(inst) == 0b1000 && \
     OP_C_RS1_TWO(inst) == 0b11 && \
     OP_C_RS2_TWO(inst) == 0b11)

#define OP_C_ANDI(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b100 && \
     OP_C_RS1_TWO(inst) == 0b10)

#define OP_C_BEQZ(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b110)

#define OP_C_BNEZ(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b111)

#define OP_C_EBREAK(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT4(inst) == 0b1001 && \
     OP_C_RS1(inst) == 0b00000 && \
     OP_C_RS2(inst) == 0b00000)

#define OP_C_FLD(inst) \
    (OP_C_OPCODE(inst) == 0b00 && \
     OP_C_FUNCT3(inst) == 0b001)

#define OP_C_FLDSP(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT3(inst) == 0b001)

#define OP_C_FSD(inst) \
    (OP_C_OPCODE(inst) == 0b00 && \
     OP_C_FUNCT3(inst) == 0b101)

#define OP_C_FSDSP(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT3(inst) == 0b101)

#define OP_C_J(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b101)

#define OP_C_JAL(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b001 && \
     OP_C_RS1(inst) == 0b00000)

#define OP_C_JALR(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT4(inst) == 0b1001 && \
     OP_C_RS1(inst) != 0b00000 && \
     OP_C_RS2(inst) == 0b00000)

#define OP_C_JR(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT4(inst) == 0b1000 && \
     OP_C_RS2(inst) == 0b00000)

#define OP_C_LD(inst) \
    (OP_C_OPCODE(inst) == 0b00 && \
     OP_C_FUNCT3(inst) == 0b011)

#define OP_C_LDSP(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT3(inst) == 0b011 && \
     OP_C_RS1(inst) != 0b00000)

#define OP_C_LI(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b010 && \
     OP_C_RS1(inst) != 0b00000)

#define OP_C_LUI(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b011 && \
     OP_C_RS1(inst) != 0b00000 && \
     OP_C_RS1(inst) != 0b00010)

#define OP_C_LW(inst) \
    (OP_C_OPCODE(inst) == 0b00 && \
     OP_C_FUNCT3(inst) == 0b010)

#define OP_C_LWSP(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT3(inst) == 0b010)

#define OP_C_MV(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT4(inst) == 0b1000 && \
     OP_C_RS1(inst) != 0b00000 && \
     OP_C_RS2(inst) != 0b00000)

#define OP_C_NOP(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT4(inst) == 0b0000 && \
     OP_C_RS1(inst) == 0b00000 && \
     OP_C_RS2(inst) == 0b00000)

#define OP_C_OR(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT4(inst) == 0b1000 && \
     OP_C_RS1_TWO(inst) == 0b11 && \
     OP_C_RS2_TWO(inst) == 0b10)

#define OP_C_SD(inst) \
    (OP_C_OPCODE(inst) == 0b00 && \
     OP_C_FUNCT3(inst) == 0b111)

#define OP_C_SDSP(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT3(inst) == 0b111)

#define OP_C_SLLI(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT3(inst) == 0b000 && \
     OP_C_RS1(inst) != 0b00000)

#define OP_C_SRAI(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b100 && \
     OP_C_RS1_TWO(inst) == 0b01)

#define OP_C_SRLI(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT3(inst) == 0b100 && \
     OP_C_RS1_TWO(inst) == 0b00)

#define OP_C_SUB(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT4(inst) == 0b1000 && \
     OP_C_RS1_TWO(inst) == 0b11 && \
     OP_C_RS2_TWO(inst) == 0b00)

#define OP_C_SUBW(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT4(inst) == 0b1001 && \
     OP_C_RS1_TWO(inst) == 0b11 && \
     OP_C_RS2_TWO(inst) == 0b00)

#define OP_C_SW(inst) \
    (OP_C_OPCODE(inst) == 0b00 && \
     OP_C_FUNCT3(inst) == 0b110)

#define OP_C_SWSP(inst) \
    (OP_C_OPCODE(inst) == 0b10 && \
     OP_C_FUNCT3(inst) == 0b110)

#define OP_C_XOR(inst) \
    (OP_C_OPCODE(inst) == 0b01 && \
     OP_C_FUNCT4(inst) == 0b1000 && \
     OP_C_RS1_TWO(inst) == 0b11 && \
     OP_C_RS2_TWO(inst) == 0b01)
