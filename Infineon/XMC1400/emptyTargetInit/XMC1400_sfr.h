#include <stdint.h>

struct System_Control_Space_System_Control_Block_0_tag
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

#define System_Control_Space_System_Control_Block_0 (*(volatile struct System_Control_Space_System_Control_Block_0_tag *) 0xe000ed00)

struct System_Control_Space_System_Control_and_ID_0_tag
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

#define System_Control_Space_System_Control_and_ID_0 (*(volatile struct System_Control_Space_System_Control_and_ID_0_tag *) 0xe000e004)

struct System_Control_Space_NVIC_0_tag
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

#define System_Control_Space_NVIC_0 (*(volatile struct System_Control_Space_NVIC_0_tag *) 0xe000e100)

struct System_Control_Space_SysTick_0_tag
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

#define System_Control_Space_SysTick_0 (*(volatile struct System_Control_Space_SysTick_0_tag *) 0xe000e010)

struct M3_Peripherals_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Auxiliary_Control_Register;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t INTEN:1;
      uint64_t CLK_SRC:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Control_and_Status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Reload_Value;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Current_Value;

  uint8_t res1[228];

  uint32_t Interrupt_0_to_31_Set_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Enable;

  uint8_t res2[120];

  uint32_t Interrupt_0_to_31_Clear_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Enable;

  uint8_t res3[120];

  uint32_t Interrupt_0_to_31_Set_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Pending;

  uint8_t res4[120];

  uint32_t Interrupt_0_to_31_Clear_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Pending;

  uint8_t res5[120];

  uint32_t Interrupt_0_to_31_Active_Bit;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_63_Active_Bit;

  uint8_t res6[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_0_to_3_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_4_to_7_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_8_to_11_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_12_to_15_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_16_to_19_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_20_to_23_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_24_to_27_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_28_to_31_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_35_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_36_to_39_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_40_to_43_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_44_to_47_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_48_to_51_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_52_to_53_Priority;

  uint8_t res7[2248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:4;
      uint64_t PARTNO:12;
      uint64_t CON:4;
      uint64_t VAR:4;
      uint64_t IMP:8;
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
      uint64_t VECTPENDING:7;
      uint64_t reservedSpace1:3;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t OFFSET:20;
      uint64_t BASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTABLE;

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
  } __attribute__((aligned(4))) SYSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETHR:1;
      uint64_t MAINPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t MEM:3;
      uint64_t reservedSpace1:5;
      uint64_t BUS:3;
      uint64_t reservedSpace2:5;
      uint64_t USAGE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SVC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DEBUG:3;
      uint64_t reservedSpace1:13;
      uint64_t PENDSV:3;
      uint64_t reservedSpace2:5;
      uint64_t TICK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI3;

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
  } __attribute__((aligned(4))) SYSHNDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IERR:1;
      uint64_t DERR:1;
      uint64_t reservedSpace0:1;
      uint64_t MUSTKE:1;
      uint64_t MSTKE:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARV:1;
      uint64_t IBUS:1;
      uint64_t PRECISE:1;
      uint64_t IMPRE:1;
      uint64_t BUSTKE:1;
      uint64_t BSTKE:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARV:1;
      uint64_t UNDEF:1;
      uint64_t INVSTAT:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAULTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECT:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFAULTSTAT;

  uint8_t res8[4];

  uint32_t Mem_Manage_Address;
  uint32_t Bus_Fault_Address;
  uint8_t res9[84];

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
  } __attribute__((aligned(4))) MPUTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUMBER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUNUMBER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE;

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
  } __attribute__((aligned(4))) MPUATTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE1;

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
  } __attribute__((aligned(4))) MPUATTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE2;

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
  } __attribute__((aligned(4))) MPUATTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE3;

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
  } __attribute__((aligned(4))) MPUATTR3;

  uint8_t res10[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Software_Trigger_Interrupt_Register;

};

#define M3_Peripherals_0 (*(volatile struct M3_Peripherals_0_tag *) 0xe000e008)

struct AON_BATMON_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEAS_EN:1;
      uint64_t CALC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEASCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATMONP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATMONP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG1:4;
      uint64_t CFG2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:4;
      uint64_t OVR:1;
      uint64_t LOWLIM:1;
      uint64_t HIGHLIM:2;
      uint64_t FALLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHPUMPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAC:8;
      uint64_t INT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPUPD;

};

#define AON_BATMON_0 (*(volatile struct AON_BATMON_0_tag *) 0x40095000)

struct AON_EVENT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t WU1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t WU2_EV:6;
      uint64_t reservedSpace2:2;
      uint64_t WU3_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUWUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t WU1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t WU2_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXWUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t AON_PROG1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t AON_PROG2_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_CH1_CAPT_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSEL;

};

#define AON_EVENT_0 (*(volatile struct AON_EVENT_0_tag *) 0x40093000)

struct AON_IOC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCLATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OE_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK32KCTL;

};

#define AON_IOC_0 (*(volatile struct AON_IOC_0_tag *) 0x40094000)

struct AON_RTC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RTC_UPD_EN:1;
      uint64_t RTC_4KHZ_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t RESET:1;
      uint64_t EV_DELAY:4;
      uint64_t reservedSpace1:4;
      uint64_t COMB_EV_MASK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t reservedSpace0:7;
      uint64_t CH1:1;
      uint64_t reservedSpace1:7;
      uint64_t CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUEINC:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSECINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t CH1_EN:1;
      uint64_t CH1_CAPT_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t CH2_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t CH2_CONT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CMPINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBSEC:16;
      uint64_t SEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CAPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

};

#define AON_RTC_0 (*(volatile struct AON_RTC_0_tag *) 0x40092000)

struct AON_SYSCTL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_EN:1;
      uint64_t EXT_REG_MODE:1;
      uint64_t DCDC_ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RESET_SRC:3;
      uint64_t CLK_LOSS_EN:1;
      uint64_t VDD_LOSS_EN:1;
      uint64_t VDDR_LOSS_EN:1;
      uint64_t VDDS_LOSS_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t VDD_LOSS_EN_OVR:1;
      uint64_t VDDR_LOSS_EN_OVR:1;
      uint64_t VDDS_LOSS_EN_OVR:1;
      uint64_t BOOT_DET_0:1;
      uint64_t BOOT_DET_1:1;
      uint64_t GPIO_WU_FROM_SD:1;
      uint64_t WU_FROM_SD:1;
      uint64_t BOOT_DET_0_SET:1;
      uint64_t BOOT_DET_1_SET:1;
      uint64_t reservedSpace2:6;
      uint64_t BOOT_DET_0_CLR:1;
      uint64_t BOOT_DET_1_CLR:1;
      uint64_t reservedSpace3:5;
      uint64_t SYSRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESETCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_PAD_SLEEP_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLEEPCTL;

};

#define AON_SYSCTL_0 (*(volatile struct AON_SYSCTL_0_tag *) 0x40090000)

struct AON_WUC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_DWN_SRC:2;
      uint64_t RCOSC_HF_CAL_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t SCLK_HF_DIV:3;
      uint64_t PWR_DWN_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_RET_EN:4;
      uint64_t reservedSpace0:12;
      uint64_t FIXED_WU_EN:1;
      uint64_t VIRT_OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_RET_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUX_FORCE_ON:1;
      uint64_t SWEV:1;
      uint64_t SCE_RUN_EN:1;
      uint64_t reservedSpace0:28;
      uint64_t RESET_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AUX_RESET_DONE:1;
      uint64_t AUX_BUS_CONNECTED:1;
      uint64_t reservedSpace1:1;
      uint64_t MCU_PD_ON:1;
      uint64_t AUX_PD_ON:1;
      uint64_t JTAG_PD_ON:1;
      uint64_t reservedSpace2:2;
      uint64_t AUX_PWR_DWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHUTDOWN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MCU_SRAM_ERASE:1;
      uint64_t AUX_SRAM_ERASE:1;
      uint64_t reservedSpace1:4;
      uint64_t PWR_DWN_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCU_WARM_RESET:1;
      uint64_t MCU_RESET_SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER_E:3;
      uint64_t PER_M:5;
      uint64_t MAX_PER_E:3;
      uint64_t MAX_PER_M:5;
      uint64_t C1:4;
      uint64_t C2:4;
      uint64_t reservedSpace0:7;
      uint64_t ADAPTIVE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECHARGECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_USED_PER:16;
      uint64_t VDDR_SMPLS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECHARGESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER_E:3;
      uint64_t PER_M:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCFG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t JTAG_PD_FORCE_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USER_CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGUSERCODE;

};

#define AON_WUC_0 (*(volatile struct AON_WUC_0_tag *) 0x40091000)

struct AUX_ADI4_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_REF:4;
      uint64_t COMPA_IN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_IN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPB_REF:3;
      uint64_t ADCCOMPB_IN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADCCOMPB_IN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISRC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t COMPB_EN:1;
      uint64_t COMPB_TRIM:3;
      uint64_t COMPA_REF_CURR_EN:1;
      uint64_t COMPA_REF_RES_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) COMP;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RESET_N:1;
      uint64_t reservedSpace0:1;
      uint64_t SMPL_CYCLE_EXP:4;
      uint64_t SMPL_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCALE_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SRC:1;
      uint64_t EXT:1;
      uint64_t IOMUX:1;
      uint64_t REF_ON_IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCREF0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCREF1;

};

#define AUX_ADI4_0 (*(volatile struct AUX_ADI4_0_tag *) 0x400cb000)

struct AUX_AIODIO0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0:2;
      uint64_t IO1:2;
      uint64_t IO2:2;
      uint64_t IO3:2;
      uint64_t IO4:2;
      uint64_t IO5:2;
      uint64_t IO6:2;
      uint64_t IO7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIE;

};

#define AUX_AIODIO0_0 (*(volatile struct AUX_AIODIO0_0_tag *) 0x400c1000)

struct AUX_AIODIO1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0:2;
      uint64_t IO1:2;
      uint64_t IO2:2;
      uint64_t IO3:2;
      uint64_t IO4:2;
      uint64_t IO5:2;
      uint64_t IO6:2;
      uint64_t IO7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIE;

};

#define AUX_AIODIO1_0 (*(volatile struct AUX_AIODIO1_0_tag *) 0x400c2000)

struct AUX_ANAIF_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:2;
      uint64_t reservedSpace0:6;
      uint64_t START_SRC:5;
      uint64_t START_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMPTY:1;
      uint64_t ALMOST_FULL:1;
      uint64_t FULL:1;
      uint64_t UNDERFLOW:1;
      uint64_t OVERFLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCFIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISRCCTL;

};

#define AUX_ANAIF_0 (*(volatile struct AUX_ANAIF_0_tag *) 0x400c9010)

struct AUX_DDI0_OSC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLK_HF_SRC_SEL:1;
      uint64_t SCLK_MF_SRC_SEL:1;
      uint64_t SCLK_LF_SRC_SEL:2;
      uint64_t reservedSpace0:1;
      uint64_t ACLK_REF_SRC_SEL:2;
      uint64_t ACLK_TDC_SRC_SEL:2;
      uint64_t CLK_LOSS_EN:1;
      uint64_t XOSC_LF_DIG_BYPASS:1;
      uint64_t XOSC_HF_POWER_MODE:1;
      uint64_t RCOSC_LF_TRIMMED:1;
      uint64_t reservedSpace1:3;
      uint64_t ALLOW_SCLK_HF_SWITCHING:1;
      uint64_t reservedSpace2:5;
      uint64_t FORCE_KICKSTART_EN:1;
      uint64_t reservedSpace3:2;
      uint64_t DOUBLER_RESET_DURATION:1;
      uint64_t DOUBLER_START_DURATION:2;
      uint64_t BYPASS_RCOSC_LF_CLK_QUAL:1;
      uint64_t BYPASS_XOSC_LF_CLK_QUAL:1;
      uint64_t reservedSpace4:1;
      uint64_t XTAL_IS_24M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_FAST_START:2;
      uint64_t reservedSpace0:15;
      uint64_t RCOSCHFCTRIMFRACT_EN:1;
      uint64_t RCOSCHFCTRIMFRACT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RADC_MODE_IS_SAR:1;
      uint64_t RADC_DAC_TH:6;
      uint64_t IDAC_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT:6;
      uint64_t HPM_IBIAS_WAIT_CNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RADCEXTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBIASCAP_HPTOLP_OL_CNT:4;
      uint64_t CAP_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT_FINAL:8;
      uint64_t IBIAS_INIT:4;
      uint64_t IBIAS_OFFSET:4;
      uint64_t reservedSpace0:2;
      uint64_t AMPCOMP_SW_EN:1;
      uint64_t AMPCOMP_SW_CTRL:1;
      uint64_t AMPCOMP_FSM_UPDATE_RATE:2;
      uint64_t AMPCOMP_REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPMRAMP1_TH:6;
      uint64_t IBIASCAP_LPTOHP_OL_CNT:4;
      uint64_t HPMRAMP3_HTH:6;
      uint64_t reservedSpace0:2;
      uint64_t HPMRAMP3_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPTH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADC_COMP_AMPTH_HPM:6;
      uint64_t reservedSpace1:2;
      uint64_t ADC_COMP_AMPTH_LPM:6;
      uint64_t reservedSpace2:2;
      uint64_t LPMUPDATE_HTH:6;
      uint64_t reservedSpace3:2;
      uint64_t LPMUPDATE_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPTH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_COLUMN_Q12:16;
      uint64_t XOSC_HF_ROW_Q12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASSVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_IBIASTHERM:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASSVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SCLK_LF_AUX_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATESTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_IREF_CTRL:2;
      uint64_t reservedSpace0:2;
      uint64_t ADC_SH_VBUF_EN:1;
      uint64_t ADC_SH_MODE_EN:1;
      uint64_t reservedSpace1:17;
      uint64_t SPARE23:1;
      uint64_t NANOAMP_BIAS_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCDOUBLERNANOAMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LP_BUF_ITRIM:2;
      uint64_t HP_BUF_ITRIM:3;
      uint64_t reservedSpace0:1;
      uint64_t BYPASS:1;
      uint64_t reservedSpace1:1;
      uint64_t PEAK_DET_ITRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XOSCHFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCLF_CTUNE_TRIM:8;
      uint64_t RCOSCLF_RTUNE_TRIM:2;
      uint64_t reservedSpace0:8;
      uint64_t XOSCLF_CMIRRWR_RATIO:4;
      uint64_t XOSCLF_REGULATOR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFOSCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RCOSCHF_CTRIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSCHFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PENDINGSCLKHFSWITCHING:1;
      uint64_t ADC_DATA:6;
      uint64_t ADC_DATA_READY:1;
      uint64_t ADC_THMET:1;
      uint64_t reservedSpace0:1;
      uint64_t XOSC_HF_HP_BUF_EN:1;
      uint64_t XOSC_HF_LP_BUF_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t XB_48M_CLK_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t XOSC_HF_EN:1;
      uint64_t SCLK_LF_LOSS:1;
      uint64_t SCLK_HF_LOSS:1;
      uint64_t CLK_DCDC_RDY_ACK:1;
      uint64_t CLK_DCDC_RDY:1;
      uint64_t XOSC_LF_EN:1;
      uint64_t RCOSC_LF_EN:1;
      uint64_t RCOSC_HF_EN:1;
      uint64_t reservedSpace3:5;
      uint64_t SCLK_HF_SRC:1;
      uint64_t SCLK_LF_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DCDC_GOOD:1;
      uint64_t CLK_CHP_GOOD:1;
      uint64_t ACLK_REF_GOOD:1;
      uint64_t ACLK_TDC_GOOD:1;
      uint64_t ACLK_ADC_GOOD:1;
      uint64_t SCLK_LF_GOOD:1;
      uint64_t SCLK_MF_GOOD:1;
      uint64_t SCLK_HF_GOOD:1;
      uint64_t CLK_DCDC_EN:1;
      uint64_t CLK_CHP_EN:1;
      uint64_t ACLK_REF_EN:1;
      uint64_t ACLK_TDC_EN:1;
      uint64_t ACLK_ADC_EN:1;
      uint64_t SCLK_MF_EN:1;
      uint64_t SCLK_HF_EN:1;
      uint64_t FORCE_RCOSC_HF:1;
      uint64_t LPM_UPDATE_AMP:6;
      uint64_t HMP_UPDATE_AMP:6;
      uint64_t RAMPSTATE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_RF_FREQGOOD:1;
      uint64_t XOSC_HF_FREQGOOD:1;
      uint64_t XOSC_HF_AMPGOOD:1;
      uint64_t AMPCOMP_REQ:1;
      uint64_t reservedSpace0:8;
      uint64_t RAMPSTATE:4;
      uint64_t reservedSpace1:7;
      uint64_t HPM_RAMP3_THMET:1;
      uint64_t HPM_RAMP2_THMET:1;
      uint64_t HPM_RAMP1_THMET:1;
      uint64_t ADC_DCBIAS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT2;

};

#define AUX_DDI0_OSC_0 (*(volatile struct AUX_DDI0_OSC_0_tag *) 0x400ca000)

struct AUX_EVCTL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0_EV:5;
      uint64_t VEC0_EN:1;
      uint64_t VEC0_POL:1;
      uint64_t reservedSpace0:1;
      uint64_t VEC1_EV:5;
      uint64_t VEC1_EN:1;
      uint64_t VEC1_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC2_EV:5;
      uint64_t VEC2_EN:1;
      uint64_t VEC2_POL:1;
      uint64_t reservedSpace0:1;
      uint64_t VEC3_EV:5;
      uint64_t VEC3_EN:1;
      uint64_t VEC3_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEV7_EV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCEWEVSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:1;
      uint64_t EN:1;
      uint64_t REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEVSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_RTC_CH2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t OBSMUX1:1;
      uint64_t AON_SW:1;
      uint64_t AON_PROG_WU:1;
      uint64_t AUXIO0:1;
      uint64_t AUXIO1:1;
      uint64_t AUXIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXIO3:1;
      uint64_t AUXIO4:1;
      uint64_t AUXIO5:1;
      uint64_t AUXIO6:1;
      uint64_t AUXIO7:1;
      uint64_t AUXIO8:1;
      uint64_t AUXIO9:1;
      uint64_t AUXIO10:1;
      uint64_t AUXIO11:1;
      uint64_t AUXIO12:1;
      uint64_t AUXIO13:1;
      uint64_t AUXIO14:1;
      uint64_t AUXIO15:1;
      uint64_t ACLK_REF:1;
      uint64_t MCU_EV:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBEVTOMCUMASK;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0:1;
      uint64_t VEC1:1;
      uint64_t VEC2:1;
      uint64_t VEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUFLAGSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONFLAGSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0:1;
      uint64_t VEC1:1;
      uint64_t VEC2:1;
      uint64_t VEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECFLAGSCLR;

};

#define AUX_EVCTL_0 (*(volatile struct AUX_EVCTL_0_tag *) 0x400c5000)

struct AUX_SCE_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
      uint64_t SUSPEND:1;
      uint64_t SINGLE_STEP:1;
      uint64_t RESTART:1;
      uint64_t FORCE_WU_HIGH:1;
      uint64_t FORCE_WU_LOW:1;
      uint64_t DBG_FREEZE_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RESET_VECTOR:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_EV_HIGH:8;
      uint64_t FORCE_EV_LOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:16;
      uint64_t OPCODE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FETCHSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Z_FLAG:1;
      uint64_t N_FLAG:1;
      uint64_t C_FLAG:1;
      uint64_t V_FLAG:1;
      uint64_t reservedSpace0:4;
      uint64_t SELF_STOP:1;
      uint64_t WEV:1;
      uint64_t SLEEP:1;
      uint64_t BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_SIGNALS:8;
      uint64_t WU_SIGNAL:1;
      uint64_t reservedSpace0:7;
      uint64_t EXC_VECTOR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0:16;
      uint64_t REG1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG2:16;
      uint64_t REG3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG4:16;
      uint64_t REG5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG6:16;
      uint64_t REG7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG7_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:16;
      uint64_t STOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOOPADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITER_LEFT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOOPCNT;

};

#define AUX_SCE_0 (*(volatile struct AUX_SCE_0_tag *) 0x400e1000)

struct AUX_SMPH_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_ID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOTAKE;

};

#define AUX_SMPH_0 (*(volatile struct AUX_SMPH_0_tag *) 0x400c8000)

struct AUX_TDCIF_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATE:6;
      uint64_t DONE:1;
      uint64_t SAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIMIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SATCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_SRC:5;
      uint64_t START_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t STOP_SRC:5;
      uint64_t STOP_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNTLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:5;
      uint64_t reservedSpace0:1;
      uint64_t RATIO:1;
      uint64_t RESET_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECNT;

};

#define AUX_TDCIF_0 (*(volatile struct AUX_TDCIF_0_tag *) 0x400c4000)

struct AUX_TIMER_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRE:4;
      uint64_t TICK_SRC:5;
      uint64_t TICK_SRC_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRE:4;
      uint64_t TICK_SRC:5;
      uint64_t TICK_SRC_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0TARGET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1TARGET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1CTL;

};

#define AUX_TIMER_0 (*(volatile struct AUX_TIMER_0_tag *) 0x400c7000)

struct AUX_WUC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_bitfield:1;
      uint64_t AIODIO0:1;
      uint64_t AIODIO1:1;
      uint64_t TIMER:1;
      uint64_t ANAIF:1;
      uint64_t TDC:1;
      uint64_t AUX_DDI0_OSC_bitfield:1;
      uint64_t AUX_ADI4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCLKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWROFFREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWNREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWNACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLFREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLFACK;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG_WU:1;
      uint64_t AON_SW:1;
      uint64_t AON_RTC_CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUEVFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG_WU:1;
      uint64_t AON_SW:1;
      uint64_t AON_RTC_CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUEVCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDCCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REFCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC15_0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC23_16:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD_REQ:1;
      uint64_t UPD_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCONNECT_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUBUSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCONNECT_ACK:1;
      uint64_t DISCONNECTED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUBUSSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCE_RUN_EN:1;
      uint64_t AUX_FORCE_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AONCTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXIOLATCH;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_bitfield:1;
      uint64_t AIODIO0:1;
      uint64_t AIODIO1:1;
      uint64_t TIMER:1;
      uint64_t ANAIF:1;
      uint64_t reservedSpace0:1;
      uint64_t AUX_DDI0_OSC_bitfield:1;
      uint64_t AUX_ADI4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCLKEN1;

};

#define AUX_WUC_0 (*(volatile struct AUX_WUC_0_tag *) 0x400c6000)

struct CCFG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_INCREMENT:24;
      uint64_t DIO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXT_LF_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_MAX_START:8;
      uint64_t DELTA_IBIAS_OFFSET:4;
      uint64_t DELTA_IBIAS_INIT:4;
      uint64_t ALT_DCDC_IPEAK:3;
      uint64_t ALT_DCDC_DITHER_EN:1;
      uint64_t ALT_DCDC_VMIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS_XOSC_OVR:1;
      uint64_t DIS_ALT_DCDC_SETTING:1;
      uint64_t DISABLE_FLAGS:14;
      uint64_t SIZE_OF_CCFG:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIZE_AND_DIS_FLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_CAP:8;
      uint64_t XOSC_CAPARRAY_DELTA:8;
      uint64_t HF_COMP:1;
      uint64_t XOSC_CAP_MOD:1;
      uint64_t XOSC_FREQ:2;
      uint64_t RTC_COMP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCLK_LF_OPTION:2;
      uint64_t VDDS_BOD_LEVEL:1;
      uint64_t VDDR_EXT_LOAD:1;
      uint64_t DCDC_ACTIVE:1;
      uint64_t DCDC_RECHARGE:1;
      uint64_t VDDR_TRIM_SLEEP_DELTA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_EXT_TM15:8;
      uint64_t VDDR_EXT_TP5:8;
      uint64_t VDDR_EXT_TP25:8;
      uint64_t VDDR_EXT_TP45:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_LOAD_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_EXT_TP65:8;
      uint64_t VDDR_EXT_TP85:8;
      uint64_t VDDR_EXT_TP105:8;
      uint64_t VDDR_EXT_TP125:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_LOAD_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_COMP_P2:8;
      uint64_t RTC_COMP_P1:8;
      uint64_t RTC_COMP_P0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_OFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HF_COMP_P2:8;
      uint64_t HF_COMP_P1:8;
      uint64_t HF_COMP_P0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQ_OFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_MAC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_MAC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_BLE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_BLE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BL_ENABLE:8;
      uint64_t BL_PIN_NUMBER:8;
      uint64_t BL_LEVEL:1;
      uint64_t reservedSpace0:7;
      uint64_t BOOTLOADER_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BL_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK_ERASE_DIS_N:1;
      uint64_t reservedSpace0:7;
      uint64_t CHIP_ERASE_DIS_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERASE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_FA_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TI_OPTIONS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_TAP_ENABLE:8;
      uint64_t PRCM_TAP_ENABLE:8;
      uint64_t CPU_DAP_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TAP_DAP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUC_TAP_ENABLE:8;
      uint64_t PBIST1_TAP_ENABLE:8;
      uint64_t PBIST2_TAP_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TAP_DAP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMAGE_VALID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMAGE_VALID_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_0:1;
      uint64_t WRT_PROT_SEC_1:1;
      uint64_t WRT_PROT_SEC_2:1;
      uint64_t WRT_PROT_SEC_3:1;
      uint64_t WRT_PROT_SEC_4:1;
      uint64_t WRT_PROT_SEC_5:1;
      uint64_t WRT_PROT_SEC_6:1;
      uint64_t WRT_PROT_SEC_7:1;
      uint64_t WRT_PROT_SEC_8:1;
      uint64_t WRT_PROT_SEC_9:1;
      uint64_t WRT_PROT_SEC_10:1;
      uint64_t WRT_PROT_SEC_11:1;
      uint64_t WRT_PROT_SEC_12:1;
      uint64_t WRT_PROT_SEC_13:1;
      uint64_t WRT_PROT_SEC_14:1;
      uint64_t WRT_PROT_SEC_15:1;
      uint64_t WRT_PROT_SEC_16:1;
      uint64_t WRT_PROT_SEC_17:1;
      uint64_t WRT_PROT_SEC_18:1;
      uint64_t WRT_PROT_SEC_19:1;
      uint64_t WRT_PROT_SEC_20:1;
      uint64_t WRT_PROT_SEC_21:1;
      uint64_t WRT_PROT_SEC_22:1;
      uint64_t WRT_PROT_SEC_23:1;
      uint64_t WRT_PROT_SEC_24:1;
      uint64_t WRT_PROT_SEC_25:1;
      uint64_t WRT_PROT_SEC_26:1;
      uint64_t WRT_PROT_SEC_27:1;
      uint64_t WRT_PROT_SEC_28:1;
      uint64_t WRT_PROT_SEC_29:1;
      uint64_t WRT_PROT_SEC_30:1;
      uint64_t WRT_PROT_SEC_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_31_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_32:1;
      uint64_t WRT_PROT_SEC_33:1;
      uint64_t WRT_PROT_SEC_34:1;
      uint64_t WRT_PROT_SEC_35:1;
      uint64_t WRT_PROT_SEC_36:1;
      uint64_t WRT_PROT_SEC_37:1;
      uint64_t WRT_PROT_SEC_38:1;
      uint64_t WRT_PROT_SEC_39:1;
      uint64_t WRT_PROT_SEC_40:1;
      uint64_t WRT_PROT_SEC_41:1;
      uint64_t WRT_PROT_SEC_42:1;
      uint64_t WRT_PROT_SEC_43:1;
      uint64_t WRT_PROT_SEC_44:1;
      uint64_t WRT_PROT_SEC_45:1;
      uint64_t WRT_PROT_SEC_46:1;
      uint64_t WRT_PROT_SEC_47:1;
      uint64_t WRT_PROT_SEC_48:1;
      uint64_t WRT_PROT_SEC_49:1;
      uint64_t WRT_PROT_SEC_50:1;
      uint64_t WRT_PROT_SEC_51:1;
      uint64_t WRT_PROT_SEC_52:1;
      uint64_t WRT_PROT_SEC_53:1;
      uint64_t WRT_PROT_SEC_54:1;
      uint64_t WRT_PROT_SEC_55:1;
      uint64_t WRT_PROT_SEC_56:1;
      uint64_t WRT_PROT_SEC_57:1;
      uint64_t WRT_PROT_SEC_58:1;
      uint64_t WRT_PROT_SEC_59:1;
      uint64_t WRT_PROT_SEC_60:1;
      uint64_t WRT_PROT_SEC_61:1;
      uint64_t WRT_PROT_SEC_62:1;
      uint64_t WRT_PROT_SEC_63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_63_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_64:1;
      uint64_t WRT_PROT_SEC_65:1;
      uint64_t WRT_PROT_SEC_66:1;
      uint64_t WRT_PROT_SEC_67:1;
      uint64_t WRT_PROT_SEC_68:1;
      uint64_t WRT_PROT_SEC_69:1;
      uint64_t WRT_PROT_SEC_70:1;
      uint64_t WRT_PROT_SEC_71:1;
      uint64_t WRT_PROT_SEC_72:1;
      uint64_t WRT_PROT_SEC_73:1;
      uint64_t WRT_PROT_SEC_74:1;
      uint64_t WRT_PROT_SEC_75:1;
      uint64_t WRT_PROT_SEC_76:1;
      uint64_t WRT_PROT_SEC_77:1;
      uint64_t WRT_PROT_SEC_78:1;
      uint64_t WRT_PROT_SEC_79:1;
      uint64_t WRT_PROT_SEC_80:1;
      uint64_t WRT_PROT_SEC_81:1;
      uint64_t WRT_PROT_SEC_82:1;
      uint64_t WRT_PROT_SEC_83:1;
      uint64_t WRT_PROT_SEC_84:1;
      uint64_t WRT_PROT_SEC_85:1;
      uint64_t WRT_PROT_SEC_86:1;
      uint64_t WRT_PROT_SEC_87:1;
      uint64_t WRT_PROT_SEC_88:1;
      uint64_t WRT_PROT_SEC_89:1;
      uint64_t WRT_PROT_SEC_90:1;
      uint64_t WRT_PROT_SEC_91:1;
      uint64_t WRT_PROT_SEC_92:1;
      uint64_t WRT_PROT_SEC_93:1;
      uint64_t WRT_PROT_SEC_94:1;
      uint64_t WRT_PROT_SEC_95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_95_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_96:1;
      uint64_t WRT_PROT_SEC_97:1;
      uint64_t WRT_PROT_SEC_98:1;
      uint64_t WRT_PROT_SEC_99:1;
      uint64_t WRT_PROT_SEC_100:1;
      uint64_t WRT_PROT_SEC_101:1;
      uint64_t WRT_PROT_SEC_102:1;
      uint64_t WRT_PROT_SEC_103:1;
      uint64_t WRT_PROT_SEC_104:1;
      uint64_t WRT_PROT_SEC_105:1;
      uint64_t WRT_PROT_SEC_106:1;
      uint64_t WRT_PROT_SEC_107:1;
      uint64_t WRT_PROT_SEC_108:1;
      uint64_t WRT_PROT_SEC_109:1;
      uint64_t WRT_PROT_SEC_110:1;
      uint64_t WRT_PROT_SEC_111:1;
      uint64_t WRT_PROT_SEC_112:1;
      uint64_t WRT_PROT_SEC_113:1;
      uint64_t WRT_PROT_SEC_114:1;
      uint64_t WRT_PROT_SEC_115:1;
      uint64_t WRT_PROT_SEC_116:1;
      uint64_t WRT_PROT_SEC_117:1;
      uint64_t WRT_PROT_SEC_118:1;
      uint64_t WRT_PROT_SEC_119:1;
      uint64_t WRT_PROT_SEC_120:1;
      uint64_t WRT_PROT_SEC_121:1;
      uint64_t WRT_PROT_SEC_122:1;
      uint64_t WRT_PROT_SEC_123:1;
      uint64_t WRT_PROT_SEC_124:1;
      uint64_t WRT_PROT_SEC_125:1;
      uint64_t WRT_PROT_SEC_126:1;
      uint64_t WRT_PROT_SEC_127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_127_96;

};

#define CCFG_0 (*(volatile struct CCFG_0_tag *) 0x50003fa8)

struct CPU_TIPROP_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRACECLK_N_SWV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRACECLKMUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DYN_CG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYN_CG;

};

#define CPU_TIPROP_0 (*(volatile struct CPU_TIPROP_0_tag *) 0xe00feff8)

