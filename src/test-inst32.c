#include "opcode-inst32.h"
#include "utils-inst32.h"
#include <stdint.h>
#include <stdio.h>

static uint32_t program32[] = {
    /* ADD */        0x00E787B3,
    /* ADDI */       0x00000013,
    /* ADDI */       0x00000293,
    /* ADDI */       0x00000413,
    /* ADDI */       0x00000493,
    /* ADDI */       0x00000513,
    /* ADDI */       0x00000713,
    /* ADDI */       0x00000793,
    /* ADDI */       0x00000913,
    /* ADDI */       0x00000993,
    /* ADDI */       0x00000B13,
    /* ADDI */       0x00000C13,
    /* ADDI */       0x00000D13,
    /* ADDI */       0x00010113,
    /* ADDI */       0x00030713,
    /* ADDI */       0x00030D13,
    /* ADDI */       0x00030E93,
    /* ADDI */       0x00038413,
    /* ADDI */       0x00038693,
    /* ADDI */       0x00038793,
    /* ADDI */       0x00038D93,
    /* ADDI */       0x00038E13,
    /* ADDI */       0x00038E93,
    /* ADDI */       0x00040393,
    /* ADDI */       0x00040493,
    /* ADDI */       0x00040513,
    /* ADDI */       0x00040593,
    /* ADDI */       0x00040A13,
    /* ADDI */       0x00040C93,
    /* ADDI */       0x00040D13,
    /* ADDI */       0x00048513,
    /* ADDI */       0x00048813,
    /* ADDI */       0x00048993,
    /* ADDI */       0x00048A13,
    /* ADDI */       0x00048A93,
    /* ADDI */       0x00048B93,
    /* ADDI */       0x00048C93,
    /* ADDI */       0x00048F13,
    /* ADDI */       0x00050413,
    /* ADDI */       0x00050493,
    /* ADDI */       0x00050793,
    /* ADDI */       0x00058713,
    /* ADDI */       0x00058913,
    /* ADDI */       0x00058A13,
    /* ADDI */       0x00058C93,
    /* ADDI */       0x00058E13,
    /* ADDI */       0x00068993,
    /* ADDI */       0x00068C93,
    /* ADDI */       0x00068E93,
    /* ADDI */       0x00070313,
    /* ADDI */       0x00070493,
    /* ADDI */       0x00070593,
    /* ADDI */       0x00070613,
    /* ADDI */       0x00070793,
    /* ADDI */       0x00070A93,
    /* ADDI */       0x00070B93,
    /* ADDI */       0x00070D13,
    /* ADDI */       0x00070E13,
    /* ADDI */       0x00078493,
    /* ADDI */       0x00078513,
    /* ADDI */       0x00078713,
    /* ADDI */       0x00078893,
    /* ADDI */       0x00078A13,
    /* ADDI */       0x00078A93,
    /* ADDI */       0x00080493,
    /* ADDI */       0x00080A93,
    /* ADDI */       0x00080D93,
    /* ADDI */       0x00088793,
    /* ADDI */       0x00088993,
    /* ADDI */       0x00088A93,
    /* ADDI */       0x00090593,
    /* ADDI */       0x00090693,
    /* ADDI */       0x00090A13,
    /* ADDI */       0x00090A93,
    /* ADDI */       0x00090E93,
    /* ADDI */       0x00098513,
    /* ADDI */       0x00098693,
    /* ADDI */       0x00098793,
    /* ADDI */       0x00098893,
    /* ADDI */       0x00098A93,
    /* ADDI */       0x00098C13,
    /* ADDI */       0x00098E93,
    /* ADDI */       0x000A0413,
    /* ADDI */       0x000A0493,
    /* ADDI */       0x000A0593,
    /* ADDI */       0x000A0913,
    /* ADDI */       0x000A0A93,
    /* ADDI */       0x000A0B13,
    /* ADDI */       0x000A0C13,
    /* ADDI */       0x000A8493,
    /* ADDI */       0x000A8713,
    /* ADDI */       0x000A8793,
    /* ADDI */       0x000A8813,
    /* ADDI */       0x000A8893,
    /* ADDI */       0x000A8913,
    /* ADDI */       0x000A8993,
    /* ADDI */       0x000A8A13,
    /* ADDI */       0x000B0A13,
    /* ADDI */       0x000B0A93,
    /* ADDI */       0x000B0C93,
    /* ADDI */       0x000B0D13,
    /* ADDI */       0x000B0D93,
    /* ADDI */       0x000B8493,
    /* ADDI */       0x000B8713,
    /* ADDI */       0x000B8F13,
    /* ADDI */       0x000C0513,
    /* ADDI */       0x000C0993,
    /* ADDI */       0x000C0A13,
    /* ADDI */       0x000C0C93,
    /* ADDI */       0x000C0D93,
    /* ADDI */       0x000C8413,
    /* ADDI */       0x000C8493,
    /* ADDI */       0x000C8593,
    /* ADDI */       0x000C8693,
    /* ADDI */       0x000C8B13,
    /* ADDI */       0x000C8C13,
    /* ADDI */       0x000C8D93,
    /* ADDI */       0x000D0313,
    /* ADDI */       0x000D0413,
    /* ADDI */       0x000D0713,
    /* ADDI */       0x000D0B13,
    /* ADDI */       0x000D8393,
    /* ADDI */       0x000D8513,
    /* ADDI */       0x000D8813,
    /* ADDI */       0x000D8B13,
    /* ADDI */       0x000D8C13,
    /* ADDI */       0x000D8C93,
    /* ADDI */       0x000E0393,
    /* ADDI */       0x000E0593,
    /* ADDI */       0x000E0713,
    /* ADDI */       0x000E8313,
    /* ADDI */       0x000E8393,
    /* ADDI */       0x000E8693,
    /* ADDI */       0x000E8913,
    /* ADDI */       0x000E8993,
    /* ADDI */       0x000F0313,
    /* ADDI */       0x000F0593,
    /* ADDI */       0x000F8313,
    /* ADDI */       0x000F8E13,
    /* ADDI */       0x000F8F13,
    /* ADDI */       0x00100513,
    /* ADDI */       0x00100613,
    /* ADDI */       0x00100713,
    /* ADDI */       0x00100793,
    /* ADDI */       0x00100913,
    /* ADDI */       0x00150513,
    /* ADDI */       0x00170713,
    /* ADDI */       0x00178713,
    /* ADDI */       0x00300513,
    /* ADDI */       0x00500513,
    /* ADDI */       0x00500793,
    /* ADDI */       0x00700793,
    /* ADDI */       0x01010113,
    /* ADDI */       0x01010413,
    /* ADDI */       0x01650513,
    /* ADDI */       0x01850513,
    /* ADDI */       0x01C50513,
    /* ADDI */       0x02010113,
    /* ADDI */       0x02010413,
    /* ADDI */       0x02070713,
    /* ADDI */       0x02450513,
    /* ADDI */       0x02870713,
    /* ADDI */       0x03010113,
    /* ADDI */       0x03010413,
    /* ADDI */       0x04800793,
    /* ADDI */       0x11010113,
    /* ADDI */       0xEF010113,
    /* ADDI */       0xFD010113,
    /* ADDI */       0xFE010113,
    /* ADDI */       0xFF010113,
    /* ADDIW */      0x0007871B,
    /* ADDIW */      0x0007879B,
    /* ADDIW */      0x0014069B,
    /* ADDIW */      0x0014879B,
    /* ADDIW */      0x0017059B,
    /* ADDIW */      0x0017851B,
    /* ADDIW */      0x0019051B,
    /* ADDIW */      0x0019069B,
    /* ADDIW */      0x0019079B,
    /* ADDIW */      0x0019851B,
    /* ADDIW */      0x001B051B,
    /* ADDIW */      0x001C059B,
    /* ADDIW */      0x001C0A9B,
    /* ADDIW */      0x001C0B1B,
    /* ADDIW */      0x001D0A9B,
    /* ADDIW */      0x001D0B1B,
    /* ADDIW */      0x001F051B,
    /* ADDIW */      0xFFB5051B,
    /* ADDIW */      0xFFB5859B,
    /* ADDIW */      0xFFC5041B,
    /* ADDIW */      0xFFC68B9B,
    /* ADDIW */      0xFFC7849B,
    /* ADDIW */      0xFFD50F1B,
    /* ADDIW */      0xFFD58F1B,
    /* ADDIW */      0xFFE3031B,
    /* ADDIW */      0xFFE4041B,
    /* ADDIW */      0xFFE4051B,
    /* ADDIW */      0xFFE4849B,
    /* ADDIW */      0xFFE5049B,
    /* ADDIW */      0xFFE50C1B,
    /* ADDIW */      0xFFE50D9B,
    /* ADDIW */      0xFFE5841B,
    /* ADDIW */      0xFFE5859B,
    /* ADDIW */      0xFFE6891B,
    /* ADDIW */      0xFFE7071B,
    /* ADDIW */      0xFFE7879B,
    /* ADDIW */      0xFFE7899B,
    /* ADDIW */      0xFFE9091B,
    /* ADDIW */      0xFFE9899B,
    /* ADDIW */      0xFFEA8A9B,
    /* ADDIW */      0xFFEB8B9B,
    /* ADDIW */      0xFFEE0E1B,
    /* ADDIW */      0xFFEF0F9B,
    /* ADDIW */      0xFFF4051B,
    /* ADDIW */      0xFFF40A9B,
    /* ADDIW */      0xFFF5051B,
    /* ADDIW */      0xFFF5069B,
    /* ADDIW */      0xFFF5079B,
    /* ADDIW */      0xFFF6851B,
    /* ADDIW */      0xFFF7079B,
    /* ADDIW */      0xFFF7859B,
    /* ADDIW */      0xFFF7869B,
    /* ADDIW */      0xFFF7879B,
    /* ADDIW */      0xFFF90B1B,
    /* ADDIW */      0xFFFA871B,
    /* ADDIW */      0xFFFA879B,
    /* ADDIW */      0xFFFC079B,
    /* ADDIW */      0xFFFC879B,
    /* ADDIW */      0xFFFD879B,
    /* ADDW */       0x0054043B,
    /* ADDW */       0x005502BB,
    /* ADDW */       0x0059093B,
    /* ADDW */       0x005F02BB,
    /* ADDW */       0x008686BB,
    /* ADDW */       0x0094053B,
    /* ADDW */       0x009504BB,
    /* ADDW */       0x009787BB,
    /* ADDW */       0x00A282BB,
    /* ADDW */       0x00A4843B,
    /* ADDW */       0x00A9093B,
    /* ADDW */       0x00B282BB,
    /* ADDW */       0x00B484BB,
    /* ADDW */       0x00B5053B,
    /* ADDW */       0x00DB0B3B,
    /* ADDW */       0x00DC0C3B,
    /* ADDW */       0x00E5073B,
    /* ADDW */       0x00F487BB,
    /* ADDW */       0x00F507BB,
    /* ADDW */       0x00F707BB,
    /* ADDW */       0x00FC0C3B,
    /* ADDW */       0x0125053B,
    /* ADDW */       0x0125093B,
    /* ADDW */       0x012686BB,
    /* ADDW */       0x0127853B,
    /* ADDW */       0x012787BB,
    /* ADDW */       0x0137853B,
    /* ADDW */       0x0159093B,
    /* ADDW */       0x015D0D3B,
    /* ADDW */       0x0165053B,
    /* ADDW */       0x016989BB,
    /* ADDW */       0x016D0D3B,
    /* ADDW */       0x018585BB,
    /* ADDW */       0x01870B3B,
    /* ADDW */       0x01878ABB,
    /* ADDW */       0x01AA8ABB,
    /* ADDW */       0x01AB0B3B,
    /* AMOADD.D */   0x00A5B62F,
    /* AMOADD.W */   0x00A5A6AF,
    /* AMOAND.D */   0x60A5B62F,
    /* AMOAND.W */   0x60A5A6AF,
    /* AMOMAX.D */   0xA0A5B62F,
    /* AMOMAX.W */   0xA0A5A6AF,
    /* AMOMAXU.D */  0xE0A5B62F,
    /* AMOMAXU.W */  0xE0A5A6AF,
    /* AMOMIN.D */   0x80A5B62F,
    /* AMOMIN.W */   0x80A5A6AF,
    /* AMOMINU.D */  0xC0A5B62F,
    /* AMOMINU.W */  0xC0A5A6AF,
    /* AMOOR.D */    0x40A5B62F,
    /* AMOOR.W */    0x40A5A6AF,
    /* AMOSWAP.D */  0x08A5B62F,
    /* AMOSWAP.W */  0x08A5A6AF,
    /* AMOXOR.D */   0x20A5B62F,
    /* AMOXOR.W */   0x20A5A6AF,
    /* AND */        0x00F777B3,
    /* ANDI */       0xFFE37513,
    /* ANDI */       0xFFE47513,
    /* ANDI */       0xFFE47793,
    /* ANDI */       0xFFE4F793,
    /* ANDI */       0xFFE77413,
    /* ANDI */       0xFFE7F413,
    /* ANDI */       0xFFE7F693,
    /* ANDI */       0xFFE97793,
    /* ANDI */       0xFFE97C13,
    /* ANDI */       0xFFE9FC93,
    /* ANDI */       0xFFEAF713,
    /* ANDI */       0xFFEAF793,
    /* ANDI */       0xFFEBF693,
    /* ANDI */       0xFFEC7793,
    /* ANDI */       0xFFEDF793,
    /* ANDI */       0xFFEDFE93,
    /* ANDI */       0xFFEE7513,
    /* AUIPC */      0x00000517,
    /* AUIPC */      0x00000717,
    /* AUIPC */      0x00010117,
    /* BEQ */        0x00078863,
    /* BEQ */        0x00078A63,
    /* BEQ */        0x00078E63,
    /* BEQ */        0x06C30A63,
    /* BEQ */        0x06C58A63,
    /* BEQ */        0x0AC30E63,
    /* BEQ */        0x0AC58E63,
    /* BEQ */        0x0DE70763,
    /* BEQ */        0x0DE78763,
    /* BEQ */        0x10BC8E63,
    /* BEQ */        0x11850E63,
    /* BEQ */        0x11F78663,
    /* BEQ */        0x13F68363,
    /* BEQ */        0x15E70A63,
    /* BEQ */        0x15E78A63,
    /* BEQ */        0x16968863,
    /* BEQ */        0x16FD0463,
    /* BEQ */        0x19F78E63,
    /* BEQ */        0x1A978863,
    /* BEQ */        0x1AEB0263,
    /* BEQ */        0x1CBC8063,
    /* BEQ */        0x1D5A0A63,
    /* BEQ */        0x1D850063,
    /* BEQ */        0x1DF68663,
    /* BEQ */        0x1F3A8863,
    /* BEQ */        0x22968C63,
    /* BEQ */        0x22990663,
    /* BEQ */        0x22FD0463,
    /* BEQ */        0x25B40663,
    /* BEQ */        0x28850063,
    /* BEQ */        0x28EB0663,
    /* BEQ */        0x2A950263,
    /* BEQ */        0x2A978263,
    /* BEQ */        0x2D5A0863,
    /* BEQ */        0x313A8263,
    /* BEQ */        0x34990A63,
    /* BEQ */        0x39B40863,
    /* BEQ */        0x3C850A63,
    /* BEQ */        0x40950C63,
    /* BEQ */        0xFACC06E3,
    /* BEQ */        0xFACD88E3,
    /* BEQ */        0xFCCC08E3,
    /* BEQ */        0xFCCD89E3,
    /* BGE */        0x00895963,
    /* BGE */        0x00895C63,
    /* BGE */        0x2AA75B63,
    /* BGE */        0x2CA75D63,
    /* BGE */        0x42A75663,
    /* BGE */        0x46A75863,
    /* BGEU */       0x00B57463,
    /* BLT */        0x00A7C763,
    /* BLT */        0x00A7CC63,
    /* BLT */        0x00E7C563,
    /* BLT */        0x00E7C663,
    /* BLTU */       0x00B56463,
    /* BNE */        0x00051663,
    /* BNE */        0x00079463,
    /* BNE */        0x00079663,
    /* BNE */        0x02CC1C63,
    /* BNE */        0x02CD9B63,
    /* BNE */        0x04CC1E63,
    /* BNE */        0x04CD9C63,
    /* BNE */        0xBE9518E3,
    /* BNE */        0xC2851AE3,
    /* BNE */        0xCCC414E3,
    /* BNE */        0xD0C910E3,
    /* BNE */        0xD0CA96E3,
    /* BNE */        0xD2CA9EE3,
    /* BNE */        0xD69512E3,
    /* BNE */        0xD88514E3,
    /* BNE */        0xDAC716E3,
    /* BNE */        0xDAC792E3,
    /* BNE */        0xDEC414E3,
    /* BNE */        0xE0C913E3,
    /* BNE */        0xE0C91AE3,
    /* BNE */        0xE0C99AE3,
    /* BNE */        0xE0CA9DE3,
    /* BNE */        0xE2CA9AE3,
    /* BNE */        0xE4C416E3,
    /* BNE */        0xE4CD96E3,
    /* BNE */        0xE6C71EE3,
    /* BNE */        0xE6C79CE3,
    /* BNE */        0xEAC91FE3,
    /* BNE */        0xEAC99EE3,
    /* BNE */        0xEBE71AE3,
    /* BNE */        0xEBE79AE3,
    /* BNE */        0xEEC417E3,
    /* BNE */        0xEECD97E3,
    /* BNE */        0xF3E71DE3,
    /* BNE */        0xF3E79DE3,
    /* BNE */        0xF4C494E3,
    /* BNE */        0xF8C498E3,
    /* BNE */        0xF93412E3,
    /* BNE */        0xFB341FE3,
    /* BNE */        0xFE0790E3,
    /* BNE */        0xFE0798E3,
    /* BNE */        0xFE079AE3,
    /* CSRRC */      0x3002B373,
    /* CSRRCI */     0x30047373,
    /* CSRRS */      0x3002A373,
    /* CSRRSI */     0x30046373,
    /* CSRRW */      0x30029373,
    /* CSRRWI */     0x30045373,
    /* DIV */        0x02F747B3,
    /* DIVU */       0x02F757B3,
    /* DIVUW */      0x02F757BB,
    /* DIVW */       0x02F747BB,
    /* EBREAK */     0x00100073,
    /* ECALL */      0x00000073,
    /* FADD.D */     0x0210F1D3,
    /* FADD.S */     0x00007153,
    /* FCLASS.D */   0xE20093D3,
    /* FCLASS.S */   0xE0001353,
    /* FCVT.D.L */   0xD22F7353,
    /* FCVT.D.LU */  0xD235F1D3,
    /* FCVT.D.S */   0x42000253,
    /* FCVT.D.W */   0xD2030353,
    /* FCVT.D.WU */  0xD2150153,
    /* FCVT.L.D */   0xC220FF53,
    /* FCVT.L.S */   0xC0207FD3,
    /* FCVT.LU.D */  0xC231F753,
    /* FCVT.LU.S */  0xC032F7D3,
    /* FCVT.S.D */   0x4010F2D3,
    /* FCVT.S.L */   0xD02FF3D3,
    /* FCVT.S.LU */  0xD035F2D3,
    /* FCVT.S.W */   0xD003F3D3,
    /* FCVT.S.WU */  0xD0157253,
    /* FCVT.W.D */   0xC200FE53,
    /* FCVT.W.S */   0xC0007ED3,
    /* FCVT.WU.D */  0xC2117653,
    /* FCVT.WU.S */  0xC01276D3,
    /* FDIV.D */     0x1A10FED3,
    /* FDIV.S */     0x18007E53,
    /* FENCE */      0x0FF0000F,
    /* FENCE.I */    0x0000100F,
    /* FEQ.D */      0xA210A353,
    /* FEQ.S */      0xA00022D3,
    /* FLD */        0xFE843787,
    /* FLE.D */      0xA2108E53,
    /* FLE.S */      0xA00003D3,
    /* FLT.D */      0xA2109F53,
    /* FLT.S */      0xA0001ED3,
    /* FLW */        0xFEC42787,
    /* FMADD.D */    0x0A10FFC3,
    /* FMADD.S */    0x00007F43,
    /* FMAX.D */     0x2A1090D3,
    /* FMAX.S */     0x28001053,
    /* FMIN.D */     0x2A1081D3,
    /* FMIN.S */     0x28000153,
    /* FMSUB.D */    0x0A10F2C7,
    /* FMSUB.S */    0x00007247,
    /* FMUL.D */     0x12317353,
    /* FMUL.S */     0x105273D3,
    /* FMV.D.X */    0xF2030053,
    /* FMV.W.X */    0xF00380D3,
    /* FMV.X.D */    0xE2000E53,
    /* FMV.X.W */    0xE0008ED3,
    /* FNMADD.D */   0x0A10F3CF,
    /* FNMADD.S */   0x0000734F,
    /* FNMSUB.D */   0x0A10FECB,
    /* FNMSUB.S */   0x00007E4B,
    /* FSD */        0x00F7B027,
    /* FSGNJ.D */    0x22310E53,
    /* FSGNJ.S */    0x20520ED3,
    /* FSGNJN.D */   0x22311F53,
    /* FSGNJN.S */   0x20521FD3,
    /* FSGNJX.D */   0x22E7A7D3,
    /* FSGNJX.S */   0x20E7A7D3,
    /* FSQRT.D */    0x5A00FFD3,
    /* FSQRT.S */    0x58007F53,
    /* FSUB.D */     0x0A10F0D3,
    /* FSUB.S */     0x08007053,
    /* FSW */        0x00F7A027,
    /* JAL */        0x0080006F,
    /* JAL */        0x00C0006F,
    /* JAL */        0x0100006F,
    /* JAL */        0x0140006F,
    /* JAL */        0x0160006F,
    /* JAL */        0x01C0006F,
    /* JAL */        0x0200006F,
    /* JAL */        0x0240006F,
    /* JAL */        0x0280006F,
    /* JAL */        0x0300006F,
    /* JAL */        0x0320006F,
    /* JAL */        0x0340006F,
    /* JAL */        0x0360006F,
    /* JAL */        0x0380006F,
    /* JAL */        0x03C0006F,
    /* JAL */        0x0400006F,
    /* JAL */        0x0420006F,
    /* JAL */        0x0480006F,
    /* JAL */        0x0500006F,
    /* JAL */        0x0540006F,
    /* JAL */        0x0580006F,
    /* JAL */        0x05A0006F,
    /* JAL */        0x0680006F,
    /* JAL */        0x06C0006F,
    /* JAL */        0x08C0006F,
    /* JAL */        0x09C0006F,
    /* JAL */        0x2CA0006F,
    /* JAL */        0x2EE0006F,
    /* JAL */        0x44C0006F,
    /* JAL */        0x4900006F,
    /* JAL */        0xB59FF0EF,
    /* JAL */        0xB61FF0EF,
    /* JAL */        0xB69FF0EF,
    /* JAL */        0xBADFF0EF,
    /* JAL */        0xD05FF0EF,
    /* JAL */        0xD0BFF0EF,
    /* JAL */        0xD11FF0EF,
    /* JAL */        0xD35FF0EF,
    /* JAL */        0xDF5FF0EF,
    /* JAL */        0xE09FF0EF,
    /* JAL */        0xE49FF06F,
    /* JAL */        0xE79FF06F,
    /* JAL */        0xEABFF0EF,
    /* JAL */        0xEB5FF0EF,
    /* JAL */        0xF65FF0EF,
    /* JAL */        0xF85FF0EF,
    /* JAL */        0xF89FF0EF,
    /* JAL */        0xF91FF0EF,
    /* JAL */        0xF95FF0EF,
    /* JAL */        0xFA1FF0EF,
    /* JAL */        0xFA5FF0EF,
    /* JAL */        0xFB3FF0EF,
    /* JAL */        0xFB5FF06F,
    /* JAL */        0xFB7FF0EF,
    /* JAL */        0xFB9FF0EF,
    /* JAL */        0xFBDFF0EF,
    /* JAL */        0xFC1FF0EF,
    /* JAL */        0xFC5FF06F,
    /* JAL */        0xFC5FF0EF,
    /* JAL */        0xFC9FF0EF,
    /* JAL */        0xFCDFF06F,
    /* JAL */        0xFCDFF0EF,
    /* JAL */        0xFD1FF0EF,
    /* JAL */        0xFD3FF0EF,
    /* JAL */        0xFD9FF0EF,
    /* JAL */        0xFDBFF0EF,
    /* JAL */        0xFDDFF0EF,
    /* JAL */        0xFE1FF0EF,
    /* JAL */        0xFE5FF0EF,
    /* JAL */        0xFE9FF06F,
    /* JAL */        0xFE9FF0EF,
    /* JAL */        0xFEDFF06F,
    /* JAL */        0xFF1FF0EF,
    /* JAL */        0xFF5FF06F,
    /* JALR */       0x00008067,
    /* LB */         0x00050603,
    /* LBU */        0x00054783,
    /* LBU */        0x0007C783,
    /* LBU */        0x00154783,
    /* LBU */        0x00174783,
    /* LBU */        0xFDF44783,
    /* LD */         0x00013403,
    /* LD */         0x00013903,
    /* LD */         0x00813083,
    /* LD */         0x00813483,
    /* LD */         0x00813703,
    /* LD */         0x00813783,
    /* LD */         0x01013403,
    /* LD */         0x01013703,
    /* LD */         0x01013783,
    /* LD */         0x01813083,
    /* LD */         0x01813383,
    /* LD */         0x01813483,
    /* LD */         0x02013403,
    /* LD */         0x02013E83,
    /* LD */         0x02813083,
    /* LD */         0x02813803,
    /* LD */         0x02813883,
    /* LD */         0x03013583,
    /* LD */         0x03013803,
    /* LD */         0x03813283,
    /* LD */         0x04013703,
    /* LD */         0x04013783,
    /* LD */         0x04813F03,
    /* LD */         0x05013303,
    /* LD */         0x05013E03,
    /* LD */         0x05813303,
    /* LD */         0x05813583,
    /* LD */         0x06013683,
    /* LD */         0x06013703,
    /* LD */         0x06813683,
    /* LD */         0x06813783,
    /* LD */         0x07013F83,
    /* LD */         0x07813583,
    /* LD */         0x07813803,
    /* LD */         0x08013803,
    /* LD */         0x08013883,
    /* LD */         0x08813883,
    /* LD */         0x08813E03,
    /* LD */         0x09013E83,
    /* LD */         0x09813383,
    /* LD */         0x0A813D83,
    /* LD */         0x0B013D03,
    /* LD */         0x0B813C83,
    /* LD */         0x0C013C03,
    /* LD */         0x0C813B83,
    /* LD */         0x0D013B03,
    /* LD */         0x0D813A83,
    /* LD */         0x0E013A03,
    /* LD */         0x0E813983,
    /* LD */         0x0F013903,
    /* LD */         0x0F813483,
    /* LD */         0x10013403,
    /* LD */         0x10813083,
    /* LD */         0xFE843783,
    /* LH */         0x00451683,
    /* LHU */        0x00855703,
    /* LR.D */       0x1005B32F,
    /* LR.D */       0x1005B6AF,
    /* LR.W */       0x100522AF,
    /* LR.W */       0x1005262F,
    /* LUI */        0x100006B7,
    /* LUI */        0x10000737,
    /* LUI */        0x100007B7,
    /* LW */         0xFDC42783,
    /* LW */         0xFE842703,
    /* LW */         0xFE842783,
    /* LW */         0xFEC42703,
    /* LW */         0xFEC42783,
    /* LWU */        0x00056603,
    /* MRET */       0x30200073,
    /* MUL */        0x02B502B3,
    /* MULH */       0x02B51333,
    /* MULHSU */     0x02B523B3,
    /* MULHU */      0x02B53E33,
    /* MULW */       0x0285053B,
    /* MULW */       0x02A7053B,
    /* MULW */       0x02A7853B,
    /* MULW */       0x02F707BB,
    /* OR */         0x00F767B3,
    /* ORI */        0x00F56613,
    /* REM */        0x02E7E7B3,
    /* REMU */       0x02E7F7B3,
    /* REMUW */      0x02F777BB,
    /* REMW */       0x02F767BB,
    /* SB */         0xFCF40FA3,
    /* SC.D */       0x1865B6AF,
    /* SC.W */       0x1855262F,
    /* SD */         0x00113423,
    /* SD */         0x00113C23,
    /* SD */         0x00713C23,
    /* SD */         0x00813023,
    /* SD */         0x00813823,
    /* SD */         0x00913423,
    /* SD */         0x00913C23,
    /* SD */         0x00A13823,
    /* SD */         0x00E13423,
    /* SD */         0x00F13423,
    /* SD */         0x01213023,
    /* SD */         0x01D13823,
    /* SD */         0x02113423,
    /* SD */         0x02513C23,
    /* SD */         0x02813023,
    /* SD */         0x02B13823,
    /* SD */         0x03013423,
    /* SD */         0x03013823,
    /* SD */         0x03113423,
    /* SD */         0x03D13023,
    /* SD */         0x04613823,
    /* SD */         0x04613C23,
    /* SD */         0x04B13C23,
    /* SD */         0x04E13023,
    /* SD */         0x04F13023,
    /* SD */         0x05C13823,
    /* SD */         0x05E13423,
    /* SD */         0x06B13C23,
    /* SD */         0x06D13023,
    /* SD */         0x06D13423,
    /* SD */         0x06E13023,
    /* SD */         0x06F13423,
    /* SD */         0x07013C23,
    /* SD */         0x07F13823,
    /* SD */         0x08713C23,
    /* SD */         0x09013023,
    /* SD */         0x09113023,
    /* SD */         0x09113423,
    /* SD */         0x09C13423,
    /* SD */         0x09D13823,
    /* SD */         0x0B913C23,
    /* SD */         0x0BA13823,
    /* SD */         0x0BB13423,
    /* SD */         0x0D513C23,
    /* SD */         0x0D613823,
    /* SD */         0x0D713423,
    /* SD */         0x0D813023,
    /* SD */         0x0E913C23,
    /* SD */         0x0F213823,
    /* SD */         0x0F313423,
    /* SD */         0x0F413023,
    /* SD */         0x10113423,
    /* SD */         0x10813023,
    /* SD */         0xFEA43423,
    /* SD */         0xFEE43423,
    /* SD */         0xFEF43423,
    /* SFENCE.VMA */ 0x12000073,
    /* SH */         0x00C51223,
    /* SLL */        0x00E797B3,
    /* SLLI */       0x00579793,
    /* SLLIW */      0x0057979B,
    /* SLLW */       0x00F717BB,
    /* SLT */        0x00F727B3,
    /* SLTI */       0x00A7A793,
    /* SLTIU */      0x00A7B793,
    /* SLTU */       0x00F737B3,
    /* SRA */        0x40F757B3,
    /* SRAI */       0x4037D793,
    /* SRAIW */      0x4057D79B,
    /* SRAW */       0x40F757BB,
    /* SRET */       0x10200073,
    /* SRL */        0x00E6D633,
    /* SRLI */       0x0056D793,
    /* SRLIW */      0x0056D79B,
    /* SRLW */       0x00E6D73B,
    /* SUB */        0x40B50533,
    /* SUBW */       0x4086843B,
    /* SUBW */       0x4087843B,
    /* SUBW */       0x40A3053B,
    /* SUBW */       0x40A4043B,
    /* SUBW */       0x40A5853B,
    /* SUBW */       0x40AF053B,
    /* SUBW */       0x40D503BB,
    /* SUBW */       0x40D50CBB,
    /* SUBW */       0x40D50D3B,
    /* SUBW */       0x40E7873B,
    /* SUBW */       0x40F583BB,
    /* SUBW */       0x40F70B3B,
    /* SUBW */       0x40FA0DBB,
    /* SUBW */       0x40FA84BB,
    /* SUBW */       0x40FA89BB,
    /* SUBW */       0x40FB0A3B,
    /* SUBW */       0x41850C3B,
    /* SUBW */       0x41958CBB,
    /* SUBW */       0x41DF0EBB,
    /* SW */         0x00A7A023,
    /* SW */         0x00E7A023,
    /* SW */         0x00F6A023,
    /* SW */         0x00F72023,
    /* SW */         0xFCF42E23,
    /* SW */         0xFEF42223,
    /* SW */         0xFEF42423,
    /* SW */         0xFEF42623,
    /* URET */       0x00200073,
    /* WFI */        0x10500073,
    /* XOR */        0x00F747B3,
    /* XORI */       0x0F05C693,
};

