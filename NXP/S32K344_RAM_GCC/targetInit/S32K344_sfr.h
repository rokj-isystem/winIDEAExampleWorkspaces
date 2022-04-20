#include <stdint.h>

struct System_Control_Space_System_Control_Block_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VARIANT:4;
      uint64_t PARTNO:12;
      uint64_t reservedSpace0:4;
      uint64_t REVISION:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:8;
      uint64_t reservedSpace0:3;
      uint64_t RETTOBASE:1;
      uint64_t VECTPENDING:10;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace1:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace2:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t TBLOFF:22;
      uint64_t TBLBASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTRESET:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t reservedSpace0:5;
      uint64_t PRIGROUP:3;
      uint64_t reservedSpace1:4;
      uint64_t ENDIANESS:1;
      uint64_t VECTKEYVECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SLEEPONEXIT:1;
      uint64_t SLEEPDEEP:1;
      uint64_t reservedSpace1:1;
      uint64_t SEVONPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONEBASETHRDENA:1;
      uint64_t USERSETMPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGN_TRP:1;
      uint64_t DIV_0_TRP:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMFAULTACT:1;
      uint64_t BUSFAULTACT:1;
      uint64_t reservedSpace0:1;
      uint64_t USGFAULTACT:1;
      uint64_t reservedSpace1:3;
      uint64_t SVCALLACT:1;
      uint64_t MONITORACT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSVACT:1;
      uint64_t SYSTICKACT:1;
      uint64_t USGFAULTPENDED:1;
      uint64_t MEMFAULTPENDED:1;
      uint64_t BUSFAULTPENDED:1;
      uint64_t SVCALLPENDED:1;
      uint64_t MEMFAULTENA:1;
      uint64_t BUSFAULTENA:1;
      uint64_t USGFAULTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHCRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IACCVIOL:1;
      uint64_t DACCVIOL:1;
      uint64_t reservedSpace0:1;
      uint64_t MUNSTKERR:1;
      uint64_t MSTKERR:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARVALID:1;
      uint64_t IBUSERR:1;
      uint64_t PRECISERR:1;
      uint64_t IMPRECISERR:1;
      uint64_t UNSTKERR:1;
      uint64_t STKERR:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARVALID:1;
      uint64_t UNDEFINSTR:1;
      uint64_t INVSTATE:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIVBYZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECTTBL:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DEBUGEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALTED:1;
      uint64_t BKPT:1;
      uint64_t DWTTRAP:1;
      uint64_t VCATCH:1;
      uint64_t EXTERNAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSR;

  uint32_t MMFAR;
  uint32_t BFAR;
  uint32_t AFSR;
  uint32_t PFR0;
  uint32_t PFR1;
  uint32_t DFR0;
  uint32_t AFR0;
  uint32_t MMFR0;
  uint32_t MMFR1;
  uint32_t MMFR2;
  uint32_t MMFR3;
  uint32_t ISAR0;
  uint32_t ISAR1;
  uint32_t ISAR2;
  uint32_t ISAR3;
  uint32_t ISAR4;
  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:2;
      uint64_t CP1:2;
      uint64_t CP2:2;
      uint64_t CP3:2;
      uint64_t CP4:2;
      uint64_t CP5:2;
      uint64_t CP6:2;
      uint64_t CP7:2;
      uint64_t reservedSpace0:4;
      uint64_t CP10:2;
      uint64_t CP11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPACR;

};

#define System_Control_Space_System_Control_Block (*(volatile struct System_Control_Space_System_Control_Block_tag *) 0xe000ed00)

struct System_Control_Space_Floating_point_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSPACT:1;
      uint64_t USER:1;
      uint64_t reservedSpace0:1;
      uint64_t THREAD:1;
      uint64_t HFRDY:1;
      uint64_t MMRDY:1;
      uint64_t BFRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t MONRDY:1;
      uint64_t reservedSpace2:21;
      uint64_t LSPEN:1;
      uint64_t ASPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCCR;

  uint32_t FPCAR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t RMode:2;
      uint64_t FZ:1;
      uint64_t DN:1;
      uint64_t AHP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A_SIMD:4;
      uint64_t Single_precision:4;
      uint64_t Double_precision:4;
      uint64_t FP_0:4;
      uint64_t Divide:4;
      uint64_t Square_root:4;
      uint64_t Short_vectors:4;
      uint64_t FP_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MVFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FtZ:4;
      uint64_t D_NaN:4;
      uint64_t reservedSpace0:16;
      uint64_t FP_0:4;
      uint64_t FP_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MVFR1;

};

#define System_Control_Space_Floating_point (*(volatile struct System_Control_Space_Floating_point_tag *) 0xe000ef34)

struct System_Control_Space_System_Control_and_ID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTLR;

  uint8_t res0[3828];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

  uint8_t res1[204];

  uint32_t PID4;
  uint32_t PID5;
  uint32_t PID6;
  uint32_t PID7;
  uint32_t PID0;
  uint32_t PID1;
  uint32_t PID2;
  uint32_t PID3;
  uint32_t CID0;
  uint32_t CID1;
  uint32_t CID2;
  uint32_t CID3;
};

#define System_Control_Space_System_Control_and_ID (*(volatile struct System_Control_Space_System_Control_and_ID_tag *) 0xe000e004)

struct System_Control_Space_NVIC_tag
{
  uint32_t INT_0_31_SET_EN;
  uint32_t INT_32_63_SET_EN;
  uint32_t INT_64_95_SET_EN;
  uint32_t INT_96_127_SET_EN;
  uint32_t INT_128_159_SET_EN;
  uint32_t INT_160_191_SET_EN;
  uint32_t INT_192_223_SET_EN;
  uint16_t INT_224_239_SET_EN;
  uint8_t res0[98];

  uint32_t INT_0_31_CLR_EN;
  uint32_t INT_32_63_CLR_EN;
  uint32_t INT_64_95_CLR_EN;
  uint32_t INT_96_127_CLR_EN;
  uint32_t INT_128_159_CLR_EN;
  uint32_t INT_160_191_CLR_EN;
  uint32_t INT_192_223_CLR_EN;
  uint16_t INT_224_239_CLR_EN;
  uint8_t res1[98];

  uint32_t INT_0_31_SET_PEND;
  uint32_t INT_32_63_SET_PEND;
  uint32_t INT_64_95_SET_PEND;
  uint32_t INT_96_127_SET_PEND;
  uint32_t INT_128_159_SET_PEND;
  uint32_t INT_160_191_SET_PEND;
  uint32_t INT_192_223_SET_PEND;
  uint16_t INT_224_239_SET_PEND;
  uint8_t res2[98];

  uint32_t INT_0_31_CLR_PEND;
  uint32_t INT_32_63_CLR_PEND;
  uint32_t INT_64_95_CLR_PEND;
  uint32_t INT_96_127_CLR_PEND;
  uint32_t INT_128_159_CLR_PEND;
  uint32_t INT_160_191_CLR_PEND;
  uint32_t INT_192_223_CLR_PEND;
  uint16_t INT_224_239_CLR_PEND;
  uint8_t res3[98];

  uint32_t INT_0_31_ACT;
  uint32_t INT_32_63_ACT;
  uint32_t INT_64_95_ACT;
  uint32_t INT_96_127_ACT;
  uint32_t INT_128_159_ACT;
  uint32_t INT_160_191_ACT;
  uint32_t INT_192_223_ACT;
  uint16_t INT_224_239_ACT;
  uint8_t res4[226];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_0:8;
      uint64_t PRI_1:8;
      uint64_t PRI_2:8;
      uint64_t PRI_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_0_3_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
      uint64_t PRI_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_4_7_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_8:8;
      uint64_t PRI_9:8;
      uint64_t PRI_10:8;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_8_11_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_12:8;
      uint64_t PRI_13:8;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_12_15_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_16:8;
      uint64_t PRI_17:8;
      uint64_t PRI_18:8;
      uint64_t PRI_19:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_16_19_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_20:8;
      uint64_t PRI_21:8;
      uint64_t PRI_22:8;
      uint64_t PRI_23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_20_23_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_24:8;
      uint64_t PRI_25:8;
      uint64_t PRI_26:8;
      uint64_t PRI_27:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_24_27_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_28:8;
      uint64_t PRI_29:8;
      uint64_t PRI_30:8;
      uint64_t PRI_31:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_28_31_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_32:8;
      uint64_t PRI_33:8;
      uint64_t PRI_34:8;
      uint64_t PRI_35:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_32_35_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_36:8;
      uint64_t PRI_37:8;
      uint64_t PRI_38:8;
      uint64_t PRI_39:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_36_39_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_40:8;
      uint64_t PRI_41:8;
      uint64_t PRI_42:8;
      uint64_t PRI_43:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_40_43_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_44:8;
      uint64_t PRI_45:8;
      uint64_t PRI_46:8;
      uint64_t PRI_47:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_44_47_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_48:8;
      uint64_t PRI_49:8;
      uint64_t PRI_50:8;
      uint64_t PRI_51:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_48_51_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_52:8;
      uint64_t PRI_53:8;
      uint64_t PRI_54:8;
      uint64_t PRI_55:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_52_55_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_56:8;
      uint64_t PRI_57:8;
      uint64_t PRI_58:8;
      uint64_t PRI_59:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_56_59_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_60:8;
      uint64_t PRI_61:8;
      uint64_t PRI_62:8;
      uint64_t PRI_63:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_60_63_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_64:8;
      uint64_t PRI_65:8;
      uint64_t PRI_66:8;
      uint64_t PRI_67:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_64_67_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_68:8;
      uint64_t PRI_69:8;
      uint64_t PRI_70:8;
      uint64_t PRI_71:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_68_71_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_72:8;
      uint64_t PRI_73:8;
      uint64_t PRI_74:8;
      uint64_t PRI_75:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_72_75_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_76:8;
      uint64_t PRI_77:8;
      uint64_t PRI_78:8;
      uint64_t PRI_79:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_76_79_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_80:8;
      uint64_t PRI_81:8;
      uint64_t PRI_82:8;
      uint64_t PRI_83:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_80_83_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_84:8;
      uint64_t PRI_85:8;
      uint64_t PRI_86:8;
      uint64_t PRI_87:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_84_87_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_88:8;
      uint64_t PRI_89:8;
      uint64_t PRI_90:8;
      uint64_t PRI_91:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_88_91_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_92:8;
      uint64_t PRI_93:8;
      uint64_t PRI_94:8;
      uint64_t PRI_95:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_92_95_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_96:8;
      uint64_t PRI_97:8;
      uint64_t PRI_98:8;
      uint64_t PRI_99:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_96_99_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_100:8;
      uint64_t PRI_101:8;
      uint64_t PRI_102:8;
      uint64_t PRI_103:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_100_103_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_104:8;
      uint64_t PRI_105:8;
      uint64_t PRI_106:8;
      uint64_t PRI_107:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_104_107_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_108:8;
      uint64_t PRI_109:8;
      uint64_t PRI_110:8;
      uint64_t PRI_111:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_108_111_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_112:8;
      uint64_t PRI_113:8;
      uint64_t PRI_114:8;
      uint64_t PRI_115:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_112_115_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_116:8;
      uint64_t PRI_117:8;
      uint64_t PRI_118:8;
      uint64_t PRI_119:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_116_119_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_120:8;
      uint64_t PRI_121:8;
      uint64_t PRI_122:8;
      uint64_t PRI_123:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_120_123_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_124:8;
      uint64_t PRI_125:8;
      uint64_t PRI_126:8;
      uint64_t PRI_127:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_124_127_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_128:8;
      uint64_t PRI_129:8;
      uint64_t PRI_130:8;
      uint64_t PRI_131:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_128_131_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_132:8;
      uint64_t PRI_133:8;
      uint64_t PRI_134:8;
      uint64_t PRI_135:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_132_135_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_136:8;
      uint64_t PRI_137:8;
      uint64_t PRI_138:8;
      uint64_t PRI_139:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_136_139_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_140:8;
      uint64_t PRI_141:8;
      uint64_t PRI_142:8;
      uint64_t PRI_143:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_140_143_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_144:8;
      uint64_t PRI_145:8;
      uint64_t PRI_146:8;
      uint64_t PRI_147:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_144_147_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_148:8;
      uint64_t PRI_149:8;
      uint64_t PRI_150:8;
      uint64_t PRI_151:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_148_151_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_152:8;
      uint64_t PRI_153:8;
      uint64_t PRI_154:8;
      uint64_t PRI_155:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_152_155_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_156:8;
      uint64_t PRI_157:8;
      uint64_t PRI_158:8;
      uint64_t PRI_159:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_156_159_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_160:8;
      uint64_t PRI_161:8;
      uint64_t PRI_162:8;
      uint64_t PRI_163:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_160_163_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_164:8;
      uint64_t PRI_165:8;
      uint64_t PRI_166:8;
      uint64_t PRI_167:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_164_167_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_168:8;
      uint64_t PRI_169:8;
      uint64_t PRI_170:8;
      uint64_t PRI_171:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_168_171_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_172:8;
      uint64_t PRI_173:8;
      uint64_t PRI_174:8;
      uint64_t PRI_175:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_172_175_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_176:8;
      uint64_t PRI_177:8;
      uint64_t PRI_178:8;
      uint64_t PRI_179:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_176_179_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_180:8;
      uint64_t PRI_181:8;
      uint64_t PRI_182:8;
      uint64_t PRI_183:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_180_183_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_184:8;
      uint64_t PRI_185:8;
      uint64_t PRI_186:8;
      uint64_t PRI_187:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_184_187_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_188:8;
      uint64_t PRI_189:8;
      uint64_t PRI_190:8;
      uint64_t PRI_191:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_188_191_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_192:8;
      uint64_t PRI_193:8;
      uint64_t PRI_194:8;
      uint64_t PRI_195:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_192_195_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_196:8;
      uint64_t PRI_197:8;
      uint64_t PRI_198:8;
      uint64_t PRI_199:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_196_199_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_200:8;
      uint64_t PRI_201:8;
      uint64_t PRI_202:8;
      uint64_t PRI_203:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_200_203_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_204:8;
      uint64_t PRI_205:8;
      uint64_t PRI_206:8;
      uint64_t PRI_207:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_204_207_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_208:8;
      uint64_t PRI_209:8;
      uint64_t PRI_210:8;
      uint64_t PRI_211:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_208_211_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_212:8;
      uint64_t PRI_213:8;
      uint64_t PRI_214:8;
      uint64_t PRI_215:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_212_215_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_216:8;
      uint64_t PRI_217:8;
      uint64_t PRI_218:8;
      uint64_t PRI_219:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_216_219_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_220:8;
      uint64_t PRI_221:8;
      uint64_t PRI_222:8;
      uint64_t PRI_223:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_220_223_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_224:8;
      uint64_t PRI_225:8;
      uint64_t PRI_226:8;
      uint64_t PRI_227:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_224_227_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_228:8;
      uint64_t PRI_229:8;
      uint64_t PRI_230:8;
      uint64_t PRI_231:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_228_231_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_232:8;
      uint64_t PRI_233:8;
      uint64_t PRI_234:8;
      uint64_t PRI_235:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_232_235_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_236:8;
      uint64_t PRI_237:8;
      uint64_t PRI_238:8;
      uint64_t PRI_239:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_236_239_PRI;

};

#define System_Control_Space_NVIC (*(volatile struct System_Control_Space_NVIC_tag *) 0xe000e100)

struct System_Control_Space_SysTick_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t TICKINT:1;
      uint64_t CLKSOURCE:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNTFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_RVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t reservedSpace0:6;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CALIB;

};

#define System_Control_Space_SysTick (*(volatile struct System_Control_Space_SysTick_tag *) 0xe000e010)

struct System_Control_Space_Memory_Protection_Unit_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEPARATE:1;
      uint64_t reservedSpace0:7;
      uint64_t DREGION:8;
      uint64_t IREGION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_CTRL;

  uint8_t MPU_RNR;
  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A3;

};

#define System_Control_Space_Memory_Protection_Unit (*(volatile struct System_Control_Space_Memory_Protection_Unit_tag *) 0xe000ed90)

struct TRGMUX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC12_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC12_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC12_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPCMP_0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPCMP_1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPCMP_2_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCTU_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS012_ODIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:16;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:16;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eMIOS1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FlexIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIUL_OUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIUL_OUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIUL_OUT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIUL_OUT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPI2C_0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSPI_0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSPI_1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPSPI_2_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART_0_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART_1_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART_2_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPUART_3_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:16;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU0_SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU0_FORCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:16;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU1_SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:8;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU1_FORCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCU1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:16;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_RXEV;

};

#define TRGMUX (*(volatile struct TRGMUX_tag *) 0x40080000)