struct EVENT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL2;

  uint32_t CPUIRQSEL3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL33;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL9;

  uint8_t res1[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT0ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT0BCAPTSEL;

  uint8_t res2[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT1ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT1BCAPTSEL;

  uint8_t res3[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT2ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT2BCAPTSEL;

  uint8_t res4[256];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH1SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH1BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH2SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH2BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH3SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH3BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH4SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH4BSEL;

  uint32_t UDMACH5SSEL;
  uint32_t UDMACH5BSEL;
  uint32_t UDMACH6SSEL;
  uint32_t UDMACH6BSEL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH7SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH7BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH8SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH8BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH9SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH9BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH10SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH10BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH11SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH11BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH12SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH12BSEL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH13BSEL;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH14BSEL;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH15BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH16SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH16BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH17SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH17BSEL;

  uint8_t res8[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH21SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH21BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH22SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH22BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH23SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH23BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH24SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH24BSEL;

  uint8_t res9[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT3ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT3BCAPTSEL;

  uint8_t res10[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXSEL0;

  uint8_t res11[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM3NMISEL0;

  uint8_t res12[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SSTMPSEL0;

  uint8_t res13[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRZSEL0;

  uint8_t res14[1276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t reservedSpace0:7;
      uint64_t SWEV1:1;
      uint64_t reservedSpace1:7;
      uint64_t SWEV2:1;
      uint64_t reservedSpace2:7;
      uint64_t SWEV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEV;

};

#define EVENT_0 (*(volatile struct EVENT_0_tag *) 0x40083000)

struct FCFG1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICE_MINOR_REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_CONF_1;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV30;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCHF_CTRIM:8;
      uint64_t VTRIM_COARSE:4;
      uint64_t VTRIM_DIG:4;
      uint64_t ITRIM_DIG_LDO:2;
      uint64_t TRIMIREF:5;
      uint64_t TRIMMAG:4;
      uint64_t SET_RCOSC_HF_COARSE_RESISTOR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_OSC_BIAS_LDO_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMTEMP:6;
      uint64_t TRIMBOD_EXTMODE:5;
      uint64_t TRIMBOD_INTMODE:5;
      uint64_t VDDR_TRIM:5;
      uint64_t IPTAT_TRIM:2;
      uint64_t VDDR_OK_HYS:1;
      uint64_t VDDR_ENABLE_PG1:1;
      uint64_t BOD_BANDGAP_TRIM_CNF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_ANA_TRIM;

  uint8_t res3[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOT_NUMBER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_NUMBER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YCOORDINATE:16;
      uint64_t XCOORDINATE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COORDINATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSU:8;
      uint64_t PVSU:8;
      uint64_t ESU:8;
      uint64_t PSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_E_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVSU:12;
      uint64_t A_EXEZ_SETUP:4;
      uint64_t PV_ACCESS:8;
      uint64_t RVSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_C_E_P_R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVH2:8;
      uint64_t PVH:8;
      uint64_t RH:8;
      uint64_t PH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_P_R_PV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SM_FREQUENCY:12;
      uint64_t VSTAT:4;
      uint64_t SEQ:8;
      uint64_t EH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_EH_SEQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHV_E_STEP_HIGHT:16;
      uint64_t VHV_E_START:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_PP:16;
      uint64_t reservedSpace0:8;
      uint64_t PUMP_SU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGRAM_PW:16;
      uint64_t MAX_EP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PROG_EP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASE_PW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ERA_PW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHV_E:4;
      uint64_t reservedSpace0:4;
      uint64_t TRIM13_E:4;
      uint64_t reservedSpace1:4;
      uint64_t VHV_P:4;
      uint64_t reservedSpace2:4;
      uint64_t TRIM13_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VINH:8;
      uint64_t VCG2P5:8;
      uint64_t VHV_PV:4;
      uint64_t reservedSpace0:4;
      uint64_t TRIM13_PV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV_PV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t V_READ:8;
      uint64_t VWL_P:8;
      uint64_t VSL_P:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_V;

  uint8_t res5[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t PROTOCOL:4;
      uint64_t PKG:3;
      uint64_t SEQUENCE:4;
      uint64_t reservedSpace1:3;
      uint64_t VER:2;
      uint64_t PG_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USER_ID;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAIT_SYSCODE:8;
      uint64_t FLASH_SIZE:8;
      uint64_t TRIM_1P7:2;
      uint64_t MAX_EC_LEVEL:4;
      uint64_t DO_PRECOND:1;
      uint64_t EC_STEP_SIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OTP_DATA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_HIGH_EN_SEL:3;
      uint64_t DCDC_LOW_EN_SEL:3;
      uint64_t DEAD_TIME_TRIM:2;
      uint64_t DCDC_IPEAK:3;
      uint64_t DITHER_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t NANOAMP_RES_TRIM:6;
      uint64_t ATESTLF_UDIGLDO_IBIAS_TRIM:1;
      uint64_t SET_RCOSC_HF_FINE_RESISTOR:2;
      uint64_t reservedSpace1:1;
      uint64_t RCOSCHFCTRIMFRACT:5;
      uint64_t RCOSCHFCTRIMFRACT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA2_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM_DELTA:3;
      uint64_t reservedSpace0:5;
      uint64_t ITRIM_UDIGLDO:3;
      uint64_t ITRIM_DIGLDO_LOAD:2;
      uint64_t reservedSpace1:3;
      uint64_t GLDO_CURSRC:3;
      uint64_t reservedSpace2:5;
      uint64_t VDDR_TRIM_SLEEP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDO_TRIM;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_BLE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_BLE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_15_4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_15_4_1;

  uint8_t res8[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIN_AT_X_EXT_RD:3;
      uint64_t DIS_IDLE_EXT_RD:1;
      uint64_t DIS_STANDBY_EXT_RD:1;
      uint64_t STANDBY_PW_SEL_EXT_RD:2;
      uint64_t STANDBY_MODE_SEL_EXT_RD:1;
      uint64_t VIN_AT_X_INT_RD:3;
      uint64_t DIS_IDLE_INT_RD:1;
      uint64_t DIS_STANDBY_INT_RD:1;
      uint64_t STANDBY_PW_SEL_INT_RD:2;
      uint64_t STANDBY_MODE_SEL_INT_RD:1;
      uint64_t VIN_AT_X_EXT_WRT:3;
      uint64_t DIS_IDLE_EXT_WRT:1;
      uint64_t DIS_STANDBY_EXT_WRT:1;
      uint64_t STANDBY_PW_SEL_EXT_WRT:2;
      uint64_t STANDBY_MODE_SEL_EXT_WRT:1;
      uint64_t VIN_AT_X_INT_WRT:3;
      uint64_t DIS_IDLE_INT_WRT:1;
      uint64_t DIS_STANDBY_INT_WRT:1;
      uint64_t STANDBY_PW_SEL_INT_WRT:2;
      uint64_t STANDBY_MODE_SEL_INT_WRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OTP_DATA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMPVSLOPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRIMFRACT_SLOPE:8;
      uint64_t CTRIMFRACT_QUAD:8;
      uint64_t CTRIM:8;
      uint64_t FINE_RESISTOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSC_HF_TEMPCOMP;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MANUFACTURER_ID:12;
      uint64_t WAFER_ID:16;
      uint64_t PG_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICEPICK_DEVICE_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG1_REVISION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_PROGRAM_REV:8;
      uint64_t PO_TAIL_RES_TRIM:4;
      uint64_t PER_E:3;
      uint64_t PER_M:5;
      uint64_t RCOSC_HF_CRIM:8;
      uint64_t RCOSC_HF_ITUNE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_OTP_DATA;

  uint8_t res10[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO_CNT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCONF;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFANALDO_TRIM_OUTPUT:5;
      uint64_t IFDIGLDO_TRIM_OUTPUT:5;
      uint64_t INT2ADJ:4;
      uint64_t AAFCAP:2;
      uint64_t FF1ADJ:4;
      uint64_t INT3ADJ:4;
      uint64_t FF3ADJ:4;
      uint64_t FF2ADJ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_IF_ADC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCLF_RTUNE_TRIM:2;
      uint64_t RCOSCLF_CTUNE_TRIM:8;
      uint64_t XOSC_HF_COLUMN_Q12:16;
      uint64_t XOSC_HF_ROW_Q12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_OSC_TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:6;
      uint64_t PATRIMCOMPLETE_N:1;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_ABS_GAIN_TEMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_ABS_GAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_REL_GAIN_TEMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_REL_GAIN;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_ABS_OFFSET_TEMP1:8;
      uint64_t reservedSpace0:8;
      uint64_t SOC_ADC_REL_OFFSET_TEMP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_OFFSET_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_REF_VOLTAGE_TRIM_TEMP1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_REF_TRIM_AND_OFFSET_EXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPMRAMP1_TH:6;
      uint64_t IBIASCAP_LPTOHP_OL_CNT:4;
      uint64_t HPMRAMP3_HTH:6;
      uint64_t reservedSpace0:2;
      uint64_t HPMRAMP3_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_TH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADC_COMP_AMPTH_HPM:6;
      uint64_t reservedSpace1:2;
      uint64_t ADC_COMP_AMPTH_LPM:6;
      uint64_t reservedSpace2:2;
      uint64_t LPMUPDATE_HTM:6;
      uint64_t reservedSpace3:2;
      uint64_t LPMUPDATE_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_TH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBIASCAP_HPTOLP_OL_CNT:4;
      uint64_t CAP_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT_FINAL:8;
      uint64_t IBIAS_INIT:4;
      uint64_t IBIAS_OFFSET:4;
      uint64_t reservedSpace0:6;
      uint64_t AMPCOMP_REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_IBIASTHERM:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASS_VALUE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
      uint64_t RSSITRIMCOMPLETE_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMBOD_H:5;
      uint64_t reservedSpace0:3;
      uint64_t VDDR_TRIM_SLEEP_H:5;
      uint64_t reservedSpace1:3;
      uint64_t VDDR_TRIM_H:5;
      uint64_t reservedSpace2:3;
      uint64_t VDDR_TRIM_HH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t XOSC_OPTION:1;
      uint64_t XOSC_HF_FAST_START:2;
      uint64_t XOSCLF_CMIRRWR_RATIO:4;
      uint64_t XOSCLF_REGULATOR_TRIM:2;
      uint64_t ATESTLF_RCOSCLF_IBIAS_TRIM:1;
      uint64_t ADC_SH_MODE_EN:1;
      uint64_t ADC_SH_VBUF_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC_CONF;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLUX_CAP_0P4_TRIM:16;
      uint64_t FLUX_CAP_0P28_TRIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAC_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT:6;
      uint64_t HPM_IBIAS_WAIT_CNT:10;
      uint64_t DBLR_LOOP_FILTER_RESET_VOLTAGE:2;
      uint64_t LP_BUF_ITRIM:2;
      uint64_t HP_BUF_ITRIM:3;
      uint64_t PEAK_DET_ITRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_OTP_DATA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_20C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_35C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_50C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_65C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_80C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_95C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_110C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_125C;

};

#define FCFG1_0 (*(volatile struct FCFG1_0_tag *) 0x500010a0)

struct FLASH_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_MODE:1;
      uint64_t BUSY:1;
      uint64_t SAMHOLD_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t EFUSE_ERRCODE:5;
      uint64_t EFUSE_CRC_ERROR:1;
      uint64_t EFUSE_TIMEOUT:1;
      uint64_t EFUSE_BLANK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS_IDLE:1;
      uint64_t DIS_STANDBY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENABLE_SWINTF:1;
      uint64_t DIS_READACCESS:1;
      uint64_t DIS_EFUSECLK:1;
      uint64_t STANDBY_PW_SEL:2;
      uint64_t STANDBY_MODE_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCODE_START:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCODE_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECTORS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_SIZE;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWLOCK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWFLAG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWFLAG;

  uint8_t res2[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUMPWORD:16;
      uint64_t reservedSpace0:8;
      uint64_t INSTRUCTION:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROW:11;
      uint64_t BLOCK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EEN:1;
      uint64_t R:1;
      uint64_t P:1;
      uint64_t SPARE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAUPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATALOWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GATING:1;
      uint64_t reservedSpace0:2;
      uint64_t SLAVEPOWER:2;
      uint64_t reservedSpace1:3;
      uint64_t IDLEGATING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACCUMULATOR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTENABLE:4;
      uint64_t SYS_WS_READ_STATES:4;
      uint64_t SYS_REPAIR_EN:2;
      uint64_t SYS_DIEID_AUTOLOAD_EN:1;
      uint64_t EFC_FDI:1;
      uint64_t SYS_ECC_OVERRIDE_EN:1;
      uint64_t YS_ECC_SELF_TEST_EN:1;
      uint64_t OUTPUTENABLE:4;
      uint64_t EFC_AUTOLOAD_ERROR:1;
      uint64_t EFC_INSTRUCTION_ERROR:1;
      uint64_t EFC_INSTRUCTION_INFO:1;
      uint64_t EFC_SELF_TEST_ERROR:1;
      uint64_t SPARE:1;
      uint64_t DISROW0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOUNDARY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSEDAY:5;
      uint64_t EFUSEMONTH:4;
      uint64_t EFUSEYEAR:7;
      uint64_t ODPDAY:5;
      uint64_t ODPMONTH:4;
      uint64_t ODPYEAR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSERELEASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYS_WS_READ_STATES:4;
      uint64_t SYS_REPAIR_EN:2;
      uint64_t SYS_DIEID_AUTOLOAD_EN:1;
      uint64_t EFC_FCLRZ:1;
      uint64_t EFC_READY:1;
      uint64_t SYS_ECC_OVERRIDE_EN:1;
      uint64_t EFC_AUTOLOAD_ERROR:1;
      uint64_t EFC_INSTRUCTION_ERROR:1;
      uint64_t EFC_INSTRUCTION_INFO:1;
      uint64_t SYS_ECC_SELF_TEST_EN:1;
      uint64_t EFC_SELF_TEST_ERROR:1;
      uint64_t EFC_SELF_TEST_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEPINS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSECRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MARGIN:2;
      uint64_t SPARE:1;
      uint64_t DEBUG:1;
      uint64_t READCLOCK:4;
      uint64_t DATABIT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEREAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITECLOCK:9;
      uint64_t ITERATIONS:4;
      uint64_t VPPTOVDD:1;
      uint64_t CLOCKSTALL:16;
      uint64_t COMPAREDISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEPROGRAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:5;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEERROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROM0:1;
      uint64_t FROMN:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROM0:1;
      uint64_t FROMN:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWOBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CYCLES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELFTESTCYC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGNATURE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELFTESTSIGN;

  uint8_t res3[4016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RWAIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRDCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RM0:1;
      uint64_t RM1:1;
      uint64_t reservedSpace0:6;
      uint64_t RMBSEM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSPRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SUSP_IGNR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACCTL1;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t FSM_DONE:1;
      uint64_t RVF_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACSTAT;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROTL1DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADS:8;
      uint64_t BAGP:8;
      uint64_t OTPPROTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKPWR0:2;
      uint64_t BANKPWR1:2;
      uint64_t BANKPWR2:2;
      uint64_t BANKPWR3:2;
      uint64_t BANKPWR4:2;
      uint64_t BANKPWR5:2;
      uint64_t BANKPWR6:2;
      uint64_t BANKPWR7:2;
      uint64_t REG_PWRSAV:4;
      uint64_t reservedSpace0:4;
      uint64_t FSM_PWRSAV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBFALLBACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKRDY:1;
      uint64_t reservedSpace0:14;
      uint64_t PUMPRDY:1;
      uint64_t BANKBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPRDY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUMPPWR:2;
      uint64_t reservedSpace0:2;
      uint64_t PUMPRESET_PW:12;
      uint64_t PSLEEPTDIS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOCK:1;
      uint64_t PSUSP:1;
      uint64_t ESUSP:1;
      uint64_t VOLSTAT:1;
      uint64_t CSTAT:1;
      uint64_t INVDAT:1;
      uint64_t PGM:1;
      uint64_t ERS:1;
      uint64_t BUSY:1;
      uint64_t CV:1;
      uint64_t EV:1;
      uint64_t PCV:1;
      uint64_t PGV:1;
      uint64_t DBF:1;
      uint64_t ILA:1;
      uint64_t RVF:1;
      uint64_t RDVER:1;
      uint64_t RVSUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSTAT;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCOM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLOCK;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADCT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVREADCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHVCT_PV:4;
      uint64_t TRIM13_PV:4;
      uint64_t reservedSpace0:8;
      uint64_t VHVCT_E:4;
      uint64_t TRIM13_E:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t VHVCT_P:4;
      uint64_t TRIM13_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHVCT_READ:4;
      uint64_t reservedSpace0:12;
      uint64_t WCT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIN_CT:5;
      uint64_t reservedSpace0:3;
      uint64_t VCG2P5CT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVNVCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t VSL_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVSLP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VWLCT_P:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVWLCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE_EN:4;
      uint64_t EF_TEST:1;
      uint64_t reservedSpace0:3;
      uint64_t EF_CLRZ:1;
      uint64_t reservedSpace1:7;
      uint64_t BP_SEL:1;
      uint64_t WRITE_EN:1;
      uint64_t reservedSpace2:6;
      uint64_t CHAIN_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFT_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEFUSEDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSEDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t VIN_BY_PASS:1;
      uint64_t reservedSpace1:3;
      uint64_t VIN_AT_X:3;
      uint64_t reservedSpace2:1;
      uint64_t TRIM_0P8:4;
      uint64_t TRIM_1P7:2;
      uint64_t reservedSpace3:2;
      uint64_t TRIM_3P4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSEQPMP;

  uint8_t res8[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TEZ:1;
      uint64_t OTP:1;
      uint64_t TI_OTP:1;
      uint64_t PRECOL:1;
      uint64_t NOCOLRED:1;
      uint64_t reservedSpace1:1;
      uint64_t CTRLENZ:1;
      uint64_t reservedSpace2:7;
      uint64_t FLCLKEN:1;
      uint64_t RWAIT_FLCLK:1;
      uint64_t RWAIT2_FLCLK:1;
      uint64_t reservedSpace3:5;
      uint64_t ECBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSTROBES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V5PWRDNZ:1;
      uint64_t V3PWRDNZ:1;
      uint64_t reservedSpace0:6;
      uint64_t EXECUTEZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPSTROBES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FADDR;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_EN:1;
      uint64_t reservedSpace1:14;
      uint64_t WDATA_BLK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCBYTES31_24:8;
      uint64_t ECCBYTES23_16:8;
      uint64_t ECCBYTES15_08:8;
      uint64_t ECCBYTES07_00:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE_ECC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAFELV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSWSTAT;

  uint8_t res10[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_GLBCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t OTP_ACT:1;
      uint64_t TIOTP_ACT:1;
      uint64_t FSM_ACT:1;
      uint64_t reservedSpace1:1;
      uint64_t EXECUTEZ:1;
      uint64_t CTRLENZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV_DAT:1;
      uint64_t OVR_PUL_CNT:1;
      uint64_t NON_OP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMCMD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_OSU:8;
      uint64_t PGM_OSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_OSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t VSTAT_CNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_VSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_VSU:8;
      uint64_t PGM_VSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_VSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t ADD_EXZ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_CMP_VSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXE_VALD:8;
      uint64_t REP_VSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EX_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_RD_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PGM_OH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_P_OH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_OH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_OH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAV_P_PUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SAV_PPUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PGM_VH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_VH;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROG_PUL_WIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PRG_PW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ERA_PW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_PW;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAV_ERA_PUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SAV_ERA_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:3;
      uint64_t MODE:3;
      uint64_t SAV_ERA_MODE:3;
      uint64_t SAV_PGM_CMD:3;
      uint64_t SUBMODE:2;
      uint64_t ERA_SUBMODE:2;
      uint64_t PGM_SUBMODE:2;
      uint64_t RDV_SUBMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGM_ADDR:23;
      uint64_t PGM_BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PGM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_ADDR:23;
      uint64_t ERA_BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_PRG_PUL:12;
      uint64_t reservedSpace0:4;
      uint64_t BEG_EC_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PRG_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_ERA_PUL:12;
      uint64_t reservedSpace0:4;
      uint64_t MAX_EC_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EC_STEP_SIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STEP_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUL_CNTR:12;
      uint64_t reservedSpace0:4;
      uint64_t CUR_EC_LEVEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PUL_CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EC_STEP_HEIGHT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EC_STEP_HEIGHT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRIDE:1;
      uint64_t INV_DATA:1;
      uint64_t CMD_EN:1;
      uint64_t DIS_TST_EN:1;
      uint64_t PREC_STOP_EN:1;
      uint64_t PGM_SEC_COF_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t DBG_SHORT_ROW:4;
      uint64_t DO_REDU_COL:1;
      uint64_t reservedSpace1:2;
      uint64_t ONE_TIME_GOOD:1;
      uint64_t reservedSpace2:1;
      uint64_t RV_INT_EN:1;
      uint64_t RV_RES:1;
      uint64_t RV_SEC_EN:1;
      uint64_t RANDOM:1;
      uint64_t CMPV_ALLOWED:1;
      uint64_t ALL_BANKS:1;
      uint64_t FSM_INT_EN:1;
      uint64_t DO_PRECOND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ST_MACHINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLK_OTP:8;
      uint64_t BLK_TIOTP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_FLES;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_ENA:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_WR_ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ACC_PP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ACC_PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_EP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ACC_EP;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUR_ADDR:28;
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_OUT:4;
      uint64_t SECTOR:4;
      uint64_t FSM_SECTOR_EXTENSION:8;
      uint64_t SECT_ERASED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_CRC:12;
      uint64_t MOD_VERSION:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMC_REV_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ERR_BANK:4;
      uint64_t reservedSpace0:4;
      uint64_t FSM_ERR_ADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERR_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_PGM_MAXPUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PGM_MAXPUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMEXECUTE:5;
      uint64_t reservedSpace0:11;
      uint64_t SUSPEND_NOW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EXECUTE;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_SECTOR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_SECTOR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR2;

  uint8_t res16[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSLE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLE1;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSLP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLP1;

  uint8_t res18[264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAIN_NUM_BANK:4;
      uint64_t MAIN_BANK_WIDTH:12;
      uint64_t EE_NUM_BANK:4;
      uint64_t EE_BANK_WIDTH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_BANK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_TYPE1:4;
      uint64_t UERR:2;
      uint64_t AUTO_SUSP:2;
      uint64_t ECCA:1;
      uint64_t SIL3:1;
      uint64_t IFLUSH:1;
      uint64_t ROM:1;
      uint64_t EE_IN_MAIN:4;
      uint64_t CPU2:4;
      uint64_t MEM_MAP:1;
      uint64_t reservedSpace0:3;
      uint64_t FAMILY_TYPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_WRAPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_TYPE:4;
      uint64_t B1_TYPE:4;
      uint64_t B2_TYPE:4;
      uint64_t B3_TYPE:4;
      uint64_t B4_TYPE:4;
      uint64_t B5_TYPE:4;
      uint64_t B6_TYPE:4;
      uint64_t B7_TYPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_BNK_TYPE;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_START_ADDR:24;
      uint64_t B0_MUX_FACTOR:4;
      uint64_t B0_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B0_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B1_START_ADDR:24;
      uint64_t B1_MUX_FACTOR:4;
      uint64_t B1_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B1_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B2_START_ADDR:24;
      uint64_t B2_MUX_FACTOR:4;
      uint64_t B2_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B2_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B3_START_ADDR:24;
      uint64_t B3_MUX_FACTOR:4;
      uint64_t B3_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B3_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_START_ADDR:24;
      uint64_t B4_MUX_FACTOR:4;
      uint64_t B4_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B4_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B5_START_ADDR:24;
      uint64_t B5_MUX_FACTOR:4;
      uint64_t B5_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B5_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B6_START_ADDR:24;
      uint64_t B6_MUX_FACTOR:4;
      uint64_t B6_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B6_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B7_START_ADDR:24;
      uint64_t B7_MUX_FACTOR:4;
      uint64_t B7_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B7_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_SECT_SIZE:4;
      uint64_t reservedSpace0:12;
      uint64_t B0_NUM_SECTORS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B0_SSIZE0;

};

#define FLASH_0 (*(volatile struct FLASH_0_tag *) 0x4003001c)

struct GPIO_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO1:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO2:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO4:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO5:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO6:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO8:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO9:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO10:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT11_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO12:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO13:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO14:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT15_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO16:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO17:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO18:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT19_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO20:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO21:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO22:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT23_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO24:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO25:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO26:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT27_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO28:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO29:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO30:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT31_28;

  uint8_t res0[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT31_0;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTSET31_0;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTCLR31_0;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTTGL31_0;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIN31_0;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOE31_0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGS31_0;

};

#define GPIO_0 (*(volatile struct GPIO_0_tag *) 0x40022000)

struct GPT0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT0_0 (*(volatile struct GPT0_0_tag *) 0x40010000)

struct GPT1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT1_0 (*(volatile struct GPT1_0_tag *) 0x40011000)

struct GPT2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT2_0 (*(volatile struct GPT2_0_tag *) 0x40012000)

struct GPT3_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT3_0 (*(volatile struct GPT3_0_tag *) 0x40013000)

struct I2S0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCLK_SRC:2;
      uint64_t WCLK_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWCLKSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t END_FRAME_IDX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFDMACFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD0:2;
      uint64_t reservedSpace0:2;
      uint64_t AD1:2;
      uint64_t reservedSpace1:2;
      uint64_t AD2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFDIRCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORD_LEN:5;
      uint64_t DUAL_PHASE:1;
      uint64_t SMPL_EDGE:1;
      uint64_t MEM_LEN_24:1;
      uint64_t DATA_DELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFFMTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PULSE_WIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFPWMVALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFINPTRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFINPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFOUTPTRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFOUTPTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STMP_EN:1;
      uint64_t IN_RDY:1;
      uint64_t OUT_RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNTCAPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNTCAPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN_START_WCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPINTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT_START_WCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPOUTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_INC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXPERMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNTCAPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNTCAPT1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQCLR;

};

#define I2S0_0 (*(volatile struct I2S0_0_tag *) 0x40021000)

struct IOC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG31;

};

#define IOC_0 (*(volatile struct IOC_0_tag *) 0x40081000)

struct PRCM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULDO:1;
      uint64_t reservedSpace0:1;
      uint64_t MCU_VD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VDCTL;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOAD:1;
      uint64_t LOAD_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLOADCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCCLKG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VIMSCLKG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGDS;

  uint8_t res2[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUCLKDIV;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SBCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t WCLK_PHASE:2;
      uint64_t SMPL_ON_POSEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SMCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SBCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SWCLKDIV;

  uint8_t res4[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MCU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWRESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_STAT:1;
      uint64_t LOCKUP_STAT:1;
      uint64_t WR_TO_PINRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARMRESET;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC_ON:1;
      uint64_t SERIAL_ON:1;
      uint64_t PERIPH_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0SERIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0PERIPH;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC_ON:1;
      uint64_t SERIAL_ON:1;
      uint64_t PERIPH_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0SERIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0PERIPH;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CPU_ON:1;
      uint64_t RFC_ON:1;
      uint64_t VIMS_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1CPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1VIMS;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CPU_ON:1;
      uint64_t RFC_ON:1;
      uint64_t VIMS_MODE:1;
      uint64_t BUS_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1BUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1CPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1VIMS;

  uint8_t res10[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCMODESEL;

  uint8_t res11[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIMS_bitfield:2;
      uint64_t RFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMRETEN;

  uint8_t res12[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMHWOPT;

};

#define PRCM_0 (*(volatile struct PRCM_0_tag *) 0x40082000)

struct RFC_DBELL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDSTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FSCA:1;
      uint64_t MDMDONE:1;
      uint64_t MDMIN:1;
      uint64_t MDMOUT:1;
      uint64_t MDMSOFT:1;
      uint64_t TRCTK:1;
      uint64_t reservedSpace1:1;
      uint64_t RFEDONE:1;
      uint64_t RFESOFT0:1;
      uint64_t RFESOFT1:1;
      uint64_t RFESOFT2:1;
      uint64_t RATCH0:1;
      uint64_t RATCH1:1;
      uint64_t RATCH2:1;
      uint64_t RATCH3:1;
      uint64_t RATCH4:1;
      uint64_t RATCH5:1;
      uint64_t RATCH6:1;
      uint64_t RATCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFHWIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FSCA:1;
      uint64_t MDMDONE:1;
      uint64_t MDMIN:1;
      uint64_t MDMOUT:1;
      uint64_t MDMSOFT:1;
      uint64_t TRCTK:1;
      uint64_t reservedSpace1:1;
      uint64_t RFEDONE:1;
      uint64_t RFESOFT0:1;
      uint64_t RFESOFT1:1;
      uint64_t RFESOFT2:1;
      uint64_t RATCH0:1;
      uint64_t RATCH1:1;
      uint64_t RATCH2:1;
      uint64_t RATCH3:1;
      uint64_t RATCH4:1;
      uint64_t RATCH5:1;
      uint64_t RATCH6:1;
      uint64_t RATCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFHWIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEISL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFACKIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPOCTL0:4;
      uint64_t GPOCTL1:4;
      uint64_t GPOCTL2:4;
      uint64_t GPOCTL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSGPOCTL;

};

#define RFC_DBELL_0 (*(volatile struct RFC_DBELL_0_tag *) 0x40041000)

struct RFC_PWR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC:1;
      uint64_t CPE:1;
      uint64_t CPERAM:1;
      uint64_t MDM:1;
      uint64_t MDMRAM:1;
      uint64_t RFE:1;
      uint64_t RFERAM:1;
      uint64_t RAT:1;
      uint64_t PHA:1;
      uint64_t FSCA:1;
      uint64_t RFCTRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMCLKEN;

};

#define RFC_PWR_0 (*(volatile struct RFC_PWR_0_tag *) 0x40040000)

struct RFC_RAT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCNT;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH0VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH1VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH2VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH3VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH4VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH5VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH6VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH7VAL;

};

#define RFC_RAT_0 (*(volatile struct RFC_RAT_0_tag *) 0x40043004)

struct SMPH_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH31;

  uint8_t res0[1920];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK31;

};

#define SMPH_0 (*(volatile struct SMPH_0_tag *) 0x40084000)

struct SSI0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t SSE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIM:1;
      uint64_t RTIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORRIS:1;
      uint64_t RTRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORMIS:1;
      uint64_t RTMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSI0_0 (*(volatile struct SSI0_0_tag *) 0x40000000)

struct SSI1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t SSE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIM:1;
      uint64_t RTIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORRIS:1;
      uint64_t RTRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORMIS:1;
      uint64_t RTMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSI1_0 (*(volatile struct SSI1_0_tag *) 0x40008000)

struct TRNG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
      uint64_t reservedSpace0:29;
      uint64_t NEED_CLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_MODE:1;
      uint64_t NO_LFSR_FB:1;
      uint64_t reservedSpace1:7;
      uint64_t TRNG_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t STARTUP_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIN_REFILL_CYCLES:8;
      uint64_t SMPL_DIV:4;
      uint64_t reservedSpace0:4;
      uint64_t MAX_REFILL_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALARM_THR:8;
      uint64_t reservedSpace0:8;
      uint64_t SHUTDOWN_THR:5;
      uint64_t reservedSpace1:3;
      uint64_t SHUTDOWN_CNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FROEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRODETUNE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_FLAGS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMSTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_80_64:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR2;

  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t NR_OF_FROS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIP_NUM:8;
      uint64_t EIP_NUM_COMPL:8;
      uint64_t HW_PATCH_LVL:4;
      uint64_t HW_MINOR_VER:4;
      uint64_t HW_MAJOR_VER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVER0;

  uint8_t res1[8024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTATMASK;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVER1;

  uint8_t res3[8];

  uint32_t IRQSET;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWRESET;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTAT;

};

#define TRNG_0 (*(volatile struct TRNG_0_tag *) 0x40028000)

struct UDMA0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERENABLE:1;
      uint64_t reservedSpace0:3;
      uint64_t STATE:4;
      uint64_t reservedSpace1:8;
      uint64_t TOTALCHANNELS:5;
      uint64_t reservedSpace2:7;
      uint64_t TEST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERENABLE:1;
      uint64_t reservedSpace0:4;
      uint64_t PRTOCTRL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BASEPTR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASEPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAITONREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETBURST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARBURST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETREQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARREQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHANNELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHANNELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHNLPRIALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHNLPRIALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHNLPRIORITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHNLPRIORITY;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERROR;

  uint8_t res1[1204];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQDONE;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DONEMASK;

};

#define UDMA0_0 (*(volatile struct UDMA0_0_tag *) 0x40020000)

struct VIMS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t INV:1;
      uint64_t MODE_CHANGING:1;
      uint64_t SYSBUS_LB_DIS:1;
      uint64_t IDCODE_LB_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t PREF_EN:1;
      uint64_t ARB_CFG:1;
      uint64_t SYSBUS_LB_DIS:1;
      uint64_t IDCODE_LB_DIS:1;
      uint64_t reservedSpace0:23;
      uint64_t DYN_CG_EN:1;
      uint64_t STATS_EN:1;
      uint64_t STATS_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

};

#define VIMS_0 (*(volatile struct VIMS_0_tag *) 0x40034000)

struct WDT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTLOAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t INTTYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTICR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  uint8_t res0[1024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUSE_INTR:1;
      uint64_t CAUSE_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_CAUS;

  uint8_t res1[2016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

};

#define WDT_0 (*(volatile struct WDT_0_tag *) 0x40080000)

struct System_Control_Space_System_Control_Block_1_tag
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

#define System_Control_Space_System_Control_Block_1 (*(volatile struct System_Control_Space_System_Control_Block_1_tag *) 0xe000ed00)

struct System_Control_Space_System_Control_and_ID_1_tag
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

#define System_Control_Space_System_Control_and_ID_1 (*(volatile struct System_Control_Space_System_Control_and_ID_1_tag *) 0xe000e004)

struct System_Control_Space_NVIC_1_tag
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

#define System_Control_Space_NVIC_1 (*(volatile struct System_Control_Space_NVIC_1_tag *) 0xe000e100)

struct System_Control_Space_SysTick_1_tag
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

#define System_Control_Space_SysTick_1 (*(volatile struct System_Control_Space_SysTick_1_tag *) 0xe000e010)

struct M3_Peripherals_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Auxiliary_Control_Register;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t INTEN:1;
      uint64_t CLK_SRC:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Control_and_Status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Reload_Value;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Current_Value;

  uint8_t res1[228];

  uint32_t Interrupt_0_to_31_Set_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Enable;

  uint8_t res2[120];

  uint32_t Interrupt_0_to_31_Clear_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Enable;

  uint8_t res3[120];

  uint32_t Interrupt_0_to_31_Set_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Pending;

  uint8_t res4[120];

  uint32_t Interrupt_0_to_31_Clear_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Pending;

  uint8_t res5[120];

  uint32_t Interrupt_0_to_31_Active_Bit;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_63_Active_Bit;

  uint8_t res6[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_0_to_3_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_4_to_7_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_8_to_11_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_12_to_15_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_16_to_19_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_20_to_23_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_24_to_27_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_28_to_31_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_35_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_36_to_39_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_40_to_43_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_44_to_47_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_48_to_51_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_52_to_53_Priority;

  uint8_t res7[2248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:4;
      uint64_t PARTNO:12;
      uint64_t CON:4;
      uint64_t VAR:4;
      uint64_t IMP:8;
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
      uint64_t VECTPENDING:7;
      uint64_t reservedSpace1:3;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t OFFSET:20;
      uint64_t BASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTABLE;

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
  } __attribute__((aligned(4))) SYSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETHR:1;
      uint64_t MAINPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t MEM:3;
      uint64_t reservedSpace1:5;
      uint64_t BUS:3;
      uint64_t reservedSpace2:5;
      uint64_t USAGE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SVC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DEBUG:3;
      uint64_t reservedSpace1:13;
      uint64_t PENDSV:3;
      uint64_t reservedSpace2:5;
      uint64_t TICK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI3;

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
  } __attribute__((aligned(4))) SYSHNDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IERR:1;
      uint64_t DERR:1;
      uint64_t reservedSpace0:1;
      uint64_t MUSTKE:1;
      uint64_t MSTKE:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARV:1;
      uint64_t IBUS:1;
      uint64_t PRECISE:1;
      uint64_t IMPRE:1;
      uint64_t BUSTKE:1;
      uint64_t BSTKE:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARV:1;
      uint64_t UNDEF:1;
      uint64_t INVSTAT:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAULTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECT:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFAULTSTAT;

  uint8_t res8[4];

  uint32_t Mem_Manage_Address;
  uint32_t Bus_Fault_Address;
  uint8_t res9[84];

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
  } __attribute__((aligned(4))) MPUTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUMBER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUNUMBER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE;

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
  } __attribute__((aligned(4))) MPUATTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE1;

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
  } __attribute__((aligned(4))) MPUATTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE2;

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
  } __attribute__((aligned(4))) MPUATTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE3;

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
  } __attribute__((aligned(4))) MPUATTR3;

  uint8_t res10[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Software_Trigger_Interrupt_Register;

};

#define M3_Peripherals_1 (*(volatile struct M3_Peripherals_1_tag *) 0xe000e008)

struct AON_BATMON_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEAS_EN:1;
      uint64_t CALC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEASCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATMONP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATMONP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG1:4;
      uint64_t CFG2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:4;
      uint64_t OVR:1;
      uint64_t LOWLIM:1;
      uint64_t HIGHLIM:2;
      uint64_t FALLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHPUMPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAC:8;
      uint64_t INT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPUPD;

};

#define AON_BATMON_1 (*(volatile struct AON_BATMON_1_tag *) 0x40095000)

struct AON_EVENT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t WU1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t WU2_EV:6;
      uint64_t reservedSpace2:2;
      uint64_t WU3_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUWUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t WU1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t WU2_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXWUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t AON_PROG1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t AON_PROG2_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_CH1_CAPT_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSEL;

};

#define AON_EVENT_1 (*(volatile struct AON_EVENT_1_tag *) 0x40093000)

struct AON_IOC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCLATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OE_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK32KCTL;

};

#define AON_IOC_1 (*(volatile struct AON_IOC_1_tag *) 0x40094000)

struct AON_RTC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RTC_UPD_EN:1;
      uint64_t RTC_4KHZ_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t RESET:1;
      uint64_t EV_DELAY:4;
      uint64_t reservedSpace1:4;
      uint64_t COMB_EV_MASK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t reservedSpace0:7;
      uint64_t CH1:1;
      uint64_t reservedSpace1:7;
      uint64_t CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUEINC:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSECINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t CH1_EN:1;
      uint64_t CH1_CAPT_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t CH2_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t CH2_CONT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CMPINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBSEC:16;
      uint64_t SEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CAPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

};

#define AON_RTC_1 (*(volatile struct AON_RTC_1_tag *) 0x40092000)

struct AON_SYSCTL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_EN:1;
      uint64_t EXT_REG_MODE:1;
      uint64_t DCDC_ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RESET_SRC:3;
      uint64_t CLK_LOSS_EN:1;
      uint64_t VDD_LOSS_EN:1;
      uint64_t VDDR_LOSS_EN:1;
      uint64_t VDDS_LOSS_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t VDD_LOSS_EN_OVR:1;
      uint64_t VDDR_LOSS_EN_OVR:1;
      uint64_t VDDS_LOSS_EN_OVR:1;
      uint64_t BOOT_DET_0:1;
      uint64_t BOOT_DET_1:1;
      uint64_t GPIO_WU_FROM_SD:1;
      uint64_t WU_FROM_SD:1;
      uint64_t BOOT_DET_0_SET:1;
      uint64_t BOOT_DET_1_SET:1;
      uint64_t reservedSpace2:6;
      uint64_t BOOT_DET_0_CLR:1;
      uint64_t BOOT_DET_1_CLR:1;
      uint64_t reservedSpace3:5;
      uint64_t SYSRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESETCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_PAD_SLEEP_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLEEPCTL;

};

#define AON_SYSCTL_1 (*(volatile struct AON_SYSCTL_1_tag *) 0x40090000)

struct AON_WUC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_DWN_SRC:2;
      uint64_t RCOSC_HF_CAL_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t SCLK_HF_DIV:3;
      uint64_t PWR_DWN_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_RET_EN:4;
      uint64_t reservedSpace0:12;
      uint64_t FIXED_WU_EN:1;
      uint64_t VIRT_OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_RET_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUX_FORCE_ON:1;
      uint64_t SWEV:1;
      uint64_t SCE_RUN_EN:1;
      uint64_t reservedSpace0:28;
      uint64_t RESET_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AUX_RESET_DONE:1;
      uint64_t AUX_BUS_CONNECTED:1;
      uint64_t reservedSpace1:1;
      uint64_t MCU_PD_ON:1;
      uint64_t AUX_PD_ON:1;
      uint64_t JTAG_PD_ON:1;
      uint64_t reservedSpace2:2;
      uint64_t AUX_PWR_DWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHUTDOWN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MCU_SRAM_ERASE:1;
      uint64_t AUX_SRAM_ERASE:1;
      uint64_t reservedSpace1:4;
      uint64_t PWR_DWN_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCU_WARM_RESET:1;
      uint64_t MCU_RESET_SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER_E:3;
      uint64_t PER_M:5;
      uint64_t MAX_PER_E:3;
      uint64_t MAX_PER_M:5;
      uint64_t C1:4;
      uint64_t C2:4;
      uint64_t reservedSpace0:7;
      uint64_t ADAPTIVE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECHARGECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_USED_PER:16;
      uint64_t VDDR_SMPLS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECHARGESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER_E:3;
      uint64_t PER_M:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCFG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t JTAG_PD_FORCE_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USER_CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGUSERCODE;

};

#define AON_WUC_1 (*(volatile struct AON_WUC_1_tag *) 0x40091000)

struct AUX_ADI4_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_REF:4;
      uint64_t COMPA_IN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_IN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPB_REF:3;
      uint64_t ADCCOMPB_IN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADCCOMPB_IN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISRC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t COMPB_EN:1;
      uint64_t COMPB_TRIM:3;
      uint64_t COMPA_REF_CURR_EN:1;
      uint64_t COMPA_REF_RES_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) COMP;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RESET_N:1;
      uint64_t reservedSpace0:1;
      uint64_t SMPL_CYCLE_EXP:4;
      uint64_t SMPL_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCALE_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SRC:1;
      uint64_t EXT:1;
      uint64_t IOMUX:1;
      uint64_t REF_ON_IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCREF0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCREF1;

};

#define AUX_ADI4_1 (*(volatile struct AUX_ADI4_1_tag *) 0x400cb000)

struct AUX_AIODIO0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0:2;
      uint64_t IO1:2;
      uint64_t IO2:2;
      uint64_t IO3:2;
      uint64_t IO4:2;
      uint64_t IO5:2;
      uint64_t IO6:2;
      uint64_t IO7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIE;

};