void test_inst32() {
    for (uint32_t i = 0; i < sizeof(program32) / sizeof(program32[0]); i++) {
        uint32_t inst = program32[i];
        uint32_t count = 0;

        if (OP_ADD(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched ADD instruction 0x%08X, rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_ADDI(inst)) {
            uint32_t imm = (inst >> 20) & 0b111111111111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            imm = sign_extend_32(imm, 12);

            printf("Matched ADDI instruction 0x%08X: imm=%d, rs1=%d, rd=%d\n", inst, imm, rs1, rd);
            count++;
        }

        if (OP_ADDIW(inst)) {
            uint32_t imm = (inst >> 20) & 0b111111111111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            imm = sign_extend_32(imm, 12);

            printf("Matched ADDIW instruction 0x%08X: imm=%d, rs1=%d, rd=%d\n", inst, imm, rs1, rd);
            count++;
        }

        if (OP_ADDW(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched ADDW instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_AMOADD_D(inst)) {
            printf("Matched AMOADD.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOADD_W(inst)) {
            printf("Matched AMOADD.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOAND_D(inst)) {
            printf("Matched AMOAND.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOAND_W(inst)) {
            printf("Matched AMOAND.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOMAX_D(inst)) {
            printf("Matched AMOMAX.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOMAX_W(inst)) {
            printf("Matched AMOMAX.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOMAXU_D(inst)) {
            printf("Matched AMOMAXU.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOMAXU_W(inst)) {
            printf("Matched AMOMAXU.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOMIN_D(inst)) {
            printf("Matched AMOMIN.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOMIN_W(inst)) {
            printf("Matched AMOMIN.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOMINU_D(inst)) {
            printf("Matched AMOMINU.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOMINU_W(inst)) {
            printf("Matched AMOMINU.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOOR_D(inst)) {
            printf("Matched AMOOR.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOOR_W(inst)) {
            printf("Matched AMOOR.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOSWAP_D(inst)) {
            printf("Matched AMOSWAP.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOSWAP_W(inst)) {
            printf("Matched AMOSWAP.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOXOR_D(inst)) {
            printf("Matched AMOXOR.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AMOXOR_W(inst)) {
            printf("Matched AMOXOR.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_AND(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched AND instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_ANDI(inst)) {
            uint32_t imm = (inst >> 20) & 0b111111111111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            imm = sign_extend_32(imm, 12);

            printf("Matched ANDI instruction 0x%08X: imm=%d, rs1=%d, rd=%d\n", inst, imm, rs1, rd);
            count++;
        }

        if (OP_AUIPC(inst)) {
            uint32_t imm = (inst >> 12) & 0b11111111111111111111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            imm <<= 12;
            imm = sign_extend_32(imm, 20);

            printf("Matched AUIPC instruction 0x%08X: imm=%d, rd=%d\n", inst, imm, rd);
            count++;
        }

        if (OP_BEQ(inst)) {
            printf("Matched BEQ instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BGE(inst)) {
            printf("Matched BGE instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BGEU(inst)) {
            printf("Matched BGEU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BLT(inst)) {
            printf("Matched BLT instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BLTU(inst)) {
            printf("Matched BLTU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_BNE(inst)) {
            printf("Matched BNE instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_CSRRC(inst)) {
            printf("Matched CSRRC instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_CSRRCI(inst)) {
            printf("Matched CSRRCI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_CSRRS(inst)) {
            printf("Matched CSRRS instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_CSRRSI(inst)) {
            printf("Matched CSRRSI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_CSRRW(inst)) {
            printf("Matched CSRRW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_CSRRWI(inst)) {
            printf("Matched CSRRWI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_DIV(inst)) {
            printf("Matched DIV instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_DIVU(inst)) {
            printf("Matched DIVU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_DIVUW(inst)) {
            printf("Matched DIVUW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_DIVW(inst)) {
            printf("Matched DIVW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_EBREAK(inst)) {
            printf("Matched EBREAK instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_ECALL(inst)) {
            printf("Matched ECALL instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FADD_D(inst)) {
            printf("Matched FADD.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FADD_S(inst)) {
            printf("Matched FADD.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCLASS_D(inst)) {
            printf("Matched FCLASS.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCLASS_S(inst)) {
            printf("Matched FCLASS.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_D_L(inst)) {
            printf("Matched FCVT.D.L instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_D_LU(inst)) {
            printf("Matched FCVT.D.LU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_D_S(inst)) {
            printf("Matched FCVT.D.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_D_W(inst)) {
            printf("Matched FCVT.D.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_D_WU(inst)) {
            printf("Matched FCVT.D.WU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_L_D(inst)) {
            printf("Matched FCVT.L.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_L_S(inst)) {
            printf("Matched FCVT.L.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_LU_D(inst)) {
            printf("Matched FCVT.LU.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_LU_S(inst)) {
            printf("Matched FCVT.LU.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_S_D(inst)) {
            printf("Matched FCVT.S.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_S_L(inst)) {
            printf("Matched FCVT.S.L instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_S_LU(inst)) {
            printf("Matched FCVT.S.LU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_S_W(inst)) {
            printf("Matched FCVT.S.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_S_WU(inst)) {
            printf("Matched FCVT.S.WU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_W_D(inst)) {
            printf("Matched FCVT.W.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_W_S(inst)) {
            printf("Matched FCVT.W.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_WU_D(inst)) {
            printf("Matched FCVT.WU.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FCVT_WU_S(inst)) {
            printf("Matched FCVT.WU.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FDIV_D(inst)) {
            printf("Matched FDIV.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FDIV_S(inst)) {
            printf("Matched FDIV.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FENCE(inst)) {
            printf("Matched FENCE instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FENCE_I(inst)) {
            printf("Matched FENCE.I instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FEQ_D(inst)) {
            printf("Matched FEQ.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FEQ_S(inst)) {
            printf("Matched FEQ.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FLD(inst)) {
            printf("Matched FLD instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FLE_D(inst)) {
            printf("Matched FLE.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FLE_S(inst)) {
            printf("Matched FLE.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FLT_D(inst)) {
            printf("Matched FLT.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FLT_S(inst)) {
            printf("Matched FLT.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FLW(inst)) {
            printf("Matched FLW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMADD_D(inst)) {
            printf("Matched FMADD.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMADD_S(inst)) {
            printf("Matched FMADD.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMAX_D(inst)) {
            printf("Matched FMAX.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMAX_S(inst)) {
            printf("Matched FMAX.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMIN_D(inst)) {
            printf("Matched FMIN.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMIN_S(inst)) {
            printf("Matched FMIN.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMSUB_D(inst)) {
            printf("Matched FMSUB.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMSUB_S(inst)) {
            printf("Matched FMSUB.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMUL_D(inst)) {
            printf("Matched FMUL.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMUL_S(inst)) {
            printf("Matched FMUL.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMV_D_X(inst)) {
            printf("Matched FMV.D.X instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMV_W_X(inst)) {
            printf("Matched FMV.W.X instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMV_X_D(inst)) {
            printf("Matched FMV.X.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FMV_X_W(inst)) {
            printf("Matched FMV.X.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FNMADD_D(inst)) {
            printf("Matched FNMADD.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FNMADD_S(inst)) {
            printf("Matched FNMADD.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FNMSUB_D(inst)) {
            printf("Matched FNMSUB.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FNMSUB_S(inst)) {
            printf("Matched FNMSUB.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSD(inst)) {
            printf("Matched FSD instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSGNJ_D(inst)) {
            printf("Matched FSGNJ.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSGNJ_S(inst)) {
            printf("Matched FSGNJ.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSGNJN_D(inst)) {
            printf("Matched FSGNJN.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSGNJN_S(inst)) {
            printf("Matched FSGNJN.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSGNJX_D(inst)) {
            printf("Matched FSGNJX.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSGNJX_S(inst)) {
            printf("Matched FSGNJX.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSQRT_D(inst)) {
            printf("Matched FSQRT.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSQRT_S(inst)) {
            printf("Matched FSQRT.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSUB_D(inst)) {
            printf("Matched FSUB.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSUB_S(inst)) {
            printf("Matched FSUB.S instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_FSW(inst)) {
            printf("Matched FSW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_JAL(inst)) {
            printf("Matched JAL instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_JALR(inst)) {
            printf("Matched JALR instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LB(inst)) {
            printf("Matched LB instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LBU(inst)) {
            printf("Matched LBU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LD(inst)) {
            printf("Matched LD instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LH(inst)) {
            printf("Matched LH instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LHU(inst)) {
            printf("Matched LHU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LR_D(inst)) {
            printf("Matched LR.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LR_W(inst)) {
            printf("Matched LR.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LUI(inst)) {
            uint32_t imm = (inst >> 12) & 0b11111111111111111111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            imm <<= 12;
            imm = sign_extend_32(imm, 20);

            printf("Matched LUI instruction 0x%08X: imm=%d, rd=%d\n", inst, imm, rd);
            count++;
        }

        if (OP_LW(inst)) {
            printf("Matched LW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_LWU(inst)) {
            printf("Matched LWU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_MRET(inst)) {
            printf("Matched MRET instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_MUL(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched MUL instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_MULH(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched MULH instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_MULHSU(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched MULHSU instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_MULHU(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched MULHU instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_MULW(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched MULW instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_OR(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched OR instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_ORI(inst)) {
            uint32_t imm = (inst >> 20) & 0b111111111111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            imm = sign_extend_32(imm, 12);

            printf("Matched ORI instruction 0x%08X: imm=%d, rs1=%d, rd=%d\n", inst, imm, rs1, rd);
            count++;
        }

        if (OP_REM(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched REM instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_REMU(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched REMU instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_REMUW(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched REMUW instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_REMW(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched REMW instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_SB(inst)) {
            printf("Matched SB instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SC_D(inst)) {
            printf("Matched SC.D instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SC_W(inst)) {
            printf("Matched SC.W instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SD(inst)) {
            printf("Matched SD instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SFENCE_VMA(inst)) {
            printf("Matched SFENCE.VMA instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SH(inst)) {
            printf("Matched SH instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SLL(inst)) {
            printf("Matched SLL instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SLLI(inst)) {
            printf("Matched SLLI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SLLIW(inst)) {
            printf("Matched SLLIW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SLLW(inst)) {
            printf("Matched SLLW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SLT(inst)) {
            printf("Matched SLT instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SLTI(inst)) {
            printf("Matched SLTI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SLTIU(inst)) {
            printf("Matched SLTIU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SLTU(inst)) {
            printf("Matched SLTU instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SRA(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched SRA instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_SRAI(inst)) {
            printf("Matched SRAI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SRAIW(inst)) {
            printf("Matched SRAIW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SRAW(inst)) {
            printf("Matched SRAW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SRET(inst)) {
            printf("Matched SRET instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SRL(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched SRL instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_SRLI(inst)) {
            printf("Matched SRLI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SRLIW(inst)) {
            printf("Matched SRLIW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SRLW(inst)) {
            printf("Matched SRLW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_SUB(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched SUB instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_SUBW(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched SUBW instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_SW(inst)) {
            printf("Matched SW instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_URET(inst)) {
            printf("Matched URET instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_WFI(inst)) {
            printf("Matched WFI instruction 0x%08X\n", inst);
            count++;
        }

        if (OP_XOR(inst)) {
            uint32_t rs2 = (inst >> 20) & 0b11111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            printf("Matched XOR instruction 0x%08X: rs2=%d, rs1=%d, rd=%d\n", inst, rs2, rs1, rd);
            count++;
        }

        if (OP_XORI(inst)) {
            uint32_t imm = (inst >> 20) & 0b111111111111;
            uint32_t rs1 = (inst >> 15) & 0b11111;
            uint32_t rd  = (inst >> 7) & 0b11111;

            imm = sign_extend_32(imm, 12);

            printf("Matched XORI instruction 0x%08X: imm=%d, rs1=%d, rd=%d\n", inst, imm, rs1, rd);
            count++;
        }

        if (count == 0) {
            printf("Error: no match for instruction 0x%08X\n", inst);
        }

        if (count > 1) {
            printf("Error: multiple matches for instruction 0x%08X\n", inst);
        }
    }
}