struct BCTU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEN0:1;
      uint64_t IEN1:1;
      uint64_t IEN2:1;
      uint64_t reservedSpace0:2;
      uint64_t LIST_IEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TRGEN:1;
      uint64_t reservedSpace2:8;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t reservedSpace3:7;
      uint64_t GTRGEN:1;
      uint64_t reservedSpace4:2;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
      uint64_t Software_Reset:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDATA0:1;
      uint64_t NDATA1:1;
      uint64_t NDATA2:1;
      uint64_t reservedSpace0:1;
      uint64_t DATAOVR0:1;
      uint64_t DATAOVR1:1;
      uint64_t DATAOVR2:1;
      uint64_t reservedSpace1:1;
      uint64_t LIST0_Last:1;
      uint64_t LIST1_Last:1;
      uint64_t LIST2_Last:1;
      uint64_t reservedSpace2:4;
      uint64_t TRGF:1;
      uint64_t NDATA0_CLR:1;
      uint64_t NDATA1_CLR:1;
      uint64_t NDATA2_CLR:1;
      uint64_t reservedSpace3:1;
      uint64_t DATAOVR0_CLR:1;
      uint64_t DATAOVR1_CLR:1;
      uint64_t DATAOVR2_CLR:1;
      uint64_t reservedSpace4:1;
      uint64_t LIST0_Last_CLR:1;
      uint64_t LIST1_Last_CLR:1;
      uint64_t LIST2_Last_CLR:1;
      uint64_t reservedSpace5:4;
      uint64_t TRGF_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_VALUE_OR_LADDR:7;
      uint64_t reservedSpace0:1;
      uint64_t ADC_SEL0:1;
      uint64_t ADC_SEL1:1;
      uint64_t ADC_SEL2:1;
      uint64_t reservedSpace1:2;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t reservedSpace2:12;
      uint64_t DATA_DEST:3;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG__71;

  uint8_t res2[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROTEC_CODE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFTRG0:1;
      uint64_t SFTRG1:1;
      uint64_t SFTRG2:1;
      uint64_t SFTRG3:1;
      uint64_t SFTRG4:1;
      uint64_t SFTRG5:1;
      uint64_t SFTRG6:1;
      uint64_t SFTRG7:1;
      uint64_t SFTRG8:1;
      uint64_t SFTRG9:1;
      uint64_t SFTRG10:1;
      uint64_t SFTRG11:1;
      uint64_t SFTRG12:1;
      uint64_t SFTRG13:1;
      uint64_t SFTRG14:1;
      uint64_t SFTRG15:1;
      uint64_t SFTRG16:1;
      uint64_t SFTRG17:1;
      uint64_t SFTRG18:1;
      uint64_t SFTRG19:1;
      uint64_t SFTRG20:1;
      uint64_t SFTRG21:1;
      uint64_t SFTRG22:1;
      uint64_t SFTRG23:1;
      uint64_t SFTRG24:1;
      uint64_t SFTRG25:1;
      uint64_t SFTRG26:1;
      uint64_t SFTRG27:1;
      uint64_t SFTRG28:1;
      uint64_t SFTRG29:1;
      uint64_t SFTRG30:1;
      uint64_t SFTRG31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFTRGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFTRG32:1;
      uint64_t SFTRG33:1;
      uint64_t SFTRG34:1;
      uint64_t SFTRG35:1;
      uint64_t SFTRG36:1;
      uint64_t SFTRG37:1;
      uint64_t SFTRG38:1;
      uint64_t SFTRG39:1;
      uint64_t SFTRG40:1;
      uint64_t SFTRG41:1;
      uint64_t SFTRG42:1;
      uint64_t SFTRG43:1;
      uint64_t SFTRG44:1;
      uint64_t SFTRG45:1;
      uint64_t SFTRG46:1;
      uint64_t SFTRG47:1;
      uint64_t SFTRG48:1;
      uint64_t SFTRG49:1;
      uint64_t SFTRG50:1;
      uint64_t SFTRG51:1;
      uint64_t SFTRG52:1;
      uint64_t SFTRG53:1;
      uint64_t SFTRG54:1;
      uint64_t SFTRG55:1;
      uint64_t SFTRG56:1;
      uint64_t SFTRG57:1;
      uint64_t SFTRG58:1;
      uint64_t SFTRG59:1;
      uint64_t SFTRG60:1;
      uint64_t SFTRG61:1;
      uint64_t SFTRG62:1;
      uint64_t SFTRG63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFTRGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFTRG64:1;
      uint64_t SFTRG65:1;
      uint64_t SFTRG66:1;
      uint64_t SFTRG67:1;
      uint64_t SFTRG68:1;
      uint64_t SFTRG69:1;
      uint64_t SFTRG70:1;
      uint64_t SFTRG71:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFTRGR3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:15;
      uint64_t reservedSpace0:1;
      uint64_t LAST:1;
      uint64_t LIST:1;
      uint64_t CH:7;
      uint64_t TRG_SRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:15;
      uint64_t reservedSpace0:1;
      uint64_t LAST:1;
      uint64_t LIST:1;
      uint64_t CH:7;
      uint64_t TRG_SRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:15;
      uint64_t reservedSpace0:1;
      uint64_t LAST:1;
      uint64_t LIST:1;
      uint64_t CH:7;
      uint64_t TRG_SRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCDR_2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LISTSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y_plus_1:1;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace1:7;
      uint64_t NEXT_CH_WAIT_ON_TRIG_y:1;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR__15;

  uint8_t res5[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:15;
      uint64_t reservedSpace0:1;
      uint64_t ADC_NUM:2;
      uint64_t CH:7;
      uint64_t TRG_SRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO1DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:15;
      uint64_t reservedSpace0:1;
      uint64_t ADC_NUM:2;
      uint64_t CH:7;
      uint64_t TRG_SRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO2DR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t IEN_FIFO1:1;
      uint64_t IEN_FIFO2:1;
      uint64_t reservedSpace1:6;
      uint64_t DMA_EN_FIFO1:1;
      uint64_t DMA_EN_FIFO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WM_FIFO1:4;
      uint64_t reservedSpace0:4;
      uint64_t WM_FIFO2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOWM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t WM_INT_FIFO1:1;
      uint64_t WM_INT_FIFO2:1;
      uint64_t reservedSpace1:6;
      uint64_t OVR_ERR_FIFO1:1;
      uint64_t UNDR_ERR_FIFO1:1;
      uint64_t OVR_ERR_FIFO2:1;
      uint64_t UNDR_ERR_FIFO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FULL_FIFO1:1;
      uint64_t FULL_FIFO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTR_FIFO1:5;
      uint64_t reservedSpace0:3;
      uint64_t CNTR_FIFO2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCNTR;

};

#define BCTU (*(volatile struct BCTU_tag *) 0x40084000)

struct EMIOS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t GPRE:8;
      uint64_t reservedSpace1:10;
      uint64_t GPREN:1;
      uint64_t reservedSpace2:1;
      uint64_t GTBE:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0:1;
      uint64_t F1:1;
      uint64_t F2:1;
      uint64_t F3:1;
      uint64_t F4:1;
      uint64_t F5:1;
      uint64_t F6:1;
      uint64_t F7:1;
      uint64_t F8:1;
      uint64_t F9:1;
      uint64_t F10:1;
      uint64_t F11:1;
      uint64_t F12:1;
      uint64_t F13:1;
      uint64_t F14:1;
      uint64_t F15:1;
      uint64_t F16:1;
      uint64_t F17:1;
      uint64_t F18:1;
      uint64_t F19:1;
      uint64_t F20:1;
      uint64_t F21:1;
      uint64_t F22:1;
      uint64_t F23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OU0:1;
      uint64_t OU1:1;
      uint64_t OU2:1;
      uint64_t OU3:1;
      uint64_t OU4:1;
      uint64_t OU5:1;
      uint64_t OU6:1;
      uint64_t OU7:1;
      uint64_t OU8:1;
      uint64_t OU9:1;
      uint64_t OU10:1;
      uint64_t OU11:1;
      uint64_t OU12:1;
      uint64_t OU13:1;
      uint64_t OU14:1;
      uint64_t OU15:1;
      uint64_t OU16:1;
      uint64_t OU17:1;
      uint64_t OU18:1;
      uint64_t OU19:1;
      uint64_t OU20:1;
      uint64_t OU21:1;
      uint64_t OU22:1;
      uint64_t OU23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCDIS0:1;
      uint64_t UCDIS1:1;
      uint64_t UCDIS2:1;
      uint64_t UCDIS3:1;
      uint64_t UCDIS4:1;
      uint64_t UCDIS5:1;
      uint64_t UCDIS6:1;
      uint64_t UCDIS7:1;
      uint64_t UCDIS8:1;
      uint64_t UCDIS9:1;
      uint64_t UCDIS10:1;
      uint64_t UCDIS11:1;
      uint64_t UCDIS12:1;
      uint64_t UCDIS13:1;
      uint64_t UCDIS14:1;
      uint64_t UCDIS15:1;
      uint64_t UCDIS16:1;
      uint64_t UCDIS17:1;
      uint64_t UCDIS18:1;
      uint64_t UCDIS19:1;
      uint64_t UCDIS20:1;
      uint64_t UCDIS21:1;
      uint64_t UCDIS22:1;
      uint64_t UCDIS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCDIS;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_3;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_4;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_5;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_6;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_7;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_8;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B9;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_9;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B10;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_10;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B11;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_11;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B12;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_12;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B13;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_13;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B14;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_14;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B15;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_15;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_16;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B17;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_17;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B18;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_18;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B19;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_19;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B20;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_20;

  uint8_t res32[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B21;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_21;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_22;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_23;

};

#define EMIOS_0 (*(volatile struct EMIOS_0_tag *) 0x40088000)

struct EMIOS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t GPRE:8;
      uint64_t reservedSpace1:10;
      uint64_t GPREN:1;
      uint64_t reservedSpace2:1;
      uint64_t GTBE:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0:1;
      uint64_t F1:1;
      uint64_t F2:1;
      uint64_t F3:1;
      uint64_t F4:1;
      uint64_t F5:1;
      uint64_t F6:1;
      uint64_t F7:1;
      uint64_t F8:1;
      uint64_t F9:1;
      uint64_t F10:1;
      uint64_t F11:1;
      uint64_t F12:1;
      uint64_t F13:1;
      uint64_t F14:1;
      uint64_t F15:1;
      uint64_t F16:1;
      uint64_t F17:1;
      uint64_t F18:1;
      uint64_t F19:1;
      uint64_t F20:1;
      uint64_t F21:1;
      uint64_t F22:1;
      uint64_t F23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OU0:1;
      uint64_t OU1:1;
      uint64_t OU2:1;
      uint64_t OU3:1;
      uint64_t OU4:1;
      uint64_t OU5:1;
      uint64_t OU6:1;
      uint64_t OU7:1;
      uint64_t OU8:1;
      uint64_t OU9:1;
      uint64_t OU10:1;
      uint64_t OU11:1;
      uint64_t OU12:1;
      uint64_t OU13:1;
      uint64_t OU14:1;
      uint64_t OU15:1;
      uint64_t OU16:1;
      uint64_t OU17:1;
      uint64_t OU18:1;
      uint64_t OU19:1;
      uint64_t OU20:1;
      uint64_t OU21:1;
      uint64_t OU22:1;
      uint64_t OU23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCDIS0:1;
      uint64_t UCDIS1:1;
      uint64_t UCDIS2:1;
      uint64_t UCDIS3:1;
      uint64_t UCDIS4:1;
      uint64_t UCDIS5:1;
      uint64_t UCDIS6:1;
      uint64_t UCDIS7:1;
      uint64_t UCDIS8:1;
      uint64_t UCDIS9:1;
      uint64_t UCDIS10:1;
      uint64_t UCDIS11:1;
      uint64_t UCDIS12:1;
      uint64_t UCDIS13:1;
      uint64_t UCDIS14:1;
      uint64_t UCDIS15:1;
      uint64_t UCDIS16:1;
      uint64_t UCDIS17:1;
      uint64_t UCDIS18:1;
      uint64_t UCDIS19:1;
      uint64_t UCDIS20:1;
      uint64_t UCDIS21:1;
      uint64_t UCDIS22:1;
      uint64_t UCDIS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCDIS;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B3;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_3;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B4;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_4;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B5;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_5;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B6;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_6;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B7;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_7;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_8;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B9;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_9;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B10;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_10;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B11;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_11;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B12;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_12;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B13;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_13;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B14;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_14;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B15;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_15;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_16;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B17;

  uint8_t res32[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_17;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B18;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_18;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B19;

  uint8_t res36[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_19;

  uint8_t res37[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B20;

  uint8_t res38[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_20;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B21;

  uint8_t res40[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_21;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_22;

  uint8_t res42[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_23;

};

#define EMIOS_1 (*(volatile struct EMIOS_1_tag *) 0x4008c000)

struct EMIOS_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t GPRE:8;
      uint64_t reservedSpace1:10;
      uint64_t GPREN:1;
      uint64_t reservedSpace2:1;
      uint64_t GTBE:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0:1;
      uint64_t F1:1;
      uint64_t F2:1;
      uint64_t F3:1;
      uint64_t F4:1;
      uint64_t F5:1;
      uint64_t F6:1;
      uint64_t F7:1;
      uint64_t F8:1;
      uint64_t F9:1;
      uint64_t F10:1;
      uint64_t F11:1;
      uint64_t F12:1;
      uint64_t F13:1;
      uint64_t F14:1;
      uint64_t F15:1;
      uint64_t F16:1;
      uint64_t F17:1;
      uint64_t F18:1;
      uint64_t F19:1;
      uint64_t F20:1;
      uint64_t F21:1;
      uint64_t F22:1;
      uint64_t F23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OU0:1;
      uint64_t OU1:1;
      uint64_t OU2:1;
      uint64_t OU3:1;
      uint64_t OU4:1;
      uint64_t OU5:1;
      uint64_t OU6:1;
      uint64_t OU7:1;
      uint64_t OU8:1;
      uint64_t OU9:1;
      uint64_t OU10:1;
      uint64_t OU11:1;
      uint64_t OU12:1;
      uint64_t OU13:1;
      uint64_t OU14:1;
      uint64_t OU15:1;
      uint64_t OU16:1;
      uint64_t OU17:1;
      uint64_t OU18:1;
      uint64_t OU19:1;
      uint64_t OU20:1;
      uint64_t OU21:1;
      uint64_t OU22:1;
      uint64_t OU23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCDIS0:1;
      uint64_t UCDIS1:1;
      uint64_t UCDIS2:1;
      uint64_t UCDIS3:1;
      uint64_t UCDIS4:1;
      uint64_t UCDIS5:1;
      uint64_t UCDIS6:1;
      uint64_t UCDIS7:1;
      uint64_t UCDIS8:1;
      uint64_t UCDIS9:1;
      uint64_t UCDIS10:1;
      uint64_t UCDIS11:1;
      uint64_t UCDIS12:1;
      uint64_t UCDIS13:1;
      uint64_t UCDIS14:1;
      uint64_t UCDIS15:1;
      uint64_t UCDIS16:1;
      uint64_t UCDIS17:1;
      uint64_t UCDIS18:1;
      uint64_t UCDIS19:1;
      uint64_t UCDIS20:1;
      uint64_t UCDIS21:1;
      uint64_t UCDIS22:1;
      uint64_t UCDIS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCDIS;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B3;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_3;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B4;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_4;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B5;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_5;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B6;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_6;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B7;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_7;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_8;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B9;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_9;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B10;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_10;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B11;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_11;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B12;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_12;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B13;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_13;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B14;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_14;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B15;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_15;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_16;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B17;

  uint8_t res32[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_17;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B18;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_18;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B19;

  uint8_t res36[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_19;

  uint8_t res37[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B20;

  uint8_t res38[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_20;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B21;

  uint8_t res40[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:28;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_21;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_22;

  uint8_t res42[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:7;
      uint64_t EDPOL:1;
      uint64_t EDSEL:1;
      uint64_t BSL:2;
      uint64_t reservedSpace0:1;
      uint64_t FORCMB:1;
      uint64_t FORCMA:1;
      uint64_t reservedSpace1:3;
      uint64_t FEN:1;
      uint64_t FCK:1;
      uint64_t IF:4;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t UCPREN:1;
      uint64_t UCPRE:2;
      uint64_t ODISSL:2;
      uint64_t ODIS:1;
      uint64_t FREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG:1;
      uint64_t UCOUT:1;
      uint64_t UCIN:1;
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UCRELDEL_INT:5;
      uint64_t reservedSpace0:9;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2_23;

};

#define EMIOS_2 (*(volatile struct EMIOS_2_tag *) 0x40090000)

struct LCU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_11;

  uint8_t res0[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP:1;
      uint64_t reservedSpace0:6;
      uint64_t INCL_MUXES:1;
      uint64_t NUM_SYNCS:8;
      uint64_t NUM_FORCES:8;
      uint64_t NUM_LOGIC_CELLS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWVALUE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWVALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTEN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LC_INPUTS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWOUT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOUT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCEOUT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FORCEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCESTS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FORCESTS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGEN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGEN;

};

#define LCU_0 (*(volatile struct LCU_0_tag *) 0x40098200)

struct LCU_0_LC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_INT_EN:4;
      uint64_t reservedSpace0:4;
      uint64_t LUT_DMA_EN:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_INT_EN:4;
      uint64_t reservedSpace2:4;
      uint64_t FORCE_DMA_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_INTDMAEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_STS:4;
      uint64_t reservedSpace0:4;
      uint64_t FORCESTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPOL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_OUTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_FILT:8;
      uint64_t reservedSpace0:8;
      uint64_t FORCE_POL:3;
      uint64_t reservedSpace1:5;
      uint64_t COMB_EN:3;
      uint64_t reservedSpace2:1;
      uint64_t COMB_FORCE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FFILT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_SENSE0:4;
      uint64_t FORCE_MODE0:2;
      uint64_t SYNC_SEL0:2;
      uint64_t FORCE_SENSE1:4;
      uint64_t FORCE_MODE1:2;
      uint64_t SYNC_SEL1:2;
      uint64_t FORCE_SENSE2:4;
      uint64_t FORCE_MODE2:2;
      uint64_t SYNC_SEL2:2;
      uint64_t FORCE_SENSE3:4;
      uint64_t FORCE_MODE3:2;
      uint64_t SYNC_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_MODE:4;
      uint64_t reservedSpace0:4;
      uint64_t SW_SYNC_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_SCTRL;

};

#define LCU_0_LC_0 (*(volatile struct LCU_0_LC_0_tag *) 0x40098000)

struct LCU_0_LC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_INT_EN:4;
      uint64_t reservedSpace0:4;
      uint64_t LUT_DMA_EN:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_INT_EN:4;
      uint64_t reservedSpace2:4;
      uint64_t FORCE_DMA_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_INTDMAEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_STS:4;
      uint64_t reservedSpace0:4;
      uint64_t FORCESTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPOL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_OUTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_FILT:8;
      uint64_t reservedSpace0:8;
      uint64_t FORCE_POL:3;
      uint64_t reservedSpace1:5;
      uint64_t COMB_EN:3;
      uint64_t reservedSpace2:1;
      uint64_t COMB_FORCE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FFILT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_SENSE0:4;
      uint64_t FORCE_MODE0:2;
      uint64_t SYNC_SEL0:2;
      uint64_t FORCE_SENSE1:4;
      uint64_t FORCE_MODE1:2;
      uint64_t SYNC_SEL1:2;
      uint64_t FORCE_SENSE2:4;
      uint64_t FORCE_MODE2:2;
      uint64_t SYNC_SEL2:2;
      uint64_t FORCE_SENSE3:4;
      uint64_t FORCE_MODE3:2;
      uint64_t SYNC_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_MODE:4;
      uint64_t reservedSpace0:4;
      uint64_t SW_SYNC_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_SCTRL;

};

#define LCU_0_LC_1 (*(volatile struct LCU_0_LC_1_tag *) 0x40098040)

struct LCU_0_LC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_INT_EN:4;
      uint64_t reservedSpace0:4;
      uint64_t LUT_DMA_EN:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_INT_EN:4;
      uint64_t reservedSpace2:4;
      uint64_t FORCE_DMA_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_INTDMAEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_STS:4;
      uint64_t reservedSpace0:4;
      uint64_t FORCESTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPOL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_OUTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_FILT:8;
      uint64_t reservedSpace0:8;
      uint64_t FORCE_POL:3;
      uint64_t reservedSpace1:5;
      uint64_t COMB_EN:3;
      uint64_t reservedSpace2:1;
      uint64_t COMB_FORCE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FFILT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_SENSE0:4;
      uint64_t FORCE_MODE0:2;
      uint64_t SYNC_SEL0:2;
      uint64_t FORCE_SENSE1:4;
      uint64_t FORCE_MODE1:2;
      uint64_t SYNC_SEL1:2;
      uint64_t FORCE_SENSE2:4;
      uint64_t FORCE_MODE2:2;
      uint64_t SYNC_SEL2:2;
      uint64_t FORCE_SENSE3:4;
      uint64_t FORCE_MODE3:2;
      uint64_t SYNC_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_MODE:4;
      uint64_t reservedSpace0:4;
      uint64_t SW_SYNC_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_SCTRL;

};

#define LCU_0_LC_2 (*(volatile struct LCU_0_LC_2_tag *) 0x40098080)

struct LCU_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUXSEL_11;

  uint8_t res0[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP:1;
      uint64_t reservedSpace0:6;
      uint64_t INCL_MUXES:1;
      uint64_t NUM_SYNCS:8;
      uint64_t NUM_FORCES:8;
      uint64_t NUM_LOGIC_CELLS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWVALUE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWVALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTEN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LC_INPUTS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWOUT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOUT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCEOUT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FORCEOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCESTS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FORCESTS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGEN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGEN;

};

#define LCU_1 (*(volatile struct LCU_1_tag *) 0x4009c200)

struct LCU_1_LC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_INT_EN:4;
      uint64_t reservedSpace0:4;
      uint64_t LUT_DMA_EN:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_INT_EN:4;
      uint64_t reservedSpace2:4;
      uint64_t FORCE_DMA_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_INTDMAEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_STS:4;
      uint64_t reservedSpace0:4;
      uint64_t FORCESTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPOL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_OUTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_FILT:8;
      uint64_t reservedSpace0:8;
      uint64_t FORCE_POL:3;
      uint64_t reservedSpace1:5;
      uint64_t COMB_EN:3;
      uint64_t reservedSpace2:1;
      uint64_t COMB_FORCE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FFILT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_SENSE0:4;
      uint64_t FORCE_MODE0:2;
      uint64_t SYNC_SEL0:2;
      uint64_t FORCE_SENSE1:4;
      uint64_t FORCE_MODE1:2;
      uint64_t SYNC_SEL1:2;
      uint64_t FORCE_SENSE2:4;
      uint64_t FORCE_MODE2:2;
      uint64_t SYNC_SEL2:2;
      uint64_t FORCE_SENSE3:4;
      uint64_t FORCE_MODE3:2;
      uint64_t SYNC_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_MODE:4;
      uint64_t reservedSpace0:4;
      uint64_t SW_SYNC_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_SCTRL;

};

#define LCU_1_LC_0 (*(volatile struct LCU_1_LC_0_tag *) 0x4009c000)

struct LCU_1_LC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_INT_EN:4;
      uint64_t reservedSpace0:4;
      uint64_t LUT_DMA_EN:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_INT_EN:4;
      uint64_t reservedSpace2:4;
      uint64_t FORCE_DMA_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_INTDMAEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_STS:4;
      uint64_t reservedSpace0:4;
      uint64_t FORCESTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPOL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_OUTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_FILT:8;
      uint64_t reservedSpace0:8;
      uint64_t FORCE_POL:3;
      uint64_t reservedSpace1:5;
      uint64_t COMB_EN:3;
      uint64_t reservedSpace2:1;
      uint64_t COMB_FORCE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FFILT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_SENSE0:4;
      uint64_t FORCE_MODE0:2;
      uint64_t SYNC_SEL0:2;
      uint64_t FORCE_SENSE1:4;
      uint64_t FORCE_MODE1:2;
      uint64_t SYNC_SEL1:2;
      uint64_t FORCE_SENSE2:4;
      uint64_t FORCE_MODE2:2;
      uint64_t SYNC_SEL2:2;
      uint64_t FORCE_SENSE3:4;
      uint64_t FORCE_MODE3:2;
      uint64_t SYNC_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_MODE:4;
      uint64_t reservedSpace0:4;
      uint64_t SW_SYNC_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_SCTRL;

};

#define LCU_1_LC_1 (*(volatile struct LCU_1_LC_1_tag *) 0x4009c040)

struct LCU_1_LC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUTCTRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_LUTCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_FALL_FILT:16;
      uint64_t LUT_RISE_FILT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FILT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_INT_EN:4;
      uint64_t reservedSpace0:4;
      uint64_t LUT_DMA_EN:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_INT_EN:4;
      uint64_t reservedSpace2:4;
      uint64_t FORCE_DMA_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_INTDMAEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_STS:4;
      uint64_t reservedSpace0:4;
      uint64_t FORCESTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPOL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_OUTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_FILT:8;
      uint64_t reservedSpace0:8;
      uint64_t FORCE_POL:3;
      uint64_t reservedSpace1:5;
      uint64_t COMB_EN:3;
      uint64_t reservedSpace2:1;
      uint64_t COMB_FORCE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FFILT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FORCE_SENSE0:4;
      uint64_t FORCE_MODE0:2;
      uint64_t SYNC_SEL0:2;
      uint64_t FORCE_SENSE1:4;
      uint64_t FORCE_MODE1:2;
      uint64_t SYNC_SEL1:2;
      uint64_t FORCE_SENSE2:4;
      uint64_t FORCE_MODE2:2;
      uint64_t SYNC_SEL2:2;
      uint64_t FORCE_SENSE3:4;
      uint64_t FORCE_MODE3:2;
      uint64_t SYNC_SEL3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_FCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_MODE:4;
      uint64_t reservedSpace0:4;
      uint64_t SW_SYNC_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LC_SCTRL;

};

#define LCU_1_LC_2 (*(volatile struct LCU_1_LC_2_tag *) 0x4009c080)

struct ADC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t ADCLKSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORTCHAIN:1;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:2;
      uint64_t AVGEN:1;
      uint64_t reservedSpace2:3;
      uint64_t STCL:1;
      uint64_t BCTU_MODE:1;
      uint64_t BCTUEN:1;
      uint64_t reservedSpace3:2;
      uint64_t JSTART:1;
      uint64_t JEDGE:1;
      uint64_t JTRGEN:1;
      uint64_t reservedSpace4:1;
      uint64_t NSTART:1;
      uint64_t XSTRTEN:1;
      uint64_t EDGE:1;
      uint64_t TRGEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MODE:1;
      uint64_t WLSIDE:1;
      uint64_t OWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCSTATUS:3;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t reservedSpace1:3;
      uint64_t CHADDR:7;
      uint64_t BCTUSTART:1;
      uint64_t reservedSpace2:1;
      uint64_t SELF_TEST_S:1;
      uint64_t reservedSpace3:1;
      uint64_t JSTART:1;
      uint64_t reservedSpace4:2;
      uint64_t JABORT:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace5:6;
      uint64_t CALIBRTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECH:1;
      uint64_t EOC:1;
      uint64_t JECH:1;
      uint64_t JEOC:1;
      uint64_t EOBCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIEOCF0:1;
      uint64_t PIEOCF1:1;
      uint64_t PIEOCF2:1;
      uint64_t PIEOCF3:1;
      uint64_t PIEOCF4:1;
      uint64_t PIEOCF5:1;
      uint64_t PIEOCF6:1;
      uint64_t PIEOCF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIEOCF0:1;
      uint64_t SIEOCF1:1;
      uint64_t SIEOCF2:1;
      uint64_t SIEOCF3:1;
      uint64_t SIEOCF4:1;
      uint64_t SIEOCF5:1;
      uint64_t SIEOCF6:1;
      uint64_t SIEOCF7:1;
      uint64_t SIEOCF8:1;
      uint64_t SIEOCF9:1;
      uint64_t SIEOCF10:1;
      uint64_t SIEOCF11:1;
      uint64_t SIEOCF12:1;
      uint64_t SIEOCF13:1;
      uint64_t SIEOCF14:1;
      uint64_t SIEOCF15:1;
      uint64_t SIEOCF16:1;
      uint64_t SIEOCF17:1;
      uint64_t SIEOCF18:1;
      uint64_t SIEOCF19:1;
      uint64_t SIEOCF20:1;
      uint64_t SIEOCF21:1;
      uint64_t SIEOCF22:1;
      uint64_t SIEOCF23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIEOCF0:1;
      uint64_t EIEOCF1:1;
      uint64_t EIEOCF2:1;
      uint64_t EIEOCF3:1;
      uint64_t EIEOCF4:1;
      uint64_t EIEOCF5:1;
      uint64_t EIEOCF6:1;
      uint64_t EIEOCF7:1;
      uint64_t EIEOCF8:1;
      uint64_t EIEOCF9:1;
      uint64_t EIEOCF10:1;
      uint64_t EIEOCF11:1;
      uint64_t EIEOCF12:1;
      uint64_t EIEOCF13:1;
      uint64_t EIEOCF14:1;
      uint64_t EIEOCF15:1;
      uint64_t EIEOCF16:1;
      uint64_t EIEOCF17:1;
      uint64_t EIEOCF18:1;
      uint64_t EIEOCF19:1;
      uint64_t EIEOCF20:1;
      uint64_t EIEOCF21:1;
      uint64_t EIEOCF22:1;
      uint64_t EIEOCF23:1;
      uint64_t EIEOCF24:1;
      uint64_t EIEOCF25:1;
      uint64_t EIEOCF26:1;
      uint64_t EIEOCF27:1;
      uint64_t EIEOCF28:1;
      uint64_t EIEOCF29:1;
      uint64_t EIEOCF30:1;
      uint64_t EIEOCF31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKECH:1;
      uint64_t MSKEOC:1;
      uint64_t MSKJECH:1;
      uint64_t MSKJEOC:1;
      uint64_t MSKEOBCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIEOCIEN0:1;
      uint64_t PIEOCIEN1:1;
      uint64_t PIEOCIEN2:1;
      uint64_t PIEOCIEN3:1;
      uint64_t PIEOCIEN4:1;
      uint64_t PIEOCIEN5:1;
      uint64_t PIEOCIEN6:1;
      uint64_t PIEOCIEN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIEOCIEN0:1;
      uint64_t SIEOCIEN1:1;
      uint64_t SIEOCIEN2:1;
      uint64_t SIEOCIEN3:1;
      uint64_t SIEOCIEN4:1;
      uint64_t SIEOCIEN5:1;
      uint64_t SIEOCIEN6:1;
      uint64_t SIEOCIEN7:1;
      uint64_t SIEOCIEN8:1;
      uint64_t SIEOCIEN9:1;
      uint64_t SIEOCIEN10:1;
      uint64_t SIEOCIEN11:1;
      uint64_t SIEOCIEN12:1;
      uint64_t SIEOCIEN13:1;
      uint64_t SIEOCIEN14:1;
      uint64_t SIEOCIEN15:1;
      uint64_t SIEOCIEN16:1;
      uint64_t SIEOCIEN17:1;
      uint64_t SIEOCIEN18:1;
      uint64_t SIEOCIEN19:1;
      uint64_t SIEOCIEN20:1;
      uint64_t SIEOCIEN21:1;
      uint64_t SIEOCIEN22:1;
      uint64_t SIEOCIEN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIEOCIEN0:1;
      uint64_t EIEOCIEN1:1;
      uint64_t EIEOCIEN2:1;
      uint64_t EIEOCIEN3:1;
      uint64_t EIEOCIEN4:1;
      uint64_t EIEOCIEN5:1;
      uint64_t EIEOCIEN6:1;
      uint64_t EIEOCIEN7:1;
      uint64_t EIEOCIEN8:1;
      uint64_t EIEOCIEN9:1;
      uint64_t EIEOCIEN10:1;
      uint64_t EIEOCIEN11:1;
      uint64_t EIEOCIEN12:1;
      uint64_t EIEOCIEN13:1;
      uint64_t EIEOCIEN14:1;
      uint64_t EIEOCIEN15:1;
      uint64_t EIEOCIEN16:1;
      uint64_t EIEOCIEN17:1;
      uint64_t EIEOCIEN18:1;
      uint64_t EIEOCIEN19:1;
      uint64_t EIEOCIEN20:1;
      uint64_t EIEOCIEN21:1;
      uint64_t EIEOCIEN22:1;
      uint64_t EIEOCIEN23:1;
      uint64_t EIEOCIEN24:1;
      uint64_t EIEOCIEN25:1;
      uint64_t EIEOCIEN26:1;
      uint64_t EIEOCIEN27:1;
      uint64_t EIEOCIEN28:1;
      uint64_t EIEOCIEN29:1;
      uint64_t EIEOCIEN30:1;
      uint64_t EIEOCIEN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAWIF1:1;
      uint64_t HAWIF1:1;
      uint64_t LAWIF2:1;
      uint64_t HAWIF2:1;
      uint64_t LAWIF3:1;
      uint64_t HAWIF3:1;
      uint64_t LAWIF4:1;
      uint64_t HAWIF4:1;
      uint64_t LAWIF5:1;
      uint64_t HAWIF5:1;
      uint64_t LAWIF6:1;
      uint64_t HAWIF6:1;
      uint64_t LAWIF7:1;
      uint64_t HAWIF7:1;
      uint64_t LAWIF8:1;
      uint64_t HAWIF8:1;
      uint64_t LAWIF9:1;
      uint64_t HAWIF9:1;
      uint64_t LAWIF10:1;
      uint64_t HAWIF10:1;
      uint64_t LAWIF11:1;
      uint64_t HAWIF11:1;
      uint64_t LAWIF12:1;
      uint64_t HAWIF12:1;
      uint64_t LAWIF13:1;
      uint64_t HAWIF13:1;
      uint64_t LAWIF14:1;
      uint64_t HAWIF14:1;
      uint64_t LAWIF15:1;
      uint64_t HAWIF15:1;
      uint64_t LAWIF16:1;
      uint64_t HAWIF16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAWIFEN1:1;
      uint64_t HDWIFEN1:1;
      uint64_t LAWIFEN2:1;
      uint64_t HDWIFEN2:1;
      uint64_t LAWIFEN3:1;
      uint64_t HDWIFEN3:1;
      uint64_t LAWIFEN4:1;
      uint64_t HDWIFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTIMR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIDMAREN0:1;
      uint64_t PIDMAREN1:1;
      uint64_t PIDMAREN2:1;
      uint64_t PIDMAREN3:1;
      uint64_t PIDMAREN4:1;
      uint64_t PIDMAREN5:1;
      uint64_t PIDMAREN6:1;
      uint64_t PIDMAREN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIDMAREN0:1;
      uint64_t SIDMAREN1:1;
      uint64_t SIDMAREN2:1;
      uint64_t SIDMAREN3:1;
      uint64_t SIDMAREN4:1;
      uint64_t SIDMAREN5:1;
      uint64_t SIDMAREN6:1;
      uint64_t SIDMAREN7:1;
      uint64_t SIDMAREN8:1;
      uint64_t SIDMAREN9:1;
      uint64_t SIDMAREN10:1;
      uint64_t SIDMAREN11:1;
      uint64_t SIDMAREN12:1;
      uint64_t SIDMAREN13:1;
      uint64_t SIDMAREN14:1;
      uint64_t SIDMAREN15:1;
      uint64_t SIDMAREN16:1;
      uint64_t SIDMAREN17:1;
      uint64_t SIDMAREN18:1;
      uint64_t SIDMAREN19:1;
      uint64_t SIDMAREN20:1;
      uint64_t SIDMAREN21:1;
      uint64_t SIDMAREN22:1;
      uint64_t SIDMAREN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIDMAREN0:1;
      uint64_t EIDMAREN1:1;
      uint64_t EIDMAREN2:1;
      uint64_t EIDMAREN3:1;
      uint64_t EIDMAREN4:1;
      uint64_t EIDMAREN5:1;
      uint64_t EIDMAREN6:1;
      uint64_t EIDMAREN7:1;
      uint64_t EIDMAREN8:1;
      uint64_t EIDMAREN9:1;
      uint64_t EIDMAREN10:1;
      uint64_t EIDMAREN11:1;
      uint64_t EIDMAREN12:1;
      uint64_t EIDMAREN13:1;
      uint64_t EIDMAREN14:1;
      uint64_t EIDMAREN15:1;
      uint64_t EIDMAREN16:1;
      uint64_t EIDMAREN17:1;
      uint64_t EIDMAREN18:1;
      uint64_t EIDMAREN19:1;
      uint64_t EIDMAREN20:1;
      uint64_t EIDMAREN21:1;
      uint64_t EIDMAREN22:1;
      uint64_t EIDMAREN23:1;
      uint64_t EIDMAREN24:1;
      uint64_t EIDMAREN25:1;
      uint64_t EIDMAREN26:1;
      uint64_t EIDMAREN27:1;
      uint64_t EIDMAREN28:1;
      uint64_t EIDMAREN29:1;
      uint64_t EIDMAREN30:1;
      uint64_t EIDMAREN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR2;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:1;
      uint64_t reservedSpace0:1;
      uint64_t PREVAL1:1;
      uint64_t reservedSpace1:1;
      uint64_t PREVAL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
      uint64_t PRES8:1;
      uint64_t PRES9:1;
      uint64_t PRES10:1;
      uint64_t PRES11:1;
      uint64_t PRES12:1;
      uint64_t PRES13:1;
      uint64_t PRES14:1;
      uint64_t PRES15:1;
      uint64_t PRES16:1;
      uint64_t PRES17:1;
      uint64_t PRES18:1;
      uint64_t PRES19:1;
      uint64_t PRES20:1;
      uint64_t PRES21:1;
      uint64_t PRES22:1;
      uint64_t PRES23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
      uint64_t PRES8:1;
      uint64_t PRES9:1;
      uint64_t PRES10:1;
      uint64_t PRES11:1;
      uint64_t PRES12:1;
      uint64_t PRES13:1;
      uint64_t PRES14:1;
      uint64_t PRES15:1;
      uint64_t PRES16:1;
      uint64_t PRES17:1;
      uint64_t PRES18:1;
      uint64_t PRES19:1;
      uint64_t PRES20:1;
      uint64_t PRES21:1;
      uint64_t PRES22:1;
      uint64_t PRES23:1;
      uint64_t PRES24:1;
      uint64_t PRES25:1;
      uint64_t PRES26:1;
      uint64_t PRES27:1;
      uint64_t PRES28:1;
      uint64_t PRES29:1;
      uint64_t PRES30:1;
      uint64_t PRES31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH32:1;
      uint64_t CH33:1;
      uint64_t CH34:1;
      uint64_t CH35:1;
      uint64_t CH36:1;
      uint64_t CH37:1;
      uint64_t CH38:1;
      uint64_t CH39:1;
      uint64_t CH40:1;
      uint64_t CH41:1;
      uint64_t CH42:1;
      uint64_t CH43:1;
      uint64_t CH44:1;
      uint64_t CH45:1;
      uint64_t CH46:1;
      uint64_t CH47:1;
      uint64_t CH48:1;
      uint64_t CH49:1;
      uint64_t CH50:1;
      uint64_t CH51:1;
      uint64_t CH52:1;
      uint64_t CH53:1;
      uint64_t CH54:1;
      uint64_t CH55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH64:1;
      uint64_t CH65:1;
      uint64_t CH66:1;
      uint64_t CH67:1;
      uint64_t CH68:1;
      uint64_t CH69:1;
      uint64_t CH70:1;
      uint64_t CH71:1;
      uint64_t CH72:1;
      uint64_t CH73:1;
      uint64_t CH74:1;
      uint64_t CH75:1;
      uint64_t CH76:1;
      uint64_t CH77:1;
      uint64_t CH78:1;
      uint64_t CH79:1;
      uint64_t CH80:1;
      uint64_t CH81:1;
      uint64_t CH82:1;
      uint64_t CH83:1;
      uint64_t CH84:1;
      uint64_t CH85:1;
      uint64_t CH86:1;
      uint64_t CH87:1;
      uint64_t CH88:1;
      uint64_t CH89:1;
      uint64_t CH90:1;
      uint64_t CH91:1;
      uint64_t CH92:1;
      uint64_t CH93:1;
      uint64_t CH94:1;
      uint64_t CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR2;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH32:1;
      uint64_t CH33:1;
      uint64_t CH34:1;
      uint64_t CH35:1;
      uint64_t CH36:1;
      uint64_t CH37:1;
      uint64_t CH38:1;
      uint64_t CH39:1;
      uint64_t CH40:1;
      uint64_t CH41:1;
      uint64_t CH42:1;
      uint64_t CH43:1;
      uint64_t CH44:1;
      uint64_t CH45:1;
      uint64_t CH46:1;
      uint64_t CH47:1;
      uint64_t CH48:1;
      uint64_t CH49:1;
      uint64_t CH50:1;
      uint64_t CH51:1;
      uint64_t CH52:1;
      uint64_t CH53:1;
      uint64_t CH54:1;
      uint64_t CH55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH64:1;
      uint64_t CH65:1;
      uint64_t CH66:1;
      uint64_t CH67:1;
      uint64_t CH68:1;
      uint64_t CH69:1;
      uint64_t CH70:1;
      uint64_t CH71:1;
      uint64_t CH72:1;
      uint64_t CH73:1;
      uint64_t CH74:1;
      uint64_t CH75:1;
      uint64_t CH76:1;
      uint64_t CH77:1;
      uint64_t CH78:1;
      uint64_t CH79:1;
      uint64_t CH80:1;
      uint64_t CH81:1;
      uint64_t CH82:1;
      uint64_t CH83:1;
      uint64_t CH84:1;
      uint64_t CH85:1;
      uint64_t CH86:1;
      uint64_t CH87:1;
      uint64_t CH88:1;
      uint64_t CH89:1;
      uint64_t CH90:1;
      uint64_t CH91:1;
      uint64_t CH92:1;
      uint64_t CH93:1;
      uint64_t CH94:1;
      uint64_t CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDEDR;

  uint8_t res8[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR7;

  uint8_t res9[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_23;

  uint8_t res10[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_31;

  uint8_t res11[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_0:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI0_1:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI0_2:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI0_3:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI0_4:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI0_5:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI0_6:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI0_7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRPI0;

  uint32_t CWSELRPI1;
  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_0:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_0:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_0:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_0:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_0:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_0:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_0:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_1:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_1:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_1:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_1:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_1:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_1:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_1:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_2:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_2:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_2:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_2:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_2:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_2:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_2:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI2;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_0:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI0_1:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI0_2:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI0_3:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI0_4:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI0_5:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI0_6:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI0_7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELREI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI1_8:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_9:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI1_10:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI1_11:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI1_12:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI1_13:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI1_14:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI1_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELREI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI2_16:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI2_17:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_18:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI2_19:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI2_20:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI2_21:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI2_22:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI2_23:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELREI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI3_24:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI3_25:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI3_26:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_27:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI3_28:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI3_29:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI3_30:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI3_31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELREI3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN0:1;
      uint64_t CWEN1:1;
      uint64_t CWEN2:1;
      uint64_t CWEN3:1;
      uint64_t CWEN4:1;
      uint64_t CWEN5:1;
      uint64_t CWEN6:1;
      uint64_t CWEN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN32:1;
      uint64_t CWEN33:1;
      uint64_t CWEN34:1;
      uint64_t CWEN35:1;
      uint64_t CWEN36:1;
      uint64_t CWEN37:1;
      uint64_t CWEN38:1;
      uint64_t CWEN39:1;
      uint64_t CWEN40:1;
      uint64_t CWEN41:1;
      uint64_t CWEN42:1;
      uint64_t CWEN43:1;
      uint64_t CWEN44:1;
      uint64_t CWEN45:1;
      uint64_t CWEN46:1;
      uint64_t CWEN47:1;
      uint64_t CWEN48:1;
      uint64_t CWEN49:1;
      uint64_t CWEN50:1;
      uint64_t CWEN51:1;
      uint64_t CWEN52:1;
      uint64_t CWEN53:1;
      uint64_t CWEN54:1;
      uint64_t CWEN55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN64:1;
      uint64_t CWEN65:1;
      uint64_t CWEN66:1;
      uint64_t CWEN67:1;
      uint64_t CWEN68:1;
      uint64_t CWEN69:1;
      uint64_t CWEN70:1;
      uint64_t CWEN71:1;
      uint64_t CWEN72:1;
      uint64_t CWEN73:1;
      uint64_t CWEN74:1;
      uint64_t CWEN75:1;
      uint64_t CWEN76:1;
      uint64_t CWEN77:1;
      uint64_t CWEN78:1;
      uint64_t CWEN79:1;
      uint64_t CWEN80:1;
      uint64_t CWEN81:1;
      uint64_t CWEN82:1;
      uint64_t CWEN83:1;
      uint64_t CWEN84:1;
      uint64_t CWEN85:1;
      uint64_t CWEN86:1;
      uint64_t CWEN87:1;
      uint64_t CWEN88:1;
      uint64_t CWEN89:1;
      uint64_t CWEN90:1;
      uint64_t CWEN91:1;
      uint64_t CWEN92:1;
      uint64_t CWEN93:1;
      uint64_t CWEN94:1;
      uint64_t CWEN95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR2;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
      uint64_t AWOR_CH8:1;
      uint64_t AWOR_CH9:1;
      uint64_t AWOR_CH10:1;
      uint64_t AWOR_CH11:1;
      uint64_t AWOR_CH12:1;
      uint64_t AWOR_CH13:1;
      uint64_t AWOR_CH14:1;
      uint64_t AWOR_CH15:1;
      uint64_t AWOR_CH16:1;
      uint64_t AWOR_CH17:1;
      uint64_t AWOR_CH18:1;
      uint64_t AWOR_CH19:1;
      uint64_t AWOR_CH20:1;
      uint64_t AWOR_CH21:1;
      uint64_t AWOR_CH22:1;
      uint64_t AWOR_CH23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
      uint64_t AWOR_CH8:1;
      uint64_t AWOR_CH9:1;
      uint64_t AWOR_CH10:1;
      uint64_t AWOR_CH11:1;
      uint64_t AWOR_CH12:1;
      uint64_t AWOR_CH13:1;
      uint64_t AWOR_CH14:1;
      uint64_t AWOR_CH15:1;
      uint64_t AWOR_CH16:1;
      uint64_t AWOR_CH17:1;
      uint64_t AWOR_CH18:1;
      uint64_t AWOR_CH19:1;
      uint64_t AWOR_CH20:1;
      uint64_t AWOR_CH21:1;
      uint64_t AWOR_CH22:1;
      uint64_t AWOR_CH23:1;
      uint64_t AWOR_CH24:1;
      uint64_t AWOR_CH25:1;
      uint64_t AWOR_CH26:1;
      uint64_t AWOR_CH27:1;
      uint64_t AWOR_CH28:1;
      uint64_t AWOR_CH29:1;
      uint64_t AWOR_CH30:1;
      uint64_t AWOR_CH31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR2;

  uint8_t res15[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INPSAMP_S:8;
      uint64_t reservedSpace1:8;
      uint64_t INPSAMP_C:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMA_S:1;
      uint64_t reservedSpace0:1;
      uint64_t FMA_C:1;
      uint64_t FMA_WDTERR:1;
      uint64_t FMA_WDSERR:1;
      uint64_t reservedSpace1:2;
      uint64_t EN:1;
      uint64_t reservedSpace2:3;
      uint64_t MSKERR_S0:1;
      uint64_t MSKERR_S1:1;
      uint64_t MSKERR_S2:1;
      uint64_t reservedSpace3:1;
      uint64_t MSKERR_C:1;
      uint64_t MSKWDG_EOA_S:1;
      uint64_t reservedSpace4:1;
      uint64_t MSKWDG_EOA_C:1;
      uint64_t reservedSpace5:4;
      uint64_t MSKST_EOC:1;
      uint64_t reservedSpace6:1;
      uint64_t MSKWDTERR:1;
      uint64_t SERR:1;
      uint64_t MSKWDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEP:5;
      uint64_t reservedSpace0:3;
      uint64_t ALG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:8;
      uint64_t reservedSpace0:8;
      uint64_t WDT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t STEP_C:5;
      uint64_t reservedSpace1:1;
      uint64_t ERR_S0:1;
      uint64_t ERR_S1:1;
      uint64_t ERR_S2:1;
      uint64_t reservedSpace2:1;
      uint64_t ERR_C:1;
      uint64_t WDG_EOA_S:1;
      uint64_t reservedSpace3:1;
      uint64_t WDG_EOA_C:1;
      uint64_t reservedSpace4:4;
      uint64_t ST_EOC:1;
      uint64_t OVERWR:1;
      uint64_t WDTERR:1;
      uint64_t reservedSpace5:1;
      uint64_t WDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:15;
      uint64_t reservedSpace0:1;
      uint64_t DATA1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res16[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:15;
      uint64_t reservedSpace0:3;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  uint8_t res17[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:14;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:16;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:16;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:14;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t HSEN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMSIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t TEST_FAIL:1;
      uint64_t AVG_EN:1;
      uint64_t NR_SMPL:2;
      uint64_t reservedSpace1:7;
      uint64_t CALSTFUL:1;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
      uint64_t RESN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET_USER:8;
      uint64_t reservedSpace0:8;
      uint64_t GAIN_USER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFSGNUSR;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t ENX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAL2;

};

#define ADC_0 (*(volatile struct ADC_0_tag *) 0x400a0000)

struct ADC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t ADCLKSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORTCHAIN:1;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:2;
      uint64_t AVGEN:1;
      uint64_t reservedSpace2:3;
      uint64_t STCL:1;
      uint64_t BCTU_MODE:1;
      uint64_t BCTUEN:1;
      uint64_t reservedSpace3:2;
      uint64_t JSTART:1;
      uint64_t JEDGE:1;
      uint64_t JTRGEN:1;
      uint64_t reservedSpace4:1;
      uint64_t NSTART:1;
      uint64_t XSTRTEN:1;
      uint64_t EDGE:1;
      uint64_t TRGEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MODE:1;
      uint64_t WLSIDE:1;
      uint64_t OWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCSTATUS:3;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t reservedSpace1:3;
      uint64_t CHADDR:7;
      uint64_t BCTUSTART:1;
      uint64_t reservedSpace2:1;
      uint64_t SELF_TEST_S:1;
      uint64_t reservedSpace3:1;
      uint64_t JSTART:1;
      uint64_t reservedSpace4:2;
      uint64_t JABORT:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace5:6;
      uint64_t CALIBRTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECH:1;
      uint64_t EOC:1;
      uint64_t JECH:1;
      uint64_t JEOC:1;
      uint64_t EOBCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIEOCF0:1;
      uint64_t PIEOCF1:1;
      uint64_t PIEOCF2:1;
      uint64_t PIEOCF3:1;
      uint64_t PIEOCF4:1;
      uint64_t PIEOCF5:1;
      uint64_t PIEOCF6:1;
      uint64_t PIEOCF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIEOCF0:1;
      uint64_t SIEOCF1:1;
      uint64_t SIEOCF2:1;
      uint64_t SIEOCF3:1;
      uint64_t SIEOCF4:1;
      uint64_t SIEOCF5:1;
      uint64_t SIEOCF6:1;
      uint64_t SIEOCF7:1;
      uint64_t SIEOCF8:1;
      uint64_t SIEOCF9:1;
      uint64_t SIEOCF10:1;
      uint64_t SIEOCF11:1;
      uint64_t SIEOCF12:1;
      uint64_t SIEOCF13:1;
      uint64_t SIEOCF14:1;
      uint64_t SIEOCF15:1;
      uint64_t SIEOCF16:1;
      uint64_t SIEOCF17:1;
      uint64_t SIEOCF18:1;
      uint64_t SIEOCF19:1;
      uint64_t SIEOCF20:1;
      uint64_t SIEOCF21:1;
      uint64_t SIEOCF22:1;
      uint64_t SIEOCF23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIEOCF0:1;
      uint64_t EIEOCF1:1;
      uint64_t EIEOCF2:1;
      uint64_t EIEOCF3:1;
      uint64_t EIEOCF4:1;
      uint64_t EIEOCF5:1;
      uint64_t EIEOCF6:1;
      uint64_t EIEOCF7:1;
      uint64_t EIEOCF8:1;
      uint64_t EIEOCF9:1;
      uint64_t EIEOCF10:1;
      uint64_t EIEOCF11:1;
      uint64_t EIEOCF12:1;
      uint64_t EIEOCF13:1;
      uint64_t EIEOCF14:1;
      uint64_t EIEOCF15:1;
      uint64_t EIEOCF16:1;
      uint64_t EIEOCF17:1;
      uint64_t EIEOCF18:1;
      uint64_t EIEOCF19:1;
      uint64_t EIEOCF20:1;
      uint64_t EIEOCF21:1;
      uint64_t EIEOCF22:1;
      uint64_t EIEOCF23:1;
      uint64_t EIEOCF24:1;
      uint64_t EIEOCF25:1;
      uint64_t EIEOCF26:1;
      uint64_t EIEOCF27:1;
      uint64_t EIEOCF28:1;
      uint64_t EIEOCF29:1;
      uint64_t EIEOCF30:1;
      uint64_t EIEOCF31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKECH:1;
      uint64_t MSKEOC:1;
      uint64_t MSKJECH:1;
      uint64_t MSKJEOC:1;
      uint64_t MSKEOBCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIEOCIEN0:1;
      uint64_t PIEOCIEN1:1;
      uint64_t PIEOCIEN2:1;
      uint64_t PIEOCIEN3:1;
      uint64_t PIEOCIEN4:1;
      uint64_t PIEOCIEN5:1;
      uint64_t PIEOCIEN6:1;
      uint64_t PIEOCIEN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIEOCIEN0:1;
      uint64_t SIEOCIEN1:1;
      uint64_t SIEOCIEN2:1;
      uint64_t SIEOCIEN3:1;
      uint64_t SIEOCIEN4:1;
      uint64_t SIEOCIEN5:1;
      uint64_t SIEOCIEN6:1;
      uint64_t SIEOCIEN7:1;
      uint64_t SIEOCIEN8:1;
      uint64_t SIEOCIEN9:1;
      uint64_t SIEOCIEN10:1;
      uint64_t SIEOCIEN11:1;
      uint64_t SIEOCIEN12:1;
      uint64_t SIEOCIEN13:1;
      uint64_t SIEOCIEN14:1;
      uint64_t SIEOCIEN15:1;
      uint64_t SIEOCIEN16:1;
      uint64_t SIEOCIEN17:1;
      uint64_t SIEOCIEN18:1;
      uint64_t SIEOCIEN19:1;
      uint64_t SIEOCIEN20:1;
      uint64_t SIEOCIEN21:1;
      uint64_t SIEOCIEN22:1;
      uint64_t SIEOCIEN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIEOCIEN0:1;
      uint64_t EIEOCIEN1:1;
      uint64_t EIEOCIEN2:1;
      uint64_t EIEOCIEN3:1;
      uint64_t EIEOCIEN4:1;
      uint64_t EIEOCIEN5:1;
      uint64_t EIEOCIEN6:1;
      uint64_t EIEOCIEN7:1;
      uint64_t EIEOCIEN8:1;
      uint64_t EIEOCIEN9:1;
      uint64_t EIEOCIEN10:1;
      uint64_t EIEOCIEN11:1;
      uint64_t EIEOCIEN12:1;
      uint64_t EIEOCIEN13:1;
      uint64_t EIEOCIEN14:1;
      uint64_t EIEOCIEN15:1;
      uint64_t EIEOCIEN16:1;
      uint64_t EIEOCIEN17:1;
      uint64_t EIEOCIEN18:1;
      uint64_t EIEOCIEN19:1;
      uint64_t EIEOCIEN20:1;
      uint64_t EIEOCIEN21:1;
      uint64_t EIEOCIEN22:1;
      uint64_t EIEOCIEN23:1;
      uint64_t EIEOCIEN24:1;
      uint64_t EIEOCIEN25:1;
      uint64_t EIEOCIEN26:1;
      uint64_t EIEOCIEN27:1;
      uint64_t EIEOCIEN28:1;
      uint64_t EIEOCIEN29:1;
      uint64_t EIEOCIEN30:1;
      uint64_t EIEOCIEN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAWIF1:1;
      uint64_t HAWIF1:1;
      uint64_t LAWIF2:1;
      uint64_t HAWIF2:1;
      uint64_t LAWIF3:1;
      uint64_t HAWIF3:1;
      uint64_t LAWIF4:1;
      uint64_t HAWIF4:1;
      uint64_t LAWIF5:1;
      uint64_t HAWIF5:1;
      uint64_t LAWIF6:1;
      uint64_t HAWIF6:1;
      uint64_t LAWIF7:1;
      uint64_t HAWIF7:1;
      uint64_t LAWIF8:1;
      uint64_t HAWIF8:1;
      uint64_t LAWIF9:1;
      uint64_t HAWIF9:1;
      uint64_t LAWIF10:1;
      uint64_t HAWIF10:1;
      uint64_t LAWIF11:1;
      uint64_t HAWIF11:1;
      uint64_t LAWIF12:1;
      uint64_t HAWIF12:1;
      uint64_t LAWIF13:1;
      uint64_t HAWIF13:1;
      uint64_t LAWIF14:1;
      uint64_t HAWIF14:1;
      uint64_t LAWIF15:1;
      uint64_t HAWIF15:1;
      uint64_t LAWIF16:1;
      uint64_t HAWIF16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAWIFEN1:1;
      uint64_t HDWIFEN1:1;
      uint64_t LAWIFEN2:1;
      uint64_t HDWIFEN2:1;
      uint64_t LAWIFEN3:1;
      uint64_t HDWIFEN3:1;
      uint64_t LAWIFEN4:1;
      uint64_t HDWIFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTIMR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIDMAREN0:1;
      uint64_t PIDMAREN1:1;
      uint64_t PIDMAREN2:1;
      uint64_t PIDMAREN3:1;
      uint64_t PIDMAREN4:1;
      uint64_t PIDMAREN5:1;
      uint64_t PIDMAREN6:1;
      uint64_t PIDMAREN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIDMAREN0:1;
      uint64_t SIDMAREN1:1;
      uint64_t SIDMAREN2:1;
      uint64_t SIDMAREN3:1;
      uint64_t SIDMAREN4:1;
      uint64_t SIDMAREN5:1;
      uint64_t SIDMAREN6:1;
      uint64_t SIDMAREN7:1;
      uint64_t SIDMAREN8:1;
      uint64_t SIDMAREN9:1;
      uint64_t SIDMAREN10:1;
      uint64_t SIDMAREN11:1;
      uint64_t SIDMAREN12:1;
      uint64_t SIDMAREN13:1;
      uint64_t SIDMAREN14:1;
      uint64_t SIDMAREN15:1;
      uint64_t SIDMAREN16:1;
      uint64_t SIDMAREN17:1;
      uint64_t SIDMAREN18:1;
      uint64_t SIDMAREN19:1;
      uint64_t SIDMAREN20:1;
      uint64_t SIDMAREN21:1;
      uint64_t SIDMAREN22:1;
      uint64_t SIDMAREN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIDMAREN0:1;
      uint64_t EIDMAREN1:1;
      uint64_t EIDMAREN2:1;
      uint64_t EIDMAREN3:1;
      uint64_t EIDMAREN4:1;
      uint64_t EIDMAREN5:1;
      uint64_t EIDMAREN6:1;
      uint64_t EIDMAREN7:1;
      uint64_t EIDMAREN8:1;
      uint64_t EIDMAREN9:1;
      uint64_t EIDMAREN10:1;
      uint64_t EIDMAREN11:1;
      uint64_t EIDMAREN12:1;
      uint64_t EIDMAREN13:1;
      uint64_t EIDMAREN14:1;
      uint64_t EIDMAREN15:1;
      uint64_t EIDMAREN16:1;
      uint64_t EIDMAREN17:1;
      uint64_t EIDMAREN18:1;
      uint64_t EIDMAREN19:1;
      uint64_t EIDMAREN20:1;
      uint64_t EIDMAREN21:1;
      uint64_t EIDMAREN22:1;
      uint64_t EIDMAREN23:1;
      uint64_t EIDMAREN24:1;
      uint64_t EIDMAREN25:1;
      uint64_t EIDMAREN26:1;
      uint64_t EIDMAREN27:1;
      uint64_t EIDMAREN28:1;
      uint64_t EIDMAREN29:1;
      uint64_t EIDMAREN30:1;
      uint64_t EIDMAREN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR2;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:1;
      uint64_t reservedSpace0:1;
      uint64_t PREVAL1:1;
      uint64_t reservedSpace1:1;
      uint64_t PREVAL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
      uint64_t PRES8:1;
      uint64_t PRES9:1;
      uint64_t PRES10:1;
      uint64_t PRES11:1;
      uint64_t PRES12:1;
      uint64_t PRES13:1;
      uint64_t PRES14:1;
      uint64_t PRES15:1;
      uint64_t PRES16:1;
      uint64_t PRES17:1;
      uint64_t PRES18:1;
      uint64_t PRES19:1;
      uint64_t PRES20:1;
      uint64_t PRES21:1;
      uint64_t PRES22:1;
      uint64_t PRES23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
      uint64_t PRES8:1;
      uint64_t PRES9:1;
      uint64_t PRES10:1;
      uint64_t PRES11:1;
      uint64_t PRES12:1;
      uint64_t PRES13:1;
      uint64_t PRES14:1;
      uint64_t PRES15:1;
      uint64_t PRES16:1;
      uint64_t PRES17:1;
      uint64_t PRES18:1;
      uint64_t PRES19:1;
      uint64_t PRES20:1;
      uint64_t PRES21:1;
      uint64_t PRES22:1;
      uint64_t PRES23:1;
      uint64_t PRES24:1;
      uint64_t PRES25:1;
      uint64_t PRES26:1;
      uint64_t PRES27:1;
      uint64_t PRES28:1;
      uint64_t PRES29:1;
      uint64_t PRES30:1;
      uint64_t PRES31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH32:1;
      uint64_t CH33:1;
      uint64_t CH34:1;
      uint64_t CH35:1;
      uint64_t CH36:1;
      uint64_t CH37:1;
      uint64_t CH38:1;
      uint64_t CH39:1;
      uint64_t CH40:1;
      uint64_t CH41:1;
      uint64_t CH42:1;
      uint64_t CH43:1;
      uint64_t CH44:1;
      uint64_t CH45:1;
      uint64_t CH46:1;
      uint64_t CH47:1;
      uint64_t CH48:1;
      uint64_t CH49:1;
      uint64_t CH50:1;
      uint64_t CH51:1;
      uint64_t CH52:1;
      uint64_t CH53:1;
      uint64_t CH54:1;
      uint64_t CH55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH64:1;
      uint64_t CH65:1;
      uint64_t CH66:1;
      uint64_t CH67:1;
      uint64_t CH68:1;
      uint64_t CH69:1;
      uint64_t CH70:1;
      uint64_t CH71:1;
      uint64_t CH72:1;
      uint64_t CH73:1;
      uint64_t CH74:1;
      uint64_t CH75:1;
      uint64_t CH76:1;
      uint64_t CH77:1;
      uint64_t CH78:1;
      uint64_t CH79:1;
      uint64_t CH80:1;
      uint64_t CH81:1;
      uint64_t CH82:1;
      uint64_t CH83:1;
      uint64_t CH84:1;
      uint64_t CH85:1;
      uint64_t CH86:1;
      uint64_t CH87:1;
      uint64_t CH88:1;
      uint64_t CH89:1;
      uint64_t CH90:1;
      uint64_t CH91:1;
      uint64_t CH92:1;
      uint64_t CH93:1;
      uint64_t CH94:1;
      uint64_t CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR2;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH32:1;
      uint64_t CH33:1;
      uint64_t CH34:1;
      uint64_t CH35:1;
      uint64_t CH36:1;
      uint64_t CH37:1;
      uint64_t CH38:1;
      uint64_t CH39:1;
      uint64_t CH40:1;
      uint64_t CH41:1;
      uint64_t CH42:1;
      uint64_t CH43:1;
      uint64_t CH44:1;
      uint64_t CH45:1;
      uint64_t CH46:1;
      uint64_t CH47:1;
      uint64_t CH48:1;
      uint64_t CH49:1;
      uint64_t CH50:1;
      uint64_t CH51:1;
      uint64_t CH52:1;
      uint64_t CH53:1;
      uint64_t CH54:1;
      uint64_t CH55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH64:1;
      uint64_t CH65:1;
      uint64_t CH66:1;
      uint64_t CH67:1;
      uint64_t CH68:1;
      uint64_t CH69:1;
      uint64_t CH70:1;
      uint64_t CH71:1;
      uint64_t CH72:1;
      uint64_t CH73:1;
      uint64_t CH74:1;
      uint64_t CH75:1;
      uint64_t CH76:1;
      uint64_t CH77:1;
      uint64_t CH78:1;
      uint64_t CH79:1;
      uint64_t CH80:1;
      uint64_t CH81:1;
      uint64_t CH82:1;
      uint64_t CH83:1;
      uint64_t CH84:1;
      uint64_t CH85:1;
      uint64_t CH86:1;
      uint64_t CH87:1;
      uint64_t CH88:1;
      uint64_t CH89:1;
      uint64_t CH90:1;
      uint64_t CH91:1;
      uint64_t CH92:1;
      uint64_t CH93:1;
      uint64_t CH94:1;
      uint64_t CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDEDR;

  uint8_t res8[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR7;

  uint8_t res9[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_23;

  uint8_t res10[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECDR_31;

  uint8_t res11[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_0:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI0_1:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI0_2:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI0_3:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI0_4:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI0_5:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI0_6:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI0_7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRPI0;

  uint32_t CWSELRPI1;
  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_0:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_0:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_0:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_0:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_0:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_0:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_0:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_1:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_1:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_1:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_1:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_1:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_1:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_1:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_2:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_2:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_2:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_2:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_2:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_2:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_2:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI2;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_0:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI0_1:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI0_2:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI0_3:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI0_4:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI0_5:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI0_6:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI0_7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELREI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI1_8:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_9:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI1_10:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI1_11:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI1_12:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI1_13:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI1_14:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI1_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELREI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI2_16:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI2_17:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_18:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI2_19:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI2_20:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI2_21:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI2_22:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI2_23:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELREI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI3_24:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI3_25:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI3_26:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_27:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI3_28:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI3_29:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI3_30:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI3_31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELREI3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN0:1;
      uint64_t CWEN1:1;
      uint64_t CWEN2:1;
      uint64_t CWEN3:1;
      uint64_t CWEN4:1;
      uint64_t CWEN5:1;
      uint64_t CWEN6:1;
      uint64_t CWEN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN32:1;
      uint64_t CWEN33:1;
      uint64_t CWEN34:1;
      uint64_t CWEN35:1;
      uint64_t CWEN36:1;
      uint64_t CWEN37:1;
      uint64_t CWEN38:1;
      uint64_t CWEN39:1;
      uint64_t CWEN40:1;
      uint64_t CWEN41:1;
      uint64_t CWEN42:1;
      uint64_t CWEN43:1;
      uint64_t CWEN44:1;
      uint64_t CWEN45:1;
      uint64_t CWEN46:1;
      uint64_t CWEN47:1;
      uint64_t CWEN48:1;
      uint64_t CWEN49:1;
      uint64_t CWEN50:1;
      uint64_t CWEN51:1;
      uint64_t CWEN52:1;
      uint64_t CWEN53:1;
      uint64_t CWEN54:1;
      uint64_t CWEN55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN64:1;
      uint64_t CWEN65:1;
      uint64_t CWEN66:1;
      uint64_t CWEN67:1;
      uint64_t CWEN68:1;
      uint64_t CWEN69:1;
      uint64_t CWEN70:1;
      uint64_t CWEN71:1;
      uint64_t CWEN72:1;
      uint64_t CWEN73:1;
      uint64_t CWEN74:1;
      uint64_t CWEN75:1;
      uint64_t CWEN76:1;
      uint64_t CWEN77:1;
      uint64_t CWEN78:1;
      uint64_t CWEN79:1;
      uint64_t CWEN80:1;
      uint64_t CWEN81:1;
      uint64_t CWEN82:1;
      uint64_t CWEN83:1;
      uint64_t CWEN84:1;
      uint64_t CWEN85:1;
      uint64_t CWEN86:1;
      uint64_t CWEN87:1;
      uint64_t CWEN88:1;
      uint64_t CWEN89:1;
      uint64_t CWEN90:1;
      uint64_t CWEN91:1;
      uint64_t CWEN92:1;
      uint64_t CWEN93:1;
      uint64_t CWEN94:1;
      uint64_t CWEN95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR2;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
      uint64_t AWOR_CH8:1;
      uint64_t AWOR_CH9:1;
      uint64_t AWOR_CH10:1;
      uint64_t AWOR_CH11:1;
      uint64_t AWOR_CH12:1;
      uint64_t AWOR_CH13:1;
      uint64_t AWOR_CH14:1;
      uint64_t AWOR_CH15:1;
      uint64_t AWOR_CH16:1;
      uint64_t AWOR_CH17:1;
      uint64_t AWOR_CH18:1;
      uint64_t AWOR_CH19:1;
      uint64_t AWOR_CH20:1;
      uint64_t AWOR_CH21:1;
      uint64_t AWOR_CH22:1;
      uint64_t AWOR_CH23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
      uint64_t AWOR_CH8:1;
      uint64_t AWOR_CH9:1;
      uint64_t AWOR_CH10:1;
      uint64_t AWOR_CH11:1;
      uint64_t AWOR_CH12:1;
      uint64_t AWOR_CH13:1;
      uint64_t AWOR_CH14:1;
      uint64_t AWOR_CH15:1;
      uint64_t AWOR_CH16:1;
      uint64_t AWOR_CH17:1;
      uint64_t AWOR_CH18:1;
      uint64_t AWOR_CH19:1;
      uint64_t AWOR_CH20:1;
      uint64_t AWOR_CH21:1;
      uint64_t AWOR_CH22:1;
      uint64_t AWOR_CH23:1;
      uint64_t AWOR_CH24:1;
      uint64_t AWOR_CH25:1;
      uint64_t AWOR_CH26:1;
      uint64_t AWOR_CH27:1;
      uint64_t AWOR_CH28:1;
      uint64_t AWOR_CH29:1;
      uint64_t AWOR_CH30:1;
      uint64_t AWOR_CH31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR2;

  uint8_t res15[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INPSAMP_S:8;
      uint64_t reservedSpace1:8;
      uint64_t INPSAMP_C:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMA_S:1;
      uint64_t reservedSpace0:1;
      uint64_t FMA_C:1;
      uint64_t FMA_WDTERR:1;
      uint64_t FMA_WDSERR:1;
      uint64_t reservedSpace1:2;
      uint64_t EN:1;
      uint64_t reservedSpace2:3;
      uint64_t MSKERR_S0:1;
      uint64_t MSKERR_S1:1;
      uint64_t MSKERR_S2:1;
      uint64_t reservedSpace3:1;
      uint64_t MSKERR_C:1;
      uint64_t MSKWDG_EOA_S:1;
      uint64_t reservedSpace4:1;
      uint64_t MSKWDG_EOA_C:1;
      uint64_t reservedSpace5:4;
      uint64_t MSKST_EOC:1;
      uint64_t reservedSpace6:1;
      uint64_t MSKWDTERR:1;
      uint64_t SERR:1;
      uint64_t MSKWDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEP:5;
      uint64_t reservedSpace0:3;
      uint64_t ALG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:8;
      uint64_t reservedSpace0:8;
      uint64_t WDT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t STEP_C:5;
      uint64_t reservedSpace1:1;
      uint64_t ERR_S0:1;
      uint64_t ERR_S1:1;
      uint64_t ERR_S2:1;
      uint64_t reservedSpace2:1;
      uint64_t ERR_C:1;
      uint64_t WDG_EOA_S:1;
      uint64_t reservedSpace3:1;
      uint64_t WDG_EOA_C:1;
      uint64_t reservedSpace4:4;
      uint64_t ST_EOC:1;
      uint64_t OVERWR:1;
      uint64_t WDTERR:1;
      uint64_t reservedSpace5:1;
      uint64_t WDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:15;
      uint64_t reservedSpace0:1;
      uint64_t DATA1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res16[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:15;
      uint64_t reservedSpace0:3;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  uint8_t res17[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:14;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:16;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:16;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:14;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t HSEN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMSIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t TEST_FAIL:1;
      uint64_t AVG_EN:1;
      uint64_t NR_SMPL:2;
      uint64_t reservedSpace1:7;
      uint64_t CALSTFUL:1;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
      uint64_t RESN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET_USER:8;
      uint64_t reservedSpace0:8;
      uint64_t GAIN_USER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFSGNUSR;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t ENX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAL2;

};

#define ADC_1 (*(volatile struct ADC_1_tag *) 0x400a4000)

struct ADC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t ADCLKSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORTCHAIN:1;
      uint64_t reservedSpace1:1;
      uint64_t AVGS:2;
      uint64_t AVGEN:1;
      uint64_t reservedSpace2:3;
      uint64_t STCL:1;
      uint64_t BCTU_MODE:1;
      uint64_t BCTUEN:1;
      uint64_t reservedSpace3:2;
      uint64_t JSTART:1;
      uint64_t JEDGE:1;
      uint64_t JTRGEN:1;
      uint64_t reservedSpace4:1;
      uint64_t NSTART:1;
      uint64_t XSTRTEN:1;
      uint64_t EDGE:1;
      uint64_t TRGEN:1;
      uint64_t reservedSpace5:1;
      uint64_t MODE:1;
      uint64_t WLSIDE:1;
      uint64_t OWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCSTATUS:3;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t reservedSpace1:3;
      uint64_t CHADDR:7;
      uint64_t BCTUSTART:1;
      uint64_t reservedSpace2:1;
      uint64_t SELF_TEST_S:1;
      uint64_t reservedSpace3:1;
      uint64_t JSTART:1;
      uint64_t reservedSpace4:2;
      uint64_t JABORT:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace5:6;
      uint64_t CALIBRTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECH:1;
      uint64_t EOC:1;
      uint64_t JECH:1;
      uint64_t JEOC:1;
      uint64_t EOBCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIEOCF0:1;
      uint64_t PIEOCF1:1;
      uint64_t PIEOCF2:1;
      uint64_t PIEOCF3:1;
      uint64_t PIEOCF4:1;
      uint64_t PIEOCF5:1;
      uint64_t PIEOCF6:1;
      uint64_t PIEOCF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIEOCF0:1;
      uint64_t SIEOCF1:1;
      uint64_t SIEOCF2:1;
      uint64_t SIEOCF3:1;
      uint64_t SIEOCF4:1;
      uint64_t SIEOCF5:1;
      uint64_t SIEOCF6:1;
      uint64_t SIEOCF7:1;
      uint64_t SIEOCF8:1;
      uint64_t SIEOCF9:1;
      uint64_t SIEOCF10:1;
      uint64_t SIEOCF11:1;
      uint64_t SIEOCF12:1;
      uint64_t SIEOCF13:1;
      uint64_t SIEOCF14:1;
      uint64_t SIEOCF15:1;
      uint64_t SIEOCF16:1;
      uint64_t SIEOCF17:1;
      uint64_t SIEOCF18:1;
      uint64_t SIEOCF19:1;
      uint64_t SIEOCF20:1;
      uint64_t SIEOCF21:1;
      uint64_t SIEOCF22:1;
      uint64_t SIEOCF23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKECH:1;
      uint64_t MSKEOC:1;
      uint64_t MSKJECH:1;
      uint64_t MSKJEOC:1;
      uint64_t MSKEOBCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIEOCIEN0:1;
      uint64_t PIEOCIEN1:1;
      uint64_t PIEOCIEN2:1;
      uint64_t PIEOCIEN3:1;
      uint64_t PIEOCIEN4:1;
      uint64_t PIEOCIEN5:1;
      uint64_t PIEOCIEN6:1;
      uint64_t PIEOCIEN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIEOCIEN0:1;
      uint64_t SIEOCIEN1:1;
      uint64_t SIEOCIEN2:1;
      uint64_t SIEOCIEN3:1;
      uint64_t SIEOCIEN4:1;
      uint64_t SIEOCIEN5:1;
      uint64_t SIEOCIEN6:1;
      uint64_t SIEOCIEN7:1;
      uint64_t SIEOCIEN8:1;
      uint64_t SIEOCIEN9:1;
      uint64_t SIEOCIEN10:1;
      uint64_t SIEOCIEN11:1;
      uint64_t SIEOCIEN12:1;
      uint64_t SIEOCIEN13:1;
      uint64_t SIEOCIEN14:1;
      uint64_t SIEOCIEN15:1;
      uint64_t SIEOCIEN16:1;
      uint64_t SIEOCIEN17:1;
      uint64_t SIEOCIEN18:1;
      uint64_t SIEOCIEN19:1;
      uint64_t SIEOCIEN20:1;
      uint64_t SIEOCIEN21:1;
      uint64_t SIEOCIEN22:1;
      uint64_t SIEOCIEN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAWIF1:1;
      uint64_t HAWIF1:1;
      uint64_t LAWIF2:1;
      uint64_t HAWIF2:1;
      uint64_t LAWIF3:1;
      uint64_t HAWIF3:1;
      uint64_t LAWIF4:1;
      uint64_t HAWIF4:1;
      uint64_t LAWIF5:1;
      uint64_t HAWIF5:1;
      uint64_t LAWIF6:1;
      uint64_t HAWIF6:1;
      uint64_t LAWIF7:1;
      uint64_t HAWIF7:1;
      uint64_t LAWIF8:1;
      uint64_t HAWIF8:1;
      uint64_t LAWIF9:1;
      uint64_t HAWIF9:1;
      uint64_t LAWIF10:1;
      uint64_t HAWIF10:1;
      uint64_t LAWIF11:1;
      uint64_t HAWIF11:1;
      uint64_t LAWIF12:1;
      uint64_t HAWIF12:1;
      uint64_t LAWIF13:1;
      uint64_t HAWIF13:1;
      uint64_t LAWIF14:1;
      uint64_t HAWIF14:1;
      uint64_t LAWIF15:1;
      uint64_t HAWIF15:1;
      uint64_t LAWIF16:1;
      uint64_t HAWIF16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAWIFEN1:1;
      uint64_t HDWIFEN1:1;
      uint64_t LAWIFEN2:1;
      uint64_t HDWIFEN2:1;
      uint64_t LAWIFEN3:1;
      uint64_t HDWIFEN3:1;
      uint64_t LAWIFEN4:1;
      uint64_t HDWIFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTIMR;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIDMAREN0:1;
      uint64_t PIDMAREN1:1;
      uint64_t PIDMAREN2:1;
      uint64_t PIDMAREN3:1;
      uint64_t PIDMAREN4:1;
      uint64_t PIDMAREN5:1;
      uint64_t PIDMAREN6:1;
      uint64_t PIDMAREN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIDMAREN0:1;
      uint64_t SIDMAREN1:1;
      uint64_t SIDMAREN2:1;
      uint64_t SIDMAREN3:1;
      uint64_t SIDMAREN4:1;
      uint64_t SIDMAREN5:1;
      uint64_t SIDMAREN6:1;
      uint64_t SIDMAREN7:1;
      uint64_t SIDMAREN8:1;
      uint64_t SIDMAREN9:1;
      uint64_t SIDMAREN10:1;
      uint64_t SIDMAREN11:1;
      uint64_t SIDMAREN12:1;
      uint64_t SIDMAREN13:1;
      uint64_t SIDMAREN14:1;
      uint64_t SIDMAREN15:1;
      uint64_t SIDMAREN16:1;
      uint64_t SIDMAREN17:1;
      uint64_t SIDMAREN18:1;
      uint64_t SIDMAREN19:1;
      uint64_t SIDMAREN20:1;
      uint64_t SIDMAREN21:1;
      uint64_t SIDMAREN22:1;
      uint64_t SIDMAREN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR1;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR_3;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:1;
      uint64_t reservedSpace0:1;
      uint64_t PREVAL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
      uint64_t PRES8:1;
      uint64_t PRES9:1;
      uint64_t PRES10:1;
      uint64_t PRES11:1;
      uint64_t PRES12:1;
      uint64_t PRES13:1;
      uint64_t PRES14:1;
      uint64_t PRES15:1;
      uint64_t PRES16:1;
      uint64_t PRES17:1;
      uint64_t PRES18:1;
      uint64_t PRES19:1;
      uint64_t PRES20:1;
      uint64_t PRES21:1;
      uint64_t PRES22:1;
      uint64_t PRES23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR1;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR1;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH32:1;
      uint64_t CH33:1;
      uint64_t CH34:1;
      uint64_t CH35:1;
      uint64_t CH36:1;
      uint64_t CH37:1;
      uint64_t CH38:1;
      uint64_t CH39:1;
      uint64_t CH40:1;
      uint64_t CH41:1;
      uint64_t CH42:1;
      uint64_t CH43:1;
      uint64_t CH44:1;
      uint64_t CH45:1;
      uint64_t CH46:1;
      uint64_t CH47:1;
      uint64_t CH48:1;
      uint64_t CH49:1;
      uint64_t CH50:1;
      uint64_t CH51:1;
      uint64_t CH52:1;
      uint64_t CH53:1;
      uint64_t CH54:1;
      uint64_t CH55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR1;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH32:1;
      uint64_t CH33:1;
      uint64_t CH34:1;
      uint64_t CH35:1;
      uint64_t CH36:1;
      uint64_t CH37:1;
      uint64_t CH38:1;
      uint64_t CH39:1;
      uint64_t CH40:1;
      uint64_t CH41:1;
      uint64_t CH42:1;
      uint64_t CH43:1;
      uint64_t CH44:1;
      uint64_t CH45:1;
      uint64_t CH46:1;
      uint64_t CH47:1;
      uint64_t CH48:1;
      uint64_t CH49:1;
      uint64_t CH50:1;
      uint64_t CH51:1;
      uint64_t CH52:1;
      uint64_t CH53:1;
      uint64_t CH54:1;
      uint64_t CH55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR1;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDEDR;

  uint8_t res10[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCDR7;

  uint8_t res11[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDR_23;

  uint8_t res12[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_0:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI0_1:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI0_2:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI0_3:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI0_4:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI0_5:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI0_6:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI0_7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRPI0;

  uint32_t CWSELRPI1;
  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_0:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_0:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_0:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_0:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_0:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_0:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_0:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_1:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_1:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_1:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_1:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_1:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_1:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_1:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_SI0_2:2;
      uint64_t reservedSpace0:2;
      uint64_t WSEL_SI1_2:2;
      uint64_t reservedSpace1:2;
      uint64_t WSEL_SI2_2:2;
      uint64_t reservedSpace2:2;
      uint64_t WSEL_SI3_2:2;
      uint64_t reservedSpace3:2;
      uint64_t WSEL_SI4_2:2;
      uint64_t reservedSpace4:2;
      uint64_t WSEL_SI5_2:2;
      uint64_t reservedSpace5:2;
      uint64_t WSEL_SI6_2:2;
      uint64_t reservedSpace6:2;
      uint64_t WSEL_SI7_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELRSI2;

  uint8_t res14[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN0:1;
      uint64_t CWEN1:1;
      uint64_t CWEN2:1;
      uint64_t CWEN3:1;
      uint64_t CWEN4:1;
      uint64_t CWEN5:1;
      uint64_t CWEN6:1;
      uint64_t CWEN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN32:1;
      uint64_t CWEN33:1;
      uint64_t CWEN34:1;
      uint64_t CWEN35:1;
      uint64_t CWEN36:1;
      uint64_t CWEN37:1;
      uint64_t CWEN38:1;
      uint64_t CWEN39:1;
      uint64_t CWEN40:1;
      uint64_t CWEN41:1;
      uint64_t CWEN42:1;
      uint64_t CWEN43:1;
      uint64_t CWEN44:1;
      uint64_t CWEN45:1;
      uint64_t CWEN46:1;
      uint64_t CWEN47:1;
      uint64_t CWEN48:1;
      uint64_t CWEN49:1;
      uint64_t CWEN50:1;
      uint64_t CWEN51:1;
      uint64_t CWEN52:1;
      uint64_t CWEN53:1;
      uint64_t CWEN54:1;
      uint64_t CWEN55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR1;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
      uint64_t AWOR_CH8:1;
      uint64_t AWOR_CH9:1;
      uint64_t AWOR_CH10:1;
      uint64_t AWOR_CH11:1;
      uint64_t AWOR_CH12:1;
      uint64_t AWOR_CH13:1;
      uint64_t AWOR_CH14:1;
      uint64_t AWOR_CH15:1;
      uint64_t AWOR_CH16:1;
      uint64_t AWOR_CH17:1;
      uint64_t AWOR_CH18:1;
      uint64_t AWOR_CH19:1;
      uint64_t AWOR_CH20:1;
      uint64_t AWOR_CH21:1;
      uint64_t AWOR_CH22:1;
      uint64_t AWOR_CH23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR1;

  uint8_t res16[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INPSAMP_S:8;
      uint64_t reservedSpace1:8;
      uint64_t INPSAMP_C:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMA_S:1;
      uint64_t reservedSpace0:1;
      uint64_t FMA_C:1;
      uint64_t FMA_WDTERR:1;
      uint64_t FMA_WDSERR:1;
      uint64_t reservedSpace1:2;
      uint64_t EN:1;
      uint64_t reservedSpace2:3;
      uint64_t MSKERR_S0:1;
      uint64_t MSKERR_S1:1;
      uint64_t MSKERR_S2:1;
      uint64_t reservedSpace3:1;
      uint64_t MSKERR_C:1;
      uint64_t MSKWDG_EOA_S:1;
      uint64_t reservedSpace4:1;
      uint64_t MSKWDG_EOA_C:1;
      uint64_t reservedSpace5:4;
      uint64_t MSKST_EOC:1;
      uint64_t reservedSpace6:1;
      uint64_t MSKWDTERR:1;
      uint64_t SERR:1;
      uint64_t MSKWDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEP:5;
      uint64_t reservedSpace0:3;
      uint64_t ALG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:8;
      uint64_t reservedSpace0:8;
      uint64_t WDT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t STEP_C:5;
      uint64_t reservedSpace1:1;
      uint64_t ERR_S0:1;
      uint64_t ERR_S1:1;
      uint64_t ERR_S2:1;
      uint64_t reservedSpace2:1;
      uint64_t ERR_C:1;
      uint64_t WDG_EOA_S:1;
      uint64_t reservedSpace3:1;
      uint64_t WDG_EOA_C:1;
      uint64_t reservedSpace4:4;
      uint64_t ST_EOC:1;
      uint64_t OVERWR:1;
      uint64_t WDTERR:1;
      uint64_t reservedSpace5:1;
      uint64_t WDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:15;
      uint64_t reservedSpace0:1;
      uint64_t DATA1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res17[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:15;
      uint64_t reservedSpace0:3;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  uint8_t res18[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:14;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:16;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:16;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:14;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:15;
      uint64_t reservedSpace0:1;
      uint64_t THRH:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t HSEN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMSIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t TEST_FAIL:1;
      uint64_t AVG_EN:1;
      uint64_t NR_SMPL:2;
      uint64_t reservedSpace1:7;
      uint64_t CALSTFUL:1;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
      uint64_t RESN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET_USER:8;
      uint64_t reservedSpace0:8;
      uint64_t GAIN_USER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFSGNUSR;

  uint8_t res22[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t ENX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAL2;

};

#define ADC_2 (*(volatile struct ADC_2_tag *) 0x400a8000)

struct PIT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
      uint64_t MDIS_RTI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64L;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RT_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTI_LDVAL_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTI_LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTI_CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTI_TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTI_TFLG;

};

#define PIT_0 (*(volatile struct PIT_0_tag *) 0x400b0000)

struct PIT_0_TIMER_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_0 (*(volatile struct PIT_0_TIMER_0_tag *) 0x400b0100)

struct PIT_0_TIMER_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_1 (*(volatile struct PIT_0_TIMER_1_tag *) 0x400b0110)

struct PIT_0_TIMER_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_2 (*(volatile struct PIT_0_TIMER_2_tag *) 0x400b0120)

struct PIT_0_TIMER_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_0_TIMER_3 (*(volatile struct PIT_0_TIMER_3_tag *) 0x400b0130)

struct PIT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

};

#define PIT_1 (*(volatile struct PIT_1_tag *) 0x400b4000)

struct PIT_1_TIMER_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_0 (*(volatile struct PIT_1_TIMER_0_tag *) 0x400b4100)

struct PIT_1_TIMER_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_1 (*(volatile struct PIT_1_TIMER_1_tag *) 0x400b4110)

struct PIT_1_TIMER_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_2 (*(volatile struct PIT_1_TIMER_2_tag *) 0x400b4120)

struct PIT_1_TIMER_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_1_TIMER_3 (*(volatile struct PIT_1_TIMER_3_tag *) 0x400b4130)

struct PIT_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

};

#define PIT_2 (*(volatile struct PIT_2_tag *) 0x402fc000)

struct PIT_2_TIMER_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_2_TIMER_0 (*(volatile struct PIT_2_TIMER_0_tag *) 0x402fc100)

struct PIT_2_TIMER_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_2_TIMER_1 (*(volatile struct PIT_2_TIMER_1_tag *) 0x402fc110)

struct PIT_2_TIMER_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_2_TIMER_2 (*(volatile struct PIT_2_TIMER_2_tag *) 0x402fc120)

struct PIT_2_TIMER_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG;

};

#define PIT_2_TIMER_3 (*(volatile struct PIT_2_TIMER_3_tag *) 0x402fc130)

struct AXBS_LITE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS0;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t reservedSpace3:10;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS0;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS1;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t reservedSpace3:10;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS1;

  uint8_t res3[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS2;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t reservedSpace3:10;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS2;

  uint8_t res5[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS3;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t reservedSpace3:10;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS3;

  uint8_t res7[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS4;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t reservedSpace3:10;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS4;

  uint8_t res9[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS5;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t reservedSpace3:10;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS5;

  uint8_t res11[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS6;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t reservedSpace3:10;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS6;

};

#define AXBS_LITE (*(volatile struct AXBS_LITE_tag *) 0x40200000)

struct XBIC_AXBS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ME7:1;
      uint64_t ME6:1;
      uint64_t ME5:1;
      uint64_t ME4:1;
      uint64_t ME3:1;
      uint64_t ME2:1;
      uint64_t ME1:1;
      uint64_t ME0:1;
      uint64_t SE7:1;
      uint64_t SE6:1;
      uint64_t SE5:1;
      uint64_t SE4:1;
      uint64_t SE3:1;
      uint64_t SE2:1;
      uint64_t SE1:1;
      uint64_t SE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN:8;
      uint64_t MST:4;
      uint64_t SLV:3;
      uint64_t reservedSpace0:16;
      uint64_t EIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN:8;
      uint64_t MST:4;
      uint64_t SLV:3;
      uint64_t DPME7:1;
      uint64_t DPME6:1;
      uint64_t DPME5:1;
      uint64_t DPME4:1;
      uint64_t DPME3:1;
      uint64_t DPME2:1;
      uint64_t DPME1:1;
      uint64_t DPME0:1;
      uint64_t DPSE7:1;
      uint64_t DPSE6:1;
      uint64_t DPSE5:1;
      uint64_t DPSE4:1;
      uint64_t DPSE3:1;
      uint64_t DPSE2:1;
      uint64_t DPSE1:1;
      uint64_t DPSE0:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR;

};

#define XBIC_AXBS (*(volatile struct XBIC_AXBS_tag *) 0x40204000)

struct XBIC_AXBS_PERI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ME7:1;
      uint64_t ME6:1;
      uint64_t ME5:1;
      uint64_t ME4:1;
      uint64_t ME3:1;
      uint64_t ME2:1;
      uint64_t ME1:1;
      uint64_t ME0:1;
      uint64_t SE7:1;
      uint64_t SE6:1;
      uint64_t SE5:1;
      uint64_t SE4:1;
      uint64_t SE3:1;
      uint64_t SE2:1;
      uint64_t SE1:1;
      uint64_t SE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN:8;
      uint64_t MST:4;
      uint64_t SLV:3;
      uint64_t reservedSpace0:16;
      uint64_t EIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN:8;
      uint64_t MST:4;
      uint64_t SLV:3;
      uint64_t DPME7:1;
      uint64_t DPME6:1;
      uint64_t DPME5:1;
      uint64_t DPME4:1;
      uint64_t DPME3:1;
      uint64_t DPME2:1;
      uint64_t DPME1:1;
      uint64_t DPME0:1;
      uint64_t DPSE7:1;
      uint64_t DPSE6:1;
      uint64_t DPSE5:1;
      uint64_t DPSE4:1;
      uint64_t DPSE3:1;
      uint64_t DPSE2:1;
      uint64_t DPSE1:1;
      uint64_t DPSE0:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR;

};

#define XBIC_AXBS_PERI (*(volatile struct XBIC_AXBS_PERI_tag *) 0x40208000)

struct XBIC_AXBS_TCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ME7:1;
      uint64_t ME6:1;
      uint64_t ME5:1;
      uint64_t ME4:1;
      uint64_t ME3:1;
      uint64_t ME2:1;
      uint64_t ME1:1;
      uint64_t ME0:1;
      uint64_t SE7:1;
      uint64_t SE6:1;
      uint64_t SE5:1;
      uint64_t SE4:1;
      uint64_t SE3:1;
      uint64_t SE2:1;
      uint64_t SE1:1;
      uint64_t SE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN:8;
      uint64_t MST:4;
      uint64_t SLV:3;
      uint64_t reservedSpace0:16;
      uint64_t EIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN:8;
      uint64_t MST:4;
      uint64_t SLV:3;
      uint64_t DPME7:1;
      uint64_t DPME6:1;
      uint64_t DPME5:1;
      uint64_t DPME4:1;
      uint64_t DPME3:1;
      uint64_t DPME2:1;
      uint64_t DPME1:1;
      uint64_t DPME0:1;
      uint64_t DPSE7:1;
      uint64_t DPSE6:1;
      uint64_t DPSE5:1;
      uint64_t DPSE4:1;
      uint64_t DPSE3:1;
      uint64_t DPSE2:1;
      uint64_t DPSE1:1;
      uint64_t DPSE0:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR;

};

#define XBIC_AXBS_TCM (*(volatile struct XBIC_AXBS_TCM_tag *) 0x40400000)

struct XBIC_AXBS_EDMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ME7:1;
      uint64_t ME6:1;
      uint64_t ME5:1;
      uint64_t ME4:1;
      uint64_t ME3:1;
      uint64_t ME2:1;
      uint64_t ME1:1;
      uint64_t ME0:1;
      uint64_t SE7:1;
      uint64_t SE6:1;
      uint64_t SE5:1;
      uint64_t SE4:1;
      uint64_t SE3:1;
      uint64_t SE2:1;
      uint64_t SE1:1;
      uint64_t SE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN:8;
      uint64_t MST:4;
      uint64_t SLV:3;
      uint64_t reservedSpace0:16;
      uint64_t EIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN:8;
      uint64_t MST:4;
      uint64_t SLV:3;
      uint64_t DPME7:1;
      uint64_t DPME6:1;
      uint64_t DPME5:1;
      uint64_t DPME4:1;
      uint64_t DPME3:1;
      uint64_t DPME2:1;
      uint64_t DPME1:1;
      uint64_t DPME0:1;
      uint64_t DPSE7:1;
      uint64_t DPSE6:1;
      uint64_t DPSE5:1;
      uint64_t DPSE4:1;
      uint64_t DPSE3:1;
      uint64_t DPSE2:1;
      uint64_t DPSE1:1;
      uint64_t DPSE0:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR;

};

#define XBIC_AXBS_EDMA (*(volatile struct XBIC_AXBS_EDMA_tag *) 0x40404000)

struct EDMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t EDBG:1;
      uint64_t ERCA:1;
      uint64_t reservedSpace1:1;
      uint64_t HAE:1;
      uint64_t HALT:1;
      uint64_t GCLC:1;
      uint64_t GMRC:1;
      uint64_t ECX:1;
      uint64_t CX:1;
      uint64_t reservedSpace2:14;
      uint64_t ACTIVE_ID:5;
      uint64_t reservedSpace3:2;
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBE:1;
      uint64_t SBE:1;
      uint64_t SGE:1;
      uint64_t NCE:1;
      uint64_t DOE:1;
      uint64_t DAE:1;
      uint64_t SOE:1;
      uint64_t SAE:1;
      uint64_t ECX:1;
      uint64_t UCE:1;
      uint64_t reservedSpace0:14;
      uint64_t ERRCHN:5;
      uint64_t reservedSpace1:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRS;

  uint8_t res0[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRPRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_GRPRI_31;

};

#define EDMA (*(volatile struct EDMA_tag *) 0x4020c000)

struct MDM_AP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DESTRST:1;
      uint64_t FUNCRST:1;
      uint64_t reservedSpace1:9;
      uint64_t CM70HLT:1;
      uint64_t reservedSpace2:3;
      uint64_t CM70DPSLP:1;
      uint64_t reservedSpace3:3;
      uint64_t CM70SLPNG:1;
      uint64_t reservedSpace4:7;
      uint64_t CM70DBGRSTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMAPSTTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SYSRESETREQ:1;
      uint64_t SYSFUNCRST:1;
      uint64_t reservedSpace1:2;
      uint64_t CM70DBGREQ:1;
      uint64_t reservedSpace2:3;
      uint64_t DBGRSTSLOWPAD:1;
      uint64_t DBGRSTFASTPAD:1;
      uint64_t reservedSpace3:1;
      uint64_t POR_WDG_DIS:1;
      uint64_t reservedSpace4:4;
      uint64_t TRIUOVRD:1;
      uint64_t reservedSpace5:1;
      uint64_t SWOOVRD:1;
      uint64_t reservedSpace6:5;
      uint64_t CM70DBGRSRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMAPCTL;

  uint8_t res0[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LWPWREN:1;
      uint64_t LWPRSTPRVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMAPWIREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDM_DAP_WIR_STATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMAPWIRSTTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTRSTRGM:1;
      uint64_t PRVNTRSTRGM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMAPWIRREL;

  uint8_t res1[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define MDM_AP (*(volatile struct MDM_AP_tag *) 0x40250600)

struct SDA_AP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHALRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t UIDSTATUS:1;
      uint64_t SWAPPDBG:1;
      uint64_t reservedSpace1:26;
      uint64_t APPDBGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTHSTTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSEAUTHREQ:1;
      uint64_t HSENEWDATACTL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTHCTL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYCHAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYCHAL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYCHAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYCHAL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYCHAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYCHAL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYCHAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYCHAL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYCHAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYCHAL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYCHAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYCHAL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYCHAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYCHAL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYCHAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYCHAL_7;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYRESP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYRESP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYRESP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYRESP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESP_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYRESP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESP_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYRESP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESP_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYRESP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESP_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYRESP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYRESP_7;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UID1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t GDBGEN:1;
      uint64_t GNIDEN:1;
      uint64_t GSPIDEN:1;
      uint64_t GSPNIDEN:1;
      uint64_t reservedSpace1:20;
      uint64_t CDBGEN:1;
      uint64_t CNIDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGENCTRL;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:25;
      uint64_t RSTRELTLCM70:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDAAPRSTCTRL;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAAPGENSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDAAPGENSTATUS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTAG_CR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDAAPGENCTRL0;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAAPGENSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDAAPGENSTATUS1;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAAPGENSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDAAPGENSTATUS2;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAAPGENSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDAAPGENSTATUS3;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAAPGENSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDAAPGENSTATUS4;

  uint8_t res10[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ID;

};

#define SDA_AP (*(volatile struct SDA_AP_tag *) 0x40254700)

struct EIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t EICH30EN:1;
      uint64_t EICH29EN:1;
      uint64_t EICH28EN:1;
      uint64_t EICH27EN:1;
      uint64_t EICH26EN:1;
      uint64_t EICH25EN:1;
      uint64_t EICH24EN:1;
      uint64_t EICH23EN:1;
      uint64_t EICH22EN:1;
      uint64_t EICH21EN:1;
      uint64_t EICH20EN:1;
      uint64_t EICH19EN:1;
      uint64_t EICH18EN:1;
      uint64_t EICH17EN:1;
      uint64_t EICH16EN:1;
      uint64_t EICH15EN:1;
      uint64_t EICH14EN:1;
      uint64_t EICH13EN:1;
      uint64_t EICH12EN:1;
      uint64_t EICH11EN:1;
      uint64_t EICH10EN:1;
      uint64_t EICH9EN:1;
      uint64_t EICH8EN:1;
      uint64_t EICH7EN:1;
      uint64_t EICH6EN:1;
      uint64_t EICH5EN:1;
      uint64_t EICH4EN:1;
      uint64_t EICH3EN:1;
      uint64_t EICH2EN:1;
      uint64_t EICH1EN:1;
      uint64_t EICH0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHEN;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD0_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD0_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD0_WORD2;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD1_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD1_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD1_WORD2;

  uint8_t res2[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD2_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD2_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD2_WORD2;

  uint8_t res3[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t CHKBIT_MASK:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD3_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD3_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD3_WORD2;

  uint8_t res4[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t CHKBIT_MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD4_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD4_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD4_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD4_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD4_WORD4;

  uint8_t res5[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHKBIT_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD5_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD5_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD5_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD5_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD5_WORD4;

  uint8_t res6[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHKBIT_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD6_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD6_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD6_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD6_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD6_WORD4;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHKBIT_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD7_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD7_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD7_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD7_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD7_WORD4;

  uint8_t res8[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t CHKBIT_MASK:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD8_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD8_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD8_WORD2;

  uint8_t res9[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t CHKBIT_MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD9_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD9_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD9_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD9_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD9_WORD4;

  uint8_t res10[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHKBIT_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD10_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD10_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD10_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD10_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD10_WORD4;

  uint8_t res11[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHKBIT_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD11_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD11_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD11_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD11_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD11_WORD4;

  uint8_t res12[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CHKBIT_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD12_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD12_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD12_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD12_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD12_WORD4;

  uint8_t res13[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD13_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD13_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD13_WORD2;

  uint8_t res14[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD14_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD14_WORD1;

  uint8_t res15[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD15_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD15_WORD1;

  uint8_t res16[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD16_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD16_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD16_WORD2;

  uint8_t res17[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD17_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD17_WORD1;

  uint8_t res18[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD18_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD18_WORD1;

  uint8_t res19[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD19_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD19_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD19_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD19_WORD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B16_19DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD19_WORD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B20_23DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD19_WORD6;

  uint8_t res20[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD20_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD20_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B8_11DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD20_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B12_15DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD20_WORD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B16_19DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD20_WORD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B20_23DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD20_WORD6;

  uint8_t res21[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD21_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD21_WORD2;

  uint8_t res22[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD22_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD22_WORD2;

  uint8_t res23[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD23_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD23_WORD2;

  uint8_t res24[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD24_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD24_WORD2;

  uint8_t res25[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD25_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD25_WORD2;

  uint8_t res26[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD26_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD26_WORD2;

  uint8_t res27[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD27_WORD1;

  uint8_t res28[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD28_WORD1;

  uint8_t res29[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD29_WORD1;

  uint8_t res30[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD30_WORD1;

};

#define EIM (*(volatile struct EIM_tag *) 0x40258000)

struct ERM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ENCIE7:1;
      uint64_t ESCIE7:1;
      uint64_t reservedSpace1:2;
      uint64_t ENCIE6:1;
      uint64_t ESCIE6:1;
      uint64_t reservedSpace2:2;
      uint64_t ENCIE5:1;
      uint64_t ESCIE5:1;
      uint64_t reservedSpace3:2;
      uint64_t ENCIE4:1;
      uint64_t ESCIE4:1;
      uint64_t reservedSpace4:2;
      uint64_t ENCIE3:1;
      uint64_t ESCIE3:1;
      uint64_t reservedSpace5:2;
      uint64_t ENCIE2:1;
      uint64_t ESCIE2:1;
      uint64_t reservedSpace6:2;
      uint64_t ENCIE1:1;
      uint64_t ESCIE1:1;
      uint64_t reservedSpace7:2;
      uint64_t ENCIE0:1;
      uint64_t ESCIE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ENCIE15:1;
      uint64_t ESCIE15:1;
      uint64_t reservedSpace1:2;
      uint64_t ENCIE14:1;
      uint64_t ESCIE14:1;
      uint64_t reservedSpace2:2;
      uint64_t ENCIE13:1;
      uint64_t ESCIE13:1;
      uint64_t reservedSpace3:2;
      uint64_t ENCIE12:1;
      uint64_t ESCIE12:1;
      uint64_t reservedSpace4:2;
      uint64_t ENCIE11:1;
      uint64_t ESCIE11:1;
      uint64_t reservedSpace5:2;
      uint64_t ENCIE10:1;
      uint64_t ESCIE10:1;
      uint64_t reservedSpace6:2;
      uint64_t ENCIE9:1;
      uint64_t ESCIE9:1;
      uint64_t reservedSpace7:2;
      uint64_t ENCIE8:1;
      uint64_t ESCIE8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t ENCIE19:1;
      uint64_t ESCIE19:1;
      uint64_t reservedSpace1:2;
      uint64_t ENCIE18:1;
      uint64_t ESCIE18:1;
      uint64_t reservedSpace2:2;
      uint64_t ENCIE17:1;
      uint64_t ESCIE17:1;
      uint64_t reservedSpace3:2;
      uint64_t ENCIE16:1;
      uint64_t ESCIE16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t NCE7:1;
      uint64_t SBC7:1;
      uint64_t reservedSpace1:2;
      uint64_t NCE6:1;
      uint64_t SBC6:1;
      uint64_t reservedSpace2:2;
      uint64_t NCE5:1;
      uint64_t SBC5:1;
      uint64_t reservedSpace3:2;
      uint64_t NCE4:1;
      uint64_t SBC4:1;
      uint64_t reservedSpace4:2;
      uint64_t NCE3:1;
      uint64_t SBC3:1;
      uint64_t reservedSpace5:2;
      uint64_t NCE2:1;
      uint64_t SBC2:1;
      uint64_t reservedSpace6:2;
      uint64_t NCE1:1;
      uint64_t SBC1:1;
      uint64_t reservedSpace7:2;
      uint64_t NCE0:1;
      uint64_t SBC0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t NCE15:1;
      uint64_t SBC15:1;
      uint64_t reservedSpace1:2;
      uint64_t NCE14:1;
      uint64_t SBC14:1;
      uint64_t reservedSpace2:2;
      uint64_t NCE13:1;
      uint64_t SBC13:1;
      uint64_t reservedSpace3:2;
      uint64_t NCE12:1;
      uint64_t SBC12:1;
      uint64_t reservedSpace4:2;
      uint64_t NCE11:1;
      uint64_t SBC11:1;
      uint64_t reservedSpace5:2;
      uint64_t NCE10:1;
      uint64_t SBC10:1;
      uint64_t reservedSpace6:2;
      uint64_t NCE9:1;
      uint64_t SBC9:1;
      uint64_t reservedSpace7:2;
      uint64_t NCE8:1;
      uint64_t SBC8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t NCE19:1;
      uint64_t SBC19:1;
      uint64_t reservedSpace1:2;
      uint64_t NCE18:1;
      uint64_t SBC18:1;
      uint64_t reservedSpace2:2;
      uint64_t NCE17:1;
      uint64_t SBC17:1;
      uint64_t reservedSpace3:2;
      uint64_t NCE16:1;
      uint64_t SBC16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT1;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT2;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT3;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT4;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT5;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT6;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT7;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT8;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT9;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT10;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT11;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT12;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT13;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT14;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT15;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SYNDROME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYN16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT16;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR17;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT17;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR18;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT18;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR19;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORR_ERR_CNT19;

};

#define ERM (*(volatile struct ERM_tag *) 0x4025c000)

struct MSCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXNUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ITCMSZ:8;
      uint64_t DTCMSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPXCFG3;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERSONALITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ITCMSZ:8;
      uint64_t DTCMSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPU:1;
      uint64_t SIMD:1;
      uint64_t MMU:1;
      uint64_t CMP:1;
      uint64_t CPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG3;

  uint8_t res1[452];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP0IGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1ISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCP1IGR3;

  uint8_t res2[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0_TR:1;
      uint64_t reservedSpace0:30;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCPCFG;

  uint8_t res3[508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN_RD_CM7_0_AHBM:1;
      uint64_t EN_RD_CM7_0_AHBP:1;
      uint64_t EN_RD_EDMA:1;
      uint64_t reservedSpace0:1;
      uint64_t EN_RD_HSE:1;
      uint64_t EN_RD_EMAC:1;
      uint64_t EN_RD_CM7_1_AHBM:1;
      uint64_t EN_RD_CM7_1_AHBP:1;
      uint64_t EN_RD_TCM:1;
      uint64_t EN_ADD_PFLASH_PORT0:1;
      uint64_t EN_ADD_PFLASH_PORT1:1;
      uint64_t EN_ADD_PFLASH_PORT2:1;
      uint64_t EN_WR_PRAM0:1;
      uint64_t EN_ADD_PRAM0:1;
      uint64_t EN_WR_PRAM1:1;
      uint64_t EN_ADD_PRAM1:1;
      uint64_t EN_WR_TCM:1;
      uint64_t EN_ADD_TCM:1;
      uint64_t reservedSpace1:1;
      uint64_t EN_ADD_QSPI:1;
      uint64_t EN_WR_AIPS0:1;
      uint64_t EN_ADD_AIPS0:1;
      uint64_t EN_WR_AIPS1:1;
      uint64_t EN_ADD_AIPS1:1;
      uint64_t EN_WR_AIPS2:1;
      uint64_t EN_ADD_AIPS2:1;
      uint64_t EN_WR_CM7_0_TCM:1;
      uint64_t EN_ADD_CM7_0_TCM:1;
      uint64_t EN_WR_CM7_1_TCM:1;
      uint64_t EN_ADD_CM7_1_TCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENEDC;

  uint8_t res4[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMAC_DIS_WR_OPT:1;
      uint64_t reservedSpace0:3;
      uint64_t DMA_AXBS_S0_DIS_WR_OPT:1;
      uint64_t reservedSpace1:3;
      uint64_t DMA_AXBS_S1_DIS_WR_OPT:1;
      uint64_t reservedSpace2:3;
      uint64_t HSE_DIS_WR_OPT:1;
      uint64_t reservedSpace3:3;
      uint64_t TCM_DIS_WR_OPT:1;
      uint64_t reservedSpace4:3;
      uint64_t QSPI_DIS_WR_OPT:1;
      uint64_t reservedSpace5:3;
      uint64_t AIPS1_DIS_WR_OPT:1;
      uint64_t reservedSpace6:3;
      uint64_t AIPS2_DIS_WR_OPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IAHBCFGREG;

  uint8_t res5[380];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_39;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_40;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_41;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_42;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_43;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_44;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_45;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_46;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_47;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_48;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_49;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_50;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_51;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_52;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_53;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_54;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_55;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_56;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_57;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_58;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_59;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_60;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_61;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_62;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_63;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_64;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_65;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_66;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_67;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_68;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_69;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_70;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_71;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_72;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_73;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_74;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_75;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_76;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_77;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_78;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_79;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_80;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_81;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_82;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_83;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_84;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_85;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_86;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_87;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_88;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_89;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_90;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_91;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_92;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_93;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_94;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_95;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_96;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_97;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_98;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_99;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_100;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_101;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_102;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_103;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_104;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_105;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_106;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_107;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_108;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_109;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_110;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_111;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_112;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_113;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_114;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_115;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_116;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_117;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_118;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_119;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_120;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_121;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_122;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_123;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_124;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_125;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_126;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_127;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_128;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_129;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_130;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_131;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_132;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_133;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_134;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_135;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_136;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_137;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_138;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_139;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_140;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_141;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_142;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_143;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_144;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_145;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_146;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_147;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_148;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_149;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_150;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_151;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_152;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_153;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_154;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_155;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_156;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_157;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_158;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_159;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_160;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_161;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_162;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_163;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_164;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_165;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_166;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_167;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_168;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_169;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_170;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_171;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_172;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_173;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_174;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_175;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_176;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_177;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_178;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_179;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_180;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_181;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_182;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_183;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_184;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_185;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_186;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_187;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_188;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_189;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_190;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_191;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_192;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_193;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_194;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_195;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_196;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_197;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_198;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_199;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_200;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_201;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_202;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_203;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_204;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_205;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_206;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_207;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_208;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_209;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_210;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_211;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_212;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_213;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_214;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_215;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_216;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_217;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_218;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_219;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_220;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_221;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_222;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_223;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_224;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_225;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_226;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_227;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_228;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_229;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_230;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_231;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_232;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_233;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_234;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_235;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_236;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_237;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_238;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M7_0:1;
      uint64_t reservedSpace0:14;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IRSPRC_239;

};

#define MSCM (*(volatile struct MSCM_tag *) 0x40260000)

struct PRAMC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t P0_BO_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCR1;

};

#define PRAMC_0 (*(volatile struct PRAMC_0_tag *) 0x40264000)

struct PRAMC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t P0_BO_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCR1;

};

#define PRAMC_1 (*(volatile struct PRAMC_1_tag *) 0x40464000)

struct PFLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0_CBFEN:1;
      uint64_t P0_DBFEN:1;
      uint64_t reservedSpace0:2;
      uint64_t P0_CPFEN:1;
      uint64_t P0_DPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0_CBFEN:1;
      uint64_t P0_DBFEN:1;
      uint64_t reservedSpace0:2;
      uint64_t P0_CPFEN:1;
      uint64_t P0_DPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR_1;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DERR_SUP:1;
      uint64_t BLK4_PS:3;
      uint64_t reservedSpace0:3;
      uint64_t DMEEE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15AP:2;
      uint64_t M14AP:2;
      uint64_t M13AP:2;
      uint64_t M12AP:2;
      uint64_t M11AP:2;
      uint64_t M10AP:2;
      uint64_t M9AP:2;
      uint64_t M8AP:2;
      uint64_t M7AP:2;
      uint64_t M6AP:2;
      uint64_t M5AP:2;
      uint64_t M4AP:2;
      uint64_t reservedSpace0:2;
      uint64_t M2AP:2;
      uint64_t M1AP:2;
      uint64_t M0AP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFAPR;

  uint8_t res1[744];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEADR_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCPGM_PEADR_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEADR_P:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCPGM_PEADR_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPEADR_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCPGM_XPEADR_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XPEADR_P:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCPGM_XPEADR_P;

  uint8_t res2[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SPELOCK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SPELOCK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SPELOCK_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SPELOCK_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SPELOCK_4;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLKU_SPELOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSLCK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SSPELOCK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSLCK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SSPELOCK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSLCK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SSPELOCK_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSLCK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SSPELOCK_3;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETSLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SETSLOCK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETSLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SETSLOCK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETSLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SETSLOCK_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETSLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SETSLOCK_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETSLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SETSLOCK_4;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETSLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLKU_SETSLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSETSLCK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SSETSLOCK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSETSLCK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SSETSLOCK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSETSLCK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SSETSLOCK_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSETSLCK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_SSETSLOCK_3;

  uint8_t res6[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLKU_LOCKMASTER_S;

};

#define PFLASH (*(volatile struct PFLASH_tag *) 0x40268000)

struct PFLASH_PFCBLKi_LOCKMASTER_S_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_7;

};

#define PFLASH_PFCBLKi_LOCKMASTER_S_0 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_S_0_tag *) 0x402683c0)

struct PFLASH_PFCBLKi_LOCKMASTER_S_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_7;

};

#define PFLASH_PFCBLKi_LOCKMASTER_S_1 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_S_1_tag *) 0x402683e0)

struct PFLASH_PFCBLKi_LOCKMASTER_S_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_7;

};

#define PFLASH_PFCBLKi_LOCKMASTER_S_2 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_S_2_tag *) 0x40268400)

struct PFLASH_PFCBLKi_LOCKMASTER_S_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_7;

};

#define PFLASH_PFCBLKi_LOCKMASTER_S_3 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_S_3_tag *) 0x40268420)

struct PFLASH_PFCBLKi_LOCKMASTER_S_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_S:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_S_7;

};

#define PFLASH_PFCBLKi_LOCKMASTER_S_4 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_S_4_tag *) 0x40268440)

struct PFLASH_PFCBLKi_LOCKMASTER_SS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS2;

};

#define PFLASH_PFCBLKi_LOCKMASTER_SS_0 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_SS_0_tag *) 0x40268484)

struct PFLASH_PFCBLKi_LOCKMASTER_SS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS2;

};

#define PFLASH_PFCBLKi_LOCKMASTER_SS_1 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_SS_1_tag *) 0x40268494)

struct PFLASH_PFCBLKi_LOCKMASTER_SS_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS2;

};

#define PFLASH_PFCBLKi_LOCKMASTER_SS_2 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_SS_2_tag *) 0x402684a4)

struct PFLASH_PFCBLKi_LOCKMASTER_SS_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKMASTER_SS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCBLK_LOCKMASTER_SS2;

};

#define PFLASH_PFCBLKi_LOCKMASTER_SS_3 (*(volatile struct PFLASH_PFCBLKi_LOCKMASTER_SS_3_tag *) 0x402684b4)

struct SWT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SWT_0 (*(volatile struct SWT_0_tag *) 0x40270000)

struct STM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

};

#define STM_0 (*(volatile struct STM_0_tag *) 0x40274000)

struct STM_0_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

};

#define STM_0_CHANNEL_0 (*(volatile struct STM_0_CHANNEL_0_tag *) 0x40274010)

struct STM_0_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

};

#define STM_0_CHANNEL_1 (*(volatile struct STM_0_CHANNEL_1_tag *) 0x40274020)

struct STM_0_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

};

#define STM_0_CHANNEL_2 (*(volatile struct STM_0_CHANNEL_2_tag *) 0x40274030)

struct STM_0_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

};

#define STM_0_CHANNEL_3 (*(volatile struct STM_0_CHANNEL_3_tag *) 0x40274040)

struct STM_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:6;
      uint64_t CPS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

};

#define STM_1 (*(volatile struct STM_1_tag *) 0x40474000)

struct STM_1_CHANNEL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

};

#define STM_1_CHANNEL_0 (*(volatile struct STM_1_CHANNEL_0_tag *) 0x40474010)

struct STM_1_CHANNEL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

};

#define STM_1_CHANNEL_1 (*(volatile struct STM_1_CHANNEL_1_tag *) 0x40474020)

struct STM_1_CHANNEL_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

};

#define STM_1_CHANNEL_2 (*(volatile struct STM_1_CHANNEL_2_tag *) 0x40474030)

struct STM_1_CHANNEL_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

};

#define STM_1_CHANNEL_3 (*(volatile struct STM_1_CHANNEL_3_tag *) 0x40474040)

struct XRDC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GVLD:1;
      uint64_t HRL:4;
      uint64_t reservedSpace0:2;
      uint64_t MRF:1;
      uint64_t VAW:1;
      uint64_t reservedSpace1:21;
      uint64_t LK1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDID:8;
      uint64_t NMSTR:8;
      uint64_t NMRC:8;
      uint64_t NPAC:4;
      uint64_t MID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIDP0:1;
      uint64_t PIDP1:1;
      uint64_t PIDP2:1;
      uint64_t PIDP3:1;
      uint64_t PIDP4:1;
      uint64_t PIDP5:1;
      uint64_t PIDP6:1;
      uint64_t PIDP7:1;
      uint64_t PIDP8:1;
      uint64_t PIDP9:1;
      uint64_t PIDP10:1;
      uint64_t PIDP11:1;
      uint64_t PIDP12:1;
      uint64_t PIDP13:1;
      uint64_t PIDP14:1;
      uint64_t PIDP15:1;
      uint64_t PIDP16:1;
      uint64_t PIDP17:1;
      uint64_t PIDP18:1;
      uint64_t PIDP19:1;
      uint64_t PIDP20:1;
      uint64_t PIDP21:1;
      uint64_t PIDP22:1;
      uint64_t PIDP23:1;
      uint64_t PIDP24:1;
      uint64_t PIDP25:1;
      uint64_t PIDP26:1;
      uint64_t PIDP27:1;
      uint64_t PIDP28:1;
      uint64_t PIDP29:1;
      uint64_t PIDP30:1;
      uint64_t PIDP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCFG2;

  uint8_t res1[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG3;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMDAR:4;
      uint64_t reservedSpace0:3;
      uint64_t NCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDACFG5;

  uint8_t res3[58];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMRGD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCFG2;

  uint8_t res4[189];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRCINST:16;
      uint64_t PACINST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERRLOC_2;

  uint8_t res5[500];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_1;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_2;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_2;

  uint8_t res9[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_16;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_17;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W0_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDID:4;
      uint64_t reservedSpace0:4;
      uint64_t EATR:3;
      uint64_t ERW:1;
      uint64_t reservedSpace1:12;
      uint64_t EPORT:3;
      uint64_t reservedSpace2:3;
      uint64_t EST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W1_18;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t RECR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERR_W3_18;

  uint8_t res13[464];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:22;
      uint64_t TSM:1;
      uint64_t LK2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID0;

  uint8_t res14[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:22;
      uint64_t TSM:1;
      uint64_t LK2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID3;

  uint8_t res15[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:2;
      uint64_t reservedSpace0:2;
      uint64_t DIDS:2;
      uint64_t PE:2;
      uint64_t PIDM:6;
      uint64_t reservedSpace1:2;
      uint64_t PID:6;
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_0_DFMT0;

  uint8_t res16[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:2;
      uint64_t reservedSpace0:2;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_1_DFMT1;

  uint8_t res17[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:2;
      uint64_t reservedSpace0:2;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_2_DFMT1;

  uint8_t res18[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:2;
      uint64_t reservedSpace0:2;
      uint64_t DIDS:2;
      uint64_t PE:2;
      uint64_t PIDM:6;
      uint64_t reservedSpace1:2;
      uint64_t PID:6;
      uint64_t reservedSpace2:7;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_3_DFMT0;

  uint8_t res19[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID:2;
      uint64_t reservedSpace0:2;
      uint64_t PA:2;
      uint64_t SA:2;
      uint64_t DIDB:1;
      uint64_t reservedSpace1:20;
      uint64_t DFMT:1;
      uint64_t LK1:1;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDA_W0_5_DFMT1;

  uint8_t res20[2140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_36;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_42;

  uint8_t res22[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_47;

  uint8_t res23[640];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_171;

  uint8_t res24[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_173;

  uint8_t res25[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_175;

  uint8_t res26[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_184;

  uint8_t res27[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_188;

  uint8_t res28[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_191;

  uint8_t res29[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_198;

  uint8_t res30[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_209;

  uint8_t res31[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_217;

  uint8_t res32[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_221;

  uint8_t res33[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_227;

  uint8_t res34[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_229;

  uint8_t res35[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_232;

  uint8_t res36[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_236;

  uint8_t res37[152];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_257;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_257;

  uint8_t res38[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_260;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_260;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_261;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_261;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_262;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_262;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_263;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_263;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_265;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_265;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_266;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_266;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_267;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_267;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_268;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_268;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_269;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_269;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_270;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_270;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_271;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_271;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_272;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_272;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_273;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_273;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_274;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_274;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_275;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_275;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_276;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_276;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_277;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_277;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_278;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_278;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_279;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_279;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_280;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_280;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_281;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_281;

  uint8_t res39[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_283;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_283;

  uint8_t res40[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_285;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_285;

  uint8_t res41[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_288;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_288;

  uint8_t res42[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_295;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_295;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_296;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_296;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_298;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_298;

  uint8_t res43[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_303;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_303;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_304;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_304;

  uint8_t res44[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_307;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_307;

  uint8_t res45[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_311;

  uint8_t res46[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W0_315;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDAC_W1_315;

  uint8_t res47[1568];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_0;

  uint8_t res48[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_1;

  uint8_t res49[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_2;

  uint8_t res50[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_3;

  uint8_t res51[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_4;

  uint8_t res52[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_5;

  uint8_t res53[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_6;

  uint8_t res54[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_7;

  uint8_t res55[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_8;

  uint8_t res56[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_9;

  uint8_t res57[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_10;

  uint8_t res58[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_11;

  uint8_t res59[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_12;

  uint8_t res60[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_13;

  uint8_t res61[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_14;

  uint8_t res62[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_15;

  uint8_t res63[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_16;

  uint8_t res64[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_17;

  uint8_t res65[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_18;

  uint8_t res66[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_19;

  uint8_t res67[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_20;

  uint8_t res68[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_21;

  uint8_t res69[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_22;

  uint8_t res70[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_23;

  uint8_t res71[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_24;

  uint8_t res72[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_25;

  uint8_t res73[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_26;

  uint8_t res74[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_27;

  uint8_t res75[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_28;

  uint8_t res76[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_29;

  uint8_t res77[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_30;

  uint8_t res78[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_31;

  uint8_t res79[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_32;

  uint8_t res80[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_33;

  uint8_t res81[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_34;

  uint8_t res82[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W0_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W1_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D0ACP:3;
      uint64_t D1ACP:3;
      uint64_t D2ACP:3;
      uint64_t reservedSpace0:15;
      uint64_t SNUM:4;
      uint64_t reservedSpace1:2;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W2_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LK2:2;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRGD_W3_35;

};

#define XRDC (*(volatile struct XRDC_tag *) 0x40278000)

struct INTM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_MM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_IACK;

};

#define INTM (*(volatile struct INTM_tag *) 0x4027c000)

struct INTM_mon_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_IRQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_LATENCY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_STATUS;

};

#define INTM_mon_0 (*(volatile struct INTM_mon_0_tag *) 0x4027c008)

struct INTM_mon_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_IRQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_LATENCY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_STATUS;

};

#define INTM_mon_1 (*(volatile struct INTM_mon_1_tag *) 0x4027c018)

struct INTM_mon_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_IRQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_LATENCY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_STATUS;

};

#define INTM_mon_2 (*(volatile struct INTM_mon_2_tag *) 0x4027c028)

struct INTM_mon_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_IRQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_LATENCY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTM_STATUS;

};

#define INTM_mon_3 (*(volatile struct INTM_mon_3_tag *) 0x4027c038)

struct DMAMUX_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

};

#define DMAMUX_0 (*(volatile struct DMAMUX_0_tag *) 0x40280000)

struct DMAMUX_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

};

#define DMAMUX_1 (*(volatile struct DMAMUX_1_tag *) 0x40284000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t SUPV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG_EN:1;
      uint64_t reservedSpace0:9;
      uint64_t DIV32EN:1;
      uint64_t DIV512EN:1;
      uint64_t CLKSEL:2;
      uint64_t APIIE:1;
      uint64_t APIEN:1;
      uint64_t reservedSpace1:12;
      uint64_t ROVREN:1;
      uint64_t FRZEN:1;
      uint64_t RTCIE:1;
      uint64_t CNTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t ROVRF:1;
      uint64_t reservedSpace1:2;
      uint64_t APIF:1;
      uint64_t reservedSpace2:3;
      uint64_t INV_API:1;
      uint64_t INV_RTC:1;
      uint64_t reservedSpace3:10;
      uint64_t RTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APIVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APIVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCVAL;

};

#define RTC (*(volatile struct RTC_tag *) 0x40288000)

struct MC_RGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_POR:1;
      uint64_t reservedSpace0:2;
      uint64_t FCCU_FTR:1;
      uint64_t STCU_URF:1;
      uint64_t reservedSpace1:1;
      uint64_t MC_RGM_FRE:1;
      uint64_t reservedSpace2:1;
      uint64_t FXOSC_FAIL:1;
      uint64_t PLL_LOL:1;
      uint64_t CORE_CLK_FAIL:1;
      uint64_t reservedSpace3:1;
      uint64_t AIPS_PLAT_CLK_FAIL:1;
      uint64_t reservedSpace4:1;
      uint64_t HSE_CLK_FAIL:1;
      uint64_t SYS_DIV_FAIL:1;
      uint64_t reservedSpace5:1;
      uint64_t HSE_TMPR_RST:1;
      uint64_t HSE_SNVS_RST:1;
      uint64_t reservedSpace6:10;
      uint64_t SW_DEST:1;
      uint64_t DEBUG_DEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DES;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_EXR:1;
      uint64_t reservedSpace0:2;
      uint64_t FCCU_RST:1;
      uint64_t ST_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t SWT0_RST:1;
      uint64_t reservedSpace2:2;
      uint64_t JTAG_RST:1;
      uint64_t reservedSpace3:6;
      uint64_t HSE_SWT_RST:1;
      uint64_t reservedSpace4:3;
      uint64_t HSE_BOOT_RST:1;
      uint64_t reservedSpace5:8;
      uint64_t SW_FUNC:1;
      uint64_t DEBUG_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t D_FCCU_RST:1;
      uint64_t reservedSpace1:2;
      uint64_t D_SWT0_RST:1;
      uint64_t reservedSpace2:2;
      uint64_t D_JTAG_RST:1;
      uint64_t reservedSpace3:20;
      uint64_t D_DEBUG_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FERD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BE_FCCU_RST:1;
      uint64_t BE_ST_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t BE_SWT0_RST:1;
      uint64_t reservedSpace2:2;
      uint64_t BE_JTAG_RST:1;
      uint64_t reservedSpace3:6;
      uint64_t BE_HSE_SWT_RST:1;
      uint64_t reservedSpace4:3;
      uint64_t BE_HSE_BOOT_RST:1;
      uint64_t reservedSpace5:8;
      uint64_t BE_SW_FUNC:1;
      uint64_t BE_DEBUG_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASSERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DES_RES:1;
      uint64_t FES_RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRET_EN:1;
      uint64_t FRET_TIMEOUT:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRENTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LP_DBG_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPDEBUG;

};

#define MC_RGM (*(volatile struct MC_RGM_tag *) 0x4028c000)

struct SIUL2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR_MASK:4;
      uint64_t MAJOR_MASK:4;
      uint64_t reservedSpace0:8;
      uint64_t PART_NO:10;
      uint64_t PRODUCT_LINE_LETTER:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH_SIZE_CODE:8;
      uint64_t FLASH_SIZE_DATA:4;
      uint64_t FLASH_DATA:2;
      uint64_t FLASH_CODE:2;
      uint64_t FREQUENCY:4;
      uint64_t PACKAGE:6;
      uint64_t TEMPERATURE:3;
      uint64_t TECHNOLOGY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIF0:1;
      uint64_t EIF1:1;
      uint64_t EIF2:1;
      uint64_t EIF3:1;
      uint64_t EIF4:1;
      uint64_t EIF5:1;
      uint64_t EIF6:1;
      uint64_t EIF7:1;
      uint64_t EIF8:1;
      uint64_t EIF9:1;
      uint64_t EIF10:1;
      uint64_t EIF11:1;
      uint64_t EIF12:1;
      uint64_t EIF13:1;
      uint64_t EIF14:1;
      uint64_t EIF15:1;
      uint64_t EIF16:1;
      uint64_t EIF17:1;
      uint64_t EIF18:1;
      uint64_t EIF19:1;
      uint64_t EIF20:1;
      uint64_t EIF21:1;
      uint64_t EIF22:1;
      uint64_t EIF23:1;
      uint64_t EIF24:1;
      uint64_t EIF25:1;
      uint64_t EIF26:1;
      uint64_t EIF27:1;
      uint64_t EIF28:1;
      uint64_t EIF29:1;
      uint64_t EIF30:1;
      uint64_t EIF31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DISR0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRE0:1;
      uint64_t EIRE1:1;
      uint64_t EIRE2:1;
      uint64_t EIRE3:1;
      uint64_t EIRE4:1;
      uint64_t EIRE5:1;
      uint64_t EIRE6:1;
      uint64_t EIRE7:1;
      uint64_t EIRE8:1;
      uint64_t EIRE9:1;
      uint64_t EIRE10:1;
      uint64_t EIRE11:1;
      uint64_t EIRE12:1;
      uint64_t EIRE13:1;
      uint64_t EIRE14:1;
      uint64_t EIRE15:1;
      uint64_t EIRE16:1;
      uint64_t EIRE17:1;
      uint64_t EIRE18:1;
      uint64_t EIRE19:1;
      uint64_t EIRE20:1;
      uint64_t EIRE21:1;
      uint64_t EIRE22:1;
      uint64_t EIRE23:1;
      uint64_t EIRE24:1;
      uint64_t EIRE25:1;
      uint64_t EIRE26:1;
      uint64_t EIRE27:1;
      uint64_t EIRE28:1;
      uint64_t EIRE29:1;
      uint64_t EIRE30:1;
      uint64_t EIRE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRER0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSR0:1;
      uint64_t DIRSR1:1;
      uint64_t DIRSR2:1;
      uint64_t DIRSR3:1;
      uint64_t DIRSR4:1;
      uint64_t DIRSR5:1;
      uint64_t DIRSR6:1;
      uint64_t DIRSR7:1;
      uint64_t DIRSR8:1;
      uint64_t DIRSR9:1;
      uint64_t DIRSR10:1;
      uint64_t DIRSR11:1;
      uint64_t DIRSR12:1;
      uint64_t DIRSR13:1;
      uint64_t DIRSR14:1;
      uint64_t DIRSR15:1;
      uint64_t DIRSR16:1;
      uint64_t DIRSR17:1;
      uint64_t DIRSR18:1;
      uint64_t DIRSR19:1;
      uint64_t DIRSR20:1;
      uint64_t DIRSR21:1;
      uint64_t DIRSR22:1;
      uint64_t DIRSR23:1;
      uint64_t DIRSR24:1;
      uint64_t DIRSR25:1;
      uint64_t DIRSR26:1;
      uint64_t DIRSR27:1;
      uint64_t DIRSR28:1;
      uint64_t DIRSR29:1;
      uint64_t DIRSR30:1;
      uint64_t DIRSR31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE0:1;
      uint64_t IREE1:1;
      uint64_t IREE2:1;
      uint64_t IREE3:1;
      uint64_t IREE4:1;
      uint64_t IREE5:1;
      uint64_t IREE6:1;
      uint64_t IREE7:1;
      uint64_t IREE8:1;
      uint64_t IREE9:1;
      uint64_t IREE10:1;
      uint64_t IREE11:1;
      uint64_t IREE12:1;
      uint64_t IREE13:1;
      uint64_t IREE14:1;
      uint64_t IREE15:1;
      uint64_t IREE16:1;
      uint64_t IREE17:1;
      uint64_t IREE18:1;
      uint64_t IREE19:1;
      uint64_t IREE20:1;
      uint64_t IREE21:1;
      uint64_t IREE22:1;
      uint64_t IREE23:1;
      uint64_t IREE24:1;
      uint64_t IREE25:1;
      uint64_t IREE26:1;
      uint64_t IREE27:1;
      uint64_t IREE28:1;
      uint64_t IREE29:1;
      uint64_t IREE30:1;
      uint64_t IREE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IREER0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEE0:1;
      uint64_t IFEE1:1;
      uint64_t IFEE2:1;
      uint64_t IFEE3:1;
      uint64_t IFEE4:1;
      uint64_t IFEE5:1;
      uint64_t IFEE6:1;
      uint64_t IFEE7:1;
      uint64_t IFEE8:1;
      uint64_t IFEE9:1;
      uint64_t IFEE10:1;
      uint64_t IFEE11:1;
      uint64_t IFEE12:1;
      uint64_t IFEE13:1;
      uint64_t IFEE14:1;
      uint64_t IFEE15:1;
      uint64_t IFEE16:1;
      uint64_t IFEE17:1;
      uint64_t IFEE18:1;
      uint64_t IFEE19:1;
      uint64_t IFEE20:1;
      uint64_t IFEE21:1;
      uint64_t IFEE22:1;
      uint64_t IFEE23:1;
      uint64_t IFEE24:1;
      uint64_t IFEE25:1;
      uint64_t IFEE26:1;
      uint64_t IFEE27:1;
      uint64_t IFEE28:1;
      uint64_t IFEE29:1;
      uint64_t IFEE30:1;
      uint64_t IFEE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFEER0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE0:1;
      uint64_t IFE1:1;
      uint64_t IFE2:1;
      uint64_t IFE3:1;
      uint64_t IFE4:1;
      uint64_t IFE5:1;
      uint64_t IFE6:1;
      uint64_t IFE7:1;
      uint64_t IFE8:1;
      uint64_t IFE9:1;
      uint64_t IFE10:1;
      uint64_t IFE11:1;
      uint64_t IFE12:1;
      uint64_t IFE13:1;
      uint64_t IFE14:1;
      uint64_t IFE15:1;
      uint64_t IFE16:1;
      uint64_t IFE17:1;
      uint64_t IFE18:1;
      uint64_t IFE19:1;
      uint64_t IFE20:1;
      uint64_t IFE21:1;
      uint64_t IFE22:1;
      uint64_t IFE23:1;
      uint64_t IFE24:1;
      uint64_t IFE25:1;
      uint64_t IFE26:1;
      uint64_t IFE27:1;
      uint64_t IFE28:1;
      uint64_t IFE29:1;
      uint64_t IFE30:1;
      uint64_t IFE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFCP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCPR;

  uint8_t res7[316];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYS_RAM_SIZE:6;
      uint64_t reservedSpace0:4;
      uint64_t PART_NO_SUF:6;
      uint64_t PROD_FAM_NO:10;
      uint64_t PROD_FAM_LET:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORE_PLAT_FET:3;
      uint64_t EMAC_FET:2;
      uint64_t SEC_FET:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR4;

  uint8_t res8[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR37;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS_0:1;
      uint64_t SSS_1:1;
      uint64_t SSS_2:1;
      uint64_t reservedSpace0:2;
      uint64_t SMC:1;
      uint64_t IFE:1;
      uint64_t reservedSpace1:1;
      uint64_t DSE:1;
      uint64_t reservedSpace2:2;
      uint64_t PUS:1;
      uint64_t reservedSpace3:1;
      uint64_t PUE:1;
      uint64_t SRC:1;
      uint64_t reservedSpace4:1;
      uint64_t PKE:1;
      uint64_t INV:1;
      uint64_t reservedSpace5:1;
      uint64_t IBE:1;
      uint64_t reservedSpace6:1;
      uint64_t OBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR219;

  uint8_t res10[1168];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR5;

  uint8_t res11[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR71;

  uint8_t res12[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR103;

  uint8_t res13[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR135;

  uint8_t res14[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR149;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR202;

  uint8_t res16[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR257;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR258;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR259;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR260;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR261;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR262;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR263;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR265;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR266;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR267;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR268;

  uint8_t res17[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR289;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR290;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR295;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR296;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR298;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR299;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR300;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR301;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR302;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR303;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR304;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR305;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR306;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR307;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR308;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR309;

  uint8_t res18[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR315;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR316;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR317;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR318;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR319;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR321;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR322;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR323;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR324;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR325;

  uint8_t res19[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR343;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR344;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR345;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR346;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR347;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR348;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR349;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR350;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR351;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR352;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR353;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR354;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR355;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR356;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR357;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR358;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR359;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR360;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR361;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR362;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR363;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR364;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR365;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR366;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR367;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR368;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR369;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR370;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR371;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR372;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR373;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR374;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR375;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR376;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR377;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR378;

  uint8_t res20[724];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO32;

  uint8_t res21[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO131;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO130;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO129;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO128;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO135;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO134;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO133;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO132;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO139;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO138;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO137;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO136;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO143;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO142;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO141;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO140;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO147;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO146;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO145;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO144;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO151;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO150;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO149;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO148;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO155;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO154;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO153;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO152;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO159;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO158;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO157;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO156;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO163;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO162;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO161;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO160;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO167;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO166;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO165;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO164;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO171;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO170;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO169;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO168;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO175;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO174;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO173;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO172;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO179;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO178;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO177;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO176;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO183;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO182;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO181;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO180;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO187;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO186;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO185;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO184;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO191;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO190;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO189;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO188;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO195;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO194;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO193;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO192;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO199;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO198;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO197;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO196;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO203;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO202;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO201;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO200;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO207;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO206;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO205;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO204;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO211;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO210;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO209;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO208;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO215;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO214;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO213;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO212;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO219;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO218;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO217;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDO_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDO216;

  uint8_t res22[292];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI32;

  uint8_t res23[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI131;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI130;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI129;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI128;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI135;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI134;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI133;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI132;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI139;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI138;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI137;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI136;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI143;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI142;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI141;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI140;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI147;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI146;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI145;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI144;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI151;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI150;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI149;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI148;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI155;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI154;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI153;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI152;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI159;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI158;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI157;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI156;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI163;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI162;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI161;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI160;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI167;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI166;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI165;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI164;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI171;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI170;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI169;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI168;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI175;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI174;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI173;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI172;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI179;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI178;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI177;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI176;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI183;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI182;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI181;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI180;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI187;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI186;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI185;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI184;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI191;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI190;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI189;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI188;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI195;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI194;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI193;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI192;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI199;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI198;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI197;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI196;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI203;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI202;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI201;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI200;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI207;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI206;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI205;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI204;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI211;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI210;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI209;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI208;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI215;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI214;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI213;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI212;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI219;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI218;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI217;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDI_n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GPDI216;

  uint8_t res24[292];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t reservedSpace0:2;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO0:1;
      uint64_t PPDO1:1;
      uint64_t PPDO2:1;
      uint64_t PPDO3:1;
      uint64_t PPDO4:1;
      uint64_t PPDO5:1;
      uint64_t PPDO6:1;
      uint64_t PPDO7:1;
      uint64_t PPDO8:1;
      uint64_t PPDO9:1;
      uint64_t PPDO10:1;
      uint64_t PPDO11:1;
      uint64_t PPDO12:1;
      uint64_t PPDO13:1;
      uint64_t PPDO14:1;
      uint64_t PPDO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO12;

  uint8_t res25[36];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t reservedSpace0:2;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI0:1;
      uint64_t PPDI1:1;
      uint64_t PPDI2:1;
      uint64_t PPDI3:1;
      uint64_t PPDI4:1;
      uint64_t PPDI5:1;
      uint64_t PPDI6:1;
      uint64_t PPDI7:1;
      uint64_t PPDI8:1;
      uint64_t PPDI9:1;
      uint64_t PPDI10:1;
      uint64_t PPDI11:1;
      uint64_t PPDI12:1;
      uint64_t PPDI13:1;
      uint64_t PPDI14:1;
      uint64_t PPDI15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI12;

  uint8_t res26[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t reservedSpace0:2;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t reservedSpace1:2;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO0:1;
      uint64_t MPPDO1:1;
      uint64_t MPPDO2:1;
      uint64_t MPPDO3:1;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t MASK0:1;
      uint64_t MASK1:1;
      uint64_t MASK2:1;
      uint64_t MASK3:1;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t MPPDO4:1;
      uint64_t MPPDO5:1;
      uint64_t MPPDO6:1;
      uint64_t MPPDO7:1;
      uint64_t MPPDO8:1;
      uint64_t MPPDO9:1;
      uint64_t MPPDO10:1;
      uint64_t MPPDO11:1;
      uint64_t MPPDO12:1;
      uint64_t MPPDO13:1;
      uint64_t MPPDO14:1;
      uint64_t MPPDO15:1;
      uint64_t reservedSpace1:4;
      uint64_t MASK4:1;
      uint64_t MASK5:1;
      uint64_t MASK6:1;
      uint64_t MASK7:1;
      uint64_t MASK8:1;
      uint64_t MASK9:1;
      uint64_t MASK10:1;
      uint64_t MASK11:1;
      uint64_t MASK12:1;
      uint64_t MASK13:1;
      uint64_t MASK14:1;
      uint64_t MASK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO13;

};

#define SIUL2 (*(volatile struct SIUL2_tag *) 0x40290004)

struct VIRT_WRAPPER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A15_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A31_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A47_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A63_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A79_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A95_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A111_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A127_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A143_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A159_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A175_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A191_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A207_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A223_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A239_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A255_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A271_256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A287_272;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A303_288;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A319_304;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A335_320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A351_336;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A367_352;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A383_368;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A399_384;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A415_400;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A431_416;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A447_432;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A463_448;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A479_464;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A495_480;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_0:2;
      uint64_t PAD_1:2;
      uint64_t PAD_2:2;
      uint64_t PAD_3:2;
      uint64_t PAD_4:2;
      uint64_t PAD_5:2;
      uint64_t PAD_6:2;
      uint64_t PAD_7:2;
      uint64_t PAD_8:2;
      uint64_t PAD_9:2;
      uint64_t PAD_10:2;
      uint64_t PAD_11:2;
      uint64_t PAD_12:2;
      uint64_t PAD_13:2;
      uint64_t PAD_14:2;
      uint64_t PAD_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_A511_496;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B527_512;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B543_528;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B559_544;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B575_560;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B591_576;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B607_592;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B623_608;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B639_624;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B655_640;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B671_656;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B687_672;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B703_688;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B719_704;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B735_720;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B751_736;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B767_752;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B783_768;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B799_784;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B815_800;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B831_816;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B847_832;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B863_848;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B879_864;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B895_880;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B911_896;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B927_912;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B943_928;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B959_944;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B975_960;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B991_976;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B1007_992;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INMUX_0:2;
      uint64_t INMUX_1:2;
      uint64_t INMUX_2:2;
      uint64_t INMUX_3:2;
      uint64_t INMUX_4:2;
      uint64_t INMUX_5:2;
      uint64_t INMUX_6:2;
      uint64_t INMUX_7:2;
      uint64_t INMUX_8:2;
      uint64_t INMUX_9:2;
      uint64_t INMUX_10:2;
      uint64_t INMUX_11:2;
      uint64_t INMUX_12:2;
      uint64_t INMUX_13:2;
      uint64_t INMUX_14:2;
      uint64_t INMUX_15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_B1023_1008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTC_CTRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_C1039_1024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t REG_GCR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG_D1055_1040;

};

#define VIRT_WRAPPER (*(volatile struct VIRT_WRAPPER_tag *) 0x402a8000)

struct DCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDONE:1;
      uint64_t DCMERR:1;
      uint64_t reservedSpace0:2;
      uint64_t DCMLCST:1;
      uint64_t reservedSpace1:3;
      uint64_t DCMUTS:1;
      uint64_t DCMOTAS:1;
      uint64_t DCMDBGPS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMCLC:3;
      uint64_t DCMLCFN:1;
      uint64_t DCMRLC:3;
      uint64_t reservedSpace0:1;
      uint64_t DCMFLC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMLCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMLCSS1:1;
      uint64_t DCMLCC1:3;
      uint64_t DCMLCE1:1;
      uint64_t DCMLCFE1:1;
      uint64_t DCMLCSS2:1;
      uint64_t DCMLCC2:3;
      uint64_t DCMLCE2:1;
      uint64_t DCMLCFE2:1;
      uint64_t DCMLCSS3:1;
      uint64_t DCMLCC3:3;
      uint64_t DCMLCE3:1;
      uint64_t DCMLCFE3:1;
      uint64_t DCMLCSS4:1;
      uint64_t DCMLCC4:3;
      uint64_t DCMLCE4:1;
      uint64_t DCMLCFE4:1;
      uint64_t DCMLCSS5:1;
      uint64_t DCMLCC5:3;
      uint64_t DCMLCE5:1;
      uint64_t DCMLCFE5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMLCS;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t DCMDBGT:1;
      uint64_t DCMDBGE:1;
      uint64_t reservedSpace1:16;
      uint64_t DCMCERS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMMISC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DCM_APPDBG_STAT:1;
      uint64_t reservedSpace1:14;
      uint64_t APPDBG_STAT_SOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMDEB;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMECT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMDCFE1:21;
      uint64_t reservedSpace0:3;
      uint64_t DCMDCFF1:3;
      uint64_t DCMESF1:1;
      uint64_t DCMESD1:1;
      uint64_t DCMDCFT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMSRR16;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMLCSS6:1;
      uint64_t DCMLCC6:3;
      uint64_t DCMLCE6:1;
      uint64_t DCMLCFE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMLCS_2;

};

#define DCM (*(volatile struct DCM_tag *) 0x402ac000)

struct DCM_GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCU_ISO_STATUS:1;
      uint64_t HSE_DCF_VIO:1;
      uint64_t KEY_RESP_READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROD1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM7_0_LOCKUP:1;
      uint64_t reservedSpace0:1;
      uint64_t HSE_LOCKUP:1;
      uint64_t CM7_RCCU1_ALARM:1;
      uint64_t CM7_RCCU2_ALARM:1;
      uint64_t TCM_GSKT_ALARM:1;
      uint64_t DMA_SYS_GSKT_ALARM:1;
      uint64_t DMA_PERIPH_GSKT_ALARM:1;
      uint64_t SYS_AXBS_ALARM:1;
      uint64_t DMA_AXBS_ALARM:1;
      uint64_t reservedSpace1:1;
      uint64_t HSE_GSKT_ALARM:1;
      uint64_t QSPI_GSKT_ALARM:1;
      uint64_t AIPS1_GSKT_ALARM:1;
      uint64_t AIPS2_GSKT_ALARM:1;
      uint64_t ADDR_EDC_ERR:1;
      uint64_t DATA_EDC_ERR:1;
      uint64_t TCM_AXBS_ALARM:1;
      uint64_t EMAC_GSKT_ALARM:1;
      uint64_t PERIPH_AXBS_ALARM:1;
      uint64_t reservedSpace2:2;
      uint64_t LC_ERR:1;
      uint64_t reservedSpace3:1;
      uint64_t PRAM1_ECC_ERR:1;
      uint64_t PRAM0_ECC_ERR:1;
      uint64_t CM7_0_DCDATA_ECC_ERR:1;
      uint64_t reservedSpace4:1;
      uint64_t CM7_0_DCTAG_ECC_ERR:1;
      uint64_t reservedSpace5:1;
      uint64_t CM7_0_ICDATA_ECC_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM7_0_ICTAG_ECC_ERR:1;
      uint64_t reservedSpace0:1;
      uint64_t CM7_0_ITCM_ECC_ERR:1;
      uint64_t CM7_0_DTCM0_ECC_ERR:1;
      uint64_t CM7_0_DTCM1_ECC_ERR:1;
      uint64_t CM7_1_ITCM_ECC_ERR:1;
      uint64_t CM7_1_DTCM0_ECC_ERR:1;
      uint64_t CM7_1_DTCM1_ECC_ERR:1;
      uint64_t DMA_TCD_RAM_ECC_ERR:1;
      uint64_t PRAM0_FCCU_ALARM:1;
      uint64_t PRAM1_FCCU_ALARM:1;
      uint64_t HSE_RAM_ECC_ERR:1;
      uint64_t PF0_CODE_ECC_ERR:1;
      uint64_t PF0_DATA_ECC_ERR:1;
      uint64_t PF1_CODE_ECC_ERR:1;
      uint64_t PF1_DATA_ECC_ERR:1;
      uint64_t reservedSpace1:2;
      uint64_t FLASH_EDC_ERR:1;
      uint64_t FLASH_ADDR_ENC_ERR:1;
      uint64_t FLASH_REF_ERR:1;
      uint64_t FLASH_RST_ERR:1;
      uint64_t FLASH_SCAN_ERR:1;
      uint64_t reservedSpace2:1;
      uint64_t FLASH_ACCESS_ERR:1;
      uint64_t reservedSpace3:1;
      uint64_t VDD1P1_GNG_ERR:1;
      uint64_t VDD2P5_GNG_ERR:1;
      uint64_t reservedSpace4:1;
      uint64_t TEST_ACTIVATION_0_ERR:1;
      uint64_t TEST_ACTIVATION_1_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t INTM_0_ERR:1;
      uint64_t INTM_1_ERR:1;
      uint64_t INTM_2_ERR:1;
      uint64_t INTM_3_ERR:1;
      uint64_t SW_NCF_0:1;
      uint64_t SW_NCF_1:1;
      uint64_t SW_NCF_2:1;
      uint64_t SW_NCF_3:1;
      uint64_t STCU_NCF:1;
      uint64_t MBIST_ACTIVATION_ERR:1;
      uint64_t STCU_BIST_USER_CF:1;
      uint64_t MTR_BUS_ERR:1;
      uint64_t DEBUG_ACTIVATION_ERR:1;
      uint64_t TCM_RDATA_EDC_ERR:1;
      uint64_t EMAC_RDATA_EDC_ERR:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA_RDATA_EDC_ERR:1;
      uint64_t reservedSpace2:2;
      uint64_t CM7_0_AHBP_RDATA_EDC_ERR:1;
      uint64_t CM7_0_AHBM_RDATA_EDC_ERR:1;
      uint64_t HSE_RDATA_EDC_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROD5;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMAC_MDC_CHID_0:1;
      uint64_t EMAC_MDC_CHID_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID8:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID9:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID11:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID12:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID13:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID14:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_SDID15:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF17;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t LOCKSTEP_EN:1;
      uint64_t DCM_DONE:1;
      uint64_t FCCU_EOUT_DEDICATED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR_WDG_EN:1;
      uint64_t LMAUTO_DIS:1;
      uint64_t reservedSpace0:1;
      uint64_t DMA_AXBS_IAHB_BYP:1;
      uint64_t reservedSpace1:1;
      uint64_t QSPI_IAHB_BYP:1;
      uint64_t AIPS_IAHB_BYP:1;
      uint64_t reservedSpace2:11;
      uint64_t DCF_DEST_RST_ESC:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCF_DEST_RST_ESC:18;
      uint64_t reservedSpace0:1;
      uint64_t HSE_CLK_MODE_OPTION:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROF21;

  uint8_t res3[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t CLKOUT_STANDBY:1;
      uint64_t reservedSpace1:4;
      uint64_t STANBDY_PWDOG_DIS:1;
      uint64_t POR_WDOG_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWP1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t DEST_RST9_AS_IPI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWP3;

  uint8_t res5[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t EOUT_STAT_DUR_STEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM7_0_LOCKUP_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t CM7_RCCU1_ALARM_EN:1;
      uint64_t CM7_RCCU2_ALARM_EN:1;
      uint64_t TCM_GSKT_ALARM_EN:1;
      uint64_t DMA_SYS_GSKT_ALARM_EN:1;
      uint64_t DMA_PERIPH_GSKT_ALARM_EN:1;
      uint64_t SYS_AXBS_ALARM_EN:1;
      uint64_t DMA_AXBS_ALARM_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t HSE_GSKT_ALARM_EN:1;
      uint64_t QSPI_GSKT_ALARM_EN:1;
      uint64_t AIPS1_GSKT_ALARM_EN:1;
      uint64_t AIPS2_GSKT_ALARM_EN:1;
      uint64_t ADDR_EDC_ERR_EN:1;
      uint64_t DATA_EDC_ERR_EN:1;
      uint64_t TCM_AXBS_ALARM_EN:1;
      uint64_t EMAC_GSKT_ALARM_EN:1;
      uint64_t PERIPH_AXBS_ALARM_EN:1;
      uint64_t reservedSpace2:2;
      uint64_t LC_ERR_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t PRAM1_ECC_ERR_EN:1;
      uint64_t PRAM0_ECC_ERR_EN:1;
      uint64_t CM7_0_DCDATA_ECC_ERR_EN:1;
      uint64_t reservedSpace4:1;
      uint64_t CM7_0_DCTAG_ECC_ERR_EN:1;
      uint64_t reservedSpace5:1;
      uint64_t CM7_0_ICDATA_ECC_ERR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM7_0_ICTAG_ECC_ERR_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t CM7_0_ITCM_ECC_ERR_EN:1;
      uint64_t CM7_0_DTCM0_ECC_ERR_EN:1;
      uint64_t CM7_0_DTCM1_ECC_ERR_EN:1;
      uint64_t CM7_1_ITCM_ECC_ERR_EN:1;
      uint64_t CM7_1_DTCM0_ECC_ERR_EN:1;
      uint64_t CM7_1_DTCM1_ECC_ERR_EN:1;
      uint64_t DMA_TCD_RAM_ECC_ERR_EN:1;
      uint64_t PRAM0_FCCU_ALARM_EN:1;
      uint64_t PRAM1_FCCU_ALARM_EN:1;
      uint64_t HSE_RAM_ECC_ERR_EN:1;
      uint64_t PF0_CODE_ECC_ERR_EN:1;
      uint64_t PF0_DATA_ECC_ERR_EN:1;
      uint64_t PF1_CODE_ECC_ERR_EN:1;
      uint64_t PF1_DATA_ECC_ERR_EN:1;
      uint64_t reservedSpace1:2;
      uint64_t FLASH_EDC_ERR_EN:1;
      uint64_t FLASH_ADDR_ENC_ERR_EN:1;
      uint64_t FLASH_REF_ERR_EN:1;
      uint64_t FLASH_RST_ERR_EN:1;
      uint64_t FLASH_SCAN_ERR_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t FLASH_ACCESS_ERR_EN:1;
      uint64_t reservedSpace3:1;
      uint64_t VDD1P1_GNG_ERR_EN:1;
      uint64_t VDD2P5_GNG_ERR_EN:1;
      uint64_t reservedSpace4:1;
      uint64_t TEST_ACTIVATION_0_ERR_EN:1;
      uint64_t TEST_ACTIVATION_1_ERR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t INTM_0_ERR_EN:1;
      uint64_t INTM_1_ERR_EN:1;
      uint64_t INTM_2_ERR_EN:1;
      uint64_t INTM_3_ERR_EN:1;
      uint64_t SW_NCF_0_EN:1;
      uint64_t SW_NCF_1_EN:1;
      uint64_t SW_NCF_2_EN:1;
      uint64_t SW_NCF_3_EN:1;
      uint64_t STCU_NCF_EN:1;
      uint64_t MBIST_ACTIVATION_ERR_EN:1;
      uint64_t STCU_BIST_USER_CF_EN:1;
      uint64_t MTR_BUS_ERR_EN:1;
      uint64_t DEBUG_ACTIVATION_ERR_EN:1;
      uint64_t TCM_RDATA_EDC_ERR_EN:1;
      uint64_t EMAC_RDATA_EDC_ERR_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t DMA_RDATA_EDC_ERR_EN:1;
      uint64_t reservedSpace2:2;
      uint64_t CM7_0_AHBP_RDATA_EDC_ERR_EN:1;
      uint64_t CM7_0_AHBM_RDATA_EDC_ERR_EN:1;
      uint64_t HSE_RDATA_EDC_ERR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDMA_DBG_DIS_CM7_0:1;
      uint64_t FCCU_DBG_DIS_CM7_0:1;
      uint64_t LCU0_DBG_DIS_CM7_0:1;
      uint64_t LCU1_DBG_DIS_CM7_0:1;
      uint64_t EMIOS0_DBG_DIS_CM7_0:1;
      uint64_t EMIOS1_DBG_DIS_CM7_0:1;
      uint64_t EMIOS2_DBG_DIS_CM7_0:1;
      uint64_t RTC_DBG_DIS_CM7_0:1;
      uint64_t SWT0_DBG_DIS_CM7_0:1;
      uint64_t SWT1_DBG_DIS_CM7_0:1;
      uint64_t STM0_DBG_DIS_CM7_0:1;
      uint64_t STM1_DBG_DIS_CM7_0:1;
      uint64_t PIT0_DBG_DIS_CM7_0:1;
      uint64_t PIT1_DBG_DIS_CM7_0:1;
      uint64_t PIT2_DBG_DIS_CM7_0:1;
      uint64_t LPSPI0_DBG_DIS_CM7_0:1;
      uint64_t LPSPI1_DBG_DIS_CM7_0:1;
      uint64_t LPSPI2_DBG_DIS_CM7_0:1;
      uint64_t LPSPI3_DBG_DIS_CM7_0:1;
      uint64_t LPSPI4_DBG_DIS_CM7_0:1;
      uint64_t LPSPI5_DBG_DIS_CM7_0:1;
      uint64_t LPI2C0_DBG_DIS_CM7_0:1;
      uint64_t LPI2C1_DBG_DIS_CM7_0:1;
      uint64_t FLEXIO_DBG_DIS_CM7_0:1;
      uint64_t FLEXCAN0_DBG_DIS_CM7_0:1;
      uint64_t FLEXCAN1_DBG_DIS_CM7_0:1;
      uint64_t FLEXCAN2_DBG_DIS_CM7_0:1;
      uint64_t FLEXCAN3_DBG_DIS_CM7_0:1;
      uint64_t FLEXCAN4_DBG_DIS_CM7_0:1;
      uint64_t FLEXCAN5_DBG_DIS_CM7_0:1;
      uint64_t SAI0_DBG_DIS_CM7_0:1;
      uint64_t SAI1_DBG_DIS_CM7_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWD6;

  uint32_t DCMRWD7;
  uint32_t DCMRWD8;
  uint32_t DCMRWD9;
  uint8_t res6[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAN_TIMESTAMP_SEL:1;
      uint64_t CAN_TIMESTAMP_EN:1;
      uint64_t FCCU_SW_NCF0:1;
      uint64_t FCCU_SW_NCF1:1;
      uint64_t FCCU_SW_NCF2:1;
      uint64_t FCCU_SW_NCF3:1;
      uint64_t reservedSpace0:1;
      uint64_t RMII_MII_SEL:1;
      uint64_t reservedSpace1:7;
      uint64_t VDD_HV_B_IO_CTRL_LATCH:1;
      uint64_t STANDBY_IO_CONFIG:1;
      uint64_t reservedSpace2:3;
      uint64_t SUPPLY_MON_EN:1;
      uint64_t SUPPLY_MON_SEL:3;
      uint64_t VSS_LV_ANMUX_EN:1;
      uint64_t VDD_HV_A_VLT_DVDR_EN:1;
      uint64_t VDD_HV_B_VLT_DVDR_EN:1;
      uint64_t VDD_1_5_VLT_DVDR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DCM_SCAN_BYP_STDBY_EXT:1;
      uint64_t FIRC_TRIM_BYP_STDBY_EXT:1;
      uint64_t PMC_TRIM_RGM_DCF__BYP_STDBY_EXT:1;
      uint64_t SIRC_TRIM_BYP_STDBY_EXT:1;
      uint64_t reservedSpace1:9;
      uint64_t HSE_GSKT_BYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWF2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MUX_MODE_EN_ADC0_S8:1;
      uint64_t MUX_MODE_EN_ADC0_S9:1;
      uint64_t MUX_MODE_EN_ADC1_S14:1;
      uint64_t MUX_MODE_EN_ADC1_S15:1;
      uint64_t MUX_MODE_EN_ADC1_S22:1;
      uint64_t MUX_MODE_EN_ADC1_S23:1;
      uint64_t reservedSpace1:2;
      uint64_t MUX_MODE_EN_ADC2_S8:1;
      uint64_t MUX_MODE_EN_ADC2_S9:1;
      uint64_t reservedSpace2:2;
      uint64_t GLITCH_FIL_TRG_IN0_BYP:1;
      uint64_t GLITCH_FIL_TRG_IN1_BYP:1;
      uint64_t GLITCH_FIL_TRG_IN2_BYP:1;
      uint64_t GLITCH_FIL_TRG_IN3_BYP:1;
      uint64_t CM7_0_CPUWAIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOT_MODE:1;
      uint64_t BOOT_ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMRWF5;

  uint8_t res8[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR_WDG_STAT0:1;
      uint64_t POR_WDG_STAT1:1;
      uint64_t POR_WDG_STAT2:1;
      uint64_t POR_WDG_STAT3:1;
      uint64_t POR_WDG_STAT4:1;
      uint64_t POR_WDG_STAT5:1;
      uint64_t POR_WDG_STAT6:1;
      uint64_t reservedSpace0:3;
      uint64_t POR_WDG_STAT10:1;
      uint64_t POR_WDG_STAT11:1;
      uint64_t reservedSpace1:2;
      uint64_t POR_WDG_STAT14:1;
      uint64_t reservedSpace2:2;
      uint64_t POR_WDG_STAT17:1;
      uint64_t reservedSpace3:2;
      uint64_t POR_WDG_STAT20:1;
      uint64_t reservedSpace4:8;
      uint64_t POR_WDG_STAT29:1;
      uint64_t POR_WDG_STAT30:1;
      uint64_t POR_WDG_STAT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROPP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR_WDG_STAT32:1;
      uint64_t POR_WDG_STAT33:1;
      uint64_t POR_WDG_STAT34:1;
      uint64_t POR_WDG_STAT35:1;
      uint64_t POR_WDG_STAT36:1;
      uint64_t POR_WDG_STAT37:1;
      uint64_t POR_WDG_STAT38:1;
      uint64_t POR_WDG_STAT39:1;
      uint64_t POR_WDG_STAT40:1;
      uint64_t POR_WDG_STAT41:1;
      uint64_t POR_WDG_STAT42:1;
      uint64_t POR_WDG_STAT43:1;
      uint64_t POR_WDG_STAT44:1;
      uint64_t POR_WDG_STAT45:1;
      uint64_t POR_WDG_STAT46:1;
      uint64_t POR_WDG_STAT47:1;
      uint64_t POR_WDG_STAT48:1;
      uint64_t POR_WDG_STAT49:1;
      uint64_t POR_WDG_STAT50:1;
      uint64_t POR_WDG_STAT51:1;
      uint64_t POR_WDG_STAT52:1;
      uint64_t POR_WDG_STAT53:1;
      uint64_t POR_WDG_STAT54:1;
      uint64_t POR_WDG_STAT55:1;
      uint64_t POR_WDG_STAT56:1;
      uint64_t POR_WDG_STAT57:1;
      uint64_t POR_WDG_STAT58:1;
      uint64_t POR_WDG_STAT59:1;
      uint64_t POR_WDG_STAT60:1;
      uint64_t POR_WDG_STAT61:1;
      uint64_t POR_WDG_STAT62:1;
      uint64_t POR_WDG_STAT63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROPP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR_WDG_STAT64:1;
      uint64_t POR_WDG_STAT65:1;
      uint64_t POR_WDG_STAT66:1;
      uint64_t POR_WDG_STAT67:1;
      uint64_t POR_WDG_STAT68:1;
      uint64_t POR_WDG_STAT69:1;
      uint64_t POR_WDG_STAT70:1;
      uint64_t POR_WDG_STAT71:1;
      uint64_t POR_WDG_STAT72:1;
      uint64_t POR_WDG_STAT73:1;
      uint64_t POR_WDG_STAT74:1;
      uint64_t POR_WDG_STAT75:1;
      uint64_t POR_WDG_STAT76:1;
      uint64_t POR_WDG_STAT77:1;
      uint64_t POR_WDG_STAT78:1;
      uint64_t POR_WDG_STAT79:1;
      uint64_t POR_WDG_STAT80:1;
      uint64_t POR_WDG_STAT81:1;
      uint64_t POR_WDG_STAT82:1;
      uint64_t POR_WDG_STAT83:1;
      uint64_t POR_WDG_STAT84:1;
      uint64_t POR_WDG_STAT85:1;
      uint64_t POR_WDG_STAT86:1;
      uint64_t POR_WDG_STAT87:1;
      uint64_t POR_WDG_STAT88:1;
      uint64_t POR_WDG_STAT89:1;
      uint64_t POR_WDG_STAT90:1;
      uint64_t POR_WDG_STAT91:1;
      uint64_t POR_WDG_STAT92:1;
      uint64_t POR_WDG_STAT93:1;
      uint64_t POR_WDG_STAT94:1;
      uint64_t POR_WDG_STAT95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROPP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR_WDG_STAT96:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMROPP4;

};

#define DCM_GPR (*(volatile struct DCM_GPR_tag *) 0x402ac200)

struct WKPU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t NOVF1:1;
      uint64_t NIF1:1;
      uint64_t reservedSpace1:6;
      uint64_t NOVF0:1;
      uint64_t NIF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t NFE1:1;
      uint64_t NFEE1:1;
      uint64_t NREE1:1;
      uint64_t reservedSpace1:1;
      uint64_t NWRE1:1;
      uint64_t NDSS1:2;
      uint64_t NLOCK1:1;
      uint64_t NFE0:1;
      uint64_t NFEE0:1;
      uint64_t NREE0:1;
      uint64_t reservedSpace2:1;
      uint64_t NWRE0:1;
      uint64_t NDSS0:2;
      uint64_t NLOCK0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRER;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIREER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEEx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIFEER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIFER;

  uint8_t res3[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIF_1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WISR_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRE_1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRER_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRE_1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRER_64;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE_1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIREER_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEEx_1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIFEER_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE_1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIFER_64;

};

#define WKPU (*(volatile struct WKPU_tag *) 0x402b4000)

struct CMU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t reservedSpace0:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLLIE:1;
      uint64_t FHHIE:1;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_0 (*(volatile struct CMU_0_tag *) 0x402bc000)

struct CMU_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t reservedSpace0:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLLIE:1;
      uint64_t FHHIE:1;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_3 (*(volatile struct CMU_3_tag *) 0x402bc060)

struct CMU_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t reservedSpace0:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLLIE:1;
      uint64_t FHHIE:1;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_4 (*(volatile struct CMU_4_tag *) 0x402bc080)

struct CMU_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLL:1;
      uint64_t FHH:1;
      uint64_t reservedSpace0:2;
      uint64_t RS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLLIE:1;
      uint64_t FHHIE:1;
      uint64_t FLLAIE:1;
      uint64_t FHHAIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_5 (*(volatile struct CMU_5_tag *) 0x402bc0a0)

struct CMU_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMC:1;
      uint64_t FMTO:1;
      uint64_t reservedSpace0:2;
      uint64_t RS:1;
      uint64_t reservedSpace1:3;
      uint64_t MET_CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMCIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_1 (*(volatile struct CMU_1_tag *) 0x402bc020)

struct CMU_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMC:1;
      uint64_t FMTO:1;
      uint64_t reservedSpace0:2;
      uint64_t RS:1;
      uint64_t reservedSpace1:3;
      uint64_t MET_CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMCIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CMU_2 (*(volatile struct CMU_2_tag *) 0x402bc040)

struct TSPC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRP1_EN:1;
      uint64_t GRP2_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRP_EN;

  uint8_t res0[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OBE0:1;
      uint64_t OBE1:1;
      uint64_t OBE2:1;
      uint64_t OBE3:1;
      uint64_t OBE4:1;
      uint64_t OBE5:1;
      uint64_t OBE6:1;
      uint64_t OBE7:1;
      uint64_t OBE8:1;
      uint64_t OBE9:1;
      uint64_t OBE10:1;
      uint64_t OBE11:1;
      uint64_t OBE12:1;
      uint64_t OBE13:1;
      uint64_t OBE14:1;
      uint64_t OBE15:1;
      uint64_t OBE16:1;
      uint64_t OBE17:1;
      uint64_t OBE18:1;
      uint64_t OBE19:1;
      uint64_t OBE20:1;
      uint64_t OBE21:1;
      uint64_t OBE22:1;
      uint64_t OBE23:1;
      uint64_t OBE24:1;
      uint64_t OBE25:1;
      uint64_t OBE26:1;
      uint64_t OBE27:1;
      uint64_t OBE28:1;
      uint64_t OBE29:1;
      uint64_t OBE30:1;
      uint64_t OBE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRP1_OBE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OBE32:1;
      uint64_t OBE33:1;
      uint64_t OBE34:1;
      uint64_t OBE35:1;
      uint64_t OBE36:1;
      uint64_t OBE37:1;
      uint64_t OBE38:1;
      uint64_t OBE39:1;
      uint64_t OBE40:1;
      uint64_t OBE41:1;
      uint64_t OBE42:1;
      uint64_t OBE43:1;
      uint64_t OBE44:1;
      uint64_t OBE45:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRP1_OBE2;

  uint8_t res1[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OBE0:1;
      uint64_t OBE1:1;
      uint64_t OBE2:1;
      uint64_t OBE3:1;
      uint64_t OBE4:1;
      uint64_t OBE5:1;
      uint64_t OBE6:1;
      uint64_t OBE7:1;
      uint64_t OBE8:1;
      uint64_t OBE9:1;
      uint64_t OBE10:1;
      uint64_t OBE11:1;
      uint64_t OBE12:1;
      uint64_t OBE13:1;
      uint64_t OBE14:1;
      uint64_t OBE15:1;
      uint64_t OBE16:1;
      uint64_t OBE17:1;
      uint64_t OBE18:1;
      uint64_t OBE19:1;
      uint64_t OBE20:1;
      uint64_t OBE21:1;
      uint64_t OBE22:1;
      uint64_t OBE23:1;
      uint64_t OBE24:1;
      uint64_t OBE25:1;
      uint64_t OBE26:1;
      uint64_t OBE27:1;
      uint64_t OBE28:1;
      uint64_t OBE29:1;
      uint64_t OBE30:1;
      uint64_t OBE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRP2_OBE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OBE32:1;
      uint64_t OBE33:1;
      uint64_t OBE34:1;
      uint64_t OBE35:1;
      uint64_t OBE36:1;
      uint64_t OBE37:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRP2_OBE2;

};

#define TSPC (*(volatile struct TSPC_tag *) 0x402c4000)

struct SIRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t STANDBY_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISCELLANEOUS_IN;

};

#define SIRC (*(volatile struct SIRC_tag *) 0x402c8004)

struct SXOSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCON:1;
      uint64_t reservedSpace0:15;
      uint64_t EOCV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SXOSC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t OSC_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SXOSC_STAT;

};

#define SXOSC (*(volatile struct SXOSC_tag *) 0x402cc000)

struct FIRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Status_Register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STDBY_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDBY_ENABLE;

};

#define FIRC (*(volatile struct FIRC_tag *) 0x402d0004)

struct FXOSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCON:1;
      uint64_t reservedSpace0:3;
      uint64_t GM_SEL:4;
      uint64_t reservedSpace1:8;
      uint64_t EOCV:8;
      uint64_t COMP_EN:1;
      uint64_t reservedSpace2:6;
      uint64_t OSC_BYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t OSC_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define FXOSC (*(volatile struct FXOSC_tag *) 0x402d4000)

struct MC_CGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDUR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_SDUR;

  uint8_t res0[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATE:8;
      uint64_t reservedSpace0:8;
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVE:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVE8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFS_DIVS8;

  uint8_t res1[668];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPUP:1;
      uint64_t RAMPDOWN:1;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace0:20;
      uint64_t SELCTL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPUP:1;
      uint64_t RAMPDOWN:1;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace0:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace1:4;
      uint64_t SELSTAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:4;
      uint64_t reservedSpace1:11;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DC_6;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCTL:1;
      uint64_t reservedSpace0:30;
      uint64_t HHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DIV_TRIG_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DIV_TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_0_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_1_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_1_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:1;
      uint64_t reservedSpace1:14;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_1_DC_0;

  uint8_t res3[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_1_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_2_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_2_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:1;
      uint64_t reservedSpace1:14;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_2_DC_0;

  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_2_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_3_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_3_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:2;
      uint64_t reservedSpace1:13;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_3_DC_0;

  uint8_t res5[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_3_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_4_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_4_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:2;
      uint64_t reservedSpace1:13;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_4_DC_0;

  uint8_t res6[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_4_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CG:1;
      uint64_t FCG:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_5_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t GRIP:1;
      uint64_t CS:1;
      uint64_t reservedSpace1:6;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_5_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_5_DC_0;

  uint8_t res7[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_5_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CG:1;
      uint64_t FCG:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_6_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t GRIP:1;
      uint64_t CS:1;
      uint64_t reservedSpace1:6;
      uint64_t SELSTAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_6_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:6;
      uint64_t reservedSpace1:9;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_6_DC_0;

  uint8_t res8[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_6_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_7_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_7_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:6;
      uint64_t reservedSpace1:9;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_7_DC_0;

  uint8_t res9[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_7_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_8_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_8_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:6;
      uint64_t reservedSpace1:9;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_8_DC_0;

  uint8_t res10[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_8_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_9_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_9_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:6;
      uint64_t reservedSpace1:9;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_9_DC_0;

  uint8_t res11[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_9_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_10_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CLK_SW:1;
      uint64_t SAFE_SW:1;
      uint64_t reservedSpace1:12;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace2:4;
      uint64_t SELSTAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_10_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_10_DC_0;

  uint8_t res12[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_10_DIV_UPD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CG:1;
      uint64_t FCG:1;
      uint64_t reservedSpace1:20;
      uint64_t SELCTL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_11_CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t GRIP:1;
      uint64_t CS:1;
      uint64_t reservedSpace1:6;
      uint64_t SELSTAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_11_CSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:3;
      uint64_t reservedSpace1:12;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_11_DC_0;

  uint8_t res13[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MUX_11_DIV_UPD_STAT;

};

#define MC_CGM (*(volatile struct MC_CGM_tag *) 0x402d8000)

struct MC_ME_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_KEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEST_RST:1;
      uint64_t FUNC_RST:1;
      uint64_t reservedSpace0:13;
      uint64_t STANDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_UPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_UPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREV_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIDX:3;
      uint64_t reservedSpace0:5;
      uint64_t PIDX:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAIN_COREID;

  uint8_t res0[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_STAT;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK32:1;
      uint64_t BLOCK33:1;
      uint64_t BLOCK34:1;
      uint64_t BLOCK35:1;
      uint64_t BLOCK36:1;
      uint64_t reservedSpace0:1;
      uint64_t BLOCK38:1;
      uint64_t BLOCK39:1;
      uint64_t BLOCK40:1;
      uint64_t BLOCK41:1;
      uint64_t BLOCK42:1;
      uint64_t reservedSpace1:1;
      uint64_t BLOCK44:1;
      uint64_t BLOCK45:1;
      uint64_t BLOCK46:1;
      uint64_t BLOCK47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_COFB1_STAT;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ32:1;
      uint64_t REQ33:1;
      uint64_t REQ34:1;
      uint64_t REQ35:1;
      uint64_t REQ36:1;
      uint64_t reservedSpace0:1;
      uint64_t REQ38:1;
      uint64_t REQ39:1;
      uint64_t REQ40:1;
      uint64_t REQ41:1;
      uint64_t REQ42:1;
      uint64_t reservedSpace1:1;
      uint64_t REQ44:1;
      uint64_t REQ45:1;
      uint64_t REQ46:1;
      uint64_t REQ47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_COFB1_CLKEN;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;

  union
  {