#define AUX_AIODIO0_1 (*(volatile struct AUX_AIODIO0_1_tag *) 0x400c1000)

struct AUX_AIODIO1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0:2;
      uint64_t IO1:2;
      uint64_t IO2:2;
      uint64_t IO3:2;
      uint64_t IO4:2;
      uint64_t IO5:2;
      uint64_t IO6:2;
      uint64_t IO7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIE;

};

#define AUX_AIODIO1_1 (*(volatile struct AUX_AIODIO1_1_tag *) 0x400c2000)

struct AUX_ANAIF_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:2;
      uint64_t reservedSpace0:6;
      uint64_t START_SRC:5;
      uint64_t START_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMPTY:1;
      uint64_t ALMOST_FULL:1;
      uint64_t FULL:1;
      uint64_t UNDERFLOW:1;
      uint64_t OVERFLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCFIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISRCCTL;

};

#define AUX_ANAIF_1 (*(volatile struct AUX_ANAIF_1_tag *) 0x400c9010)

struct AUX_DDI0_OSC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLK_HF_SRC_SEL:1;
      uint64_t SCLK_MF_SRC_SEL:1;
      uint64_t SCLK_LF_SRC_SEL:2;
      uint64_t reservedSpace0:1;
      uint64_t ACLK_REF_SRC_SEL:2;
      uint64_t ACLK_TDC_SRC_SEL:2;
      uint64_t CLK_LOSS_EN:1;
      uint64_t XOSC_LF_DIG_BYPASS:1;
      uint64_t XOSC_HF_POWER_MODE:1;
      uint64_t RCOSC_LF_TRIMMED:1;
      uint64_t reservedSpace1:3;
      uint64_t ALLOW_SCLK_HF_SWITCHING:1;
      uint64_t reservedSpace2:5;
      uint64_t FORCE_KICKSTART_EN:1;
      uint64_t reservedSpace3:2;
      uint64_t DOUBLER_RESET_DURATION:1;
      uint64_t DOUBLER_START_DURATION:2;
      uint64_t BYPASS_RCOSC_LF_CLK_QUAL:1;
      uint64_t BYPASS_XOSC_LF_CLK_QUAL:1;
      uint64_t reservedSpace4:1;
      uint64_t XTAL_IS_24M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_FAST_START:2;
      uint64_t reservedSpace0:15;
      uint64_t RCOSCHFCTRIMFRACT_EN:1;
      uint64_t RCOSCHFCTRIMFRACT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RADC_MODE_IS_SAR:1;
      uint64_t RADC_DAC_TH:6;
      uint64_t IDAC_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT:6;
      uint64_t HPM_IBIAS_WAIT_CNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RADCEXTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBIASCAP_HPTOLP_OL_CNT:4;
      uint64_t CAP_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT_FINAL:8;
      uint64_t IBIAS_INIT:4;
      uint64_t IBIAS_OFFSET:4;
      uint64_t reservedSpace0:2;
      uint64_t AMPCOMP_SW_EN:1;
      uint64_t AMPCOMP_SW_CTRL:1;
      uint64_t AMPCOMP_FSM_UPDATE_RATE:2;
      uint64_t AMPCOMP_REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPMRAMP1_TH:6;
      uint64_t IBIASCAP_LPTOHP_OL_CNT:4;
      uint64_t HPMRAMP3_HTH:6;
      uint64_t reservedSpace0:2;
      uint64_t HPMRAMP3_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPTH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADC_COMP_AMPTH_HPM:6;
      uint64_t reservedSpace1:2;
      uint64_t ADC_COMP_AMPTH_LPM:6;
      uint64_t reservedSpace2:2;
      uint64_t LPMUPDATE_HTH:6;
      uint64_t reservedSpace3:2;
      uint64_t LPMUPDATE_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPTH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_COLUMN_Q12:16;
      uint64_t XOSC_HF_ROW_Q12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASSVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_IBIASTHERM:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASSVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SCLK_LF_AUX_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATESTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_IREF_CTRL:2;
      uint64_t reservedSpace0:2;
      uint64_t ADC_SH_VBUF_EN:1;
      uint64_t ADC_SH_MODE_EN:1;
      uint64_t reservedSpace1:17;
      uint64_t SPARE23:1;
      uint64_t NANOAMP_BIAS_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCDOUBLERNANOAMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LP_BUF_ITRIM:2;
      uint64_t HP_BUF_ITRIM:3;
      uint64_t reservedSpace0:1;
      uint64_t BYPASS:1;
      uint64_t reservedSpace1:1;
      uint64_t PEAK_DET_ITRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XOSCHFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCLF_CTUNE_TRIM:8;
      uint64_t RCOSCLF_RTUNE_TRIM:2;
      uint64_t reservedSpace0:8;
      uint64_t XOSCLF_CMIRRWR_RATIO:4;
      uint64_t XOSCLF_REGULATOR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFOSCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RCOSCHF_CTRIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSCHFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PENDINGSCLKHFSWITCHING:1;
      uint64_t ADC_DATA:6;
      uint64_t ADC_DATA_READY:1;
      uint64_t ADC_THMET:1;
      uint64_t reservedSpace0:1;
      uint64_t XOSC_HF_HP_BUF_EN:1;
      uint64_t XOSC_HF_LP_BUF_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t XB_48M_CLK_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t XOSC_HF_EN:1;
      uint64_t SCLK_LF_LOSS:1;
      uint64_t SCLK_HF_LOSS:1;
      uint64_t CLK_DCDC_RDY_ACK:1;
      uint64_t CLK_DCDC_RDY:1;
      uint64_t XOSC_LF_EN:1;
      uint64_t RCOSC_LF_EN:1;
      uint64_t RCOSC_HF_EN:1;
      uint64_t reservedSpace3:5;
      uint64_t SCLK_HF_SRC:1;
      uint64_t SCLK_LF_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DCDC_GOOD:1;
      uint64_t CLK_CHP_GOOD:1;
      uint64_t ACLK_REF_GOOD:1;
      uint64_t ACLK_TDC_GOOD:1;
      uint64_t ACLK_ADC_GOOD:1;
      uint64_t SCLK_LF_GOOD:1;
      uint64_t SCLK_MF_GOOD:1;
      uint64_t SCLK_HF_GOOD:1;
      uint64_t CLK_DCDC_EN:1;
      uint64_t CLK_CHP_EN:1;
      uint64_t ACLK_REF_EN:1;
      uint64_t ACLK_TDC_EN:1;
      uint64_t ACLK_ADC_EN:1;
      uint64_t SCLK_MF_EN:1;
      uint64_t SCLK_HF_EN:1;
      uint64_t FORCE_RCOSC_HF:1;
      uint64_t LPM_UPDATE_AMP:6;
      uint64_t HMP_UPDATE_AMP:6;
      uint64_t RAMPSTATE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_RF_FREQGOOD:1;
      uint64_t XOSC_HF_FREQGOOD:1;
      uint64_t XOSC_HF_AMPGOOD:1;
      uint64_t AMPCOMP_REQ:1;
      uint64_t reservedSpace0:8;
      uint64_t RAMPSTATE:4;
      uint64_t reservedSpace1:7;
      uint64_t HPM_RAMP3_THMET:1;
      uint64_t HPM_RAMP2_THMET:1;
      uint64_t HPM_RAMP1_THMET:1;
      uint64_t ADC_DCBIAS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT2;

};

#define AUX_DDI0_OSC_1 (*(volatile struct AUX_DDI0_OSC_1_tag *) 0x400ca000)

struct AUX_EVCTL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0_EV:5;
      uint64_t VEC0_EN:1;
      uint64_t VEC0_POL:1;
      uint64_t reservedSpace0:1;
      uint64_t VEC1_EV:5;
      uint64_t VEC1_EN:1;
      uint64_t VEC1_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC2_EV:5;
      uint64_t VEC2_EN:1;
      uint64_t VEC2_POL:1;
      uint64_t reservedSpace0:1;
      uint64_t VEC3_EV:5;
      uint64_t VEC3_EN:1;
      uint64_t VEC3_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEV7_EV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCEWEVSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:1;
      uint64_t EN:1;
      uint64_t REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEVSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_RTC_CH2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t OBSMUX1:1;
      uint64_t AON_SW:1;
      uint64_t AON_PROG_WU:1;
      uint64_t AUXIO0:1;
      uint64_t AUXIO1:1;
      uint64_t AUXIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXIO3:1;
      uint64_t AUXIO4:1;
      uint64_t AUXIO5:1;
      uint64_t AUXIO6:1;
      uint64_t AUXIO7:1;
      uint64_t AUXIO8:1;
      uint64_t AUXIO9:1;
      uint64_t AUXIO10:1;
      uint64_t AUXIO11:1;
      uint64_t AUXIO12:1;
      uint64_t AUXIO13:1;
      uint64_t AUXIO14:1;
      uint64_t AUXIO15:1;
      uint64_t ACLK_REF:1;
      uint64_t MCU_EV:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBEVTOMCUMASK;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0:1;
      uint64_t VEC1:1;
      uint64_t VEC2:1;
      uint64_t VEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUFLAGSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONFLAGSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0:1;
      uint64_t VEC1:1;
      uint64_t VEC2:1;
      uint64_t VEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECFLAGSCLR;

};

#define AUX_EVCTL_1 (*(volatile struct AUX_EVCTL_1_tag *) 0x400c5000)

struct AUX_SCE_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
      uint64_t SUSPEND:1;
      uint64_t SINGLE_STEP:1;
      uint64_t RESTART:1;
      uint64_t FORCE_WU_HIGH:1;
      uint64_t FORCE_WU_LOW:1;
      uint64_t DBG_FREEZE_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RESET_VECTOR:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_EV_HIGH:8;
      uint64_t FORCE_EV_LOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:16;
      uint64_t OPCODE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FETCHSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Z_FLAG:1;
      uint64_t N_FLAG:1;
      uint64_t C_FLAG:1;
      uint64_t V_FLAG:1;
      uint64_t reservedSpace0:4;
      uint64_t SELF_STOP:1;
      uint64_t WEV:1;
      uint64_t SLEEP:1;
      uint64_t BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_SIGNALS:8;
      uint64_t WU_SIGNAL:1;
      uint64_t reservedSpace0:7;
      uint64_t EXC_VECTOR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0:16;
      uint64_t REG1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG2:16;
      uint64_t REG3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG4:16;
      uint64_t REG5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG6:16;
      uint64_t REG7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG7_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:16;
      uint64_t STOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOOPADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITER_LEFT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOOPCNT;

};

#define AUX_SCE_1 (*(volatile struct AUX_SCE_1_tag *) 0x400e1000)

struct AUX_SMPH_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_ID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOTAKE;

};

#define AUX_SMPH_1 (*(volatile struct AUX_SMPH_1_tag *) 0x400c8000)

struct AUX_TDCIF_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATE:6;
      uint64_t DONE:1;
      uint64_t SAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIMIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SATCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_SRC:5;
      uint64_t START_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t STOP_SRC:5;
      uint64_t STOP_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNTLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:5;
      uint64_t reservedSpace0:1;
      uint64_t RATIO:1;
      uint64_t RESET_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECNT;

};

#define AUX_TDCIF_1 (*(volatile struct AUX_TDCIF_1_tag *) 0x400c4000)

struct AUX_TIMER_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRE:4;
      uint64_t TICK_SRC:5;
      uint64_t TICK_SRC_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRE:4;
      uint64_t TICK_SRC:5;
      uint64_t TICK_SRC_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0TARGET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1TARGET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1CTL;

};

#define AUX_TIMER_1 (*(volatile struct AUX_TIMER_1_tag *) 0x400c7000)

struct AUX_WUC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_bitfield:1;
      uint64_t AIODIO0:1;
      uint64_t AIODIO1:1;
      uint64_t TIMER:1;
      uint64_t ANAIF:1;
      uint64_t TDC:1;
      uint64_t AUX_DDI0_OSC_bitfield:1;
      uint64_t AUX_ADI4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCLKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWROFFREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWNREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWNACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLFREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLFACK;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG_WU:1;
      uint64_t AON_SW:1;
      uint64_t AON_RTC_CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUEVFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG_WU:1;
      uint64_t AON_SW:1;
      uint64_t AON_RTC_CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUEVCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDCCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REFCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC15_0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC23_16:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD_REQ:1;
      uint64_t UPD_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCONNECT_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUBUSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCONNECT_ACK:1;
      uint64_t DISCONNECTED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUBUSSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCE_RUN_EN:1;
      uint64_t AUX_FORCE_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AONCTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXIOLATCH;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_bitfield:1;
      uint64_t AIODIO0:1;
      uint64_t AIODIO1:1;
      uint64_t TIMER:1;
      uint64_t ANAIF:1;
      uint64_t reservedSpace0:1;
      uint64_t AUX_DDI0_OSC_bitfield:1;
      uint64_t AUX_ADI4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCLKEN1;

};

#define AUX_WUC_1 (*(volatile struct AUX_WUC_1_tag *) 0x400c6000)

struct CCFG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_INCREMENT:24;
      uint64_t DIO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXT_LF_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_MAX_START:8;
      uint64_t DELTA_IBIAS_OFFSET:4;
      uint64_t DELTA_IBIAS_INIT:4;
      uint64_t ALT_DCDC_IPEAK:3;
      uint64_t ALT_DCDC_DITHER_EN:1;
      uint64_t ALT_DCDC_VMIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS_XOSC_OVR:1;
      uint64_t DIS_ALT_DCDC_SETTING:1;
      uint64_t DISABLE_FLAGS:14;
      uint64_t SIZE_OF_CCFG:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIZE_AND_DIS_FLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_CAP:8;
      uint64_t XOSC_CAPARRAY_DELTA:8;
      uint64_t HF_COMP:1;
      uint64_t XOSC_CAP_MOD:1;
      uint64_t XOSC_FREQ:2;
      uint64_t RTC_COMP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCLK_LF_OPTION:2;
      uint64_t VDDS_BOD_LEVEL:1;
      uint64_t VDDR_EXT_LOAD:1;
      uint64_t DCDC_ACTIVE:1;
      uint64_t DCDC_RECHARGE:1;
      uint64_t VDDR_TRIM_SLEEP_DELTA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_EXT_TM15:8;
      uint64_t VDDR_EXT_TP5:8;
      uint64_t VDDR_EXT_TP25:8;
      uint64_t VDDR_EXT_TP45:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_LOAD_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_EXT_TP65:8;
      uint64_t VDDR_EXT_TP85:8;
      uint64_t VDDR_EXT_TP105:8;
      uint64_t VDDR_EXT_TP125:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_LOAD_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_COMP_P2:8;
      uint64_t RTC_COMP_P1:8;
      uint64_t RTC_COMP_P0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_OFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HF_COMP_P2:8;
      uint64_t HF_COMP_P1:8;
      uint64_t HF_COMP_P0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQ_OFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_MAC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_MAC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_BLE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_BLE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BL_ENABLE:8;
      uint64_t BL_PIN_NUMBER:8;
      uint64_t BL_LEVEL:1;
      uint64_t reservedSpace0:7;
      uint64_t BOOTLOADER_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BL_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK_ERASE_DIS_N:1;
      uint64_t reservedSpace0:7;
      uint64_t CHIP_ERASE_DIS_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERASE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_FA_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TI_OPTIONS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_TAP_ENABLE:8;
      uint64_t PRCM_TAP_ENABLE:8;
      uint64_t CPU_DAP_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TAP_DAP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUC_TAP_ENABLE:8;
      uint64_t PBIST1_TAP_ENABLE:8;
      uint64_t PBIST2_TAP_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TAP_DAP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMAGE_VALID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMAGE_VALID_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_0:1;
      uint64_t WRT_PROT_SEC_1:1;
      uint64_t WRT_PROT_SEC_2:1;
      uint64_t WRT_PROT_SEC_3:1;
      uint64_t WRT_PROT_SEC_4:1;
      uint64_t WRT_PROT_SEC_5:1;
      uint64_t WRT_PROT_SEC_6:1;
      uint64_t WRT_PROT_SEC_7:1;
      uint64_t WRT_PROT_SEC_8:1;
      uint64_t WRT_PROT_SEC_9:1;
      uint64_t WRT_PROT_SEC_10:1;
      uint64_t WRT_PROT_SEC_11:1;
      uint64_t WRT_PROT_SEC_12:1;
      uint64_t WRT_PROT_SEC_13:1;
      uint64_t WRT_PROT_SEC_14:1;
      uint64_t WRT_PROT_SEC_15:1;
      uint64_t WRT_PROT_SEC_16:1;
      uint64_t WRT_PROT_SEC_17:1;
      uint64_t WRT_PROT_SEC_18:1;
      uint64_t WRT_PROT_SEC_19:1;
      uint64_t WRT_PROT_SEC_20:1;
      uint64_t WRT_PROT_SEC_21:1;
      uint64_t WRT_PROT_SEC_22:1;
      uint64_t WRT_PROT_SEC_23:1;
      uint64_t WRT_PROT_SEC_24:1;
      uint64_t WRT_PROT_SEC_25:1;
      uint64_t WRT_PROT_SEC_26:1;
      uint64_t WRT_PROT_SEC_27:1;
      uint64_t WRT_PROT_SEC_28:1;
      uint64_t WRT_PROT_SEC_29:1;
      uint64_t WRT_PROT_SEC_30:1;
      uint64_t WRT_PROT_SEC_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_31_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_32:1;
      uint64_t WRT_PROT_SEC_33:1;
      uint64_t WRT_PROT_SEC_34:1;
      uint64_t WRT_PROT_SEC_35:1;
      uint64_t WRT_PROT_SEC_36:1;
      uint64_t WRT_PROT_SEC_37:1;
      uint64_t WRT_PROT_SEC_38:1;
      uint64_t WRT_PROT_SEC_39:1;
      uint64_t WRT_PROT_SEC_40:1;
      uint64_t WRT_PROT_SEC_41:1;
      uint64_t WRT_PROT_SEC_42:1;
      uint64_t WRT_PROT_SEC_43:1;
      uint64_t WRT_PROT_SEC_44:1;
      uint64_t WRT_PROT_SEC_45:1;
      uint64_t WRT_PROT_SEC_46:1;
      uint64_t WRT_PROT_SEC_47:1;
      uint64_t WRT_PROT_SEC_48:1;
      uint64_t WRT_PROT_SEC_49:1;
      uint64_t WRT_PROT_SEC_50:1;
      uint64_t WRT_PROT_SEC_51:1;
      uint64_t WRT_PROT_SEC_52:1;
      uint64_t WRT_PROT_SEC_53:1;
      uint64_t WRT_PROT_SEC_54:1;
      uint64_t WRT_PROT_SEC_55:1;
      uint64_t WRT_PROT_SEC_56:1;
      uint64_t WRT_PROT_SEC_57:1;
      uint64_t WRT_PROT_SEC_58:1;
      uint64_t WRT_PROT_SEC_59:1;
      uint64_t WRT_PROT_SEC_60:1;
      uint64_t WRT_PROT_SEC_61:1;
      uint64_t WRT_PROT_SEC_62:1;
      uint64_t WRT_PROT_SEC_63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_63_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_64:1;
      uint64_t WRT_PROT_SEC_65:1;
      uint64_t WRT_PROT_SEC_66:1;
      uint64_t WRT_PROT_SEC_67:1;
      uint64_t WRT_PROT_SEC_68:1;
      uint64_t WRT_PROT_SEC_69:1;
      uint64_t WRT_PROT_SEC_70:1;
      uint64_t WRT_PROT_SEC_71:1;
      uint64_t WRT_PROT_SEC_72:1;
      uint64_t WRT_PROT_SEC_73:1;
      uint64_t WRT_PROT_SEC_74:1;
      uint64_t WRT_PROT_SEC_75:1;
      uint64_t WRT_PROT_SEC_76:1;
      uint64_t WRT_PROT_SEC_77:1;
      uint64_t WRT_PROT_SEC_78:1;
      uint64_t WRT_PROT_SEC_79:1;
      uint64_t WRT_PROT_SEC_80:1;
      uint64_t WRT_PROT_SEC_81:1;
      uint64_t WRT_PROT_SEC_82:1;
      uint64_t WRT_PROT_SEC_83:1;
      uint64_t WRT_PROT_SEC_84:1;
      uint64_t WRT_PROT_SEC_85:1;
      uint64_t WRT_PROT_SEC_86:1;
      uint64_t WRT_PROT_SEC_87:1;
      uint64_t WRT_PROT_SEC_88:1;
      uint64_t WRT_PROT_SEC_89:1;
      uint64_t WRT_PROT_SEC_90:1;
      uint64_t WRT_PROT_SEC_91:1;
      uint64_t WRT_PROT_SEC_92:1;
      uint64_t WRT_PROT_SEC_93:1;
      uint64_t WRT_PROT_SEC_94:1;
      uint64_t WRT_PROT_SEC_95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_95_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_96:1;
      uint64_t WRT_PROT_SEC_97:1;
      uint64_t WRT_PROT_SEC_98:1;
      uint64_t WRT_PROT_SEC_99:1;
      uint64_t WRT_PROT_SEC_100:1;
      uint64_t WRT_PROT_SEC_101:1;
      uint64_t WRT_PROT_SEC_102:1;
      uint64_t WRT_PROT_SEC_103:1;
      uint64_t WRT_PROT_SEC_104:1;
      uint64_t WRT_PROT_SEC_105:1;
      uint64_t WRT_PROT_SEC_106:1;
      uint64_t WRT_PROT_SEC_107:1;
      uint64_t WRT_PROT_SEC_108:1;
      uint64_t WRT_PROT_SEC_109:1;
      uint64_t WRT_PROT_SEC_110:1;
      uint64_t WRT_PROT_SEC_111:1;
      uint64_t WRT_PROT_SEC_112:1;
      uint64_t WRT_PROT_SEC_113:1;
      uint64_t WRT_PROT_SEC_114:1;
      uint64_t WRT_PROT_SEC_115:1;
      uint64_t WRT_PROT_SEC_116:1;
      uint64_t WRT_PROT_SEC_117:1;
      uint64_t WRT_PROT_SEC_118:1;
      uint64_t WRT_PROT_SEC_119:1;
      uint64_t WRT_PROT_SEC_120:1;
      uint64_t WRT_PROT_SEC_121:1;
      uint64_t WRT_PROT_SEC_122:1;
      uint64_t WRT_PROT_SEC_123:1;
      uint64_t WRT_PROT_SEC_124:1;
      uint64_t WRT_PROT_SEC_125:1;
      uint64_t WRT_PROT_SEC_126:1;
      uint64_t WRT_PROT_SEC_127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_127_96;

};

#define CCFG_1 (*(volatile struct CCFG_1_tag *) 0x50003fa8)

struct CPU_TIPROP_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRACECLK_N_SWV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRACECLKMUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DYN_CG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYN_CG;

};

#define CPU_TIPROP_1 (*(volatile struct CPU_TIPROP_1_tag *) 0xe00feff8)

struct EVENT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL2;

  uint32_t CPUIRQSEL3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL33;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL9;

  uint8_t res1[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT0ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT0BCAPTSEL;

  uint8_t res2[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT1ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT1BCAPTSEL;

  uint8_t res3[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT2ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT2BCAPTSEL;

  uint8_t res4[256];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH1SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH1BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH2SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH2BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH3SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH3BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH4SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH4BSEL;

  uint32_t UDMACH5SSEL;
  uint32_t UDMACH5BSEL;
  uint32_t UDMACH6SSEL;
  uint32_t UDMACH6BSEL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH7SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH7BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH8SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH8BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH9SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH9BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH10SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH10BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH11SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH11BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH12SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH12BSEL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH13BSEL;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH14BSEL;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH15BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH16SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH16BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH17SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH17BSEL;

  uint8_t res8[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH21SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH21BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH22SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH22BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH23SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH23BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH24SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH24BSEL;

  uint8_t res9[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT3ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT3BCAPTSEL;

  uint8_t res10[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXSEL0;

  uint8_t res11[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM3NMISEL0;

  uint8_t res12[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SSTMPSEL0;

  uint8_t res13[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRZSEL0;

  uint8_t res14[1276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t reservedSpace0:7;
      uint64_t SWEV1:1;
      uint64_t reservedSpace1:7;
      uint64_t SWEV2:1;
      uint64_t reservedSpace2:7;
      uint64_t SWEV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEV;

};

#define EVENT_1 (*(volatile struct EVENT_1_tag *) 0x40083000)

struct FCFG1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICE_MINOR_REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_CONF_1;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV30;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCHF_CTRIM:8;
      uint64_t VTRIM_COARSE:4;
      uint64_t VTRIM_DIG:4;
      uint64_t ITRIM_DIG_LDO:2;
      uint64_t TRIMIREF:5;
      uint64_t TRIMMAG:4;
      uint64_t SET_RCOSC_HF_COARSE_RESISTOR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_OSC_BIAS_LDO_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMTEMP:6;
      uint64_t TRIMBOD_EXTMODE:5;
      uint64_t TRIMBOD_INTMODE:5;
      uint64_t VDDR_TRIM:5;
      uint64_t IPTAT_TRIM:2;
      uint64_t VDDR_OK_HYS:1;
      uint64_t VDDR_ENABLE_PG1:1;
      uint64_t BOD_BANDGAP_TRIM_CNF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_ANA_TRIM;

  uint8_t res3[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOT_NUMBER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_NUMBER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YCOORDINATE:16;
      uint64_t XCOORDINATE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COORDINATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSU:8;
      uint64_t PVSU:8;
      uint64_t ESU:8;
      uint64_t PSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_E_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVSU:12;
      uint64_t A_EXEZ_SETUP:4;
      uint64_t PV_ACCESS:8;
      uint64_t RVSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_C_E_P_R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVH2:8;
      uint64_t PVH:8;
      uint64_t RH:8;
      uint64_t PH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_P_R_PV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SM_FREQUENCY:12;
      uint64_t VSTAT:4;
      uint64_t SEQ:8;
      uint64_t EH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_EH_SEQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHV_E_STEP_HIGHT:16;
      uint64_t VHV_E_START:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_PP:16;
      uint64_t reservedSpace0:8;
      uint64_t PUMP_SU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGRAM_PW:16;
      uint64_t MAX_EP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PROG_EP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASE_PW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ERA_PW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHV_E:4;
      uint64_t reservedSpace0:4;
      uint64_t TRIM13_E:4;
      uint64_t reservedSpace1:4;
      uint64_t VHV_P:4;
      uint64_t reservedSpace2:4;
      uint64_t TRIM13_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VINH:8;
      uint64_t VCG2P5:8;
      uint64_t VHV_PV:4;
      uint64_t reservedSpace0:4;
      uint64_t TRIM13_PV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV_PV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t V_READ:8;
      uint64_t VWL_P:8;
      uint64_t VSL_P:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_V;

  uint8_t res5[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t PROTOCOL:4;
      uint64_t PKG:3;
      uint64_t SEQUENCE:4;
      uint64_t reservedSpace1:3;
      uint64_t VER:2;
      uint64_t PG_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USER_ID;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAIT_SYSCODE:8;
      uint64_t FLASH_SIZE:8;
      uint64_t TRIM_1P7:2;
      uint64_t MAX_EC_LEVEL:4;
      uint64_t DO_PRECOND:1;
      uint64_t EC_STEP_SIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OTP_DATA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_HIGH_EN_SEL:3;
      uint64_t DCDC_LOW_EN_SEL:3;
      uint64_t DEAD_TIME_TRIM:2;
      uint64_t DCDC_IPEAK:3;
      uint64_t DITHER_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t NANOAMP_RES_TRIM:6;
      uint64_t ATESTLF_UDIGLDO_IBIAS_TRIM:1;
      uint64_t SET_RCOSC_HF_FINE_RESISTOR:2;
      uint64_t reservedSpace1:1;
      uint64_t RCOSCHFCTRIMFRACT:5;
      uint64_t RCOSCHFCTRIMFRACT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA2_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM_DELTA:3;
      uint64_t reservedSpace0:5;
      uint64_t ITRIM_UDIGLDO:3;
      uint64_t ITRIM_DIGLDO_LOAD:2;
      uint64_t reservedSpace1:3;
      uint64_t GLDO_CURSRC:3;
      uint64_t reservedSpace2:5;
      uint64_t VDDR_TRIM_SLEEP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDO_TRIM;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_BLE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_BLE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_15_4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_15_4_1;

  uint8_t res8[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIN_AT_X_EXT_RD:3;
      uint64_t DIS_IDLE_EXT_RD:1;
      uint64_t DIS_STANDBY_EXT_RD:1;
      uint64_t STANDBY_PW_SEL_EXT_RD:2;
      uint64_t STANDBY_MODE_SEL_EXT_RD:1;
      uint64_t VIN_AT_X_INT_RD:3;
      uint64_t DIS_IDLE_INT_RD:1;
      uint64_t DIS_STANDBY_INT_RD:1;
      uint64_t STANDBY_PW_SEL_INT_RD:2;
      uint64_t STANDBY_MODE_SEL_INT_RD:1;
      uint64_t VIN_AT_X_EXT_WRT:3;
      uint64_t DIS_IDLE_EXT_WRT:1;
      uint64_t DIS_STANDBY_EXT_WRT:1;
      uint64_t STANDBY_PW_SEL_EXT_WRT:2;
      uint64_t STANDBY_MODE_SEL_EXT_WRT:1;
      uint64_t VIN_AT_X_INT_WRT:3;
      uint64_t DIS_IDLE_INT_WRT:1;
      uint64_t DIS_STANDBY_INT_WRT:1;
      uint64_t STANDBY_PW_SEL_INT_WRT:2;
      uint64_t STANDBY_MODE_SEL_INT_WRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OTP_DATA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMPVSLOPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRIMFRACT_SLOPE:8;
      uint64_t CTRIMFRACT_QUAD:8;
      uint64_t CTRIM:8;
      uint64_t FINE_RESISTOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSC_HF_TEMPCOMP;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MANUFACTURER_ID:12;
      uint64_t WAFER_ID:16;
      uint64_t PG_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICEPICK_DEVICE_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG1_REVISION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_PROGRAM_REV:8;
      uint64_t PO_TAIL_RES_TRIM:4;
      uint64_t PER_E:3;
      uint64_t PER_M:5;
      uint64_t RCOSC_HF_CRIM:8;
      uint64_t RCOSC_HF_ITUNE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_OTP_DATA;

  uint8_t res10[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO_CNT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCONF;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFANALDO_TRIM_OUTPUT:5;
      uint64_t IFDIGLDO_TRIM_OUTPUT:5;
      uint64_t INT2ADJ:4;
      uint64_t AAFCAP:2;
      uint64_t FF1ADJ:4;
      uint64_t INT3ADJ:4;
      uint64_t FF3ADJ:4;
      uint64_t FF2ADJ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_IF_ADC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCLF_RTUNE_TRIM:2;
      uint64_t RCOSCLF_CTUNE_TRIM:8;
      uint64_t XOSC_HF_COLUMN_Q12:16;
      uint64_t XOSC_HF_ROW_Q12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_OSC_TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:6;
      uint64_t PATRIMCOMPLETE_N:1;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_ABS_GAIN_TEMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_ABS_GAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_REL_GAIN_TEMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_REL_GAIN;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_ABS_OFFSET_TEMP1:8;
      uint64_t reservedSpace0:8;
      uint64_t SOC_ADC_REL_OFFSET_TEMP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_OFFSET_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_REF_VOLTAGE_TRIM_TEMP1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_REF_TRIM_AND_OFFSET_EXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPMRAMP1_TH:6;
      uint64_t IBIASCAP_LPTOHP_OL_CNT:4;
      uint64_t HPMRAMP3_HTH:6;
      uint64_t reservedSpace0:2;
      uint64_t HPMRAMP3_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_TH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADC_COMP_AMPTH_HPM:6;
      uint64_t reservedSpace1:2;
      uint64_t ADC_COMP_AMPTH_LPM:6;
      uint64_t reservedSpace2:2;
      uint64_t LPMUPDATE_HTM:6;
      uint64_t reservedSpace3:2;
      uint64_t LPMUPDATE_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_TH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBIASCAP_HPTOLP_OL_CNT:4;
      uint64_t CAP_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT_FINAL:8;
      uint64_t IBIAS_INIT:4;
      uint64_t IBIAS_OFFSET:4;
      uint64_t reservedSpace0:6;
      uint64_t AMPCOMP_REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_IBIASTHERM:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASS_VALUE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
      uint64_t RSSITRIMCOMPLETE_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMBOD_H:5;
      uint64_t reservedSpace0:3;
      uint64_t VDDR_TRIM_SLEEP_H:5;
      uint64_t reservedSpace1:3;
      uint64_t VDDR_TRIM_H:5;
      uint64_t reservedSpace2:3;
      uint64_t VDDR_TRIM_HH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t XOSC_OPTION:1;
      uint64_t XOSC_HF_FAST_START:2;
      uint64_t XOSCLF_CMIRRWR_RATIO:4;
      uint64_t XOSCLF_REGULATOR_TRIM:2;
      uint64_t ATESTLF_RCOSCLF_IBIAS_TRIM:1;
      uint64_t ADC_SH_MODE_EN:1;
      uint64_t ADC_SH_VBUF_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC_CONF;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLUX_CAP_0P4_TRIM:16;
      uint64_t FLUX_CAP_0P28_TRIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAC_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT:6;
      uint64_t HPM_IBIAS_WAIT_CNT:10;
      uint64_t DBLR_LOOP_FILTER_RESET_VOLTAGE:2;
      uint64_t LP_BUF_ITRIM:2;
      uint64_t HP_BUF_ITRIM:3;
      uint64_t PEAK_DET_ITRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_OTP_DATA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_20C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_35C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_50C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_65C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_80C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_95C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_110C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_125C;

};

#define FCFG1_1 (*(volatile struct FCFG1_1_tag *) 0x500010a0)

struct FLASH_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_MODE:1;
      uint64_t BUSY:1;
      uint64_t SAMHOLD_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t EFUSE_ERRCODE:5;
      uint64_t EFUSE_CRC_ERROR:1;
      uint64_t EFUSE_TIMEOUT:1;
      uint64_t EFUSE_BLANK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS_IDLE:1;
      uint64_t DIS_STANDBY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENABLE_SWINTF:1;
      uint64_t DIS_READACCESS:1;
      uint64_t DIS_EFUSECLK:1;
      uint64_t STANDBY_PW_SEL:2;
      uint64_t STANDBY_MODE_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCODE_START:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCODE_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECTORS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_SIZE;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWLOCK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWFLAG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWFLAG;

  uint8_t res2[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUMPWORD:16;
      uint64_t reservedSpace0:8;
      uint64_t INSTRUCTION:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROW:11;
      uint64_t BLOCK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EEN:1;
      uint64_t R:1;
      uint64_t P:1;
      uint64_t SPARE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAUPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATALOWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GATING:1;
      uint64_t reservedSpace0:2;
      uint64_t SLAVEPOWER:2;
      uint64_t reservedSpace1:3;
      uint64_t IDLEGATING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACCUMULATOR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTENABLE:4;
      uint64_t SYS_WS_READ_STATES:4;
      uint64_t SYS_REPAIR_EN:2;
      uint64_t SYS_DIEID_AUTOLOAD_EN:1;
      uint64_t EFC_FDI:1;
      uint64_t SYS_ECC_OVERRIDE_EN:1;
      uint64_t YS_ECC_SELF_TEST_EN:1;
      uint64_t OUTPUTENABLE:4;
      uint64_t EFC_AUTOLOAD_ERROR:1;
      uint64_t EFC_INSTRUCTION_ERROR:1;
      uint64_t EFC_INSTRUCTION_INFO:1;
      uint64_t EFC_SELF_TEST_ERROR:1;
      uint64_t SPARE:1;
      uint64_t DISROW0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOUNDARY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSEDAY:5;
      uint64_t EFUSEMONTH:4;
      uint64_t EFUSEYEAR:7;
      uint64_t ODPDAY:5;
      uint64_t ODPMONTH:4;
      uint64_t ODPYEAR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSERELEASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYS_WS_READ_STATES:4;
      uint64_t SYS_REPAIR_EN:2;
      uint64_t SYS_DIEID_AUTOLOAD_EN:1;
      uint64_t EFC_FCLRZ:1;
      uint64_t EFC_READY:1;
      uint64_t SYS_ECC_OVERRIDE_EN:1;
      uint64_t EFC_AUTOLOAD_ERROR:1;
      uint64_t EFC_INSTRUCTION_ERROR:1;
      uint64_t EFC_INSTRUCTION_INFO:1;
      uint64_t SYS_ECC_SELF_TEST_EN:1;
      uint64_t EFC_SELF_TEST_ERROR:1;
      uint64_t EFC_SELF_TEST_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEPINS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSECRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MARGIN:2;
      uint64_t SPARE:1;
      uint64_t DEBUG:1;
      uint64_t READCLOCK:4;
      uint64_t DATABIT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEREAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITECLOCK:9;
      uint64_t ITERATIONS:4;
      uint64_t VPPTOVDD:1;
      uint64_t CLOCKSTALL:16;
      uint64_t COMPAREDISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEPROGRAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:5;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEERROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROM0:1;
      uint64_t FROMN:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROM0:1;
      uint64_t FROMN:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWOBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CYCLES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELFTESTCYC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGNATURE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELFTESTSIGN;

  uint8_t res3[4016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RWAIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRDCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RM0:1;
      uint64_t RM1:1;
      uint64_t reservedSpace0:6;
      uint64_t RMBSEM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSPRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SUSP_IGNR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACCTL1;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t FSM_DONE:1;
      uint64_t RVF_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACSTAT;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROTL1DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADS:8;
      uint64_t BAGP:8;
      uint64_t OTPPROTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKPWR0:2;
      uint64_t BANKPWR1:2;
      uint64_t BANKPWR2:2;
      uint64_t BANKPWR3:2;
      uint64_t BANKPWR4:2;
      uint64_t BANKPWR5:2;
      uint64_t BANKPWR6:2;
      uint64_t BANKPWR7:2;
      uint64_t REG_PWRSAV:4;
      uint64_t reservedSpace0:4;
      uint64_t FSM_PWRSAV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBFALLBACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKRDY:1;
      uint64_t reservedSpace0:14;
      uint64_t PUMPRDY:1;
      uint64_t BANKBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPRDY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUMPPWR:2;
      uint64_t reservedSpace0:2;
      uint64_t PUMPRESET_PW:12;
      uint64_t PSLEEPTDIS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOCK:1;
      uint64_t PSUSP:1;
      uint64_t ESUSP:1;
      uint64_t VOLSTAT:1;
      uint64_t CSTAT:1;
      uint64_t INVDAT:1;
      uint64_t PGM:1;
      uint64_t ERS:1;
      uint64_t BUSY:1;
      uint64_t CV:1;
      uint64_t EV:1;
      uint64_t PCV:1;
      uint64_t PGV:1;
      uint64_t DBF:1;
      uint64_t ILA:1;
      uint64_t RVF:1;
      uint64_t RDVER:1;
      uint64_t RVSUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSTAT;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCOM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLOCK;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADCT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVREADCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHVCT_PV:4;
      uint64_t TRIM13_PV:4;
      uint64_t reservedSpace0:8;
      uint64_t VHVCT_E:4;
      uint64_t TRIM13_E:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t VHVCT_P:4;
      uint64_t TRIM13_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHVCT_READ:4;
      uint64_t reservedSpace0:12;
      uint64_t WCT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIN_CT:5;
      uint64_t reservedSpace0:3;
      uint64_t VCG2P5CT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVNVCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t VSL_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVSLP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VWLCT_P:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVWLCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE_EN:4;
      uint64_t EF_TEST:1;
      uint64_t reservedSpace0:3;
      uint64_t EF_CLRZ:1;
      uint64_t reservedSpace1:7;
      uint64_t BP_SEL:1;
      uint64_t WRITE_EN:1;
      uint64_t reservedSpace2:6;
      uint64_t CHAIN_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFT_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEFUSEDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSEDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t VIN_BY_PASS:1;
      uint64_t reservedSpace1:3;
      uint64_t VIN_AT_X:3;
      uint64_t reservedSpace2:1;
      uint64_t TRIM_0P8:4;
      uint64_t TRIM_1P7:2;
      uint64_t reservedSpace3:2;
      uint64_t TRIM_3P4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSEQPMP;

  uint8_t res8[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TEZ:1;
      uint64_t OTP:1;
      uint64_t TI_OTP:1;
      uint64_t PRECOL:1;
      uint64_t NOCOLRED:1;
      uint64_t reservedSpace1:1;
      uint64_t CTRLENZ:1;
      uint64_t reservedSpace2:7;
      uint64_t FLCLKEN:1;
      uint64_t RWAIT_FLCLK:1;
      uint64_t RWAIT2_FLCLK:1;
      uint64_t reservedSpace3:5;
      uint64_t ECBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSTROBES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V5PWRDNZ:1;
      uint64_t V3PWRDNZ:1;
      uint64_t reservedSpace0:6;
      uint64_t EXECUTEZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPSTROBES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FADDR;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_EN:1;
      uint64_t reservedSpace1:14;
      uint64_t WDATA_BLK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCBYTES31_24:8;
      uint64_t ECCBYTES23_16:8;
      uint64_t ECCBYTES15_08:8;
      uint64_t ECCBYTES07_00:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE_ECC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAFELV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSWSTAT;

  uint8_t res10[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_GLBCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t OTP_ACT:1;
      uint64_t TIOTP_ACT:1;
      uint64_t FSM_ACT:1;
      uint64_t reservedSpace1:1;
      uint64_t EXECUTEZ:1;
      uint64_t CTRLENZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV_DAT:1;
      uint64_t OVR_PUL_CNT:1;
      uint64_t NON_OP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMCMD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_OSU:8;
      uint64_t PGM_OSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_OSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t VSTAT_CNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_VSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_VSU:8;
      uint64_t PGM_VSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_VSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t ADD_EXZ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_CMP_VSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXE_VALD:8;
      uint64_t REP_VSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EX_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_RD_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PGM_OH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_P_OH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_OH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_OH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAV_P_PUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SAV_PPUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PGM_VH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_VH;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROG_PUL_WIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PRG_PW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ERA_PW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_PW;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAV_ERA_PUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SAV_ERA_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:3;
      uint64_t MODE:3;
      uint64_t SAV_ERA_MODE:3;
      uint64_t SAV_PGM_CMD:3;
      uint64_t SUBMODE:2;
      uint64_t ERA_SUBMODE:2;
      uint64_t PGM_SUBMODE:2;
      uint64_t RDV_SUBMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGM_ADDR:23;
      uint64_t PGM_BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PGM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_ADDR:23;
      uint64_t ERA_BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_PRG_PUL:12;
      uint64_t reservedSpace0:4;
      uint64_t BEG_EC_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PRG_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_ERA_PUL:12;
      uint64_t reservedSpace0:4;
      uint64_t MAX_EC_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EC_STEP_SIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STEP_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUL_CNTR:12;
      uint64_t reservedSpace0:4;
      uint64_t CUR_EC_LEVEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PUL_CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EC_STEP_HEIGHT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EC_STEP_HEIGHT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRIDE:1;
      uint64_t INV_DATA:1;
      uint64_t CMD_EN:1;
      uint64_t DIS_TST_EN:1;
      uint64_t PREC_STOP_EN:1;
      uint64_t PGM_SEC_COF_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t DBG_SHORT_ROW:4;
      uint64_t DO_REDU_COL:1;
      uint64_t reservedSpace1:2;
      uint64_t ONE_TIME_GOOD:1;
      uint64_t reservedSpace2:1;
      uint64_t RV_INT_EN:1;
      uint64_t RV_RES:1;
      uint64_t RV_SEC_EN:1;
      uint64_t RANDOM:1;
      uint64_t CMPV_ALLOWED:1;
      uint64_t ALL_BANKS:1;
      uint64_t FSM_INT_EN:1;
      uint64_t DO_PRECOND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ST_MACHINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLK_OTP:8;
      uint64_t BLK_TIOTP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_FLES;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_ENA:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_WR_ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ACC_PP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ACC_PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_EP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ACC_EP;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUR_ADDR:28;
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_OUT:4;
      uint64_t SECTOR:4;
      uint64_t FSM_SECTOR_EXTENSION:8;
      uint64_t SECT_ERASED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_CRC:12;
      uint64_t MOD_VERSION:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMC_REV_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ERR_BANK:4;
      uint64_t reservedSpace0:4;
      uint64_t FSM_ERR_ADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERR_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_PGM_MAXPUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PGM_MAXPUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMEXECUTE:5;
      uint64_t reservedSpace0:11;
      uint64_t SUSPEND_NOW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EXECUTE;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_SECTOR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_SECTOR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR2;

  uint8_t res16[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSLE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLE1;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSLP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLP1;

  uint8_t res18[264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAIN_NUM_BANK:4;
      uint64_t MAIN_BANK_WIDTH:12;
      uint64_t EE_NUM_BANK:4;
      uint64_t EE_BANK_WIDTH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_BANK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_TYPE1:4;
      uint64_t UERR:2;
      uint64_t AUTO_SUSP:2;
      uint64_t ECCA:1;
      uint64_t SIL3:1;
      uint64_t IFLUSH:1;
      uint64_t ROM:1;
      uint64_t EE_IN_MAIN:4;
      uint64_t CPU2:4;
      uint64_t MEM_MAP:1;
      uint64_t reservedSpace0:3;
      uint64_t FAMILY_TYPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_WRAPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_TYPE:4;
      uint64_t B1_TYPE:4;
      uint64_t B2_TYPE:4;
      uint64_t B3_TYPE:4;
      uint64_t B4_TYPE:4;
      uint64_t B5_TYPE:4;
      uint64_t B6_TYPE:4;
      uint64_t B7_TYPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_BNK_TYPE;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_START_ADDR:24;
      uint64_t B0_MUX_FACTOR:4;
      uint64_t B0_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B0_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B1_START_ADDR:24;
      uint64_t B1_MUX_FACTOR:4;
      uint64_t B1_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B1_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B2_START_ADDR:24;
      uint64_t B2_MUX_FACTOR:4;
      uint64_t B2_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B2_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B3_START_ADDR:24;
      uint64_t B3_MUX_FACTOR:4;
      uint64_t B3_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B3_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_START_ADDR:24;
      uint64_t B4_MUX_FACTOR:4;
      uint64_t B4_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B4_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B5_START_ADDR:24;
      uint64_t B5_MUX_FACTOR:4;
      uint64_t B5_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B5_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B6_START_ADDR:24;
      uint64_t B6_MUX_FACTOR:4;
      uint64_t B6_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B6_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B7_START_ADDR:24;
      uint64_t B7_MUX_FACTOR:4;
      uint64_t B7_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B7_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_SECT_SIZE:4;
      uint64_t reservedSpace0:12;
      uint64_t B0_NUM_SECTORS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B0_SSIZE0;

};

#define FLASH_1 (*(volatile struct FLASH_1_tag *) 0x4003001c)

struct GPIO_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO1:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO2:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO4:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO5:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO6:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO8:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO9:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO10:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT11_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO12:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO13:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO14:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT15_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO16:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO17:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO18:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT19_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO20:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO21:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO22:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT23_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO24:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO25:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO26:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT27_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO28:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO29:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO30:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT31_28;

  uint8_t res0[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT31_0;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTSET31_0;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTCLR31_0;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTTGL31_0;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIN31_0;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOE31_0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGS31_0;

};

#define GPIO_1 (*(volatile struct GPIO_1_tag *) 0x40022000)

struct GPT0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT0_1 (*(volatile struct GPT0_1_tag *) 0x40010000)

struct GPT1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT1_1 (*(volatile struct GPT1_1_tag *) 0x40011000)

struct GPT2_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT2_1 (*(volatile struct GPT2_1_tag *) 0x40012000)

struct GPT3_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT3_1 (*(volatile struct GPT3_1_tag *) 0x40013000)

struct I2S0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCLK_SRC:2;
      uint64_t WCLK_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWCLKSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t END_FRAME_IDX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFDMACFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD0:2;
      uint64_t reservedSpace0:2;
      uint64_t AD1:2;
      uint64_t reservedSpace1:2;
      uint64_t AD2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFDIRCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORD_LEN:5;
      uint64_t DUAL_PHASE:1;
      uint64_t SMPL_EDGE:1;
      uint64_t MEM_LEN_24:1;
      uint64_t DATA_DELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFFMTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PULSE_WIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFPWMVALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFINPTRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFINPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFOUTPTRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFOUTPTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STMP_EN:1;
      uint64_t IN_RDY:1;
      uint64_t OUT_RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNTCAPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNTCAPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN_START_WCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPINTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT_START_WCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPOUTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_INC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXPERMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNTCAPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNTCAPT1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQCLR;

};

#define I2S0_1 (*(volatile struct I2S0_1_tag *) 0x40021000)

struct IOC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG31;

};

#define IOC_1 (*(volatile struct IOC_1_tag *) 0x40081000)

struct PRCM_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULDO:1;
      uint64_t reservedSpace0:1;
      uint64_t MCU_VD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VDCTL;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOAD:1;
      uint64_t LOAD_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLOADCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCCLKG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VIMSCLKG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGDS;

  uint8_t res2[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUCLKDIV;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SBCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t WCLK_PHASE:2;
      uint64_t SMPL_ON_POSEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SMCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SBCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SWCLKDIV;

  uint8_t res4[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MCU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWRESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_STAT:1;
      uint64_t LOCKUP_STAT:1;
      uint64_t WR_TO_PINRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARMRESET;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC_ON:1;
      uint64_t SERIAL_ON:1;
      uint64_t PERIPH_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0SERIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0PERIPH;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC_ON:1;
      uint64_t SERIAL_ON:1;
      uint64_t PERIPH_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0SERIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0PERIPH;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CPU_ON:1;
      uint64_t RFC_ON:1;
      uint64_t VIMS_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1CPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1VIMS;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CPU_ON:1;
      uint64_t RFC_ON:1;
      uint64_t VIMS_MODE:1;
      uint64_t BUS_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1BUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1CPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1VIMS;

  uint8_t res10[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCMODESEL;

  uint8_t res11[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIMS_bitfield:2;
      uint64_t RFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMRETEN;

  uint8_t res12[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMHWOPT;

};

#define PRCM_1 (*(volatile struct PRCM_1_tag *) 0x40082000)

struct RFC_DBELL_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDSTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FSCA:1;
      uint64_t MDMDONE:1;
      uint64_t MDMIN:1;
      uint64_t MDMOUT:1;
      uint64_t MDMSOFT:1;
      uint64_t TRCTK:1;
      uint64_t reservedSpace1:1;
      uint64_t RFEDONE:1;
      uint64_t RFESOFT0:1;
      uint64_t RFESOFT1:1;
      uint64_t RFESOFT2:1;
      uint64_t RATCH0:1;
      uint64_t RATCH1:1;
      uint64_t RATCH2:1;
      uint64_t RATCH3:1;
      uint64_t RATCH4:1;
      uint64_t RATCH5:1;
      uint64_t RATCH6:1;
      uint64_t RATCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFHWIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FSCA:1;
      uint64_t MDMDONE:1;
      uint64_t MDMIN:1;
      uint64_t MDMOUT:1;
      uint64_t MDMSOFT:1;
      uint64_t TRCTK:1;
      uint64_t reservedSpace1:1;
      uint64_t RFEDONE:1;
      uint64_t RFESOFT0:1;
      uint64_t RFESOFT1:1;
      uint64_t RFESOFT2:1;
      uint64_t RATCH0:1;
      uint64_t RATCH1:1;
      uint64_t RATCH2:1;
      uint64_t RATCH3:1;
      uint64_t RATCH4:1;
      uint64_t RATCH5:1;
      uint64_t RATCH6:1;
      uint64_t RATCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFHWIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEISL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFACKIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPOCTL0:4;
      uint64_t GPOCTL1:4;
      uint64_t GPOCTL2:4;
      uint64_t GPOCTL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSGPOCTL;

};

#define RFC_DBELL_1 (*(volatile struct RFC_DBELL_1_tag *) 0x40041000)

struct RFC_PWR_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC:1;
      uint64_t CPE:1;
      uint64_t CPERAM:1;
      uint64_t MDM:1;
      uint64_t MDMRAM:1;
      uint64_t RFE:1;
      uint64_t RFERAM:1;
      uint64_t RAT:1;
      uint64_t PHA:1;
      uint64_t FSCA:1;
      uint64_t RFCTRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMCLKEN;

};

#define RFC_PWR_1 (*(volatile struct RFC_PWR_1_tag *) 0x40040000)

struct RFC_RAT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCNT;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH0VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH1VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH2VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH3VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH4VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH5VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH6VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH7VAL;

};

#define RFC_RAT_1 (*(volatile struct RFC_RAT_1_tag *) 0x40043004)

struct SMPH_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH31;

  uint8_t res0[1920];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK31;

};

#define SMPH_1 (*(volatile struct SMPH_1_tag *) 0x40084000)

struct SSI0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t SSE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIM:1;
      uint64_t RTIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORRIS:1;
      uint64_t RTRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORMIS:1;
      uint64_t RTMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSI0_1 (*(volatile struct SSI0_1_tag *) 0x40000000)

struct SSI1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t SSE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIM:1;
      uint64_t RTIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORRIS:1;
      uint64_t RTRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORMIS:1;
      uint64_t RTMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSI1_1 (*(volatile struct SSI1_1_tag *) 0x40008000)

struct TRNG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
      uint64_t reservedSpace0:29;
      uint64_t NEED_CLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_MODE:1;
      uint64_t NO_LFSR_FB:1;
      uint64_t reservedSpace1:7;
      uint64_t TRNG_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t STARTUP_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIN_REFILL_CYCLES:8;
      uint64_t SMPL_DIV:4;
      uint64_t reservedSpace0:4;
      uint64_t MAX_REFILL_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALARM_THR:8;
      uint64_t reservedSpace0:8;
      uint64_t SHUTDOWN_THR:5;
      uint64_t reservedSpace1:3;
      uint64_t SHUTDOWN_CNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FROEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRODETUNE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_FLAGS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMSTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_80_64:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR2;

  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t NR_OF_FROS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIP_NUM:8;
      uint64_t EIP_NUM_COMPL:8;
      uint64_t HW_PATCH_LVL:4;
      uint64_t HW_MINOR_VER:4;
      uint64_t HW_MAJOR_VER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVER0;

  uint8_t res1[8024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTATMASK;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVER1;

  uint8_t res3[8];

  uint32_t IRQSET;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWRESET;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTAT;

};

#define TRNG_1 (*(volatile struct TRNG_1_tag *) 0x40028000)

struct UDMA0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERENABLE:1;
      uint64_t reservedSpace0:3;
      uint64_t STATE:4;
      uint64_t reservedSpace1:8;
      uint64_t TOTALCHANNELS:5;
      uint64_t reservedSpace2:7;
      uint64_t TEST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERENABLE:1;
      uint64_t reservedSpace0:4;
      uint64_t PRTOCTRL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BASEPTR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASEPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAITONREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETBURST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARBURST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETREQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARREQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHANNELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHANNELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHNLPRIALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHNLPRIALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHNLPRIORITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHNLPRIORITY;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERROR;

  uint8_t res1[1204];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQDONE;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DONEMASK;

};

#define UDMA0_1 (*(volatile struct UDMA0_1_tag *) 0x40020000)

struct VIMS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t INV:1;
      uint64_t MODE_CHANGING:1;
      uint64_t SYSBUS_LB_DIS:1;
      uint64_t IDCODE_LB_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t PREF_EN:1;
      uint64_t ARB_CFG:1;
      uint64_t SYSBUS_LB_DIS:1;
      uint64_t IDCODE_LB_DIS:1;
      uint64_t reservedSpace0:23;
      uint64_t DYN_CG_EN:1;
      uint64_t STATS_EN:1;
      uint64_t STATS_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

};

#define VIMS_1 (*(volatile struct VIMS_1_tag *) 0x40034000)

struct WDT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTLOAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t INTTYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTICR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  uint8_t res0[1024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUSE_INTR:1;
      uint64_t CAUSE_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_CAUS;

  uint8_t res1[2016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

};

#define WDT_1 (*(volatile struct WDT_1_tag *) 0x40080000)

struct WORKFLASH_IF_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFASZR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFRWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFSTR;

};

#define WORKFLASH_IF_0 (*(volatile struct WORKFLASH_IF_0_tag *) 0x200e0000)

struct FLASH_IF_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASZ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FASZR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSYNDN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BE:1;
      uint64_t BS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBFCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIE:1;
      uint64_t HANGIE:1;
      uint64_t ERRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIF:1;
      uint64_t HANGIF:1;
      uint64_t ERRIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIC:1;
      uint64_t HANGIC:1;
      uint64_t ERRIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FICLR;

  uint8_t res2[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRMM:10;
      uint64_t reservedSpace0:6;
      uint64_t TTRMM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRTRMM;

};

#define FLASH_IF_0 (*(volatile struct FLASH_IF_0_tag *) 0x40000000)

struct UNIQUE_ID_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t UID:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR1;

};

#define UNIQUE_ID_0 (*(volatile struct UNIQUE_ID_0_tag *) 0x40000200)

struct ECC_CAPTURE_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRAD:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FERRAD;

};

#define ECC_CAPTURE_0 (*(volatile struct ECC_CAPTURE_0_tag *) 0x40000300)

struct CRG_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MOSCE:1;
      uint64_t reservedSpace1:1;
      uint64_t SOSCE:1;
      uint64_t PLLE:1;
      uint64_t RCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCM_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MORDY:1;
      uint64_t reservedSpace1:1;
      uint64_t SORDY:1;
      uint64_t PLRDY:1;
      uint64_t RCM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCM_STR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STM:2;
      uint64_t DSTM:1;
      uint64_t reservedSpace0:1;
      uint64_t SPL:1;
      uint64_t reservedSpace1:11;
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STB_CTL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PONR:1;
      uint64_t INITX:1;
      uint64_t reservedSpace0:2;
      uint64_t SWDT:1;
      uint64_t HWDT:1;
      uint64_t CSVR:1;
      uint64_t FCSR:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RST_STR;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BSC_PSR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC0_PSR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC1:2;
      uint64_t reservedSpace0:2;
      uint64_t APBC1RST:1;
      uint64_t reservedSpace1:2;
      uint64_t APBC1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC1_PSR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC2:2;
      uint64_t reservedSpace0:2;
      uint64_t APBC2RST:1;
      uint64_t reservedSpace1:2;
      uint64_t APBC2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC2_PSR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWDS:2;
      uint64_t reservedSpace0:5;
      uint64_t TESTB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SWC_PSR;

  uint8_t res7[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TTC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TTC_PSR;

  uint8_t res8[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MOWT:4;
      uint64_t SOWT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSW_TMR;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POWT:3;
      uint64_t reservedSpace0:1;
      uint64_t PINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PSW_TMR;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLM:4;
      uint64_t PLLK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL1;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL2;

  uint8_t res12[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MCSVE:1;
      uint64_t SCSVE:1;
      uint64_t reservedSpace0:6;
      uint64_t FCSDE:1;
      uint64_t FCSRE:1;
      uint64_t reservedSpace1:2;
      uint64_t FCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CSV_CTL;

  uint8_t res13[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCMF:1;
      uint64_t SCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSV_STR;

  uint8_t res14[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWH_CTL;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWL_CTL;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWD_CTL;

  uint8_t res17[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DPSWBE:1;
      uint64_t reservedSpace1:1;
      uint64_t DPHWBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DBWDT_CTL;

  uint8_t res18[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSE:1;
      uint64_t SCSE:1;
      uint64_t PCSE:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_ENR;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSI:1;
      uint64_t SCSI:1;
      uint64_t PCSI:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_STR;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSC:1;
      uint64_t SCSC:1;
      uint64_t PCSC:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_CLR;

};

#define CRG_0 (*(volatile struct CRG_0_tag *) 0x40010000)

struct CRTRIM_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCR_PSR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCR_FTRM;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCR_TTRM;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRMLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR_RLR;

};

#define CRTRIM_0 (*(volatile struct CRTRIM_0_tag *) 0x4002e000)

struct SWWDT_0_tag
{
  uint32_t WDOGLOAD;
  uint32_t WDOGVALUE;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t TWD:2;
      uint64_t SPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGCONTROL;

  uint8_t res0[3];

  uint32_t WDOGINTCLR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGRIS;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGSPMC;

  uint8_t res2[3047];

  uint32_t WDOGLOCK;
};

#define SWWDT_0 (*(volatile struct SWWDT_0_tag *) 0x40012000)

struct HWWDT_0_tag
{
  uint32_t WDG_LDR;
  uint32_t WDG_VLR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDG_CTL;

  uint8_t res0[3];

  uint8_t WDG_ICL;
  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDG_RIS;

  uint8_t res2[3055];

  uint32_t WDG_LCK;
};

#define HWWDT_0 (*(volatile struct HWWDT_0_tag *) 0x40011000)

struct DTIM_0_tag
{
  uint32_t TIMER1LOAD;
  uint32_t TIMER1VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OneShot:1;
      uint64_t TimerSize:1;
      uint64_t TimerPre:2;
      uint64_t reservedSpace0:1;
      uint64_t IntEnable:1;
      uint64_t TimerMode:1;
      uint64_t TimerEn:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1CONTROL;

  uint32_t TIMER1INTCLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1MIS;

  uint32_t TIMER1BGLOAD;
  uint8_t res0[4];

  uint32_t TIMER2LOAD;
  uint32_t TIMER2VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OneShot:1;
      uint64_t TimerSize:1;
      uint64_t TimerPre:2;
      uint64_t reservedSpace0:1;
      uint64_t IntEnable:1;
      uint64_t TimerMode:1;
      uint64_t TimerEn:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2CONTROL;

  uint32_t TIMER2INTCLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2MIS;

  uint32_t TIMER2BGLOAD;
};

#define DTIM_0 (*(volatile struct DTIM_0_tag *) 0x40015000)

struct BTIOSEL03_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL01:4;
      uint64_t SEL23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL0123;

};

#define BTIOSEL03_0 (*(volatile struct BTIOSEL03_0_tag *) 0x40025100)

struct BTIOSEL47_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL45:4;
      uint64_t SEL67:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL4567;

};

#define BTIOSEL47_0 (*(volatile struct BTIOSEL47_0_tag *) 0x40025300)

struct BTIOSEL8B_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL89:4;
      uint64_t SELAB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL89AB;

};

#define BTIOSEL8B_0 (*(volatile struct BTIOSEL8B_0_tag *) 0x40025500)

struct BTIOSELCF_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SELCD:4;
      uint64_t SELEF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSELCDEF;

};

#define BTIOSELCF_0 (*(volatile struct BTIOSELCF_0_tag *) 0x40025700)

struct SBSSR_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SSSR0:1;
      uint64_t SSSR1:1;
      uint64_t SSSR2:1;
      uint64_t SSSR3:1;
      uint64_t SSSR4:1;
      uint64_t SSSR5:1;
      uint64_t SSSR6:1;
      uint64_t SSSR7:1;
      uint64_t SSSR8:1;
      uint64_t SSSR9:1;
      uint64_t SSSR10:1;
      uint64_t SSSR11:1;
      uint64_t SSSR12:1;
      uint64_t SSSR13:1;
      uint64_t SSSR14:1;
      uint64_t SSSR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSSSR;

};

#define SBSSR_0 (*(volatile struct SBSSR_0_tag *) 0x40025ffc)

struct QPRC0_0_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC0_0 (*(volatile struct QPRC0_0_tag *) 0x40026000)

struct QPRC1_0_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC1_0 (*(volatile struct QPRC1_0_tag *) 0x40026040)

struct QPRC2_0_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC2_0 (*(volatile struct QPRC2_0_tag *) 0x40026080)

struct QPRC3_0_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC3_0 (*(volatile struct QPRC3_0_tag *) 0x400260c0)

struct QPRC0_NF_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC0_NF_0 (*(volatile struct QPRC0_NF_0_tag *) 0x40026100)

struct QPRC1_NF_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC1_NF_0 (*(volatile struct QPRC1_NF_0_tag *) 0x40026110)

struct QPRC2_NF_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC2_NF_0 (*(volatile struct QPRC2_NF_0_tag *) 0x40026120)

struct QPRC3_NF_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC3_NF_0 (*(volatile struct QPRC3_NF_0_tag *) 0x40026130)

struct ADC0_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC0_0 (*(volatile struct ADC0_0_tag *) 0x40027000)

struct ADC1_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC1_0 (*(volatile struct ADC1_0_tag *) 0x40027100)

struct ADC2_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC2_0 (*(volatile struct ADC2_0_tag *) 0x40027200)

struct DAC0_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAE:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t DAC10:1;
      uint64_t DDAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DACR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DA:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DADR;

};

#define DAC0_0 (*(volatile struct DAC0_0_tag *) 0x40033000)

struct DAC1_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAE:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t DAC10:1;
      uint64_t DDAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DACR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DA:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DADR;

};

#define DAC1_0 (*(volatile struct DAC1_0_tag *) 0x40033008)

struct EXTI_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN0:1;
      uint64_t EN1:1;
      uint64_t EN2:1;
      uint64_t EN3:1;
      uint64_t EN4:1;
      uint64_t EN5:1;
      uint64_t EN6:1;
      uint64_t EN7:1;
      uint64_t EN8:1;
      uint64_t EN9:1;
      uint64_t EN10:1;
      uint64_t EN11:1;
      uint64_t EN12:1;
      uint64_t EN13:1;
      uint64_t EN14:1;
      uint64_t EN15:1;
      uint64_t EN16:1;
      uint64_t EN17:1;
      uint64_t EN18:1;
      uint64_t EN19:1;
      uint64_t EN20:1;
      uint64_t EN21:1;
      uint64_t EN22:1;
      uint64_t EN23:1;
      uint64_t EN24:1;
      uint64_t EN25:1;
      uint64_t EN26:1;
      uint64_t EN27:1;
      uint64_t EN28:1;
      uint64_t EN29:1;
      uint64_t EN30:1;
      uint64_t EN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ER0:1;
      uint64_t ER1:1;
      uint64_t ER2:1;
      uint64_t ER3:1;
      uint64_t ER4:1;
      uint64_t ER5:1;
      uint64_t ER6:1;
      uint64_t ER7:1;
      uint64_t ER8:1;
      uint64_t ER9:1;
      uint64_t ER10:1;
      uint64_t ER11:1;
      uint64_t ER12:1;
      uint64_t ER13:1;
      uint64_t ER14:1;
      uint64_t ER15:1;
      uint64_t ER16:1;
      uint64_t ER17:1;
      uint64_t ER18:1;
      uint64_t ER19:1;
      uint64_t ER20:1;
      uint64_t ER21:1;
      uint64_t ER22:1;
      uint64_t ER23:1;
      uint64_t ER24:1;
      uint64_t ER25:1;
      uint64_t ER26:1;
      uint64_t ER27:1;
      uint64_t ER28:1;
      uint64_t ER29:1;
      uint64_t ER30:1;
      uint64_t ER31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECL0:1;
      uint64_t ECL1:1;
      uint64_t ECL2:1;
      uint64_t ECL3:1;
      uint64_t ECL4:1;
      uint64_t ECL5:1;
      uint64_t ECL6:1;
      uint64_t ECL7:1;
      uint64_t ECL8:1;
      uint64_t ECL9:1;
      uint64_t ECL10:1;
      uint64_t ECL11:1;
      uint64_t ECL12:1;
      uint64_t ECL13:1;
      uint64_t ECL14:1;
      uint64_t ECL15:1;
      uint64_t ECL16:1;
      uint64_t ECL17:1;
      uint64_t ECL18:1;
      uint64_t ECL19:1;
      uint64_t ECL20:1;
      uint64_t ECL21:1;
      uint64_t ECL22:1;
      uint64_t ECL23:1;
      uint64_t ECL24:1;
      uint64_t ECL25:1;
      uint64_t ECL26:1;
      uint64_t ECL27:1;
      uint64_t ECL28:1;
      uint64_t ECL29:1;
      uint64_t ECL30:1;
      uint64_t ECL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LA0:1;
      uint64_t LB0:1;
      uint64_t LA1:1;
      uint64_t LB1:1;
      uint64_t LA2:1;
      uint64_t LB2:1;
      uint64_t LA3:1;
      uint64_t LB3:1;
      uint64_t LA4:1;
      uint64_t LB4:1;
      uint64_t LA5:1;
      uint64_t LB5:1;
      uint64_t LA6:1;
      uint64_t LB6:1;
      uint64_t LA7:1;
      uint64_t LB7:1;
      uint64_t LA8:1;
      uint64_t LB8:1;
      uint64_t LA9:1;
      uint64_t LB9:1;
      uint64_t LA10:1;
      uint64_t LB10:1;
      uint64_t LA11:1;
      uint64_t LB11:1;
      uint64_t LA12:1;
      uint64_t LB12:1;
      uint64_t LA13:1;
      uint64_t LB13:1;
      uint64_t LA14:1;
      uint64_t LB14:1;
      uint64_t LA15:1;
      uint64_t LB15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LA16:1;
      uint64_t LB16:1;
      uint64_t LA17:1;
      uint64_t LB17:1;
      uint64_t LA18:1;
      uint64_t LB18:1;
      uint64_t LA19:1;
      uint64_t LB19:1;
      uint64_t LA20:1;
      uint64_t LB20:1;
      uint64_t LA21:1;
      uint64_t LB21:1;
      uint64_t LA22:1;
      uint64_t LB22:1;
      uint64_t LA23:1;
      uint64_t LB23:1;
      uint64_t LA24:1;
      uint64_t LB24:1;
      uint64_t LA25:1;
      uint64_t LB25:1;
      uint64_t LA26:1;
      uint64_t LB26:1;
      uint64_t LA27:1;
      uint64_t LB27:1;
      uint64_t LA28:1;
      uint64_t LB28:1;
      uint64_t LA29:1;
      uint64_t LB29:1;
      uint64_t LA30:1;
      uint64_t LB30:1;
      uint64_t LA31:1;
      uint64_t LB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELVR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NMIRR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NMICL;

};

#define EXTI_0 (*(volatile struct EXTI_0_tag *) 0x40030000)

struct INTREQ_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBEP1:1;
      uint64_t USBEP2:1;
      uint64_t USBEP3:1;
      uint64_t USBEP4:1;
      uint64_t USBEP5:1;
      uint64_t ADCSCAN0:1;
      uint64_t ADCSCAN1:1;
      uint64_t ADCSCAN2:1;
      uint64_t IRQ0BT0:1;
      uint64_t IRQ0BT2:1;
      uint64_t IRQ0BT4:1;
      uint64_t IRQ0BT6:1;
      uint64_t MFS0RX:1;
      uint64_t MFS0TX:1;
      uint64_t MFS1RX:1;
      uint64_t MFS1TX:1;
      uint64_t MFS2RX:1;
      uint64_t MFS2TX:1;
      uint64_t MFS3RX:1;
      uint64_t MFS3TX:1;
      uint64_t MFS4RX:1;
      uint64_t MFS4TX:1;
      uint64_t MFS5RX:1;
      uint64_t MFS5TX:1;
      uint64_t MFS6RX:1;
      uint64_t MFS6TX:1;
      uint64_t MFS7RX:1;
      uint64_t MFS7TX:1;
      uint64_t EXINT0:1;
      uint64_t EXINT1:1;
      uint64_t EXINT2:1;
      uint64_t EXINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRQSEL;

  uint8_t res0[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ODDPKS0:1;
      uint64_t ODDPKS1:1;
      uint64_t ODDPKS2:1;
      uint64_t ODDPKS3:1;
      uint64_t ODDPKS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ODDPKS;

  uint8_t res1[255];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ003SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ004SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ005SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ006SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ007SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ008SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ009SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ010SEL;

  uint8_t res2[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
      uint64_t HWINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXC02MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ000MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWWDTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ001MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ002MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ003MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ004MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ005MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ006MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ007MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ008MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ009MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ010MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ011MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ012MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ013MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ014MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ015MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ016MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ017MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ018MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ019MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ020MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ021MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ022MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ023MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ024MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ025MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ026MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ027MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ028MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ029MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ030MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ031MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ032MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ033MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ034MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ035MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ036MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ037MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ038MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ039MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ040MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ041MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ042MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ043MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ044MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ045MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ046MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMINT1:1;
      uint64_t TIMINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ047MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ048MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMEMCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ049MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ050MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ051MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ052MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ053MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ054MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ055MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ056MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ057MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ058MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCINT:1;
      uint64_t SOSCINT:1;
      uint64_t MPLLINT:1;
      uint64_t UPLLINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ059MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ060MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ061MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ062MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ063MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ064MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ065MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ066MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ067MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ068MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ069MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ070MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ071MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ072MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ073MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ074MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ075MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ076MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ077MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_DRQ_INT0:1;
      uint64_t USB_DRQ_INT1:1;
      uint64_t USB_DRQ_INT2:1;
      uint64_t USB_DRQ_INT3:1;
      uint64_t USB_DRQ_INT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ078MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_INT0:1;
      uint64_t USB_INT1:1;
      uint64_t USB_INT2:1;
      uint64_t USB_INT3:1;
      uint64_t USB_INT4:1;
      uint64_t USB_INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ079MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ080MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ081MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACSBD:1;
      uint64_t MACPMT:1;
      uint64_t MACLPI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ082MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ083MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ084MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ085MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ086MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ087MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ088MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ089MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ090MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTCINT0:1;
      uint64_t DSTCINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ091MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ092MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ093MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ094MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ095MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ096MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ097MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ098MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ099MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ100MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ101MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
      uint64_t BTINT2:1;
      uint64_t BTINT3:1;
      uint64_t BTINT4:1;
      uint64_t BTINT5:1;
      uint64_t BTINT6:1;
      uint64_t BTINT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ102MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ103MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ104MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ105MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ106MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ107MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ108MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ109MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ110MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ111MON;

  uint32_t IRQ112MON;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_DRQ_INT0:1;
      uint64_t USB_DRQ_INT1:1;
      uint64_t USB_DRQ_INT2:1;
      uint64_t USB_DRQ_INT3:1;
      uint64_t USB_DRQ_INT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ113MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_INT0:1;
      uint64_t USB_INT1:1;
      uint64_t USB_INT2:1;
      uint64_t USB_INT3:1;
      uint64_t USB_INT4:1;
      uint64_t USB_INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ114MON;

  uint32_t IRQ115MON;
  uint32_t IRQ116MON;
  uint32_t IRQ117MON;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDINT0:1;
      uint64_t SDINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ118MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ119MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ120MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ121MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ122MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ123MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ124MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ125MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ126MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ127MON;

};

#define INTREQ_0 (*(volatile struct INTREQ_0_tag *) 0x40031000)

struct GPIO_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR8;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFRE;

  uint8_t res1[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCRE;

  uint8_t res3[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR8;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDRE;

  uint8_t res5[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR8;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIRE;

  uint8_t res7[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR8;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDORE;

  uint8_t res9[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AN00:1;
      uint64_t AN01:1;
      uint64_t AN02:1;
      uint64_t AN03:1;
      uint64_t AN04:1;
      uint64_t AN05:1;
      uint64_t AN06:1;
      uint64_t AN07:1;
      uint64_t AN08:1;
      uint64_t AN09:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADE;

  uint8_t res10[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MAINXC:2;
      uint64_t USB0C:1;
      uint64_t USB1C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPSR;

  uint8_t res11[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIS:1;
      uint64_t CROUTE:2;
      uint64_t reservedSpace0:1;
      uint64_t RTCCOE:2;
      uint64_t SUBOUTE:2;
      uint64_t reservedSpace1:1;
      uint64_t USBP0E:1;
      uint64_t reservedSpace2:3;
      uint64_t USBP1E:1;
      uint64_t reservedSpace3:2;
      uint64_t JTAGEN0B:1;
      uint64_t JTAGEN1S:1;
      uint64_t reservedSpace4:6;
      uint64_t TRC0E:1;
      uint64_t TRC1E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO00E:2;
      uint64_t RTO01E:2;
      uint64_t RTO02E:2;
      uint64_t RTO03E:2;
      uint64_t RTO04E:2;
      uint64_t RTO05E:2;
      uint64_t DTTI0C:1;
      uint64_t reservedSpace0:3;
      uint64_t DTTI0S:2;
      uint64_t FRCK0S:2;
      uint64_t IC00S:3;
      uint64_t IC01S:3;
      uint64_t IC02S:3;
      uint64_t IC03S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO10E:2;
      uint64_t RTO11E:2;
      uint64_t RTO12E:2;
      uint64_t RTO13E:2;
      uint64_t RTO14E:2;
      uint64_t RTO15E:2;
      uint64_t DTTI1C:1;
      uint64_t reservedSpace0:3;
      uint64_t DTTI1S:2;
      uint64_t FRCK1S:2;
      uint64_t IC10S:3;
      uint64_t IC11S:3;
      uint64_t IC12S:3;
      uint64_t IC13S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO20E:2;
      uint64_t RTO21E:2;
      uint64_t RTO22E:2;
      uint64_t RTO23E:2;
      uint64_t RTO24E:2;
      uint64_t RTO25E:2;
      uint64_t DTTI2C:1;
      uint64_t reservedSpace0:3;
      uint64_t DTTI2S:2;
      uint64_t FRCK2S:2;
      uint64_t IC20S:3;
      uint64_t IC21S:3;
      uint64_t IC22S:3;
      uint64_t IC23S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA0E:2;
      uint64_t TIOB0S:3;
      uint64_t reservedSpace1:1;
      uint64_t TIOA1S:2;
      uint64_t TIOA1E:2;
      uint64_t TIOB1S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA2E:2;
      uint64_t TIOB2S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA3S:2;
      uint64_t TIOA3E:2;
      uint64_t TIOB3S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA4E:2;
      uint64_t TIOB4S:2;
      uint64_t reservedSpace1:2;
      uint64_t TIOA5S:2;
      uint64_t TIOA5E:2;
      uint64_t TIOB5S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA6E:2;
      uint64_t TIOB6S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA7S:2;
      uint64_t TIOA7E:2;
      uint64_t TIOB7S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT00S:2;
      uint64_t EINT01S:2;
      uint64_t EINT02S:2;
      uint64_t EINT03S:2;
      uint64_t EINT04S:2;
      uint64_t EINT05S:2;
      uint64_t EINT06S:2;
      uint64_t EINT07S:2;
      uint64_t EINT08S:2;
      uint64_t EINT09S:2;
      uint64_t EINT10S:2;
      uint64_t EINT11S:2;
      uint64_t EINT12S:2;
      uint64_t EINT13S:2;
      uint64_t EINT14S:2;
      uint64_t EINT15S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SIN0S:2;
      uint64_t SOT0B:2;
      uint64_t SCK0B:2;
      uint64_t SIN1S:2;
      uint64_t SOT1B:2;
      uint64_t SCK1B:2;
      uint64_t SIN2S:2;
      uint64_t SOT2B:2;
      uint64_t SCK2B:2;
      uint64_t SIN3S:2;
      uint64_t SOT3B:2;
      uint64_t SCK3B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTS4E:2;
      uint64_t CTS4S:2;
      uint64_t SIN4S:2;
      uint64_t SOT4B:2;
      uint64_t SCK4B:2;
      uint64_t SIN5S:2;
      uint64_t SOT5B:2;
      uint64_t SCK5B:2;
      uint64_t SIN6S:2;
      uint64_t SOT6B:2;
      uint64_t SCK6B:2;
      uint64_t SIN7S:2;
      uint64_t SOT7B:2;
      uint64_t SCK7B:2;
      uint64_t RTS5E:2;
      uint64_t CTS5S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN0S:2;
      uint64_t QBIN0S:2;
      uint64_t QZIN0S:2;
      uint64_t QAIN1S:2;
      uint64_t QBIN1S:2;
      uint64_t QZIN1S:2;
      uint64_t ADTRG0S:4;
      uint64_t ADTRG1S:4;
      uint64_t ADTRG2S:4;
      uint64_t CRX0S:2;
      uint64_t CTX0E:2;
      uint64_t CRX1S:2;
      uint64_t CTX1E:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UEDEFB:1;
      uint64_t UEDTHB:1;
      uint64_t UECLKE:1;
      uint64_t UEWEXE:1;
      uint64_t UEDQME:1;
      uint64_t UEOEXE:1;
      uint64_t UEFLSE:1;
      uint64_t UECS1E:1;
      uint64_t UECS2E:1;
      uint64_t UECS3E:1;
      uint64_t UECS4E:1;
      uint64_t UECS5E:1;
      uint64_t UECS6E:1;
      uint64_t UECS7E:1;
      uint64_t UEAOOE:1;
      uint64_t UEA08E:1;
      uint64_t UEA09E:1;
      uint64_t UEA10E:1;
      uint64_t UEA11E:1;
      uint64_t UEA12E:1;
      uint64_t UEA13E:1;
      uint64_t UEA14E:1;
      uint64_t UEA15E:1;
      uint64_t UEA16E:1;
      uint64_t UEA17E:1;
      uint64_t UEA18E:1;
      uint64_t UEA19E:1;
      uint64_t UEA20E:1;
      uint64_t UEA21E:1;
      uint64_t UEA22E:1;
      uint64_t UEA23E:1;
      uint64_t UEA24E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UEALEE:1;
      uint64_t UECS0E:1;
      uint64_t UEA01E:1;
      uint64_t UEA02E:1;
      uint64_t UEA03E:1;
      uint64_t UEA04E:1;
      uint64_t UEA05E:1;
      uint64_t UEA06E:1;
      uint64_t UEA07E:1;
      uint64_t UED00B:1;
      uint64_t UED01B:1;
      uint64_t UED02B:1;
      uint64_t UED03B:1;
      uint64_t UED04B:1;
      uint64_t UED05B:1;
      uint64_t UED06B:1;
      uint64_t UED07B:1;
      uint64_t UED08B:1;
      uint64_t UED09B:1;
      uint64_t UED10B:1;
      uint64_t UED11B:1;
      uint64_t UED12B:1;
      uint64_t UED13B:1;
      uint64_t UED14B:1;
      uint64_t UED15B:1;
      uint64_t UERLC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA8E:2;
      uint64_t TIOB8S:2;
      uint64_t reservedSpace1:2;
      uint64_t TIOA9S:2;
      uint64_t TIOA9E:2;
      uint64_t TIOB9S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA10E:2;
      uint64_t TIOB10S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA11S:2;
      uint64_t TIOA11E:2;
      uint64_t TIOB11S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA12E:2;
      uint64_t TIOB12S:2;
      uint64_t reservedSpace1:2;
      uint64_t TIOA13S:2;
      uint64_t TIOA13E:2;
      uint64_t TIOB13S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA14E:2;
      uint64_t TIOB14S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA15S:2;
      uint64_t TIOA15E:2;
      uint64_t TIOB15S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN2S:2;
      uint64_t QBIN2S:2;
      uint64_t QZIN2S:2;
      uint64_t reservedSpace0:12;
      uint64_t E_TD0E:1;
      uint64_t E_TD1E:1;
      uint64_t E_TE0E:1;
      uint64_t E_TE1E:1;
      uint64_t E_MC0E:1;
      uint64_t E_MC1B:1;
      uint64_t E_MD0B:1;
      uint64_t E_MD1B:1;
      uint64_t E_CKE:1;
      uint64_t E_PSE:1;
      uint64_t E_SPLC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT16S:2;
      uint64_t EINT17S:2;
      uint64_t EINT18S:2;
      uint64_t EINT19S:2;
      uint64_t EINT20S:2;
      uint64_t EINT21S:2;
      uint64_t EINT22S:2;
      uint64_t EINT23S:2;
      uint64_t EINT24S:2;
      uint64_t EINT25S:2;
      uint64_t EINT26S:2;
      uint64_t EINT27S:2;
      uint64_t EINT28S:2;
      uint64_t EINT29S:2;
      uint64_t EINT30S:2;
      uint64_t EINT31S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCS6B:2;
      uint64_t SCS7B:2;
      uint64_t SIN8S:2;
      uint64_t SOT8B:2;
      uint64_t SCK8B:2;
      uint64_t SIN9S:2;
      uint64_t SOT9B:2;
      uint64_t SCK9B:2;
      uint64_t SIN10S:2;
      uint64_t SOT10B:2;
      uint64_t SCK10B:2;
      uint64_t SIN11S:2;
      uint64_t SOT11B:2;
      uint64_t SCK11B:2;
      uint64_t SFMPAC:1;
      uint64_t SFMPBC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SIN12S:2;
      uint64_t SOT12B:2;
      uint64_t SCK12B:2;
      uint64_t SIN13S:2;
      uint64_t SOT13B:2;
      uint64_t SCK13B:2;
      uint64_t SIN14S:2;
      uint64_t SOT14B:2;
      uint64_t SCK14B:2;
      uint64_t SIN15S:2;
      uint64_t SOT15B:2;
      uint64_t SCK15B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t QAIN3S:2;
      uint64_t QBIN3S:2;
      uint64_t QZIN3S:2;
      uint64_t reservedSpace1:4;
      uint64_t SDCLKE:2;
      uint64_t SDCMDB:2;
      uint64_t SDDATA0B:2;
      uint64_t SDDATA1B:2;
      uint64_t SDDATA2B:2;
      uint64_t SDDATA3B:2;
      uint64_t SDCDS:2;
      uint64_t SDWPS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR18;

  uint32_t EPFR19;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UESMCKE:1;
      uint64_t UESMCEE:1;
      uint64_t UERASE:1;
      uint64_t UECASE:1;
      uint64_t UEDWEXE:1;
      uint64_t UECSXE:1;
      uint64_t UEDQM2E:1;
      uint64_t UEDQM3E:1;
      uint64_t UEDTHHB:1;
      uint64_t UED16B:1;
      uint64_t UED17B:1;
      uint64_t UED18B:1;
      uint64_t UED19B:1;
      uint64_t UED20B:1;
      uint64_t UED21B:1;
      uint64_t UED22B:1;
      uint64_t UED23B:1;
      uint64_t UED24B:1;
      uint64_t UED25B:1;
      uint64_t UED26B:1;
      uint64_t UED27B:1;
      uint64_t UED28B:1;
      uint64_t UED29B:1;
      uint64_t UED30B:1;
      uint64_t UED31B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR20;

  uint8_t res12[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR8;

  uint8_t res13[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZRE;

};

#define GPIO_2 (*(volatile struct GPIO_2_tag *) 0x4006f000)

struct LVD_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SVHI:4;
      uint64_t reservedSpace1:1;
      uint64_t LVDIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LVDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_STR;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LVDCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_CLR;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVD_RLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LVDIRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_STR2;

};

#define LVD_0 (*(volatile struct LVD_0_tag *) 0x40035000)

struct DS_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCK_CTL;

  uint8_t res0[1787];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMD_CTL;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WINITX:1;
      uint64_t WLVDH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WRFSR;

  uint8_t res2[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WRTCI:1;
      uint64_t WLVDI:1;
      uint64_t WUI0:1;
      uint64_t WUI1:1;
      uint64_t WUI2:1;
      uint64_t WUI3:1;
      uint64_t WUI4:1;
      uint64_t WUI5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIFSR;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WRTCE:1;
      uint64_t WLVDE:1;
      uint64_t reservedSpace0:1;
      uint64_t WUI1E:1;
      uint64_t WUI2E:1;
      uint64_t WUI3E:1;
      uint64_t WUI4E:1;
      uint64_t WUI5E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIER;

  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUI1LV:1;
      uint64_t WUI2LV:1;
      uint64_t WUI3LV:1;
      uint64_t WUI4LV:1;
      uint64_t WUI5LV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WILVR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SRAMR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSRAMR;

  uint8_t res6[235];

  uint8_t BUR01;
  uint8_t BUR02;
  uint8_t BUR03;
  uint8_t BUR04;
  uint8_t BUR05;
  uint8_t BUR06;
  uint8_t BUR07;
  uint8_t BUR08;
  uint8_t BUR09;
  uint8_t BUR10;
  uint8_t BUR11;
  uint8_t BUR12;
  uint8_t BUR13;
  uint8_t BUR14;
  uint8_t BUR15;
  uint8_t BUR16;
};

#define DS_0 (*(volatile struct DS_0_tag *) 0x40035104)

struct CRC_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t CRC32:1;
      uint64_t LTLEND:1;
      uint64_t LSBFST:1;
      uint64_t CRCLTE:1;
      uint64_t CRCLSF:1;
      uint64_t FXOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CRCCR;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

};

#define CRC_0 (*(volatile struct CRC_0_tag *) 0x40039000)

struct WC_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCRD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RLC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCIF:1;
      uint64_t WCIE:1;
      uint64_t CS:2;
      uint64_t reservedSpace0:2;
      uint64_t WCOP:1;
      uint64_t WCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCCR;

  uint8_t res0[13];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SEL_IN:2;
      uint64_t reservedSpace0:6;
      uint64_t SEL_OUT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_SEL;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_EN:1;
      uint64_t CLK_EN_R:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CLK_EN;

};

#define WC_0 (*(volatile struct WC_0_tag *) 0x4003a000)

struct RTC_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST:1;
      uint64_t reservedSpace0:1;
      uint64_t RUN:1;
      uint64_t SRST:1;
      uint64_t SCST:1;
      uint64_t SCRST:1;
      uint64_t BUSY:1;
      uint64_t TRANS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCR10;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MIEN:1;
      uint64_t HEN:1;
      uint64_t DEN:1;
      uint64_t MOEN:1;
      uint64_t YEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCR11;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTSSI:1;
      uint64_t INTSI:1;
      uint64_t INTMI:1;
      uint64_t INTHI:1;
      uint64_t INTTMI:1;
      uint64_t INTALI:1;
      uint64_t INTERI:1;
      uint64_t INTCRI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCR12;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTSSIE:1;
      uint64_t INTSIE:1;
      uint64_t INTMIE:1;
      uint64_t INTHIE:1;
      uint64_t INTTMIE:1;
      uint64_t INTALIE:1;
      uint64_t INTERIE:1;
      uint64_t INTCRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCR13;

  uint8_t res3[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CREAD:1;
      uint64_t CWRITE:1;
      uint64_t BREAD:1;
      uint64_t BWRITE:1;
      uint64_t PREAD:1;
      uint64_t PWRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMST:1;
      uint64_t TMEN:1;
      uint64_t TMRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR21;

  uint8_t res4[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S:4;
      uint64_t TS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTSR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MI:4;
      uint64_t TMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMIR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t H:4;
      uint64_t TH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTHR;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D:4;
      uint64_t TD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDR;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDW;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MO:4;
      uint64_t TMO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMOR;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t Y:4;
      uint64_t TY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTYR;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMI:4;
      uint64_t TAMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMIR;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AH:4;
      uint64_t TAH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALHR;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AD:4;
      uint64_t TAD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALDR;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMO:4;
      uint64_t TAMO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMOR;

  uint8_t res15[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AY:4;
      uint64_t TAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALYR;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TM0:1;
      uint64_t TM1:1;
      uint64_t TM2:1;
      uint64_t TM3:1;
      uint64_t TM4:1;
      uint64_t TM5:1;
      uint64_t TM6:1;
      uint64_t TM7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTTR0;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TM8:1;
      uint64_t TM9:1;
      uint64_t TM10:1;
      uint64_t TM11:1;
      uint64_t TM12:1;
      uint64_t TM13:1;
      uint64_t TM14:1;
      uint64_t TM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTTR1;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TM16:1;
      uint64_t TM17:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTTR2;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCAL0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCAL0;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCAL1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCAL1;

  uint8_t res21[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALEN;

  uint8_t res22[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIV;

  uint8_t res23[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIVEN:1;
      uint64_t WTDIVRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIVEN;

  uint8_t res24[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALPRD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALPRD;

  uint8_t res25[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCOSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCOSEL;

  uint8_t res26[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VB_CLKDIV;

  uint8_t res27[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOSCEX:1;
      uint64_t SOSCNTL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTOSCCNT;

  uint8_t res28[3];

  uint8_t CCS;
  uint8_t res29[3];

  uint8_t CCB;
  uint8_t res30[3];

  uint8_t TRIM;
  uint8_t res31[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BOOST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BOOST;

  uint8_t res32[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EWKUP;

  uint8_t res33[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t PON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VDET;

  uint8_t res34[3];

  uint8_t FDET;
  uint8_t res35[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HIBRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIBRST;

  uint8_t res36[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VPFR0:1;
      uint64_t VPFR1:1;
      uint64_t VPFR2:1;
      uint64_t VPFR3:1;
      uint64_t SPSR0:1;
      uint64_t SPSR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBPFR;

  uint8_t res37[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VPCR0:1;
      uint64_t VPCR1:1;
      uint64_t VPCR2:1;
      uint64_t VPCR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBPCR;

  uint8_t res38[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VDDR0:1;
      uint64_t VDDR1:1;
      uint64_t VDDR2:1;
      uint64_t VDDR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBDDR;

  uint8_t res39[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VDIR0:1;
      uint64_t VDIR1:1;
      uint64_t VDIR2:1;
      uint64_t VDIR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBDIR;

  uint8_t res40[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VDOR0:1;
      uint64_t VDOR1:1;
      uint64_t VDOR2:1;
      uint64_t VDOR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBDOR;

  uint8_t res41[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VPZR0:1;
      uint64_t VPZR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBPZR;

  uint8_t res42[79];

  uint8_t BREG00;
  uint8_t BREG01;
  uint8_t BREG02;
  uint8_t BREG03;
  uint8_t BREG04;
  uint8_t BREG05;
  uint8_t BREG06;
  uint8_t BREG07;
  uint8_t BREG08;
  uint8_t BREG09;
  uint8_t BREG0A;
  uint8_t BREG0B;
  uint8_t BREG0C;
  uint8_t BREG0D;
  uint8_t BREG0E;
  uint8_t BREG0F;
  uint8_t BREG10;
  uint8_t BREG11;
  uint8_t BREG12;
  uint8_t BREG13;
  uint8_t BREG14;
  uint8_t BREG15;
  uint8_t BREG16;
  uint8_t BREG17;
  uint8_t BREG18;
  uint8_t BREG19;
  uint8_t BREG1A;
  uint8_t BREG1B;
  uint8_t BREG1C;
  uint8_t BREG1D;
  uint8_t BREG1E;
  uint8_t BREG1F;
  uint8_t BREG20;
  uint8_t BREG21;
  uint8_t BREG22;
  uint8_t BREG23;
  uint8_t BREG24;
  uint8_t BREG25;
  uint8_t BREG26;
  uint8_t BREG27;
  uint8_t BREG28;
  uint8_t BREG29;
  uint8_t BREG2A;
  uint8_t BREG2B;
  uint8_t BREG2C;
  uint8_t BREG2D;
  uint8_t BREG2E;
  uint8_t BREG2F;
  uint8_t BREG30;
  uint8_t BREG31;
  uint8_t BREG32;
  uint8_t BREG33;
  uint8_t BREG34;
  uint8_t BREG35;
  uint8_t BREG36;
  uint8_t BREG37;
  uint8_t BREG38;
  uint8_t BREG39;
  uint8_t BREG3A;
  uint8_t BREG3B;
  uint8_t BREG3C;
  uint8_t BREG3D;
  uint8_t BREG3E;
  uint8_t BREG3F;
  uint8_t BREG40;
  uint8_t BREG41;
  uint8_t BREG42;
  uint8_t BREG43;
  uint8_t BREG44;
  uint8_t BREG45;
  uint8_t BREG46;
  uint8_t BREG47;
  uint8_t BREG48;
  uint8_t BREG49;
  uint8_t BREG4A;
  uint8_t BREG4B;
  uint8_t BREG4C;
  uint8_t BREG4D;
  uint8_t BREG4E;
  uint8_t BREG4F;
  uint8_t BREG50;
  uint8_t BREG51;
  uint8_t BREG52;
  uint8_t BREG53;
  uint8_t BREG54;
  uint8_t BREG55;
  uint8_t BREG56;
  uint8_t BREG57;
  uint8_t BREG58;
  uint8_t BREG59;
  uint8_t BREG5A;
  uint8_t BREG5B;
  uint8_t BREG5C;
  uint8_t BREG5D;
  uint8_t BREG5E;
  uint8_t BREG5F;
  uint8_t BREG60;
  uint8_t BREG61;
  uint8_t BREG62;
  uint8_t BREG63;
  uint8_t BREG64;
  uint8_t BREG65;
  uint8_t BREG66;
  uint8_t BREG67;
  uint8_t BREG68;
  uint8_t BREG69;
  uint8_t BREG6A;
  uint8_t BREG6B;
  uint8_t BREG6C;
  uint8_t BREG6D;
  uint8_t BREG6E;
  uint8_t BREG6F;
  uint8_t BREG70;
  uint8_t BREG71;
  uint8_t BREG72;
  uint8_t BREG73;
  uint8_t BREG74;
  uint8_t BREG75;
  uint8_t BREG76;
  uint8_t BREG77;
  uint8_t BREG78;
  uint8_t BREG79;
  uint8_t BREG7A;
  uint8_t BREG7B;
  uint8_t BREG7C;
  uint8_t BREG7D;
  uint8_t BREG7E;
  uint8_t BREG7F;
};

#define RTC_0 (*(volatile struct RTC_0_tag *) 0x4003b100)

struct LCR_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LCR_PRSLD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LCR_PRSLD;

};

#define LCR_0 (*(volatile struct LCR_0_tag *) 0x4003c000)

struct CLK_GATING_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSCK0:1;
      uint64_t MFSCK1:1;
      uint64_t MFSCK2:1;
      uint64_t MFSCK3:1;
      uint64_t MFSCK4:1;
      uint64_t MFSCK5:1;
      uint64_t MFSCK6:1;
      uint64_t MFSCK7:1;
      uint64_t MFSCK8:1;
      uint64_t MFSCK9:1;
      uint64_t MFSCK10:1;
      uint64_t MFSCK11:1;
      uint64_t MFSCK12:1;
      uint64_t MFSCK13:1;
      uint64_t MFSCK14:1;
      uint64_t MFSCK15:1;
      uint64_t ADCCK0:1;
      uint64_t ADCCK1:1;
      uint64_t ADCCK2:1;
      uint64_t ADCCK3:1;
      uint64_t reservedSpace0:4;
      uint64_t DMACK:1;
      uint64_t reservedSpace1:1;
      uint64_t EXBCK:1;
      uint64_t reservedSpace2:1;
      uint64_t GIOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRST0:1;
      uint64_t MFSRST1:1;
      uint64_t MFSRST2:1;
      uint64_t MFSRST3:1;
      uint64_t MFSRST4:1;
      uint64_t MFSRST5:1;
      uint64_t MFSRST6:1;
      uint64_t MFSRST7:1;
      uint64_t MFSRST8:1;
      uint64_t MFSRST9:1;
      uint64_t MFSRST10:1;
      uint64_t MFSRST11:1;
      uint64_t MFSRST12:1;
      uint64_t MFSRST13:1;
      uint64_t MFSRST14:1;
      uint64_t MFSRST15:1;
      uint64_t ADCRST0:1;
      uint64_t ADCRST1:1;
      uint64_t ADCRST2:1;
      uint64_t ADCRST3:1;
      uint64_t reservedSpace0:4;
      uint64_t DMARST:1;
      uint64_t reservedSpace1:1;
      uint64_t EXBRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST0;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMCK0:1;
      uint64_t BTMCK1:1;
      uint64_t BTMCK2:1;
      uint64_t BTMCK3:1;
      uint64_t reservedSpace0:4;
      uint64_t MFTCK0:1;
      uint64_t MFTCK1:1;
      uint64_t MFTCK2:1;
      uint64_t MFTCK3:1;
      uint64_t reservedSpace1:4;
      uint64_t QDUCK0:1;
      uint64_t QDUCK1:1;
      uint64_t QDUCK2:1;
      uint64_t QDUCK3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMRST0:1;
      uint64_t BTMRST1:1;
      uint64_t BTMRST2:1;
      uint64_t BTMRST3:1;
      uint64_t reservedSpace0:4;
      uint64_t MFTRST0:1;
      uint64_t MFTRST1:1;
      uint64_t MFTRST2:1;
      uint64_t MFTRST3:1;
      uint64_t reservedSpace1:4;
      uint64_t QDURST0:1;
      uint64_t QDURST1:1;
      uint64_t QDURST2:1;
      uint64_t QDURST3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBCK0:1;
      uint64_t USBCK1:1;
      uint64_t reservedSpace0:2;
      uint64_t CANCK0:1;
      uint64_t CANCK1:1;
      uint64_t reservedSpace1:2;
      uint64_t SDCCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBRST0:1;
      uint64_t USBRST1:1;
      uint64_t reservedSpace0:2;
      uint64_t CANRST0:1;
      uint64_t CANRST1:1;
      uint64_t reservedSpace1:2;
      uint64_t SDCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST2;

};

#define CLK_GATING_0 (*(volatile struct CLK_GATING_0_tag *) 0x4003c100)

struct PLL_CONTROL_0_tag
{
  uint32_t SSCTL1;
  uint32_t SSCTL2;
};

#define PLL_CONTROL_0 (*(volatile struct PLL_CONTROL_0_tag *) 0x4003c800)

struct EXBUS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM7;

  uint8_t res0[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDON:1;
      uint64_t PDON:1;
      uint64_t ROFF:1;
      uint64_t reservedSpace0:1;
      uint64_t CASEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RASEL:4;
      uint64_t BASEL:4;
      uint64_t MSDCLKOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFC:16;
      uint64_t NREF:8;
      uint64_t PREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REFTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CL:2;
      uint64_t reservedSpace0:2;
      uint64_t TRC:4;
      uint64_t TRP:4;
      uint64_t TRCD:4;
      uint64_t TRAS:4;
      uint64_t TREFC:4;
      uint64_t TDPL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAD:16;
      uint64_t SDWE:1;
      uint64_t SDCAS:1;
      uint64_t SDRAS:1;
      uint64_t SDCS:1;
      uint64_t SDCKE:1;
      uint64_t reservedSpace0:10;
      uint64_t PEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCMD;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFER:1;
      uint64_t SDER:1;
      uint64_t SFION:1;
      uint64_t SDION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMCERR;

  uint8_t res2[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDIV:4;
      uint64_t MCLKON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMODE;

};

#define EXBUS_0 (*(volatile struct EXBUS_0_tag *) 0x4003f000)

struct USBCLK_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t UCEN0:1;
      uint64_t UCSEL:1;
      uint64_t reservedSpace0:1;
      uint64_t UCEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UCCR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPLLEN:1;
      uint64_t UPINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPOWT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPLLK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPLLN:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR4;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UP_STR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPCSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPINT_ENR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPCSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPINT_CLR;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPCSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPINT_STR;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPLLM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR5;

  uint8_t res9[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t USBEN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) USBEN0;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t USBEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) USBEN1;

};

#define USBCLK_0 (*(volatile struct USBCLK_0_tag *) 0x40036000)

struct USB0_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOST:1;
      uint64_t URST:1;
      uint64_t SOFIRE:1;
      uint64_t DIRE:1;
      uint64_t CNNIRE:1;
      uint64_t CMPIRE:1;
      uint64_t URIRE:1;
      uint64_t RWKIRE:1;
      uint64_t RETRY:1;
      uint64_t CANCEL:1;
      uint64_t SOFSTEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCNT;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOFIRQ:1;
      uint64_t DIRQ:1;
      uint64_t CNNIRQ:1;
      uint64_t CMPIRQ:1;
      uint64_t URIRQ:1;
      uint64_t RWKIRQ:1;
      uint64_t reservedSpace0:1;
      uint64_t TCAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIRQ;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS:2;
      uint64_t STUFF:1;
      uint64_t TGERR:1;
      uint64_t CRC_bitfield:1;
      uint64_t TOUT:1;
      uint64_t RERR:1;
      uint64_t LSTSOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HERR;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CSTAT:1;
      uint64_t TMODE:1;
      uint64_t SUSP:1;
      uint64_t SOFBUSY:1;
      uint64_t CLKSEL:1;
      uint64_t ALIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HSTATE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FRAMECOMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HFCOMP;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RTIMER0:8;
      uint64_t RTIMER1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HRTIMER;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTIMER2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HRTIMER2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADDRESS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HADR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EOF0:8;
      uint64_t EOF1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HEOF;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FRAME0:8;
      uint64_t FRAME1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HFRAME;

  uint8_t res6[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDPT:4;
      uint64_t TKNEN:3;
      uint64_t TGGL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HTOKEN;

  uint8_t res7[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWC:1;
      uint64_t RFBK:1;
      uint64_t reservedSpace0:1;
      uint64_t STALCLREN:1;
      uint64_t USTP:1;
      uint64_t HCONX:1;
      uint64_t RESUM:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UDCC;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PKS0:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP0C;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PKS:9;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP1C;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PKS:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP2C;

  uint8_t res11[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKS:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKS:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKS:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5C;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TMSP:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TMSP;

  uint8_t res12[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CONF:1;
      uint64_t SETP:1;
      uint64_t WKUP:1;
      uint64_t BRST:1;
      uint64_t SOF:1;
      uint64_t SUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UDCS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CONFIE:1;
      uint64_t CONFN:1;
      uint64_t WKUPIE:1;
      uint64_t BRSTIE:1;
      uint64_t SOFIE:1;
      uint64_t SUSPIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UDCIE;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t DRQI:1;
      uint64_t reservedSpace1:3;
      uint64_t DRQIIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP0IS;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQO:1;
      uint64_t reservedSpace1:2;
      uint64_t SPKIE:1;
      uint64_t DRQOIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP0OS;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SIZE:9;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace0:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP1S;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP2S;

  uint8_t res17[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5S;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP0DT;

  uint8_t res18[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP1DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP2DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5DT;

};

#define USB0_0 (*(volatile struct USB0_0_tag *) 0x40042100)

struct DMAC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DH:4;
      uint64_t PR:1;
      uint64_t reservedSpace1:1;
      uint64_t DS_bitfield:1;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB0;

  uint32_t DMACSA0;
  uint32_t DMACDA0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB1;

  uint32_t DMACSA1;
  uint32_t DMACDA1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB2;

  uint32_t DMACSA2;
  uint32_t DMACDA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB3;

  uint32_t DMACSA3;
  uint32_t DMACDA3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB4;

  uint32_t DMACSA4;
  uint32_t DMACDA4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB5;

  uint32_t DMACSA5;
  uint32_t DMACDA5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB6;

  uint32_t DMACSA6;
  uint32_t DMACDA6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB7;

  uint32_t DMACSA7;
  uint32_t DMACDA7;
};

#define DMAC_0 (*(volatile struct DMAC_0_tag *) 0x40060000)

struct DSTC_0_tag
{
  uint32_t DESTP;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL:8;
      uint64_t reservedSpace0:8;
      uint64_t HWDESP:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWDESP;

  uint8_t CMD;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWINTE:1;
      uint64_t ERINTE:1;
      uint64_t RBDIS:1;
      uint64_t ESTE:1;
      uint64_t SWPR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SWDESP:14;
      uint64_t SWREQ:1;
      uint64_t SWST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EST:3;
      uint64_t DER:1;
      uint64_t ESTOP:1;
      uint64_t reservedSpace0:1;
      uint64_t EHS:1;
      uint64_t reservedSpace1:1;
      uint64_t ECH:8;
      uint64_t EDESP:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONERS;

  uint32_t DREQENB0;
  uint32_t DREQENB1;
  uint32_t DREQENB2;
  uint32_t DREQENB3;
  uint32_t DREQENB4;
  uint32_t DREQENB5;
  uint32_t DREQENB6;
  uint32_t DREQENB7;
  uint32_t HWINT0;
  uint32_t HWINT1;
  uint32_t HWINT2;
  uint32_t HWINT3;
  uint32_t HWINT4;
  uint32_t HWINT5;
  uint32_t HWINT6;
  uint32_t HWINT7;
  uint8_t res0[32];

  uint32_t DQMSK0;
  uint32_t DQMSK1;
  uint32_t DQMSK2;
  uint32_t DQMSK3;
  uint32_t DQMSK4;
  uint32_t DQMSK5;
  uint32_t DQMSK6;
  uint32_t DQMSK7;
  uint32_t DQMSKCLR0;
  uint32_t DQMSKCLR1;
  uint32_t DQMSKCLR2;
  uint32_t DQMSKCLR3;
  uint32_t DQMSKCLR4;
  uint32_t DQMSKCLR5;
  uint32_t DQMSKCLR6;
  uint32_t DQMSKCLR7;
};

#define DSTC_0 (*(volatile struct DSTC_0_tag *) 0x40061000)

struct CANPRES_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CANPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANPRE;

};

#define CANPRES_0 (*(volatile struct CANPRES_0_tag *) 0x40037000)

struct CAN0_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t IE:1;
      uint64_t SIE:1;
      uint64_t EIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:1;
      uint64_t CCE:1;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTRLR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t EPASS:1;
      uint64_t EWARN:1;
      uint64_t BOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STATR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRCNT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BASIC:1;
      uint64_t SILENT:1;
      uint64_t LBACK:1;
      uint64_t TX:2;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRPER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MESSAGENUMBER:8;
      uint64_t reservedSpace0:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1CREQ;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t NEWDAT:1;
      uint64_t CIP:1;
      uint64_t CONTROL:1;
      uint64_t ARB:1;
      uint64_t MASK:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1CMSK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK0:1;
      uint64_t MSK1:1;
      uint64_t MSK2:1;
      uint64_t MSK3:1;
      uint64_t MSK4:1;
      uint64_t MSK5:1;
      uint64_t MSK6:1;
      uint64_t MSK7:1;
      uint64_t MSK8:1;
      uint64_t MSK9:1;
      uint64_t MSK10:1;
      uint64_t MSK11:1;
      uint64_t MSK12:1;
      uint64_t MSK13:1;
      uint64_t MSK14:1;
      uint64_t MSK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MSK1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK16:1;
      uint64_t MSK17:1;
      uint64_t MSK18:1;
      uint64_t MSK19:1;
      uint64_t MSK20:1;
      uint64_t MSK21:1;
      uint64_t MSK22:1;
      uint64_t MSK23:1;
      uint64_t MSK24:1;
      uint64_t MSK25:1;
      uint64_t MSK26:1;
      uint64_t MSK27:1;
      uint64_t MSK28:1;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MSK2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1ARB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID16:1;
      uint64_t ID17:1;
      uint64_t ID18:1;
      uint64_t ID19:1;
      uint64_t ID20:1;
      uint64_t ID21:1;
      uint64_t ID22:1;
      uint64_t ID23:1;
      uint64_t ID24:1;
      uint64_t ID25:1;
      uint64_t ID26:1;
      uint64_t ID27:1;
      uint64_t ID28:1;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1ARB2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:3;
      uint64_t EOB:1;
      uint64_t TXRQST:1;
      uint64_t RMTEN:1;
      uint64_t RXIE:1;
      uint64_t TXIE:1;
      uint64_t UMASK:1;
      uint64_t INTPND:1;
      uint64_t MSGLST:1;
      uint64_t NEWDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MCTR;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_0:8;
      uint64_t DATA_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_2:8;
      uint64_t DATA_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA2_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_4:8;
      uint64_t DATA_5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_6:8;
      uint64_t DATA_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB2_L;

  uint8_t res2[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_3:8;
      uint64_t DATA_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_1:8;
      uint64_t DATA_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA1_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_7:8;
      uint64_t DATA_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_5:8;
      uint64_t DATA_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB1_B;

  uint8_t res3[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MESSAGENUMBER:8;
      uint64_t reservedSpace0:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2CREQ;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t NEWDAT:1;
      uint64_t CIP:1;
      uint64_t CONTROL:1;
      uint64_t ARB:1;
      uint64_t MASK:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2CMSK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK0:1;
      uint64_t MSK1:1;
      uint64_t MSK2:1;
      uint64_t MSK3:1;
      uint64_t MSK4:1;
      uint64_t MSK5:1;
      uint64_t MSK6:1;
      uint64_t MSK7:1;
      uint64_t MSK8:1;
      uint64_t MSK9:1;
      uint64_t MSK10:1;
      uint64_t MSK11:1;
      uint64_t MSK12:1;
      uint64_t MSK13:1;
      uint64_t MSK14:1;
      uint64_t MSK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MSK1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK16:1;
      uint64_t MSK17:1;
      uint64_t MSK18:1;
      uint64_t MSK19:1;
      uint64_t MSK20:1;
      uint64_t MSK21:1;
      uint64_t MSK22:1;
      uint64_t MSK23:1;
      uint64_t MSK24:1;
      uint64_t MSK25:1;
      uint64_t MSK26:1;
      uint64_t MSK27:1;
      uint64_t MSK28:1;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MSK2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2ARB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID16:1;
      uint64_t ID17:1;
      uint64_t ID18:1;
      uint64_t ID19:1;
      uint64_t ID20:1;
      uint64_t ID21:1;
      uint64_t ID22:1;
      uint64_t ID23:1;
      uint64_t ID24:1;
      uint64_t ID25:1;
      uint64_t ID26:1;
      uint64_t ID27:1;
      uint64_t ID28:1;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2ARB2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:3;
      uint64_t EOB:1;
      uint64_t TXRQST:1;
      uint64_t RMTEN:1;
      uint64_t RXIE:1;
      uint64_t TXIE:1;
      uint64_t UMASK:1;
      uint64_t INTPND:1;
      uint64_t MSGLST:1;
      uint64_t NEWDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MCTR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_0:8;
      uint64_t DATA_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_2:8;
      uint64_t DATA_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA2_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_4:8;
      uint64_t DATA_5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_6:8;
      uint64_t DATA_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB2_L;

  uint8_t res5[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_3:8;
      uint64_t DATA_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_1:8;
      uint64_t DATA_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA1_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_7:8;
      uint64_t DATA_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_5:8;
      uint64_t DATA_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB1_B;

  uint8_t res6[24];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXRQST1:1;
      uint64_t TXRQST2:1;
      uint64_t TXRQST3:1;
      uint64_t TXRQST4:1;
      uint64_t TXRQST5:1;
      uint64_t TXRQST6:1;
      uint64_t TXRQST7:1;
      uint64_t TXRQST8:1;
      uint64_t TXRQST9:1;
      uint64_t TXRQST10:1;
      uint64_t TXRQST11:1;
      uint64_t TXRQST12:1;
      uint64_t TXRQST13:1;
      uint64_t TXRQST14:1;
      uint64_t TXRQST15:1;
      uint64_t TXRQST16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TREQR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXRQST17:1;
      uint64_t TXRQST18:1;
      uint64_t TXRQST19:1;
      uint64_t TXRQST20:1;
      uint64_t TXRQST21:1;
      uint64_t TXRQST22:1;
      uint64_t TXRQST23:1;
      uint64_t TXRQST24:1;
      uint64_t TXRQST25:1;
      uint64_t TXRQST26:1;
      uint64_t TXRQST27:1;
      uint64_t TXRQST28:1;
      uint64_t TXRQST29:1;
      uint64_t TXRQST30:1;
      uint64_t TXRQST31:1;
      uint64_t TXRQST32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TREQR2;

  uint8_t res7[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEWDAT1:1;
      uint64_t NEWDAT2:1;
      uint64_t NEWDAT3:1;
      uint64_t NEWDAT4:1;
      uint64_t NEWDAT5:1;
      uint64_t NEWDAT6:1;
      uint64_t NEWDAT7:1;
      uint64_t NEWDAT8:1;
      uint64_t NEWDAT9:1;
      uint64_t NEWDAT10:1;
      uint64_t NEWDAT11:1;
      uint64_t NEWDAT12:1;
      uint64_t NEWDAT13:1;
      uint64_t NEWDAT14:1;
      uint64_t NEWDAT15:1;
      uint64_t NEWDAT16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NEWDT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEWDAT17:1;
      uint64_t NEWDAT18:1;
      uint64_t NEWDAT19:1;
      uint64_t NEWDAT20:1;
      uint64_t NEWDAT21:1;
      uint64_t NEWDAT22:1;
      uint64_t NEWDAT23:1;
      uint64_t NEWDAT24:1;
      uint64_t NEWDAT25:1;
      uint64_t NEWDAT26:1;
      uint64_t NEWDAT27:1;
      uint64_t NEWDAT28:1;
      uint64_t NEWDAT29:1;
      uint64_t NEWDAT30:1;
      uint64_t NEWDAT31:1;
      uint64_t NEWDAT32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NEWDT2;

  uint8_t res8[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTPND1:1;
      uint64_t INTPND2:1;
      uint64_t INTPND3:1;
      uint64_t INTPND4:1;
      uint64_t INTPND5:1;
      uint64_t INTPND6:1;
      uint64_t INTPND7:1;
      uint64_t INTPND8:1;
      uint64_t INTPND9:1;
      uint64_t INTPND10:1;
      uint64_t INTPND11:1;
      uint64_t INTPND12:1;
      uint64_t INTPND13:1;
      uint64_t INTPND14:1;
      uint64_t INTPND15:1;
      uint64_t INTPND16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTPND1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTPND17:1;
      uint64_t INTPND18:1;
      uint64_t INTPND19:1;
      uint64_t INTPND20:1;
      uint64_t INTPND21:1;
      uint64_t INTPND22:1;
      uint64_t INTPND23:1;
      uint64_t INTPND24:1;
      uint64_t INTPND25:1;
      uint64_t INTPND26:1;
      uint64_t INTPND27:1;
      uint64_t INTPND28:1;
      uint64_t INTPND29:1;
      uint64_t INTPND30:1;
      uint64_t INTPND31:1;
      uint64_t INTPND32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTPND2;

  uint8_t res9[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSGVAL1:1;
      uint64_t MSGVAL2:1;
      uint64_t MSGVAL3:1;
      uint64_t MSGVAL4:1;
      uint64_t MSGVAL5:1;
      uint64_t MSGVAL6:1;
      uint64_t MSGVAL7:1;
      uint64_t MSGVAL8:1;
      uint64_t MSGVAL9:1;
      uint64_t MSGVAL10:1;
      uint64_t MSGVAL11:1;
      uint64_t MSGVAL12:1;
      uint64_t MSGVAL13:1;
      uint64_t MSGVAL14:1;
      uint64_t MSGVAL15:1;
      uint64_t MSGVAL16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSGVAL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSGVAL17:1;
      uint64_t MSGVAL18:1;
      uint64_t MSGVAL19:1;
      uint64_t MSGVAL20:1;
      uint64_t MSGVAL21:1;
      uint64_t MSGVAL22:1;
      uint64_t MSGVAL23:1;
      uint64_t MSGVAL24:1;
      uint64_t MSGVAL25:1;
      uint64_t MSGVAL26:1;
      uint64_t MSGVAL27:1;
      uint64_t MSGVAL28:1;
      uint64_t MSGVAL29:1;
      uint64_t MSGVAL30:1;
      uint64_t MSGVAL31:1;
      uint64_t MSGVAL32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSGVAL2;

};

#define CAN0_0 (*(volatile struct CAN0_0_tag *) 0x40062000)

struct CAN1_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t IE:1;
      uint64_t SIE:1;
      uint64_t EIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:1;
      uint64_t CCE:1;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTRLR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t EPASS:1;
      uint64_t EWARN:1;
      uint64_t BOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STATR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRCNT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BASIC:1;
      uint64_t SILENT:1;
      uint64_t LBACK:1;
      uint64_t TX:2;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRPER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MESSAGENUMBER:8;
      uint64_t reservedSpace0:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1CREQ;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t NEWDAT:1;
      uint64_t CIP:1;
      uint64_t CONTROL:1;
      uint64_t ARB:1;
      uint64_t MASK:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1CMSK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK0:1;
      uint64_t MSK1:1;
      uint64_t MSK2:1;
      uint64_t MSK3:1;
      uint64_t MSK4:1;
      uint64_t MSK5:1;
      uint64_t MSK6:1;
      uint64_t MSK7:1;
      uint64_t MSK8:1;
      uint64_t MSK9:1;
      uint64_t MSK10:1;
      uint64_t MSK11:1;
      uint64_t MSK12:1;
      uint64_t MSK13:1;
      uint64_t MSK14:1;
      uint64_t MSK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MSK1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK16:1;
      uint64_t MSK17:1;
      uint64_t MSK18:1;
      uint64_t MSK19:1;
      uint64_t MSK20:1;
      uint64_t MSK21:1;
      uint64_t MSK22:1;
      uint64_t MSK23:1;
      uint64_t MSK24:1;
      uint64_t MSK25:1;
      uint64_t MSK26:1;
      uint64_t MSK27:1;
      uint64_t MSK28:1;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MSK2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1ARB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID16:1;
      uint64_t ID17:1;
      uint64_t ID18:1;
      uint64_t ID19:1;
      uint64_t ID20:1;
      uint64_t ID21:1;
      uint64_t ID22:1;
      uint64_t ID23:1;
      uint64_t ID24:1;
      uint64_t ID25:1;
      uint64_t ID26:1;
      uint64_t ID27:1;
      uint64_t ID28:1;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1ARB2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:3;
      uint64_t EOB:1;
      uint64_t TXRQST:1;
      uint64_t RMTEN:1;
      uint64_t RXIE:1;
      uint64_t TXIE:1;
      uint64_t UMASK:1;
      uint64_t INTPND:1;
      uint64_t MSGLST:1;
      uint64_t NEWDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MCTR;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_0:8;
      uint64_t DATA_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_2:8;
      uint64_t DATA_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA2_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_4:8;
      uint64_t DATA_5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_6:8;
      uint64_t DATA_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB2_L;

  uint8_t res2[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_3:8;
      uint64_t DATA_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_1:8;
      uint64_t DATA_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA1_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_7:8;
      uint64_t DATA_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_5:8;
      uint64_t DATA_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB1_B;

  uint8_t res3[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MESSAGENUMBER:8;
      uint64_t reservedSpace0:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2CREQ;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t NEWDAT:1;
      uint64_t CIP:1;
      uint64_t CONTROL:1;
      uint64_t ARB:1;
      uint64_t MASK:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2CMSK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK0:1;
      uint64_t MSK1:1;
      uint64_t MSK2:1;
      uint64_t MSK3:1;
      uint64_t MSK4:1;
      uint64_t MSK5:1;
      uint64_t MSK6:1;
      uint64_t MSK7:1;
      uint64_t MSK8:1;
      uint64_t MSK9:1;
      uint64_t MSK10:1;
      uint64_t MSK11:1;
      uint64_t MSK12:1;
      uint64_t MSK13:1;
      uint64_t MSK14:1;
      uint64_t MSK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MSK1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK16:1;
      uint64_t MSK17:1;
      uint64_t MSK18:1;
      uint64_t MSK19:1;
      uint64_t MSK20:1;
      uint64_t MSK21:1;
      uint64_t MSK22:1;
      uint64_t MSK23:1;
      uint64_t MSK24:1;
      uint64_t MSK25:1;
      uint64_t MSK26:1;
      uint64_t MSK27:1;
      uint64_t MSK28:1;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MSK2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2ARB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID16:1;
      uint64_t ID17:1;
      uint64_t ID18:1;
      uint64_t ID19:1;
      uint64_t ID20:1;
      uint64_t ID21:1;
      uint64_t ID22:1;
      uint64_t ID23:1;
      uint64_t ID24:1;
      uint64_t ID25:1;
      uint64_t ID26:1;
      uint64_t ID27:1;
      uint64_t ID28:1;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2ARB2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:3;
      uint64_t EOB:1;
      uint64_t TXRQST:1;
      uint64_t RMTEN:1;
      uint64_t RXIE:1;
      uint64_t TXIE:1;
      uint64_t UMASK:1;
      uint64_t INTPND:1;
      uint64_t MSGLST:1;
      uint64_t NEWDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MCTR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_0:8;
      uint64_t DATA_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_2:8;
      uint64_t DATA_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA2_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_4:8;
      uint64_t DATA_5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_6:8;
      uint64_t DATA_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB2_L;

  uint8_t res5[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_3:8;
      uint64_t DATA_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_1:8;
      uint64_t DATA_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA1_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_7:8;
      uint64_t DATA_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_5:8;
      uint64_t DATA_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB1_B;

  uint8_t res6[24];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXRQST1:1;
      uint64_t TXRQST2:1;
      uint64_t TXRQST3:1;
      uint64_t TXRQST4:1;
      uint64_t TXRQST5:1;
      uint64_t TXRQST6:1;
      uint64_t TXRQST7:1;
      uint64_t TXRQST8:1;
      uint64_t TXRQST9:1;
      uint64_t TXRQST10:1;
      uint64_t TXRQST11:1;
      uint64_t TXRQST12:1;
      uint64_t TXRQST13:1;
      uint64_t TXRQST14:1;
      uint64_t TXRQST15:1;
      uint64_t TXRQST16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TREQR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXRQST17:1;
      uint64_t TXRQST18:1;
      uint64_t TXRQST19:1;
      uint64_t TXRQST20:1;
      uint64_t TXRQST21:1;
      uint64_t TXRQST22:1;
      uint64_t TXRQST23:1;
      uint64_t TXRQST24:1;
      uint64_t TXRQST25:1;
      uint64_t TXRQST26:1;
      uint64_t TXRQST27:1;
      uint64_t TXRQST28:1;
      uint64_t TXRQST29:1;
      uint64_t TXRQST30:1;
      uint64_t TXRQST31:1;
      uint64_t TXRQST32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TREQR2;

  uint8_t res7[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEWDAT1:1;
      uint64_t NEWDAT2:1;
      uint64_t NEWDAT3:1;
      uint64_t NEWDAT4:1;
      uint64_t NEWDAT5:1;
      uint64_t NEWDAT6:1;
      uint64_t NEWDAT7:1;
      uint64_t NEWDAT8:1;
      uint64_t NEWDAT9:1;
      uint64_t NEWDAT10:1;
      uint64_t NEWDAT11:1;
      uint64_t NEWDAT12:1;
      uint64_t NEWDAT13:1;
      uint64_t NEWDAT14:1;
      uint64_t NEWDAT15:1;
      uint64_t NEWDAT16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NEWDT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEWDAT17:1;
      uint64_t NEWDAT18:1;
      uint64_t NEWDAT19:1;
      uint64_t NEWDAT20:1;
      uint64_t NEWDAT21:1;
      uint64_t NEWDAT22:1;
      uint64_t NEWDAT23:1;
      uint64_t NEWDAT24:1;
      uint64_t NEWDAT25:1;
      uint64_t NEWDAT26:1;
      uint64_t NEWDAT27:1;
      uint64_t NEWDAT28:1;
      uint64_t NEWDAT29:1;
      uint64_t NEWDAT30:1;
      uint64_t NEWDAT31:1;
      uint64_t NEWDAT32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NEWDT2;

  uint8_t res8[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTPND1:1;
      uint64_t INTPND2:1;
      uint64_t INTPND3:1;
      uint64_t INTPND4:1;
      uint64_t INTPND5:1;
      uint64_t INTPND6:1;
      uint64_t INTPND7:1;
      uint64_t INTPND8:1;
      uint64_t INTPND9:1;
      uint64_t INTPND10:1;
      uint64_t INTPND11:1;
      uint64_t INTPND12:1;
      uint64_t INTPND13:1;
      uint64_t INTPND14:1;
      uint64_t INTPND15:1;
      uint64_t INTPND16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTPND1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTPND17:1;
      uint64_t INTPND18:1;
      uint64_t INTPND19:1;
      uint64_t INTPND20:1;
      uint64_t INTPND21:1;
      uint64_t INTPND22:1;
      uint64_t INTPND23:1;
      uint64_t INTPND24:1;
      uint64_t INTPND25:1;
      uint64_t INTPND26:1;
      uint64_t INTPND27:1;
      uint64_t INTPND28:1;
      uint64_t INTPND29:1;
      uint64_t INTPND30:1;
      uint64_t INTPND31:1;
      uint64_t INTPND32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTPND2;

  uint8_t res9[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSGVAL1:1;
      uint64_t MSGVAL2:1;
      uint64_t MSGVAL3:1;
      uint64_t MSGVAL4:1;
      uint64_t MSGVAL5:1;
      uint64_t MSGVAL6:1;
      uint64_t MSGVAL7:1;
      uint64_t MSGVAL8:1;
      uint64_t MSGVAL9:1;
      uint64_t MSGVAL10:1;
      uint64_t MSGVAL11:1;
      uint64_t MSGVAL12:1;
      uint64_t MSGVAL13:1;
      uint64_t MSGVAL14:1;
      uint64_t MSGVAL15:1;
      uint64_t MSGVAL16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSGVAL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSGVAL17:1;
      uint64_t MSGVAL18:1;
      uint64_t MSGVAL19:1;
      uint64_t MSGVAL20:1;
      uint64_t MSGVAL21:1;
      uint64_t MSGVAL22:1;
      uint64_t MSGVAL23:1;
      uint64_t MSGVAL24:1;
      uint64_t MSGVAL25:1;
      uint64_t MSGVAL26:1;
      uint64_t MSGVAL27:1;
      uint64_t MSGVAL28:1;
      uint64_t MSGVAL29:1;
      uint64_t MSGVAL30:1;
      uint64_t MSGVAL31:1;
      uint64_t MSGVAL32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSGVAL2;

};

#define CAN1_0 (*(volatile struct CAN1_0_tag *) 0x40063000)

struct SDIF_0_tag
{
  uint32_t DUMMY;
};

#define SDIF_0 (*(volatile struct SDIF_0_tag *) 0x4006e000)

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

struct M3_Peripherals_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Auxiliary_Control_Register;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t INTEN:1;
      uint64_t CLK_SRC:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Control_and_Status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Reload_Value;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Current_Value;

  uint8_t res1[228];

  uint32_t Interrupt_0_to_31_Set_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Enable;

  uint8_t res2[120];

  uint32_t Interrupt_0_to_31_Clear_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Enable;

  uint8_t res3[120];

  uint32_t Interrupt_0_to_31_Set_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Pending;

  uint8_t res4[120];

  uint32_t Interrupt_0_to_31_Clear_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Pending;

  uint8_t res5[120];

  uint32_t Interrupt_0_to_31_Active_Bit;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_63_Active_Bit;

  uint8_t res6[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_0_to_3_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_4_to_7_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_8_to_11_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_12_to_15_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_16_to_19_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_20_to_23_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_24_to_27_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_28_to_31_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_35_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_36_to_39_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_40_to_43_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_44_to_47_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_48_to_51_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_52_to_53_Priority;

  uint8_t res7[2248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:4;
      uint64_t PARTNO:12;
      uint64_t CON:4;
      uint64_t VAR:4;
      uint64_t IMP:8;
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
      uint64_t VECTPENDING:7;
      uint64_t reservedSpace1:3;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t OFFSET:20;
      uint64_t BASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTABLE;

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
  } __attribute__((aligned(4))) SYSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETHR:1;
      uint64_t MAINPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t MEM:3;
      uint64_t reservedSpace1:5;
      uint64_t BUS:3;
      uint64_t reservedSpace2:5;
      uint64_t USAGE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SVC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DEBUG:3;
      uint64_t reservedSpace1:13;
      uint64_t PENDSV:3;
      uint64_t reservedSpace2:5;
      uint64_t TICK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI3;

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
  } __attribute__((aligned(4))) SYSHNDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IERR:1;
      uint64_t DERR:1;
      uint64_t reservedSpace0:1;
      uint64_t MUSTKE:1;
      uint64_t MSTKE:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARV:1;
      uint64_t IBUS:1;
      uint64_t PRECISE:1;
      uint64_t IMPRE:1;
      uint64_t BUSTKE:1;
      uint64_t BSTKE:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARV:1;
      uint64_t UNDEF:1;
      uint64_t INVSTAT:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAULTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECT:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFAULTSTAT;

  uint8_t res8[4];

  uint32_t Mem_Manage_Address;
  uint32_t Bus_Fault_Address;
  uint8_t res9[84];

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
  } __attribute__((aligned(4))) MPUTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUMBER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUNUMBER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE;

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
  } __attribute__((aligned(4))) MPUATTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE1;

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
  } __attribute__((aligned(4))) MPUATTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE2;

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
  } __attribute__((aligned(4))) MPUATTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE3;

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
  } __attribute__((aligned(4))) MPUATTR3;

  uint8_t res10[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Software_Trigger_Interrupt_Register;

};

#define M3_Peripherals (*(volatile struct M3_Peripherals_tag *) 0xe000e008)

struct AON_BATMON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEAS_EN:1;
      uint64_t CALC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEASCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATMONP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATMONP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG1:4;
      uint64_t CFG2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:4;
      uint64_t OVR:1;
      uint64_t LOWLIM:1;
      uint64_t HIGHLIM:2;
      uint64_t FALLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHPUMPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAC:8;
      uint64_t INT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPUPD;

};

#define AON_BATMON (*(volatile struct AON_BATMON_tag *) 0x40095000)

struct AON_EVENT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t WU1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t WU2_EV:6;
      uint64_t reservedSpace2:2;
      uint64_t WU3_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUWUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t WU1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t WU2_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXWUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t AON_PROG1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t AON_PROG2_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_CH1_CAPT_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSEL;

};

#define AON_EVENT (*(volatile struct AON_EVENT_tag *) 0x40093000)

struct AON_IOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCLATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OE_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK32KCTL;

};

#define AON_IOC (*(volatile struct AON_IOC_tag *) 0x40094000)

struct AON_RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RTC_UPD_EN:1;
      uint64_t RTC_4KHZ_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t RESET:1;
      uint64_t EV_DELAY:4;
      uint64_t reservedSpace1:4;
      uint64_t COMB_EV_MASK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t reservedSpace0:7;
      uint64_t CH1:1;
      uint64_t reservedSpace1:7;
      uint64_t CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUEINC:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSECINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t CH1_EN:1;
      uint64_t CH1_CAPT_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t CH2_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t CH2_CONT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CMPINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBSEC:16;
      uint64_t SEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CAPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

};

#define AON_RTC (*(volatile struct AON_RTC_tag *) 0x40092000)

struct AON_SYSCTL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_EN:1;
      uint64_t EXT_REG_MODE:1;
      uint64_t DCDC_ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RESET_SRC:3;
      uint64_t CLK_LOSS_EN:1;
      uint64_t VDD_LOSS_EN:1;
      uint64_t VDDR_LOSS_EN:1;
      uint64_t VDDS_LOSS_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t VDD_LOSS_EN_OVR:1;
      uint64_t VDDR_LOSS_EN_OVR:1;
      uint64_t VDDS_LOSS_EN_OVR:1;
      uint64_t BOOT_DET_0:1;
      uint64_t BOOT_DET_1:1;
      uint64_t GPIO_WU_FROM_SD:1;
      uint64_t WU_FROM_SD:1;
      uint64_t BOOT_DET_0_SET:1;
      uint64_t BOOT_DET_1_SET:1;
      uint64_t reservedSpace2:6;
      uint64_t BOOT_DET_0_CLR:1;
      uint64_t BOOT_DET_1_CLR:1;
      uint64_t reservedSpace3:5;
      uint64_t SYSRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESETCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_PAD_SLEEP_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLEEPCTL;

};

#define AON_SYSCTL (*(volatile struct AON_SYSCTL_tag *) 0x40090000)

struct AON_WUC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_DWN_SRC:2;
      uint64_t RCOSC_HF_CAL_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t SCLK_HF_DIV:3;
      uint64_t PWR_DWN_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_RET_EN:4;
      uint64_t reservedSpace0:12;
      uint64_t FIXED_WU_EN:1;
      uint64_t VIRT_OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_RET_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUX_FORCE_ON:1;
      uint64_t SWEV:1;
      uint64_t SCE_RUN_EN:1;
      uint64_t reservedSpace0:28;
      uint64_t RESET_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AUX_RESET_DONE:1;
      uint64_t AUX_BUS_CONNECTED:1;
      uint64_t reservedSpace1:1;
      uint64_t MCU_PD_ON:1;
      uint64_t AUX_PD_ON:1;
      uint64_t JTAG_PD_ON:1;
      uint64_t reservedSpace2:2;
      uint64_t AUX_PWR_DWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHUTDOWN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MCU_SRAM_ERASE:1;
      uint64_t AUX_SRAM_ERASE:1;
      uint64_t reservedSpace1:4;
      uint64_t PWR_DWN_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCU_WARM_RESET:1;
      uint64_t MCU_RESET_SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER_E:3;
      uint64_t PER_M:5;
      uint64_t MAX_PER_E:3;
      uint64_t MAX_PER_M:5;
      uint64_t C1:4;
      uint64_t C2:4;
      uint64_t reservedSpace0:7;
      uint64_t ADAPTIVE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECHARGECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_USED_PER:16;
      uint64_t VDDR_SMPLS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECHARGESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER_E:3;
      uint64_t PER_M:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCFG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t JTAG_PD_FORCE_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USER_CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGUSERCODE;

};

#define AON_WUC (*(volatile struct AON_WUC_tag *) 0x40091000)

struct AUX_ADI4_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_REF:4;
      uint64_t COMPA_IN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_IN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPB_REF:3;
      uint64_t ADCCOMPB_IN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADCCOMPB_IN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISRC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t COMPB_EN:1;
      uint64_t COMPB_TRIM:3;
      uint64_t COMPA_REF_CURR_EN:1;
      uint64_t COMPA_REF_RES_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) COMP;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RESET_N:1;
      uint64_t reservedSpace0:1;
      uint64_t SMPL_CYCLE_EXP:4;
      uint64_t SMPL_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCALE_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SRC:1;
      uint64_t EXT:1;
      uint64_t IOMUX:1;
      uint64_t REF_ON_IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCREF0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCREF1;

};

#define AUX_ADI4 (*(volatile struct AUX_ADI4_tag *) 0x400cb000)

struct AUX_AIODIO0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0:2;
      uint64_t IO1:2;
      uint64_t IO2:2;
      uint64_t IO3:2;
      uint64_t IO4:2;
      uint64_t IO5:2;
      uint64_t IO6:2;
      uint64_t IO7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIE;

};

#define AUX_AIODIO0 (*(volatile struct AUX_AIODIO0_tag *) 0x400c1000)

struct AUX_AIODIO1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0:2;
      uint64_t IO1:2;
      uint64_t IO2:2;
      uint64_t IO3:2;
      uint64_t IO4:2;
      uint64_t IO5:2;
      uint64_t IO6:2;
      uint64_t IO7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIE;

};

#define AUX_AIODIO1 (*(volatile struct AUX_AIODIO1_tag *) 0x400c2000)

struct AUX_ANAIF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:2;
      uint64_t reservedSpace0:6;
      uint64_t START_SRC:5;
      uint64_t START_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMPTY:1;
      uint64_t ALMOST_FULL:1;
      uint64_t FULL:1;
      uint64_t UNDERFLOW:1;
      uint64_t OVERFLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCFIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISRCCTL;

};

#define AUX_ANAIF (*(volatile struct AUX_ANAIF_tag *) 0x400c9010)

struct AUX_DDI0_OSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLK_HF_SRC_SEL:1;
      uint64_t SCLK_MF_SRC_SEL:1;
      uint64_t SCLK_LF_SRC_SEL:2;
      uint64_t reservedSpace0:1;
      uint64_t ACLK_REF_SRC_SEL:2;
      uint64_t ACLK_TDC_SRC_SEL:2;
      uint64_t CLK_LOSS_EN:1;
      uint64_t XOSC_LF_DIG_BYPASS:1;
      uint64_t XOSC_HF_POWER_MODE:1;
      uint64_t RCOSC_LF_TRIMMED:1;
      uint64_t reservedSpace1:3;
      uint64_t ALLOW_SCLK_HF_SWITCHING:1;
      uint64_t reservedSpace2:5;
      uint64_t FORCE_KICKSTART_EN:1;
      uint64_t reservedSpace3:2;
      uint64_t DOUBLER_RESET_DURATION:1;
      uint64_t DOUBLER_START_DURATION:2;
      uint64_t BYPASS_RCOSC_LF_CLK_QUAL:1;
      uint64_t BYPASS_XOSC_LF_CLK_QUAL:1;
      uint64_t reservedSpace4:1;
      uint64_t XTAL_IS_24M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_FAST_START:2;
      uint64_t reservedSpace0:15;
      uint64_t RCOSCHFCTRIMFRACT_EN:1;
      uint64_t RCOSCHFCTRIMFRACT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RADC_MODE_IS_SAR:1;
      uint64_t RADC_DAC_TH:6;
      uint64_t IDAC_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT:6;
      uint64_t HPM_IBIAS_WAIT_CNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RADCEXTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBIASCAP_HPTOLP_OL_CNT:4;
      uint64_t CAP_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT_FINAL:8;
      uint64_t IBIAS_INIT:4;
      uint64_t IBIAS_OFFSET:4;
      uint64_t reservedSpace0:2;
      uint64_t AMPCOMP_SW_EN:1;
      uint64_t AMPCOMP_SW_CTRL:1;
      uint64_t AMPCOMP_FSM_UPDATE_RATE:2;
      uint64_t AMPCOMP_REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPMRAMP1_TH:6;
      uint64_t IBIASCAP_LPTOHP_OL_CNT:4;
      uint64_t HPMRAMP3_HTH:6;
      uint64_t reservedSpace0:2;
      uint64_t HPMRAMP3_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPTH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADC_COMP_AMPTH_HPM:6;
      uint64_t reservedSpace1:2;
      uint64_t ADC_COMP_AMPTH_LPM:6;
      uint64_t reservedSpace2:2;
      uint64_t LPMUPDATE_HTH:6;
      uint64_t reservedSpace3:2;
      uint64_t LPMUPDATE_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPTH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_COLUMN_Q12:16;
      uint64_t XOSC_HF_ROW_Q12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASSVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_IBIASTHERM:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASSVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SCLK_LF_AUX_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATESTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_IREF_CTRL:2;
      uint64_t reservedSpace0:2;
      uint64_t ADC_SH_VBUF_EN:1;
      uint64_t ADC_SH_MODE_EN:1;
      uint64_t reservedSpace1:17;
      uint64_t SPARE23:1;
      uint64_t NANOAMP_BIAS_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCDOUBLERNANOAMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LP_BUF_ITRIM:2;
      uint64_t HP_BUF_ITRIM:3;
      uint64_t reservedSpace0:1;
      uint64_t BYPASS:1;
      uint64_t reservedSpace1:1;
      uint64_t PEAK_DET_ITRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XOSCHFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCLF_CTUNE_TRIM:8;
      uint64_t RCOSCLF_RTUNE_TRIM:2;
      uint64_t reservedSpace0:8;
      uint64_t XOSCLF_CMIRRWR_RATIO:4;
      uint64_t XOSCLF_REGULATOR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFOSCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RCOSCHF_CTRIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSCHFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PENDINGSCLKHFSWITCHING:1;
      uint64_t ADC_DATA:6;
      uint64_t ADC_DATA_READY:1;
      uint64_t ADC_THMET:1;
      uint64_t reservedSpace0:1;
      uint64_t XOSC_HF_HP_BUF_EN:1;
      uint64_t XOSC_HF_LP_BUF_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t XB_48M_CLK_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t XOSC_HF_EN:1;
      uint64_t SCLK_LF_LOSS:1;
      uint64_t SCLK_HF_LOSS:1;
      uint64_t CLK_DCDC_RDY_ACK:1;
      uint64_t CLK_DCDC_RDY:1;
      uint64_t XOSC_LF_EN:1;
      uint64_t RCOSC_LF_EN:1;
      uint64_t RCOSC_HF_EN:1;
      uint64_t reservedSpace3:5;
      uint64_t SCLK_HF_SRC:1;
      uint64_t SCLK_LF_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DCDC_GOOD:1;
      uint64_t CLK_CHP_GOOD:1;
      uint64_t ACLK_REF_GOOD:1;
      uint64_t ACLK_TDC_GOOD:1;
      uint64_t ACLK_ADC_GOOD:1;
      uint64_t SCLK_LF_GOOD:1;
      uint64_t SCLK_MF_GOOD:1;
      uint64_t SCLK_HF_GOOD:1;
      uint64_t CLK_DCDC_EN:1;
      uint64_t CLK_CHP_EN:1;
      uint64_t ACLK_REF_EN:1;
      uint64_t ACLK_TDC_EN:1;
      uint64_t ACLK_ADC_EN:1;
      uint64_t SCLK_MF_EN:1;
      uint64_t SCLK_HF_EN:1;
      uint64_t FORCE_RCOSC_HF:1;
      uint64_t LPM_UPDATE_AMP:6;
      uint64_t HMP_UPDATE_AMP:6;
      uint64_t RAMPSTATE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_RF_FREQGOOD:1;
      uint64_t XOSC_HF_FREQGOOD:1;
      uint64_t XOSC_HF_AMPGOOD:1;
      uint64_t AMPCOMP_REQ:1;
      uint64_t reservedSpace0:8;
      uint64_t RAMPSTATE:4;
      uint64_t reservedSpace1:7;
      uint64_t HPM_RAMP3_THMET:1;
      uint64_t HPM_RAMP2_THMET:1;
      uint64_t HPM_RAMP1_THMET:1;
      uint64_t ADC_DCBIAS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT2;

};

#define AUX_DDI0_OSC (*(volatile struct AUX_DDI0_OSC_tag *) 0x400ca000)

struct AUX_EVCTL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0_EV:5;
      uint64_t VEC0_EN:1;
      uint64_t VEC0_POL:1;
      uint64_t reservedSpace0:1;
      uint64_t VEC1_EV:5;
      uint64_t VEC1_EN:1;
      uint64_t VEC1_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC2_EV:5;
      uint64_t VEC2_EN:1;
      uint64_t VEC2_POL:1;
      uint64_t reservedSpace0:1;
      uint64_t VEC3_EV:5;
      uint64_t VEC3_EN:1;
      uint64_t VEC3_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEV7_EV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCEWEVSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:1;
      uint64_t EN:1;
      uint64_t REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEVSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_RTC_CH2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t OBSMUX1:1;
      uint64_t AON_SW:1;
      uint64_t AON_PROG_WU:1;
      uint64_t AUXIO0:1;
      uint64_t AUXIO1:1;
      uint64_t AUXIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXIO3:1;
      uint64_t AUXIO4:1;
      uint64_t AUXIO5:1;
      uint64_t AUXIO6:1;
      uint64_t AUXIO7:1;
      uint64_t AUXIO8:1;
      uint64_t AUXIO9:1;
      uint64_t AUXIO10:1;
      uint64_t AUXIO11:1;
      uint64_t AUXIO12:1;
      uint64_t AUXIO13:1;
      uint64_t AUXIO14:1;
      uint64_t AUXIO15:1;
      uint64_t ACLK_REF:1;
      uint64_t MCU_EV:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBEVTOMCUMASK;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0:1;
      uint64_t VEC1:1;
      uint64_t VEC2:1;
      uint64_t VEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUFLAGSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONFLAGSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0:1;
      uint64_t VEC1:1;
      uint64_t VEC2:1;
      uint64_t VEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECFLAGSCLR;

};

#define AUX_EVCTL (*(volatile struct AUX_EVCTL_tag *) 0x400c5000)

struct AUX_SCE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
      uint64_t SUSPEND:1;
      uint64_t SINGLE_STEP:1;
      uint64_t RESTART:1;
      uint64_t FORCE_WU_HIGH:1;
      uint64_t FORCE_WU_LOW:1;
      uint64_t DBG_FREEZE_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RESET_VECTOR:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_EV_HIGH:8;
      uint64_t FORCE_EV_LOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:16;
      uint64_t OPCODE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FETCHSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Z_FLAG:1;
      uint64_t N_FLAG:1;
      uint64_t C_FLAG:1;
      uint64_t V_FLAG:1;
      uint64_t reservedSpace0:4;
      uint64_t SELF_STOP:1;
      uint64_t WEV:1;
      uint64_t SLEEP:1;
      uint64_t BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_SIGNALS:8;
      uint64_t WU_SIGNAL:1;
      uint64_t reservedSpace0:7;
      uint64_t EXC_VECTOR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0:16;
      uint64_t REG1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG2:16;
      uint64_t REG3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG4:16;
      uint64_t REG5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG6:16;
      uint64_t REG7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG7_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:16;
      uint64_t STOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOOPADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITER_LEFT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOOPCNT;

};

#define AUX_SCE (*(volatile struct AUX_SCE_tag *) 0x400e1000)

struct AUX_SMPH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_ID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOTAKE;

};

#define AUX_SMPH (*(volatile struct AUX_SMPH_tag *) 0x400c8000)

struct AUX_TDCIF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATE:6;
      uint64_t DONE:1;
      uint64_t SAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIMIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SATCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_SRC:5;
      uint64_t START_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t STOP_SRC:5;
      uint64_t STOP_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNTLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:5;
      uint64_t reservedSpace0:1;
      uint64_t RATIO:1;
      uint64_t RESET_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECNT;

};

#define AUX_TDCIF (*(volatile struct AUX_TDCIF_tag *) 0x400c4000)

struct AUX_TIMER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRE:4;
      uint64_t TICK_SRC:5;
      uint64_t TICK_SRC_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRE:4;
      uint64_t TICK_SRC:5;
      uint64_t TICK_SRC_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0TARGET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1TARGET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1CTL;

};

#define AUX_TIMER (*(volatile struct AUX_TIMER_tag *) 0x400c7000)

struct AUX_WUC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_bitfield:1;
      uint64_t AIODIO0:1;
      uint64_t AIODIO1:1;
      uint64_t TIMER:1;
      uint64_t ANAIF:1;
      uint64_t TDC:1;
      uint64_t AUX_DDI0_OSC_bitfield:1;
      uint64_t AUX_ADI4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCLKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWROFFREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWNREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWNACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLFREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLFACK;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG_WU:1;
      uint64_t AON_SW:1;
      uint64_t AON_RTC_CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUEVFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG_WU:1;
      uint64_t AON_SW:1;
      uint64_t AON_RTC_CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUEVCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDCCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REFCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC15_0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC23_16:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD_REQ:1;
      uint64_t UPD_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCONNECT_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUBUSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCONNECT_ACK:1;
      uint64_t DISCONNECTED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUBUSSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCE_RUN_EN:1;
      uint64_t AUX_FORCE_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AONCTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXIOLATCH;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_bitfield:1;
      uint64_t AIODIO0:1;
      uint64_t AIODIO1:1;
      uint64_t TIMER:1;
      uint64_t ANAIF:1;
      uint64_t reservedSpace0:1;
      uint64_t AUX_DDI0_OSC_bitfield:1;
      uint64_t AUX_ADI4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCLKEN1;

};

#define AUX_WUC (*(volatile struct AUX_WUC_tag *) 0x400c6000)

struct CCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_INCREMENT:24;
      uint64_t DIO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXT_LF_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_MAX_START:8;
      uint64_t DELTA_IBIAS_OFFSET:4;
      uint64_t DELTA_IBIAS_INIT:4;
      uint64_t ALT_DCDC_IPEAK:3;
      uint64_t ALT_DCDC_DITHER_EN:1;
      uint64_t ALT_DCDC_VMIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS_XOSC_OVR:1;
      uint64_t DIS_ALT_DCDC_SETTING:1;
      uint64_t DISABLE_FLAGS:14;
      uint64_t SIZE_OF_CCFG:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIZE_AND_DIS_FLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_CAP:8;
      uint64_t XOSC_CAPARRAY_DELTA:8;
      uint64_t HF_COMP:1;
      uint64_t XOSC_CAP_MOD:1;
      uint64_t XOSC_FREQ:2;
      uint64_t RTC_COMP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCLK_LF_OPTION:2;
      uint64_t VDDS_BOD_LEVEL:1;
      uint64_t VDDR_EXT_LOAD:1;
      uint64_t DCDC_ACTIVE:1;
      uint64_t DCDC_RECHARGE:1;
      uint64_t VDDR_TRIM_SLEEP_DELTA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_EXT_TM15:8;
      uint64_t VDDR_EXT_TP5:8;
      uint64_t VDDR_EXT_TP25:8;
      uint64_t VDDR_EXT_TP45:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_LOAD_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_EXT_TP65:8;
      uint64_t VDDR_EXT_TP85:8;
      uint64_t VDDR_EXT_TP105:8;
      uint64_t VDDR_EXT_TP125:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_LOAD_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_COMP_P2:8;
      uint64_t RTC_COMP_P1:8;
      uint64_t RTC_COMP_P0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_OFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HF_COMP_P2:8;
      uint64_t HF_COMP_P1:8;
      uint64_t HF_COMP_P0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQ_OFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_MAC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_MAC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_BLE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_BLE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BL_ENABLE:8;
      uint64_t BL_PIN_NUMBER:8;
      uint64_t BL_LEVEL:1;
      uint64_t reservedSpace0:7;
      uint64_t BOOTLOADER_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BL_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK_ERASE_DIS_N:1;
      uint64_t reservedSpace0:7;
      uint64_t CHIP_ERASE_DIS_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERASE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_FA_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TI_OPTIONS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_TAP_ENABLE:8;
      uint64_t PRCM_TAP_ENABLE:8;
      uint64_t CPU_DAP_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TAP_DAP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUC_TAP_ENABLE:8;
      uint64_t PBIST1_TAP_ENABLE:8;
      uint64_t PBIST2_TAP_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TAP_DAP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMAGE_VALID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMAGE_VALID_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_0:1;
      uint64_t WRT_PROT_SEC_1:1;
      uint64_t WRT_PROT_SEC_2:1;
      uint64_t WRT_PROT_SEC_3:1;
      uint64_t WRT_PROT_SEC_4:1;
      uint64_t WRT_PROT_SEC_5:1;
      uint64_t WRT_PROT_SEC_6:1;
      uint64_t WRT_PROT_SEC_7:1;
      uint64_t WRT_PROT_SEC_8:1;
      uint64_t WRT_PROT_SEC_9:1;
      uint64_t WRT_PROT_SEC_10:1;
      uint64_t WRT_PROT_SEC_11:1;
      uint64_t WRT_PROT_SEC_12:1;
      uint64_t WRT_PROT_SEC_13:1;
      uint64_t WRT_PROT_SEC_14:1;
      uint64_t WRT_PROT_SEC_15:1;
      uint64_t WRT_PROT_SEC_16:1;
      uint64_t WRT_PROT_SEC_17:1;
      uint64_t WRT_PROT_SEC_18:1;
      uint64_t WRT_PROT_SEC_19:1;
      uint64_t WRT_PROT_SEC_20:1;
      uint64_t WRT_PROT_SEC_21:1;
      uint64_t WRT_PROT_SEC_22:1;
      uint64_t WRT_PROT_SEC_23:1;
      uint64_t WRT_PROT_SEC_24:1;
      uint64_t WRT_PROT_SEC_25:1;
      uint64_t WRT_PROT_SEC_26:1;
      uint64_t WRT_PROT_SEC_27:1;
      uint64_t WRT_PROT_SEC_28:1;
      uint64_t WRT_PROT_SEC_29:1;
      uint64_t WRT_PROT_SEC_30:1;
      uint64_t WRT_PROT_SEC_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_31_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_32:1;
      uint64_t WRT_PROT_SEC_33:1;
      uint64_t WRT_PROT_SEC_34:1;
      uint64_t WRT_PROT_SEC_35:1;
      uint64_t WRT_PROT_SEC_36:1;
      uint64_t WRT_PROT_SEC_37:1;
      uint64_t WRT_PROT_SEC_38:1;
      uint64_t WRT_PROT_SEC_39:1;
      uint64_t WRT_PROT_SEC_40:1;
      uint64_t WRT_PROT_SEC_41:1;
      uint64_t WRT_PROT_SEC_42:1;
      uint64_t WRT_PROT_SEC_43:1;
      uint64_t WRT_PROT_SEC_44:1;
      uint64_t WRT_PROT_SEC_45:1;
      uint64_t WRT_PROT_SEC_46:1;
      uint64_t WRT_PROT_SEC_47:1;
      uint64_t WRT_PROT_SEC_48:1;
      uint64_t WRT_PROT_SEC_49:1;
      uint64_t WRT_PROT_SEC_50:1;
      uint64_t WRT_PROT_SEC_51:1;
      uint64_t WRT_PROT_SEC_52:1;
      uint64_t WRT_PROT_SEC_53:1;
      uint64_t WRT_PROT_SEC_54:1;
      uint64_t WRT_PROT_SEC_55:1;
      uint64_t WRT_PROT_SEC_56:1;
      uint64_t WRT_PROT_SEC_57:1;
      uint64_t WRT_PROT_SEC_58:1;
      uint64_t WRT_PROT_SEC_59:1;
      uint64_t WRT_PROT_SEC_60:1;
      uint64_t WRT_PROT_SEC_61:1;
      uint64_t WRT_PROT_SEC_62:1;
      uint64_t WRT_PROT_SEC_63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_63_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_64:1;
      uint64_t WRT_PROT_SEC_65:1;
      uint64_t WRT_PROT_SEC_66:1;
      uint64_t WRT_PROT_SEC_67:1;
      uint64_t WRT_PROT_SEC_68:1;
      uint64_t WRT_PROT_SEC_69:1;
      uint64_t WRT_PROT_SEC_70:1;
      uint64_t WRT_PROT_SEC_71:1;
      uint64_t WRT_PROT_SEC_72:1;
      uint64_t WRT_PROT_SEC_73:1;
      uint64_t WRT_PROT_SEC_74:1;
      uint64_t WRT_PROT_SEC_75:1;
      uint64_t WRT_PROT_SEC_76:1;
      uint64_t WRT_PROT_SEC_77:1;
      uint64_t WRT_PROT_SEC_78:1;
      uint64_t WRT_PROT_SEC_79:1;
      uint64_t WRT_PROT_SEC_80:1;
      uint64_t WRT_PROT_SEC_81:1;
      uint64_t WRT_PROT_SEC_82:1;
      uint64_t WRT_PROT_SEC_83:1;
      uint64_t WRT_PROT_SEC_84:1;
      uint64_t WRT_PROT_SEC_85:1;
      uint64_t WRT_PROT_SEC_86:1;
      uint64_t WRT_PROT_SEC_87:1;
      uint64_t WRT_PROT_SEC_88:1;
      uint64_t WRT_PROT_SEC_89:1;
      uint64_t WRT_PROT_SEC_90:1;
      uint64_t WRT_PROT_SEC_91:1;
      uint64_t WRT_PROT_SEC_92:1;
      uint64_t WRT_PROT_SEC_93:1;
      uint64_t WRT_PROT_SEC_94:1;
      uint64_t WRT_PROT_SEC_95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_95_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_96:1;
      uint64_t WRT_PROT_SEC_97:1;
      uint64_t WRT_PROT_SEC_98:1;
      uint64_t WRT_PROT_SEC_99:1;
      uint64_t WRT_PROT_SEC_100:1;
      uint64_t WRT_PROT_SEC_101:1;
      uint64_t WRT_PROT_SEC_102:1;
      uint64_t WRT_PROT_SEC_103:1;
      uint64_t WRT_PROT_SEC_104:1;
      uint64_t WRT_PROT_SEC_105:1;
      uint64_t WRT_PROT_SEC_106:1;
      uint64_t WRT_PROT_SEC_107:1;
      uint64_t WRT_PROT_SEC_108:1;
      uint64_t WRT_PROT_SEC_109:1;
      uint64_t WRT_PROT_SEC_110:1;
      uint64_t WRT_PROT_SEC_111:1;
      uint64_t WRT_PROT_SEC_112:1;
      uint64_t WRT_PROT_SEC_113:1;
      uint64_t WRT_PROT_SEC_114:1;
      uint64_t WRT_PROT_SEC_115:1;
      uint64_t WRT_PROT_SEC_116:1;
      uint64_t WRT_PROT_SEC_117:1;
      uint64_t WRT_PROT_SEC_118:1;
      uint64_t WRT_PROT_SEC_119:1;
      uint64_t WRT_PROT_SEC_120:1;
      uint64_t WRT_PROT_SEC_121:1;
      uint64_t WRT_PROT_SEC_122:1;
      uint64_t WRT_PROT_SEC_123:1;
      uint64_t WRT_PROT_SEC_124:1;
      uint64_t WRT_PROT_SEC_125:1;
      uint64_t WRT_PROT_SEC_126:1;
      uint64_t WRT_PROT_SEC_127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_127_96;

};

#define CCFG (*(volatile struct CCFG_tag *) 0x50003fa8)

struct CPU_TIPROP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRACECLK_N_SWV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRACECLKMUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DYN_CG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYN_CG;

};

#define CPU_TIPROP (*(volatile struct CPU_TIPROP_tag *) 0xe00feff8)

struct EVENT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL2;

  uint32_t CPUIRQSEL3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL33;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL9;

  uint8_t res1[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT0ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT0BCAPTSEL;

  uint8_t res2[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT1ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT1BCAPTSEL;

  uint8_t res3[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT2ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT2BCAPTSEL;

  uint8_t res4[256];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH1SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH1BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH2SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH2BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH3SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH3BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH4SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH4BSEL;

  uint32_t UDMACH5SSEL;
  uint32_t UDMACH5BSEL;
  uint32_t UDMACH6SSEL;
  uint32_t UDMACH6BSEL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH7SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH7BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH8SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH8BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH9SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH9BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH10SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH10BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH11SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH11BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH12SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH12BSEL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH13BSEL;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH14BSEL;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH15BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH16SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH16BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH17SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH17BSEL;

  uint8_t res8[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH21SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH21BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH22SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH22BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH23SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH23BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH24SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH24BSEL;

  uint8_t res9[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT3ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT3BCAPTSEL;

  uint8_t res10[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXSEL0;

  uint8_t res11[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM3NMISEL0;

  uint8_t res12[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SSTMPSEL0;

  uint8_t res13[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRZSEL0;

  uint8_t res14[1276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t reservedSpace0:7;
      uint64_t SWEV1:1;
      uint64_t reservedSpace1:7;
      uint64_t SWEV2:1;
      uint64_t reservedSpace2:7;
      uint64_t SWEV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEV;

};

#define EVENT (*(volatile struct EVENT_tag *) 0x40083000)

struct FCFG1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICE_MINOR_REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_CONF_1;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV30;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCHF_CTRIM:8;
      uint64_t VTRIM_COARSE:4;
      uint64_t VTRIM_DIG:4;
      uint64_t ITRIM_DIG_LDO:2;
      uint64_t TRIMIREF:5;
      uint64_t TRIMMAG:4;
      uint64_t SET_RCOSC_HF_COARSE_RESISTOR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_OSC_BIAS_LDO_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMTEMP:6;
      uint64_t TRIMBOD_EXTMODE:5;
      uint64_t TRIMBOD_INTMODE:5;
      uint64_t VDDR_TRIM:5;
      uint64_t IPTAT_TRIM:2;
      uint64_t VDDR_OK_HYS:1;
      uint64_t VDDR_ENABLE_PG1:1;
      uint64_t BOD_BANDGAP_TRIM_CNF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_ANA_TRIM;

  uint8_t res3[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOT_NUMBER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_NUMBER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YCOORDINATE:16;
      uint64_t XCOORDINATE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COORDINATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSU:8;
      uint64_t PVSU:8;
      uint64_t ESU:8;
      uint64_t PSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_E_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVSU:12;
      uint64_t A_EXEZ_SETUP:4;
      uint64_t PV_ACCESS:8;
      uint64_t RVSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_C_E_P_R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVH2:8;
      uint64_t PVH:8;
      uint64_t RH:8;
      uint64_t PH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_P_R_PV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SM_FREQUENCY:12;
      uint64_t VSTAT:4;
      uint64_t SEQ:8;
      uint64_t EH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_EH_SEQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHV_E_STEP_HIGHT:16;
      uint64_t VHV_E_START:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_PP:16;
      uint64_t reservedSpace0:8;
      uint64_t PUMP_SU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGRAM_PW:16;
      uint64_t MAX_EP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PROG_EP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASE_PW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ERA_PW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHV_E:4;
      uint64_t reservedSpace0:4;
      uint64_t TRIM13_E:4;
      uint64_t reservedSpace1:4;
      uint64_t VHV_P:4;
      uint64_t reservedSpace2:4;
      uint64_t TRIM13_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VINH:8;
      uint64_t VCG2P5:8;
      uint64_t VHV_PV:4;
      uint64_t reservedSpace0:4;
      uint64_t TRIM13_PV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV_PV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t V_READ:8;
      uint64_t VWL_P:8;
      uint64_t VSL_P:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_V;

  uint8_t res5[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t PROTOCOL:4;
      uint64_t PKG:3;
      uint64_t SEQUENCE:4;
      uint64_t reservedSpace1:3;
      uint64_t VER:2;
      uint64_t PG_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USER_ID;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAIT_SYSCODE:8;
      uint64_t FLASH_SIZE:8;
      uint64_t TRIM_1P7:2;
      uint64_t MAX_EC_LEVEL:4;
      uint64_t DO_PRECOND:1;
      uint64_t EC_STEP_SIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OTP_DATA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_HIGH_EN_SEL:3;
      uint64_t DCDC_LOW_EN_SEL:3;
      uint64_t DEAD_TIME_TRIM:2;
      uint64_t DCDC_IPEAK:3;
      uint64_t DITHER_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t NANOAMP_RES_TRIM:6;
      uint64_t ATESTLF_UDIGLDO_IBIAS_TRIM:1;
      uint64_t SET_RCOSC_HF_FINE_RESISTOR:2;
      uint64_t reservedSpace1:1;
      uint64_t RCOSCHFCTRIMFRACT:5;
      uint64_t RCOSCHFCTRIMFRACT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA2_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM_DELTA:3;
      uint64_t reservedSpace0:5;
      uint64_t ITRIM_UDIGLDO:3;
      uint64_t ITRIM_DIGLDO_LOAD:2;
      uint64_t reservedSpace1:3;
      uint64_t GLDO_CURSRC:3;
      uint64_t reservedSpace2:5;
      uint64_t VDDR_TRIM_SLEEP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDO_TRIM;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_BLE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_BLE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_15_4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_15_4_1;

  uint8_t res8[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIN_AT_X_EXT_RD:3;
      uint64_t DIS_IDLE_EXT_RD:1;
      uint64_t DIS_STANDBY_EXT_RD:1;
      uint64_t STANDBY_PW_SEL_EXT_RD:2;
      uint64_t STANDBY_MODE_SEL_EXT_RD:1;
      uint64_t VIN_AT_X_INT_RD:3;
      uint64_t DIS_IDLE_INT_RD:1;
      uint64_t DIS_STANDBY_INT_RD:1;
      uint64_t STANDBY_PW_SEL_INT_RD:2;
      uint64_t STANDBY_MODE_SEL_INT_RD:1;
      uint64_t VIN_AT_X_EXT_WRT:3;
      uint64_t DIS_IDLE_EXT_WRT:1;
      uint64_t DIS_STANDBY_EXT_WRT:1;
      uint64_t STANDBY_PW_SEL_EXT_WRT:2;
      uint64_t STANDBY_MODE_SEL_EXT_WRT:1;
      uint64_t VIN_AT_X_INT_WRT:3;
      uint64_t DIS_IDLE_INT_WRT:1;
      uint64_t DIS_STANDBY_INT_WRT:1;
      uint64_t STANDBY_PW_SEL_INT_WRT:2;
      uint64_t STANDBY_MODE_SEL_INT_WRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OTP_DATA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMPVSLOPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRIMFRACT_SLOPE:8;
      uint64_t CTRIMFRACT_QUAD:8;
      uint64_t CTRIM:8;
      uint64_t FINE_RESISTOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSC_HF_TEMPCOMP;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MANUFACTURER_ID:12;
      uint64_t WAFER_ID:16;
      uint64_t PG_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICEPICK_DEVICE_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG1_REVISION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_PROGRAM_REV:8;
      uint64_t PO_TAIL_RES_TRIM:4;
      uint64_t PER_E:3;
      uint64_t PER_M:5;
      uint64_t RCOSC_HF_CRIM:8;
      uint64_t RCOSC_HF_ITUNE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_OTP_DATA;

  uint8_t res10[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO_CNT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCONF;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFANALDO_TRIM_OUTPUT:5;
      uint64_t IFDIGLDO_TRIM_OUTPUT:5;
      uint64_t INT2ADJ:4;
      uint64_t AAFCAP:2;
      uint64_t FF1ADJ:4;
      uint64_t INT3ADJ:4;
      uint64_t FF3ADJ:4;
      uint64_t FF2ADJ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_IF_ADC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCLF_RTUNE_TRIM:2;
      uint64_t RCOSCLF_CTUNE_TRIM:8;
      uint64_t XOSC_HF_COLUMN_Q12:16;
      uint64_t XOSC_HF_ROW_Q12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_OSC_TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:6;
      uint64_t PATRIMCOMPLETE_N:1;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_ABS_GAIN_TEMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_ABS_GAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_REL_GAIN_TEMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_REL_GAIN;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_ABS_OFFSET_TEMP1:8;
      uint64_t reservedSpace0:8;
      uint64_t SOC_ADC_REL_OFFSET_TEMP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_OFFSET_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_REF_VOLTAGE_TRIM_TEMP1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_REF_TRIM_AND_OFFSET_EXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPMRAMP1_TH:6;
      uint64_t IBIASCAP_LPTOHP_OL_CNT:4;
      uint64_t HPMRAMP3_HTH:6;
      uint64_t reservedSpace0:2;
      uint64_t HPMRAMP3_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_TH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADC_COMP_AMPTH_HPM:6;
      uint64_t reservedSpace1:2;
      uint64_t ADC_COMP_AMPTH_LPM:6;
      uint64_t reservedSpace2:2;
      uint64_t LPMUPDATE_HTM:6;
      uint64_t reservedSpace3:2;
      uint64_t LPMUPDATE_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_TH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBIASCAP_HPTOLP_OL_CNT:4;
      uint64_t CAP_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT_FINAL:8;
      uint64_t IBIAS_INIT:4;
      uint64_t IBIAS_OFFSET:4;
      uint64_t reservedSpace0:6;
      uint64_t AMPCOMP_REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_IBIASTHERM:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASS_VALUE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
      uint64_t RSSITRIMCOMPLETE_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMBOD_H:5;
      uint64_t reservedSpace0:3;
      uint64_t VDDR_TRIM_SLEEP_H:5;
      uint64_t reservedSpace1:3;
      uint64_t VDDR_TRIM_H:5;
      uint64_t reservedSpace2:3;
      uint64_t VDDR_TRIM_HH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t XOSC_OPTION:1;
      uint64_t XOSC_HF_FAST_START:2;
      uint64_t XOSCLF_CMIRRWR_RATIO:4;
      uint64_t XOSCLF_REGULATOR_TRIM:2;
      uint64_t ATESTLF_RCOSCLF_IBIAS_TRIM:1;
      uint64_t ADC_SH_MODE_EN:1;
      uint64_t ADC_SH_VBUF_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC_CONF;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLUX_CAP_0P4_TRIM:16;
      uint64_t FLUX_CAP_0P28_TRIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAC_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT:6;
      uint64_t HPM_IBIAS_WAIT_CNT:10;
      uint64_t DBLR_LOOP_FILTER_RESET_VOLTAGE:2;
      uint64_t LP_BUF_ITRIM:2;
      uint64_t HP_BUF_ITRIM:3;
      uint64_t PEAK_DET_ITRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_OTP_DATA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_20C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_35C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_50C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_65C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_80C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_95C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_110C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_125C;

};

#define FCFG1 (*(volatile struct FCFG1_tag *) 0x500010a0)

struct FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_MODE:1;
      uint64_t BUSY:1;
      uint64_t SAMHOLD_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t EFUSE_ERRCODE:5;
      uint64_t EFUSE_CRC_ERROR:1;
      uint64_t EFUSE_TIMEOUT:1;
      uint64_t EFUSE_BLANK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS_IDLE:1;
      uint64_t DIS_STANDBY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENABLE_SWINTF:1;
      uint64_t DIS_READACCESS:1;
      uint64_t DIS_EFUSECLK:1;
      uint64_t STANDBY_PW_SEL:2;
      uint64_t STANDBY_MODE_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCODE_START:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCODE_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECTORS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_SIZE;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWLOCK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWFLAG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWFLAG;

  uint8_t res2[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUMPWORD:16;
      uint64_t reservedSpace0:8;
      uint64_t INSTRUCTION:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROW:11;
      uint64_t BLOCK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EEN:1;
      uint64_t R:1;
      uint64_t P:1;
      uint64_t SPARE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAUPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATALOWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GATING:1;
      uint64_t reservedSpace0:2;
      uint64_t SLAVEPOWER:2;
      uint64_t reservedSpace1:3;
      uint64_t IDLEGATING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACCUMULATOR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTENABLE:4;
      uint64_t SYS_WS_READ_STATES:4;
      uint64_t SYS_REPAIR_EN:2;
      uint64_t SYS_DIEID_AUTOLOAD_EN:1;
      uint64_t EFC_FDI:1;
      uint64_t SYS_ECC_OVERRIDE_EN:1;
      uint64_t YS_ECC_SELF_TEST_EN:1;
      uint64_t OUTPUTENABLE:4;
      uint64_t EFC_AUTOLOAD_ERROR:1;
      uint64_t EFC_INSTRUCTION_ERROR:1;
      uint64_t EFC_INSTRUCTION_INFO:1;
      uint64_t EFC_SELF_TEST_ERROR:1;
      uint64_t SPARE:1;
      uint64_t DISROW0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOUNDARY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSEDAY:5;
      uint64_t EFUSEMONTH:4;
      uint64_t EFUSEYEAR:7;
      uint64_t ODPDAY:5;
      uint64_t ODPMONTH:4;
      uint64_t ODPYEAR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSERELEASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYS_WS_READ_STATES:4;
      uint64_t SYS_REPAIR_EN:2;
      uint64_t SYS_DIEID_AUTOLOAD_EN:1;
      uint64_t EFC_FCLRZ:1;
      uint64_t EFC_READY:1;
      uint64_t SYS_ECC_OVERRIDE_EN:1;
      uint64_t EFC_AUTOLOAD_ERROR:1;
      uint64_t EFC_INSTRUCTION_ERROR:1;
      uint64_t EFC_INSTRUCTION_INFO:1;
      uint64_t SYS_ECC_SELF_TEST_EN:1;
      uint64_t EFC_SELF_TEST_ERROR:1;
      uint64_t EFC_SELF_TEST_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEPINS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSECRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MARGIN:2;
      uint64_t SPARE:1;
      uint64_t DEBUG:1;
      uint64_t READCLOCK:4;
      uint64_t DATABIT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEREAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITECLOCK:9;
      uint64_t ITERATIONS:4;
      uint64_t VPPTOVDD:1;
      uint64_t CLOCKSTALL:16;
      uint64_t COMPAREDISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEPROGRAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:5;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEERROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROM0:1;
      uint64_t FROMN:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROM0:1;
      uint64_t FROMN:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWOBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CYCLES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELFTESTCYC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGNATURE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELFTESTSIGN;

  uint8_t res3[4016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RWAIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRDCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RM0:1;
      uint64_t RM1:1;
      uint64_t reservedSpace0:6;
      uint64_t RMBSEM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSPRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SUSP_IGNR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACCTL1;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t FSM_DONE:1;
      uint64_t RVF_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACSTAT;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROTL1DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADS:8;
      uint64_t BAGP:8;
      uint64_t OTPPROTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKPWR0:2;
      uint64_t BANKPWR1:2;
      uint64_t BANKPWR2:2;
      uint64_t BANKPWR3:2;
      uint64_t BANKPWR4:2;
      uint64_t BANKPWR5:2;
      uint64_t BANKPWR6:2;
      uint64_t BANKPWR7:2;
      uint64_t REG_PWRSAV:4;
      uint64_t reservedSpace0:4;
      uint64_t FSM_PWRSAV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBFALLBACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKRDY:1;
      uint64_t reservedSpace0:14;
      uint64_t PUMPRDY:1;
      uint64_t BANKBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPRDY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUMPPWR:2;
      uint64_t reservedSpace0:2;
      uint64_t PUMPRESET_PW:12;
      uint64_t PSLEEPTDIS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOCK:1;
      uint64_t PSUSP:1;
      uint64_t ESUSP:1;
      uint64_t VOLSTAT:1;
      uint64_t CSTAT:1;
      uint64_t INVDAT:1;
      uint64_t PGM:1;
      uint64_t ERS:1;
      uint64_t BUSY:1;
      uint64_t CV:1;
      uint64_t EV:1;
      uint64_t PCV:1;
      uint64_t PGV:1;
      uint64_t DBF:1;
      uint64_t ILA:1;
      uint64_t RVF:1;
      uint64_t RDVER:1;
      uint64_t RVSUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSTAT;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCOM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLOCK;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADCT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVREADCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHVCT_PV:4;
      uint64_t TRIM13_PV:4;
      uint64_t reservedSpace0:8;
      uint64_t VHVCT_E:4;
      uint64_t TRIM13_E:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t VHVCT_P:4;
      uint64_t TRIM13_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHVCT_READ:4;
      uint64_t reservedSpace0:12;
      uint64_t WCT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIN_CT:5;
      uint64_t reservedSpace0:3;
      uint64_t VCG2P5CT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVNVCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t VSL_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVSLP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VWLCT_P:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVWLCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE_EN:4;
      uint64_t EF_TEST:1;
      uint64_t reservedSpace0:3;
      uint64_t EF_CLRZ:1;
      uint64_t reservedSpace1:7;
      uint64_t BP_SEL:1;
      uint64_t WRITE_EN:1;
      uint64_t reservedSpace2:6;
      uint64_t CHAIN_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFT_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEFUSEDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSEDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t VIN_BY_PASS:1;
      uint64_t reservedSpace1:3;
      uint64_t VIN_AT_X:3;
      uint64_t reservedSpace2:1;
      uint64_t TRIM_0P8:4;
      uint64_t TRIM_1P7:2;
      uint64_t reservedSpace3:2;
      uint64_t TRIM_3P4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSEQPMP;

  uint8_t res8[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TEZ:1;
      uint64_t OTP:1;
      uint64_t TI_OTP:1;
      uint64_t PRECOL:1;
      uint64_t NOCOLRED:1;
      uint64_t reservedSpace1:1;
      uint64_t CTRLENZ:1;
      uint64_t reservedSpace2:7;
      uint64_t FLCLKEN:1;
      uint64_t RWAIT_FLCLK:1;
      uint64_t RWAIT2_FLCLK:1;
      uint64_t reservedSpace3:5;
      uint64_t ECBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSTROBES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V5PWRDNZ:1;
      uint64_t V3PWRDNZ:1;
      uint64_t reservedSpace0:6;
      uint64_t EXECUTEZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPSTROBES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FADDR;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_EN:1;
      uint64_t reservedSpace1:14;
      uint64_t WDATA_BLK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCBYTES31_24:8;
      uint64_t ECCBYTES23_16:8;
      uint64_t ECCBYTES15_08:8;
      uint64_t ECCBYTES07_00:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE_ECC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAFELV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSWSTAT;

  uint8_t res10[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_GLBCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t OTP_ACT:1;
      uint64_t TIOTP_ACT:1;
      uint64_t FSM_ACT:1;
      uint64_t reservedSpace1:1;
      uint64_t EXECUTEZ:1;
      uint64_t CTRLENZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV_DAT:1;
      uint64_t OVR_PUL_CNT:1;
      uint64_t NON_OP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMCMD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_OSU:8;
      uint64_t PGM_OSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_OSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t VSTAT_CNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_VSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_VSU:8;
      uint64_t PGM_VSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_VSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t ADD_EXZ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_CMP_VSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXE_VALD:8;
      uint64_t REP_VSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EX_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_RD_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PGM_OH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_P_OH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_OH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_OH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAV_P_PUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SAV_PPUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PGM_VH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_VH;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROG_PUL_WIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PRG_PW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ERA_PW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_PW;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAV_ERA_PUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SAV_ERA_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:3;
      uint64_t MODE:3;
      uint64_t SAV_ERA_MODE:3;
      uint64_t SAV_PGM_CMD:3;
      uint64_t SUBMODE:2;
      uint64_t ERA_SUBMODE:2;
      uint64_t PGM_SUBMODE:2;
      uint64_t RDV_SUBMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGM_ADDR:23;
      uint64_t PGM_BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PGM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_ADDR:23;
      uint64_t ERA_BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_PRG_PUL:12;
      uint64_t reservedSpace0:4;
      uint64_t BEG_EC_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PRG_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_ERA_PUL:12;
      uint64_t reservedSpace0:4;
      uint64_t MAX_EC_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EC_STEP_SIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STEP_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUL_CNTR:12;
      uint64_t reservedSpace0:4;
      uint64_t CUR_EC_LEVEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PUL_CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EC_STEP_HEIGHT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EC_STEP_HEIGHT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRIDE:1;
      uint64_t INV_DATA:1;
      uint64_t CMD_EN:1;
      uint64_t DIS_TST_EN:1;
      uint64_t PREC_STOP_EN:1;
      uint64_t PGM_SEC_COF_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t DBG_SHORT_ROW:4;
      uint64_t DO_REDU_COL:1;
      uint64_t reservedSpace1:2;
      uint64_t ONE_TIME_GOOD:1;
      uint64_t reservedSpace2:1;
      uint64_t RV_INT_EN:1;
      uint64_t RV_RES:1;
      uint64_t RV_SEC_EN:1;
      uint64_t RANDOM:1;
      uint64_t CMPV_ALLOWED:1;
      uint64_t ALL_BANKS:1;
      uint64_t FSM_INT_EN:1;
      uint64_t DO_PRECOND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ST_MACHINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLK_OTP:8;
      uint64_t BLK_TIOTP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_FLES;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_ENA:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_WR_ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ACC_PP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ACC_PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_EP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ACC_EP;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUR_ADDR:28;
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_OUT:4;
      uint64_t SECTOR:4;
      uint64_t FSM_SECTOR_EXTENSION:8;
      uint64_t SECT_ERASED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_CRC:12;
      uint64_t MOD_VERSION:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMC_REV_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ERR_BANK:4;
      uint64_t reservedSpace0:4;
      uint64_t FSM_ERR_ADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERR_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_PGM_MAXPUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PGM_MAXPUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMEXECUTE:5;
      uint64_t reservedSpace0:11;
      uint64_t SUSPEND_NOW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EXECUTE;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_SECTOR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_SECTOR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR2;

  uint8_t res16[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSLE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLE1;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSLP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLP1;

  uint8_t res18[264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAIN_NUM_BANK:4;
      uint64_t MAIN_BANK_WIDTH:12;
      uint64_t EE_NUM_BANK:4;
      uint64_t EE_BANK_WIDTH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_BANK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_TYPE1:4;
      uint64_t UERR:2;
      uint64_t AUTO_SUSP:2;
      uint64_t ECCA:1;
      uint64_t SIL3:1;
      uint64_t IFLUSH:1;
      uint64_t ROM:1;
      uint64_t EE_IN_MAIN:4;
      uint64_t CPU2:4;
      uint64_t MEM_MAP:1;
      uint64_t reservedSpace0:3;
      uint64_t FAMILY_TYPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_WRAPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_TYPE:4;
      uint64_t B1_TYPE:4;
      uint64_t B2_TYPE:4;
      uint64_t B3_TYPE:4;
      uint64_t B4_TYPE:4;
      uint64_t B5_TYPE:4;
      uint64_t B6_TYPE:4;
      uint64_t B7_TYPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_BNK_TYPE;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_START_ADDR:24;
      uint64_t B0_MUX_FACTOR:4;
      uint64_t B0_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B0_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B1_START_ADDR:24;
      uint64_t B1_MUX_FACTOR:4;
      uint64_t B1_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B1_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B2_START_ADDR:24;
      uint64_t B2_MUX_FACTOR:4;
      uint64_t B2_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B2_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B3_START_ADDR:24;
      uint64_t B3_MUX_FACTOR:4;
      uint64_t B3_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B3_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_START_ADDR:24;
      uint64_t B4_MUX_FACTOR:4;
      uint64_t B4_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B4_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B5_START_ADDR:24;
      uint64_t B5_MUX_FACTOR:4;
      uint64_t B5_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B5_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B6_START_ADDR:24;
      uint64_t B6_MUX_FACTOR:4;
      uint64_t B6_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B6_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B7_START_ADDR:24;
      uint64_t B7_MUX_FACTOR:4;
      uint64_t B7_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B7_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_SECT_SIZE:4;
      uint64_t reservedSpace0:12;
      uint64_t B0_NUM_SECTORS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B0_SSIZE0;

};

#define FLASH (*(volatile struct FLASH_tag *) 0x4003001c)

struct GPIO_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO1:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO2:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO4:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO5:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO6:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO8:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO9:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO10:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT11_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO12:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO13:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO14:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT15_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO16:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO17:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO18:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT19_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO20:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO21:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO22:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT23_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO24:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO25:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO26:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT27_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO28:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO29:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO30:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT31_28;

  uint8_t res0[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT31_0;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTSET31_0;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTCLR31_0;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTTGL31_0;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIN31_0;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOE31_0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGS31_0;

};

#define GPIO_0 (*(volatile struct GPIO_0_tag *) 0x40022000)

struct GPT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT0 (*(volatile struct GPT0_tag *) 0x40010000)

struct GPT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT1 (*(volatile struct GPT1_tag *) 0x40011000)

struct GPT2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT2 (*(volatile struct GPT2_tag *) 0x40012000)

struct GPT3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT3 (*(volatile struct GPT3_tag *) 0x40013000)

struct I2S0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCLK_SRC:2;
      uint64_t WCLK_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWCLKSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t END_FRAME_IDX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFDMACFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD0:2;
      uint64_t reservedSpace0:2;
      uint64_t AD1:2;
      uint64_t reservedSpace1:2;
      uint64_t AD2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFDIRCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORD_LEN:5;
      uint64_t DUAL_PHASE:1;
      uint64_t SMPL_EDGE:1;
      uint64_t MEM_LEN_24:1;
      uint64_t DATA_DELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFFMTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PULSE_WIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFPWMVALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFINPTRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFINPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFOUTPTRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFOUTPTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STMP_EN:1;
      uint64_t IN_RDY:1;
      uint64_t OUT_RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNTCAPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNTCAPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN_START_WCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPINTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT_START_WCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPOUTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_INC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXPERMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNTCAPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNTCAPT1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQCLR;

};

#define I2S0 (*(volatile struct I2S0_tag *) 0x40021000)

struct IOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG31;

};

#define IOC (*(volatile struct IOC_tag *) 0x40081000)

struct PRCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULDO:1;
      uint64_t reservedSpace0:1;
      uint64_t MCU_VD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VDCTL;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOAD:1;
      uint64_t LOAD_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLOADCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCCLKG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VIMSCLKG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGDS;

  uint8_t res2[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUCLKDIV;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SBCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t WCLK_PHASE:2;
      uint64_t SMPL_ON_POSEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SMCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SBCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SWCLKDIV;

  uint8_t res4[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MCU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWRESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_STAT:1;
      uint64_t LOCKUP_STAT:1;
      uint64_t WR_TO_PINRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARMRESET;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC_ON:1;
      uint64_t SERIAL_ON:1;
      uint64_t PERIPH_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0SERIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0PERIPH;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC_ON:1;
      uint64_t SERIAL_ON:1;
      uint64_t PERIPH_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0SERIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0PERIPH;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CPU_ON:1;
      uint64_t RFC_ON:1;
      uint64_t VIMS_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1CPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1VIMS;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CPU_ON:1;
      uint64_t RFC_ON:1;
      uint64_t VIMS_MODE:1;
      uint64_t BUS_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1BUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1CPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1VIMS;

  uint8_t res10[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCMODESEL;

  uint8_t res11[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIMS_bitfield:2;
      uint64_t RFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMRETEN;

  uint8_t res12[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMHWOPT;

};

#define PRCM (*(volatile struct PRCM_tag *) 0x40082000)

struct RFC_DBELL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDSTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FSCA:1;
      uint64_t MDMDONE:1;
      uint64_t MDMIN:1;
      uint64_t MDMOUT:1;
      uint64_t MDMSOFT:1;
      uint64_t TRCTK:1;
      uint64_t reservedSpace1:1;
      uint64_t RFEDONE:1;
      uint64_t RFESOFT0:1;
      uint64_t RFESOFT1:1;
      uint64_t RFESOFT2:1;
      uint64_t RATCH0:1;
      uint64_t RATCH1:1;
      uint64_t RATCH2:1;
      uint64_t RATCH3:1;
      uint64_t RATCH4:1;
      uint64_t RATCH5:1;
      uint64_t RATCH6:1;
      uint64_t RATCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFHWIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FSCA:1;
      uint64_t MDMDONE:1;
      uint64_t MDMIN:1;
      uint64_t MDMOUT:1;
      uint64_t MDMSOFT:1;
      uint64_t TRCTK:1;
      uint64_t reservedSpace1:1;
      uint64_t RFEDONE:1;
      uint64_t RFESOFT0:1;
      uint64_t RFESOFT1:1;
      uint64_t RFESOFT2:1;
      uint64_t RATCH0:1;
      uint64_t RATCH1:1;
      uint64_t RATCH2:1;
      uint64_t RATCH3:1;
      uint64_t RATCH4:1;
      uint64_t RATCH5:1;
      uint64_t RATCH6:1;
      uint64_t RATCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFHWIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEISL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFACKIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPOCTL0:4;
      uint64_t GPOCTL1:4;
      uint64_t GPOCTL2:4;
      uint64_t GPOCTL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSGPOCTL;

};

#define RFC_DBELL (*(volatile struct RFC_DBELL_tag *) 0x40041000)

struct RFC_PWR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC:1;
      uint64_t CPE:1;
      uint64_t CPERAM:1;
      uint64_t MDM:1;
      uint64_t MDMRAM:1;
      uint64_t RFE:1;
      uint64_t RFERAM:1;
      uint64_t RAT:1;
      uint64_t PHA:1;
      uint64_t FSCA:1;
      uint64_t RFCTRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMCLKEN;

};

#define RFC_PWR (*(volatile struct RFC_PWR_tag *) 0x40040000)

struct RFC_RAT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCNT;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH0VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH1VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH2VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH3VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH4VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH5VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH6VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH7VAL;

};

#define RFC_RAT (*(volatile struct RFC_RAT_tag *) 0x40043004)

struct SMPH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH31;

  uint8_t res0[1920];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK31;

};

#define SMPH (*(volatile struct SMPH_tag *) 0x40084000)

struct SSI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t SSE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIM:1;
      uint64_t RTIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORRIS:1;
      uint64_t RTRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORMIS:1;
      uint64_t RTMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSI0 (*(volatile struct SSI0_tag *) 0x40000000)

struct SSI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t SSE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIM:1;
      uint64_t RTIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORRIS:1;
      uint64_t RTRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORMIS:1;
      uint64_t RTMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSI1 (*(volatile struct SSI1_tag *) 0x40008000)

struct TRNG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
      uint64_t reservedSpace0:29;
      uint64_t NEED_CLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_MODE:1;
      uint64_t NO_LFSR_FB:1;
      uint64_t reservedSpace1:7;
      uint64_t TRNG_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t STARTUP_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIN_REFILL_CYCLES:8;
      uint64_t SMPL_DIV:4;
      uint64_t reservedSpace0:4;
      uint64_t MAX_REFILL_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALARM_THR:8;
      uint64_t reservedSpace0:8;
      uint64_t SHUTDOWN_THR:5;
      uint64_t reservedSpace1:3;
      uint64_t SHUTDOWN_CNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FROEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRODETUNE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_FLAGS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMSTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_80_64:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR2;

  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t NR_OF_FROS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIP_NUM:8;
      uint64_t EIP_NUM_COMPL:8;
      uint64_t HW_PATCH_LVL:4;
      uint64_t HW_MINOR_VER:4;
      uint64_t HW_MAJOR_VER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVER0;

  uint8_t res1[8024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTATMASK;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVER1;

  uint8_t res3[8];

  uint32_t IRQSET;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWRESET;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTAT;

};

#define TRNG (*(volatile struct TRNG_tag *) 0x40028000)

struct UDMA0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERENABLE:1;
      uint64_t reservedSpace0:3;
      uint64_t STATE:4;
      uint64_t reservedSpace1:8;
      uint64_t TOTALCHANNELS:5;
      uint64_t reservedSpace2:7;
      uint64_t TEST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERENABLE:1;
      uint64_t reservedSpace0:4;
      uint64_t PRTOCTRL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BASEPTR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASEPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAITONREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETBURST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARBURST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETREQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARREQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHANNELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHANNELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHNLPRIALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHNLPRIALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHNLPRIORITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHNLPRIORITY;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERROR;

  uint8_t res1[1204];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQDONE;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DONEMASK;

};

#define UDMA0 (*(volatile struct UDMA0_tag *) 0x40020000)

struct VIMS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t INV:1;
      uint64_t MODE_CHANGING:1;
      uint64_t SYSBUS_LB_DIS:1;
      uint64_t IDCODE_LB_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t PREF_EN:1;
      uint64_t ARB_CFG:1;
      uint64_t SYSBUS_LB_DIS:1;
      uint64_t IDCODE_LB_DIS:1;
      uint64_t reservedSpace0:23;
      uint64_t DYN_CG_EN:1;
      uint64_t STATS_EN:1;
      uint64_t STATS_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

};

#define VIMS (*(volatile struct VIMS_tag *) 0x40034000)

struct WDT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTLOAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t INTTYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTICR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  uint8_t res0[1024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUSE_INTR:1;
      uint64_t CAUSE_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_CAUS;

  uint8_t res1[2016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

};

#define WDT_0 (*(volatile struct WDT_0_tag *) 0x40080000)

struct WORKFLASH_IF_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFASZR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFRWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFSTR;

};

#define WORKFLASH_IF_1 (*(volatile struct WORKFLASH_IF_1_tag *) 0x200e0000)

struct FLASH_IF_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASZ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FASZR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSYNDN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BE:1;
      uint64_t BS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBFCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIE:1;
      uint64_t HANGIE:1;
      uint64_t ERRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIF:1;
      uint64_t HANGIF:1;
      uint64_t ERRIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIC:1;
      uint64_t HANGIC:1;
      uint64_t ERRIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FICLR;

  uint8_t res2[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRMM:10;
      uint64_t reservedSpace0:6;
      uint64_t TTRMM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRTRMM;

};

#define FLASH_IF_1 (*(volatile struct FLASH_IF_1_tag *) 0x40000000)

struct UNIQUE_ID_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t UID:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR1;

};

#define UNIQUE_ID_1 (*(volatile struct UNIQUE_ID_1_tag *) 0x40000200)

struct ECC_CAPTURE_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRAD:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FERRAD;

};

#define ECC_CAPTURE_1 (*(volatile struct ECC_CAPTURE_1_tag *) 0x40000300)

struct CRG_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MOSCE:1;
      uint64_t reservedSpace1:1;
      uint64_t SOSCE:1;
      uint64_t PLLE:1;
      uint64_t RCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCM_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MORDY:1;
      uint64_t reservedSpace1:1;
      uint64_t SORDY:1;
      uint64_t PLRDY:1;
      uint64_t RCM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCM_STR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STM:2;
      uint64_t DSTM:1;
      uint64_t reservedSpace0:1;
      uint64_t SPL:1;
      uint64_t reservedSpace1:11;
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STB_CTL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PONR:1;
      uint64_t INITX:1;
      uint64_t reservedSpace0:2;
      uint64_t SWDT:1;
      uint64_t HWDT:1;
      uint64_t CSVR:1;
      uint64_t FCSR:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RST_STR;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BSC_PSR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC0_PSR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC1:2;
      uint64_t reservedSpace0:2;
      uint64_t APBC1RST:1;
      uint64_t reservedSpace1:2;
      uint64_t APBC1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC1_PSR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC2:2;
      uint64_t reservedSpace0:2;
      uint64_t APBC2RST:1;
      uint64_t reservedSpace1:2;
      uint64_t APBC2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC2_PSR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWDS:2;
      uint64_t reservedSpace0:5;
      uint64_t TESTB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SWC_PSR;

  uint8_t res7[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TTC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TTC_PSR;

  uint8_t res8[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MOWT:4;
      uint64_t SOWT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSW_TMR;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POWT:3;
      uint64_t reservedSpace0:1;
      uint64_t PINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PSW_TMR;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLM:4;
      uint64_t PLLK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL1;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL2;

  uint8_t res12[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MCSVE:1;
      uint64_t SCSVE:1;
      uint64_t reservedSpace0:6;
      uint64_t FCSDE:1;
      uint64_t FCSRE:1;
      uint64_t reservedSpace1:2;
      uint64_t FCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CSV_CTL;

  uint8_t res13[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCMF:1;
      uint64_t SCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSV_STR;

  uint8_t res14[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWH_CTL;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWL_CTL;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWD_CTL;

  uint8_t res17[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DPSWBE:1;
      uint64_t reservedSpace1:1;
      uint64_t DPHWBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DBWDT_CTL;

  uint8_t res18[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSE:1;
      uint64_t SCSE:1;
      uint64_t PCSE:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_ENR;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSI:1;
      uint64_t SCSI:1;
      uint64_t PCSI:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_STR;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSC:1;
      uint64_t SCSC:1;
      uint64_t PCSC:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_CLR;

};

#define CRG_1 (*(volatile struct CRG_1_tag *) 0x40010000)

struct CRTRIM_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCR_PSR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCR_FTRM;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCR_TTRM;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRMLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR_RLR;

};

#define CRTRIM_1 (*(volatile struct CRTRIM_1_tag *) 0x4002e000)

struct SWWDT_1_tag
{
  uint32_t WDOGLOAD;
  uint32_t WDOGVALUE;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t TWD:2;
      uint64_t SPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGCONTROL;

  uint8_t res0[3];

  uint32_t WDOGINTCLR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGRIS;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGSPMC;

  uint8_t res2[3047];

  uint32_t WDOGLOCK;
};

#define SWWDT_1 (*(volatile struct SWWDT_1_tag *) 0x40012000)

struct HWWDT_1_tag
{
  uint32_t WDG_LDR;
  uint32_t WDG_VLR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDG_CTL;

  uint8_t res0[3];

  uint8_t WDG_ICL;
  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDG_RIS;

  uint8_t res2[3055];

  uint32_t WDG_LCK;
};

#define HWWDT_1 (*(volatile struct HWWDT_1_tag *) 0x40011000)

struct DTIM_1_tag
{
  uint32_t TIMER1LOAD;
  uint32_t TIMER1VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OneShot:1;
      uint64_t TimerSize:1;
      uint64_t TimerPre:2;
      uint64_t reservedSpace0:1;
      uint64_t IntEnable:1;
      uint64_t TimerMode:1;
      uint64_t TimerEn:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1CONTROL;

  uint32_t TIMER1INTCLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1MIS;

  uint32_t TIMER1BGLOAD;
  uint8_t res0[4];

  uint32_t TIMER2LOAD;
  uint32_t TIMER2VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OneShot:1;
      uint64_t TimerSize:1;
      uint64_t TimerPre:2;
      uint64_t reservedSpace0:1;
      uint64_t IntEnable:1;
      uint64_t TimerMode:1;
      uint64_t TimerEn:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2CONTROL;

  uint32_t TIMER2INTCLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2MIS;

  uint32_t TIMER2BGLOAD;
};

#define DTIM_1 (*(volatile struct DTIM_1_tag *) 0x40015000)

struct BTIOSEL03_1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL01:4;
      uint64_t SEL23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL0123;

};

#define BTIOSEL03_1 (*(volatile struct BTIOSEL03_1_tag *) 0x40025100)

struct BTIOSEL47_1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL45:4;
      uint64_t SEL67:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL4567;

};

#define BTIOSEL47_1 (*(volatile struct BTIOSEL47_1_tag *) 0x40025300)

struct BTIOSEL8B_1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL89:4;
      uint64_t SELAB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL89AB;

};

#define BTIOSEL8B_1 (*(volatile struct BTIOSEL8B_1_tag *) 0x40025500)

struct BTIOSELCF_1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SELCD:4;
      uint64_t SELEF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSELCDEF;

};

#define BTIOSELCF_1 (*(volatile struct BTIOSELCF_1_tag *) 0x40025700)

struct SBSSR_1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SSSR0:1;
      uint64_t SSSR1:1;
      uint64_t SSSR2:1;
      uint64_t SSSR3:1;
      uint64_t SSSR4:1;
      uint64_t SSSR5:1;
      uint64_t SSSR6:1;
      uint64_t SSSR7:1;
      uint64_t SSSR8:1;
      uint64_t SSSR9:1;
      uint64_t SSSR10:1;
      uint64_t SSSR11:1;
      uint64_t SSSR12:1;
      uint64_t SSSR13:1;
      uint64_t SSSR14:1;
      uint64_t SSSR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSSSR;

};

#define SBSSR_1 (*(volatile struct SBSSR_1_tag *) 0x40025ffc)

struct QPRC0_1_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC0_1 (*(volatile struct QPRC0_1_tag *) 0x40026000)

struct QPRC1_1_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC1_1 (*(volatile struct QPRC1_1_tag *) 0x40026040)

struct QPRC2_1_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC2_1 (*(volatile struct QPRC2_1_tag *) 0x40026080)

struct QPRC3_1_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC3_1 (*(volatile struct QPRC3_1_tag *) 0x400260c0)

struct QPRC0_NF_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC0_NF_1 (*(volatile struct QPRC0_NF_1_tag *) 0x40026100)

struct QPRC1_NF_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC1_NF_1 (*(volatile struct QPRC1_NF_1_tag *) 0x40026110)

struct QPRC2_NF_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC2_NF_1 (*(volatile struct QPRC2_NF_1_tag *) 0x40026120)

struct QPRC3_NF_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC3_NF_1 (*(volatile struct QPRC3_NF_1_tag *) 0x40026130)

struct ADC0_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC0_1 (*(volatile struct ADC0_1_tag *) 0x40027000)

struct ADC1_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC1_1 (*(volatile struct ADC1_1_tag *) 0x40027100)

struct ADC2_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC2_1 (*(volatile struct ADC2_1_tag *) 0x40027200)

struct DAC0_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAE:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t DAC10:1;
      uint64_t DDAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DACR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DA:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DADR;

};

#define DAC0_1 (*(volatile struct DAC0_1_tag *) 0x40033000)

struct DAC1_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAE:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t DAC10:1;
      uint64_t DDAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DACR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DA:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DADR;

};

#define DAC1_1 (*(volatile struct DAC1_1_tag *) 0x40033008)

struct EXTI_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN0:1;
      uint64_t EN1:1;
      uint64_t EN2:1;
      uint64_t EN3:1;
      uint64_t EN4:1;
      uint64_t EN5:1;
      uint64_t EN6:1;
      uint64_t EN7:1;
      uint64_t EN8:1;
      uint64_t EN9:1;
      uint64_t EN10:1;
      uint64_t EN11:1;
      uint64_t EN12:1;
      uint64_t EN13:1;
      uint64_t EN14:1;
      uint64_t EN15:1;
      uint64_t EN16:1;
      uint64_t EN17:1;
      uint64_t EN18:1;
      uint64_t EN19:1;
      uint64_t EN20:1;
      uint64_t EN21:1;
      uint64_t EN22:1;
      uint64_t EN23:1;
      uint64_t EN24:1;
      uint64_t EN25:1;
      uint64_t EN26:1;
      uint64_t EN27:1;
      uint64_t EN28:1;
      uint64_t EN29:1;
      uint64_t EN30:1;
      uint64_t EN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ER0:1;
      uint64_t ER1:1;
      uint64_t ER2:1;
      uint64_t ER3:1;
      uint64_t ER4:1;
      uint64_t ER5:1;
      uint64_t ER6:1;
      uint64_t ER7:1;
      uint64_t ER8:1;
      uint64_t ER9:1;
      uint64_t ER10:1;
      uint64_t ER11:1;
      uint64_t ER12:1;
      uint64_t ER13:1;
      uint64_t ER14:1;
      uint64_t ER15:1;
      uint64_t ER16:1;
      uint64_t ER17:1;
      uint64_t ER18:1;
      uint64_t ER19:1;
      uint64_t ER20:1;
      uint64_t ER21:1;
      uint64_t ER22:1;
      uint64_t ER23:1;
      uint64_t ER24:1;
      uint64_t ER25:1;
      uint64_t ER26:1;
      uint64_t ER27:1;
      uint64_t ER28:1;
      uint64_t ER29:1;
      uint64_t ER30:1;
      uint64_t ER31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECL0:1;
      uint64_t ECL1:1;
      uint64_t ECL2:1;
      uint64_t ECL3:1;
      uint64_t ECL4:1;
      uint64_t ECL5:1;
      uint64_t ECL6:1;
      uint64_t ECL7:1;
      uint64_t ECL8:1;
      uint64_t ECL9:1;
      uint64_t ECL10:1;
      uint64_t ECL11:1;
      uint64_t ECL12:1;
      uint64_t ECL13:1;
      uint64_t ECL14:1;
      uint64_t ECL15:1;
      uint64_t ECL16:1;
      uint64_t ECL17:1;
      uint64_t ECL18:1;
      uint64_t ECL19:1;
      uint64_t ECL20:1;
      uint64_t ECL21:1;
      uint64_t ECL22:1;
      uint64_t ECL23:1;
      uint64_t ECL24:1;
      uint64_t ECL25:1;
      uint64_t ECL26:1;
      uint64_t ECL27:1;
      uint64_t ECL28:1;
      uint64_t ECL29:1;
      uint64_t ECL30:1;
      uint64_t ECL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LA0:1;
      uint64_t LB0:1;
      uint64_t LA1:1;
      uint64_t LB1:1;
      uint64_t LA2:1;
      uint64_t LB2:1;
      uint64_t LA3:1;
      uint64_t LB3:1;
      uint64_t LA4:1;
      uint64_t LB4:1;
      uint64_t LA5:1;
      uint64_t LB5:1;
      uint64_t LA6:1;
      uint64_t LB6:1;
      uint64_t LA7:1;
      uint64_t LB7:1;
      uint64_t LA8:1;
      uint64_t LB8:1;
      uint64_t LA9:1;
      uint64_t LB9:1;
      uint64_t LA10:1;
      uint64_t LB10:1;
      uint64_t LA11:1;
      uint64_t LB11:1;
      uint64_t LA12:1;
      uint64_t LB12:1;
      uint64_t LA13:1;
      uint64_t LB13:1;
      uint64_t LA14:1;
      uint64_t LB14:1;
      uint64_t LA15:1;
      uint64_t LB15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LA16:1;
      uint64_t LB16:1;
      uint64_t LA17:1;
      uint64_t LB17:1;
      uint64_t LA18:1;
      uint64_t LB18:1;
      uint64_t LA19:1;
      uint64_t LB19:1;
      uint64_t LA20:1;
      uint64_t LB20:1;
      uint64_t LA21:1;
      uint64_t LB21:1;
      uint64_t LA22:1;
      uint64_t LB22:1;
      uint64_t LA23:1;
      uint64_t LB23:1;
      uint64_t LA24:1;
      uint64_t LB24:1;
      uint64_t LA25:1;
      uint64_t LB25:1;
      uint64_t LA26:1;
      uint64_t LB26:1;
      uint64_t LA27:1;
      uint64_t LB27:1;
      uint64_t LA28:1;
      uint64_t LB28:1;
      uint64_t LA29:1;
      uint64_t LB29:1;
      uint64_t LA30:1;
      uint64_t LB30:1;
      uint64_t LA31:1;
      uint64_t LB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELVR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NMIRR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NMICL;

};

#define EXTI_1 (*(volatile struct EXTI_1_tag *) 0x40030000)

struct INTREQ_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBEP1:1;
      uint64_t USBEP2:1;
      uint64_t USBEP3:1;
      uint64_t USBEP4:1;
      uint64_t USBEP5:1;
      uint64_t ADCSCAN0:1;
      uint64_t ADCSCAN1:1;
      uint64_t ADCSCAN2:1;
      uint64_t IRQ0BT0:1;
      uint64_t IRQ0BT2:1;
      uint64_t IRQ0BT4:1;
      uint64_t IRQ0BT6:1;
      uint64_t MFS0RX:1;
      uint64_t MFS0TX:1;
      uint64_t MFS1RX:1;
      uint64_t MFS1TX:1;
      uint64_t MFS2RX:1;
      uint64_t MFS2TX:1;
      uint64_t MFS3RX:1;
      uint64_t MFS3TX:1;
      uint64_t MFS4RX:1;
      uint64_t MFS4TX:1;
      uint64_t MFS5RX:1;
      uint64_t MFS5TX:1;
      uint64_t MFS6RX:1;
      uint64_t MFS6TX:1;
      uint64_t MFS7RX:1;
      uint64_t MFS7TX:1;
      uint64_t EXINT0:1;
      uint64_t EXINT1:1;
      uint64_t EXINT2:1;
      uint64_t EXINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRQSEL;

  uint8_t res0[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ODDPKS0:1;
      uint64_t ODDPKS1:1;
      uint64_t ODDPKS2:1;
      uint64_t ODDPKS3:1;
      uint64_t ODDPKS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ODDPKS;

  uint8_t res1[255];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ003SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ004SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ005SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ006SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ007SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ008SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ009SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ010SEL;

  uint8_t res2[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
      uint64_t HWINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXC02MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ000MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWWDTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ001MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ002MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ003MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ004MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ005MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ006MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ007MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ008MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ009MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ010MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ011MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ012MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ013MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ014MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ015MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ016MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ017MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ018MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ019MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ020MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ021MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ022MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ023MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ024MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ025MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ026MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ027MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ028MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ029MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ030MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ031MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ032MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ033MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ034MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ035MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ036MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ037MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ038MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ039MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ040MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ041MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ042MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ043MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ044MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ045MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ046MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMINT1:1;
      uint64_t TIMINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ047MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ048MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMEMCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ049MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ050MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ051MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ052MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ053MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ054MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ055MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ056MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ057MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ058MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCINT:1;
      uint64_t SOSCINT:1;
      uint64_t MPLLINT:1;
      uint64_t UPLLINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ059MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ060MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ061MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ062MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ063MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ064MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ065MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ066MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ067MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ068MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ069MON;

