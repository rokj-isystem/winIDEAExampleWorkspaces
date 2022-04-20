#include <stdint.h>

struct System_Control_Space_System_Control_Block_0_0_tag
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

#define System_Control_Space_System_Control_Block_0_0 (*(volatile struct System_Control_Space_System_Control_Block_0_0_tag *) 0xe000ed00)

struct System_Control_Space_System_Control_and_ID_0_0_tag
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

#define System_Control_Space_System_Control_and_ID_0_0 (*(volatile struct System_Control_Space_System_Control_and_ID_0_0_tag *) 0xe000e004)

struct System_Control_Space_NVIC_0_0_tag
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

#define System_Control_Space_NVIC_0_0 (*(volatile struct System_Control_Space_NVIC_0_0_tag *) 0xe000e100)

struct System_Control_Space_SysTick_0_0_tag
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

#define System_Control_Space_SysTick_0_0 (*(volatile struct System_Control_Space_SysTick_0_0_tag *) 0xe000e010)

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

struct HSMCI_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_TDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:1;
      uint64_t reservedSpace1:3;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CFG;

  uint8_t res1[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_WPSR;

  uint8_t res2[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_255;

};

#define HSMCI_0_0 (*(volatile struct HSMCI_0_0_tag *) 0x40000000)

struct SSC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace1:5;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_CMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t LOOP:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t reservedSpace2:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace3:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t reservedSpace0:4;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t DATDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t FSDEN:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace2:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_THR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RC0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
      uint64_t reservedSpace2:4;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IMR;

  uint8_t res2[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_WPMR;

  uint32_t SSC_WPSR;
};

#define SSC_0 (*(volatile struct SSC_0_tag *) 0x40004000)

struct SPI0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIEN:1;
      uint64_t SPIDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:16;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR:1;
      uint64_t PS:1;
      uint64_t PCSDEC:1;
      uint64_t reservedSpace0:1;
      uint64_t MODFDIS:1;
      uint64_t WDRBT:1;
      uint64_t reservedSpace1:1;
      uint64_t LLB:1;
      uint64_t reservedSpace2:8;
      uint64_t PCS:4;
      uint64_t reservedSpace3:4;
      uint64_t DLYBCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:16;
      uint64_t PCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:16;
      uint64_t PCS:4;
      uint64_t reservedSpace0:4;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
      uint64_t reservedSpace1:5;
      uint64_t SPIENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IMR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_3;

  uint8_t res1[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_WPSR;

};

#define SPI0_0 (*(volatile struct SPI0_0_tag *) 0x40008000)

struct TWI0_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_THR;

  uint8_t res1[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_PTSR;

};

#define TWI0_0_0 (*(volatile struct TWI0_0_0_tag *) 0x4008c000)

struct TWI1_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_THR;

  uint8_t res1[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_PTSR;

};

#define TWI1_0_0 (*(volatile struct TWI1_0_0_tag *) 0x40090000)

struct PWM_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:8;
      uint64_t PREA:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVB:8;
      uint64_t PREB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:1;
      uint64_t SYNC1:1;
      uint64_t SYNC2:1;
      uint64_t SYNC3:1;
      uint64_t SYNC4:1;
      uint64_t SYNC5:1;
      uint64_t SYNC6:1;
      uint64_t SYNC7:1;
      uint64_t reservedSpace0:8;
      uint64_t UPDM:2;
      uint64_t reservedSpace1:2;
      uint64_t PTRM:1;
      uint64_t PTRCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCM;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDULOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPR:4;
      uint64_t UPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUPUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OOVH0:1;
      uint64_t OOVH1:1;
      uint64_t OOVH2:1;
      uint64_t OOVH3:1;
      uint64_t OOVH4:1;
      uint64_t OOVH5:1;
      uint64_t OOVH6:1;
      uint64_t OOVH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OOVL0:1;
      uint64_t OOVL1:1;
      uint64_t OOVL2:1;
      uint64_t OOVL3:1;
      uint64_t OOVL4:1;
      uint64_t OOVL5:1;
      uint64_t OOVL6:1;
      uint64_t OOVL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OOV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSH0:1;
      uint64_t OSH1:1;
      uint64_t OSH2:1;
      uint64_t OSH3:1;
      uint64_t OSH4:1;
      uint64_t OSH5:1;
      uint64_t OSH6:1;
      uint64_t OSH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSL0:1;
      uint64_t OSL1:1;
      uint64_t OSL2:1;
      uint64_t OSL3:1;
      uint64_t OSL4:1;
      uint64_t OSL5:1;
      uint64_t OSL6:1;
      uint64_t OSL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSH0:1;
      uint64_t OSSH1:1;
      uint64_t OSSH2:1;
      uint64_t OSSH3:1;
      uint64_t OSSH4:1;
      uint64_t OSSH5:1;
      uint64_t OSSH6:1;
      uint64_t OSSH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSSL0:1;
      uint64_t OSSL1:1;
      uint64_t OSSL2:1;
      uint64_t OSSL3:1;
      uint64_t OSSL4:1;
      uint64_t OSSL5:1;
      uint64_t OSSL6:1;
      uint64_t OSSL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCH0:1;
      uint64_t OSCH1:1;
      uint64_t OSCH2:1;
      uint64_t OSCH3:1;
      uint64_t OSCH4:1;
      uint64_t OSCH5:1;
      uint64_t OSCH6:1;
      uint64_t OSCH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSCL0:1;
      uint64_t OSCL1:1;
      uint64_t OSCL2:1;
      uint64_t OSCL3:1;
      uint64_t OSCL4:1;
      uint64_t OSCL5:1;
      uint64_t OSCL6:1;
      uint64_t OSCL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSUPH0:1;
      uint64_t OSSUPH1:1;
      uint64_t OSSUPH2:1;
      uint64_t OSSUPH3:1;
      uint64_t OSSUPH4:1;
      uint64_t OSSUPH5:1;
      uint64_t OSSUPH6:1;
      uint64_t OSSUPH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSSUPL0:1;
      uint64_t OSSUPL1:1;
      uint64_t OSSUPL2:1;
      uint64_t OSSUPL3:1;
      uint64_t OSSUPL4:1;
      uint64_t OSSUPL5:1;
      uint64_t OSSUPL6:1;
      uint64_t OSSUPL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSSUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCUPH0:1;
      uint64_t OSCUPH1:1;
      uint64_t OSCUPH2:1;
      uint64_t OSCUPH3:1;
      uint64_t OSCUPH4:1;
      uint64_t OSCUPH5:1;
      uint64_t OSCUPH6:1;
      uint64_t OSCUPH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSCUPL0:1;
      uint64_t OSCUPL1:1;
      uint64_t OSCUPL2:1;
      uint64_t OSCUPL3:1;
      uint64_t OSCUPL4:1;
      uint64_t OSCUPL5:1;
      uint64_t OSCUPL6:1;
      uint64_t OSCUPL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSCUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPOL:8;
      uint64_t FMOD:8;
      uint64_t FFIL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIV:8;
      uint64_t FS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPVH0:1;
      uint64_t FPVH1:1;
      uint64_t FPVH2:1;
      uint64_t FPVH3:1;
      uint64_t FPVH4:1;
      uint64_t FPVH5:1;
      uint64_t FPVH6:1;
      uint64_t FPVH7:1;
      uint64_t reservedSpace0:8;
      uint64_t FPVL0:1;
      uint64_t FPVL1:1;
      uint64_t FPVL2:1;
      uint64_t FPVL3:1;
      uint64_t FPVL4:1;
      uint64_t FPVL5:1;
      uint64_t FPVL6:1;
      uint64_t FPVL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPE0:8;
      uint64_t FPE1:8;
      uint64_t FPE2:8;
      uint64_t FPE3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPE4:8;
      uint64_t FPE5:8;
      uint64_t FPE6:8;
      uint64_t FPE7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPE2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t CSEL3:1;
      uint64_t CSEL4:1;
      uint64_t CSEL5:1;
      uint64_t CSEL6:1;
      uint64_t CSEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ELMR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t CSEL3:1;
      uint64_t CSEL4:1;
      uint64_t CSEL5:1;
      uint64_t CSEL6:1;
      uint64_t CSEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ELMR_1;

  uint8_t res2[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCEN0:1;
      uint64_t GCEN1:1;
      uint64_t GCEN2:1;
      uint64_t GCEN3:1;
      uint64_t reservedSpace0:12;
      uint64_t DOWN0:1;
      uint64_t DOWN1:1;
      uint64_t DOWN2:1;
      uint64_t DOWN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SMMR;

  uint8_t res3[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPCMD:2;
      uint64_t WPRG0:1;
      uint64_t WPRG1:1;
      uint64_t WPRG2:1;
      uint64_t WPRG3:1;
      uint64_t WPRG4:1;
      uint64_t WPRG5:1;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPSWS0:1;
      uint64_t WPSWS1:1;
      uint64_t WPSWS2:1;
      uint64_t WPSWS3:1;
      uint64_t WPSWS4:1;
      uint64_t WPSWS5:1;
      uint64_t reservedSpace0:1;
      uint64_t WPVS:1;
      uint64_t WPHWS0:1;
      uint64_t WPHWS1:1;
      uint64_t WPHWS2:1;
      uint64_t WPHWS3:1;
      uint64_t WPHWS4:1;
      uint64_t WPHWS5:1;
      uint64_t reservedSpace1:2;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_WPSR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_PTSR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD7;

  uint8_t res7[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD7;

};

#define PWM_0_0 (*(volatile struct PWM_0_0_tag *) 0x40094000)

struct EMAC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LB:1;
      uint64_t LLB:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t MPE:1;
      uint64_t CLRSTAT:1;
      uint64_t INCSTAT:1;
      uint64_t WESTAT:1;
      uint64_t BP:1;
      uint64_t TSTART:1;
      uint64_t THALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPD:1;
      uint64_t FD:1;
      uint64_t reservedSpace0:1;
      uint64_t JFRAME:1;
      uint64_t CAF:1;
      uint64_t NBC:1;
      uint64_t MTI:1;
      uint64_t UNI:1;
      uint64_t BIG:1;
      uint64_t reservedSpace1:1;
      uint64_t CLK:2;
      uint64_t RTY:1;
      uint64_t PAE:1;
      uint64_t RBOF:2;
      uint64_t RLCE:1;
      uint64_t DRFCS:1;
      uint64_t EFRHD:1;
      uint64_t IRXFCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDIO:1;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UBR:1;
      uint64_t COL:1;
      uint64_t RLES:1;
      uint64_t TGO:1;
      uint64_t BEX:1;
      uint64_t COMP:1;
      uint64_t UND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNA:1;
      uint64_t REC:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLEX:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFRE:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t CODE:2;
      uint64_t REGA:5;
      uint64_t PHYA:5;
      uint64_t RW:2;
      uint64_t SOF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_MAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_PFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTOK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_MCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FCSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ALE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_DTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_LCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ECOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TUND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_CSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROVR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ROV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ELE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RJB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RJA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_USF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_STE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RLE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_HRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_HRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA1T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA2B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA2T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA3B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA3T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA4B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA4T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TID;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMII:1;
      uint64_t CLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_USRIO;

};

#define EMAC_0 (*(volatile struct EMAC_0_tag *) 0x400b0000)

struct CAN0_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
      uint64_t reservedSpace0:16;
      uint64_t RXSYNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_WPSR;

  uint8_t res1[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR7;

};

#define CAN0_0_0 (*(volatile struct CAN0_0_0_tag *) 0x400b4000)

struct CAN1_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
      uint64_t reservedSpace0:16;
      uint64_t RXSYNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_WPSR;

  uint8_t res1[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR7;

};

#define CAN1_0_0 (*(volatile struct CAN1_0_0_tag *) 0x400b8000)

struct TRNG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_CR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ISR;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ODATA;

};

#define TRNG_0 (*(volatile struct TRNG_0_tag *) 0x400bc000)

struct ADC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGEN:1;
      uint64_t TRGSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t SLEEP:1;
      uint64_t FWUP:1;
      uint64_t FREERUN:1;
      uint64_t PRESCAL:8;
      uint64_t STARTUP:4;
      uint64_t SETTLING:2;
      uint64_t reservedSpace1:1;
      uint64_t ANACH:1;
      uint64_t TRACKTIM:4;
      uint64_t TRANSFER:2;
      uint64_t reservedSpace2:1;
      uint64_t USEQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH1:4;
      uint64_t USCH2:4;
      uint64_t USCH3:4;
      uint64_t USCH4:4;
      uint64_t USCH5:4;
      uint64_t USCH6:4;
      uint64_t USCH7:4;
      uint64_t USCH8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_SEQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH9:4;
      uint64_t USCH10:4;
      uint64_t USCH11:4;
      uint64_t USCH12:4;
      uint64_t USCH13:4;
      uint64_t USCH14:4;
      uint64_t USCH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_SEQR2;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHER;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHDR;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDATA:12;
      uint64_t CHNB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_LCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_ISR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRE0:1;
      uint64_t OVRE1:1;
      uint64_t OVRE2:1;
      uint64_t OVRE3:1;
      uint64_t OVRE4:1;
      uint64_t OVRE5:1;
      uint64_t OVRE6:1;
      uint64_t OVRE7:1;
      uint64_t OVRE8:1;
      uint64_t OVRE9:1;
      uint64_t OVRE10:1;
      uint64_t OVRE11:1;
      uint64_t OVRE12:1;
      uint64_t OVRE13:1;
      uint64_t OVRE14:1;
      uint64_t OVRE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_OVER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CMPSEL:4;
      uint64_t reservedSpace1:1;
      uint64_t CMPALL:1;
      uint64_t reservedSpace2:2;
      uint64_t CMPFILTER:2;
      uint64_t reservedSpace3:10;
      uint64_t TAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWTHRES:12;
      uint64_t reservedSpace0:4;
      uint64_t HIGHTHRES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN0:2;
      uint64_t GAIN1:2;
      uint64_t GAIN2:2;
      uint64_t GAIN3:2;
      uint64_t GAIN4:2;
      uint64_t GAIN5:2;
      uint64_t GAIN6:2;
      uint64_t GAIN7:2;
      uint64_t GAIN8:2;
      uint64_t GAIN9:2;
      uint64_t GAIN10:2;
      uint64_t GAIN11:2;
      uint64_t GAIN12:2;
      uint64_t GAIN13:2;
      uint64_t GAIN14:2;
      uint64_t GAIN15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFF0:1;
      uint64_t OFF1:1;
      uint64_t OFF2:1;
      uint64_t OFF3:1;
      uint64_t OFF4:1;
      uint64_t OFF5:1;
      uint64_t OFF6:1;
      uint64_t OFF7:1;
      uint64_t OFF8:1;
      uint64_t OFF9:1;
      uint64_t OFF10:1;
      uint64_t OFF11:1;
      uint64_t OFF12:1;
      uint64_t OFF13:1;
      uint64_t OFF14:1;
      uint64_t OFF15:1;
      uint64_t DIFF0:1;
      uint64_t DIFF1:1;
      uint64_t DIFF2:1;
      uint64_t DIFF3:1;
      uint64_t DIFF4:1;
      uint64_t DIFF5:1;
      uint64_t DIFF6:1;
      uint64_t DIFF7:1;
      uint64_t DIFF8:1;
      uint64_t DIFF9:1;
      uint64_t DIFF10:1;
      uint64_t DIFF11:1;
      uint64_t DIFF12:1;
      uint64_t DIFF13:1;
      uint64_t DIFF14:1;
      uint64_t DIFF15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_15;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TSON:1;
      uint64_t reservedSpace1:3;
      uint64_t IBCTL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_ACR;

  uint8_t res3[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_WPSR;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RNCR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_PTSR;

};

#define ADC_0_0 (*(volatile struct ADC_0_0_tag *) 0x400c0000)

struct DMAC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ARB_CFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_GCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSREQ0:1;
      uint64_t DSREQ0:1;
      uint64_t SSREQ1:1;
      uint64_t DSREQ1:1;
      uint64_t SSREQ2:1;
      uint64_t DSREQ2:1;
      uint64_t SSREQ3:1;
      uint64_t DSREQ3:1;
      uint64_t SSREQ4:1;
      uint64_t DSREQ4:1;
      uint64_t SSREQ5:1;
      uint64_t DSREQ5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCREQ0:1;
      uint64_t DCREQ0:1;
      uint64_t SCREQ1:1;
      uint64_t DCREQ1:1;
      uint64_t SCREQ2:1;
      uint64_t DCREQ2:1;
      uint64_t SCREQ3:1;
      uint64_t DCREQ3:1;
      uint64_t SCREQ4:1;
      uint64_t DCREQ4:1;
      uint64_t SCREQ5:1;
      uint64_t DCREQ5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAST0:1;
      uint64_t DLAST0:1;
      uint64_t SLAST1:1;
      uint64_t DLAST1:1;
      uint64_t SLAST2:1;
      uint64_t DLAST2:1;
      uint64_t SLAST3:1;
      uint64_t DLAST3:1;
      uint64_t SLAST4:1;
      uint64_t DLAST4:1;
      uint64_t SLAST5:1;
      uint64_t DLAST5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_LAST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t reservedSpace0:2;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t reservedSpace1:10;
      uint64_t KEEP0:1;
      uint64_t KEEP1:1;
      uint64_t KEEP2:1;
      uint64_t KEEP3:1;
      uint64_t KEEP4:1;
      uint64_t KEEP5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS0:1;
      uint64_t DIS1:1;
      uint64_t DIS2:1;
      uint64_t DIS3:1;
      uint64_t DIS4:1;
      uint64_t DIS5:1;
      uint64_t reservedSpace0:2;
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t RES3:1;
      uint64_t RES4:1;
      uint64_t RES5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t reservedSpace0:2;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t reservedSpace1:2;
      uint64_t EMPT0:1;
      uint64_t EMPT1:1;
      uint64_t EMPT2:1;
      uint64_t EMPT3:1;
      uint64_t EMPT4:1;
      uint64_t EMPT5:1;
      uint64_t reservedSpace2:2;
      uint64_t STAL0:1;
      uint64_t STAL1:1;
      uint64_t STAL2:1;
      uint64_t STAL3:1;
      uint64_t STAL4:1;
      uint64_t STAL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHSR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG0;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG1;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG2;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG3;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG4;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG5;

  uint8_t res7[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_WPSR;

};

#define DMAC_0_0 (*(volatile struct DMAC_0_0_tag *) 0x400c4000)

struct DACC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGEN:1;
      uint64_t TRGSEL:3;
      uint64_t WORD:1;
      uint64_t SLEEP:1;
      uint64_t FASTWKUP:1;
      uint64_t reservedSpace0:1;
      uint64_t REFRESH:8;
      uint64_t USER_SEL:2;
      uint64_t reservedSpace1:2;
      uint64_t TAG:1;
      uint64_t MAXS:1;
      uint64_t reservedSpace2:2;
      uint64_t STARTUP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_ISR;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBCTLCH0:2;
      uint64_t IBCTLCH1:2;
      uint64_t reservedSpace0:4;
      uint64_t IBCTLDACCORE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_ACR;

  uint8_t res3[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_WPSR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_PTSR;

};

#define DACC_0_0 (*(volatile struct DACC_0_0_tag *) 0x400c8000)

struct MATRIX_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_5;

  uint8_t res0[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_8;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS3;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS4;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS5;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS6;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS7;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS8;

  uint8_t res10[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCB0:1;
      uint64_t RCB1:1;
      uint64_t RCB2:1;
      uint64_t RCB3:1;
      uint64_t RCB4:2;
      uint64_t RCB5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MRCR;

  uint8_t res11[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t SYSIO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_SYSIO;

  uint8_t res12[204];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_WPSR;

};

#define MATRIX_0_0 (*(volatile struct MATRIX_0_0_tag *) 0x400e0400)

struct PMC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t UPLLEN:1;
      uint64_t reservedSpace1:3;
      uint64_t UPLLCOUNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_UCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTEN:1;
      uint64_t MOSCXTBY:1;
      uint64_t reservedSpace0:1;
      uint64_t MOSCRCEN:1;
      uint64_t MOSCRCF:3;
      uint64_t reservedSpace1:1;
      uint64_t MOSCXTST:8;
      uint64_t KEY:8;
      uint64_t MOSCSEL:1;
      uint64_t CFDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_MOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINF:16;
      uint64_t MAINFRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_MCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:8;
      uint64_t PLLACOUNT:6;
      uint64_t reservedSpace0:2;
      uint64_t MULA:11;
      uint64_t reservedSpace1:2;
      uint64_t ONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_PLLAR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:2;
      uint64_t reservedSpace0:2;
      uint64_t PRES:3;
      uint64_t reservedSpace1:5;
      uint64_t PLLADIV2:1;
      uint64_t UPLLDIV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_MCKR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBS:1;
      uint64_t reservedSpace0:7;
      uint64_t USBDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_USB;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_2;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t OSCSELS:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace2:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
      uint64_t CFDS:1;
      uint64_t FOS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSTT0:1;
      uint64_t FSTT1:1;
      uint64_t FSTT2:1;
      uint64_t FSTT3:1;
      uint64_t FSTT4:1;
      uint64_t FSTT5:1;
      uint64_t FSTT6:1;
      uint64_t FSTT7:1;
      uint64_t FSTT8:1;
      uint64_t FSTT9:1;
      uint64_t FSTT10:1;
      uint64_t FSTT11:1;
      uint64_t FSTT12:1;
      uint64_t FSTT13:1;
      uint64_t FSTT14:1;
      uint64_t FSTT15:1;
      uint64_t RTTAL:1;
      uint64_t RTCAL:1;
      uint64_t USBAL:1;
      uint64_t reservedSpace0:1;
      uint64_t LPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSTP0:1;
      uint64_t FSTP1:1;
      uint64_t FSTP2:1;
      uint64_t FSTP3:1;
      uint64_t FSTP4:1;
      uint64_t FSTP5:1;
      uint64_t FSTP6:1;
      uint64_t FSTP7:1;
      uint64_t FSTP8:1;
      uint64_t FSTP9:1;
      uint64_t FSTP10:1;
      uint64_t FSTP11:1;
      uint64_t FSTP12:1;
      uint64_t FSTP13:1;
      uint64_t FSTP14:1;
      uint64_t FSTP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FSPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FOCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FOCR;

  uint8_t res5[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_WPSR;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:6;
      uint64_t CMD:1;
      uint64_t reservedSpace1:3;
      uint64_t DIV:2;
      uint64_t reservedSpace2:10;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCR;

};

#define PMC_0_0 (*(volatile struct PMC_0_0_tag *) 0x400e0600)

struct UART_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_BRGR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_PTSR;

};

#define UART_0 (*(volatile struct UART_0_tag *) 0x400e0800)

struct CHIPID_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:5;
      uint64_t EPROC:3;
      uint64_t NVPSIZ:4;
      uint64_t NVPSIZ2:4;
      uint64_t SRAMSIZ:4;
      uint64_t ARCH:8;
      uint64_t NVPTYP:3;
      uint64_t EXT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID_CIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID_EXID;

};

#define CHIPID_0 (*(volatile struct CHIPID_0_tag *) 0x400e0940)

struct EFC0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t FWS:4;
      uint64_t reservedSpace1:4;
      uint64_t SCOD:1;
      uint64_t reservedSpace2:7;
      uint64_t FAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMD:8;
      uint64_t FARG:16;
      uint64_t FKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t FCMDE:1;
      uint64_t FLOCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FRR;

};

#define EFC0_0 (*(volatile struct EFC0_0_tag *) 0x400e0a00)

struct EFC1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t FWS:4;
      uint64_t reservedSpace1:4;
      uint64_t SCOD:1;
      uint64_t reservedSpace2:7;
      uint64_t FAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMD:8;
      uint64_t FARG:16;
      uint64_t FKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t FCMDE:1;
      uint64_t FLOCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FRR;

};

#define EFC1_0 (*(volatile struct EFC1_0_tag *) 0x400e0c00)

struct PIOA_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_WPSR;

};

#define PIOA_0_0 (*(volatile struct PIOA_0_0_tag *) 0x400e0e00)

struct PIOB_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_WPSR;

};

#define PIOB_0_0 (*(volatile struct PIOB_0_0_tag *) 0x400e1000)

struct PIOC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_WPSR;

};

#define PIOC_0_0 (*(volatile struct PIOC_0_0_tag *) 0x400e1200)

struct PIOD_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_WPSR;

};

#define PIOD_0_0 (*(volatile struct PIOD_0_0_tag *) 0x400e1400)

struct RSTC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCRST:1;
      uint64_t reservedSpace0:1;
      uint64_t PERRST:1;
      uint64_t EXTRST:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTS:1;
      uint64_t reservedSpace0:7;
      uint64_t RSTTYP:3;
      uint64_t reservedSpace1:5;
      uint64_t NRSTL:1;
      uint64_t SRCMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t URSTIEN:1;
      uint64_t reservedSpace1:3;
      uint64_t ERSTL:4;
      uint64_t reservedSpace2:12;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_MR;

};

#define RSTC_0_0 (*(volatile struct RSTC_0_0_tag *) 0x400e1a00)

struct SUPC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t VROFF:1;
      uint64_t XTALSEL:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMTH:4;
      uint64_t reservedSpace0:4;
      uint64_t SMSMPL:3;
      uint64_t reservedSpace1:1;
      uint64_t SMRSTEN:1;
      uint64_t SMIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_SMMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t BODRSTEN:1;
      uint64_t BODDIS:1;
      uint64_t VDDIORDY:1;
      uint64_t reservedSpace1:5;
      uint64_t OSCBYPASS:1;
      uint64_t reservedSpace2:3;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWUPEN:1;
      uint64_t SMEN:1;
      uint64_t RTTEN:1;
      uint64_t RTCEN:1;
      uint64_t reservedSpace0:4;
      uint64_t FWUPDBC:3;
      uint64_t reservedSpace1:1;
      uint64_t WKUPDBC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_WUMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPEN0:1;
      uint64_t WKUPEN1:1;
      uint64_t WKUPEN2:1;
      uint64_t WKUPEN3:1;
      uint64_t WKUPEN4:1;
      uint64_t WKUPEN5:1;
      uint64_t WKUPEN6:1;
      uint64_t WKUPEN7:1;
      uint64_t WKUPEN8:1;
      uint64_t WKUPEN9:1;
      uint64_t WKUPEN10:1;
      uint64_t WKUPEN11:1;
      uint64_t WKUPEN12:1;
      uint64_t WKUPEN13:1;
      uint64_t WKUPEN14:1;
      uint64_t WKUPEN15:1;
      uint64_t WKUPT0:1;
      uint64_t WKUPT1:1;
      uint64_t WKUPT2:1;
      uint64_t WKUPT3:1;
      uint64_t WKUPT4:1;
      uint64_t WKUPT5:1;
      uint64_t WKUPT6:1;
      uint64_t WKUPT7:1;
      uint64_t WKUPT8:1;
      uint64_t WKUPT9:1;
      uint64_t WKUPT10:1;
      uint64_t WKUPT11:1;
      uint64_t WKUPT12:1;
      uint64_t WKUPT13:1;
      uint64_t WKUPT14:1;
      uint64_t WKUPT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_WUIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWUPS:1;
      uint64_t WKUPS:1;
      uint64_t SMWS:1;
      uint64_t BODRSTS:1;
      uint64_t SMRSTS:1;
      uint64_t SMS:1;
      uint64_t SMOS:1;
      uint64_t OSCSEL:1;
      uint64_t reservedSpace0:4;
      uint64_t FWUPIS:1;
      uint64_t reservedSpace1:3;
      uint64_t WKUPIS0:1;
      uint64_t WKUPIS1:1;
      uint64_t WKUPIS2:1;
      uint64_t WKUPIS3:1;
      uint64_t WKUPIS4:1;
      uint64_t WKUPIS5:1;
      uint64_t WKUPIS6:1;
      uint64_t WKUPIS7:1;
      uint64_t WKUPIS8:1;
      uint64_t WKUPIS9:1;
      uint64_t WKUPIS10:1;
      uint64_t WKUPIS11:1;
      uint64_t WKUPIS12:1;
      uint64_t WKUPIS13:1;
      uint64_t WKUPIS14:1;
      uint64_t WKUPIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_SR;

};

#define SUPC_0_0 (*(volatile struct SUPC_0_0_tag *) 0x400e1a10)

struct RTT_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTPRES:16;
      uint64_t ALMIEN:1;
      uint64_t RTTINCIEN:1;
      uint64_t RTTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRTV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_VR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMS:1;
      uint64_t RTTINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_SR;

};

#define RTT_0_0 (*(volatile struct RTT_0_0_tag *) 0x400e1a30)

struct WDT_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDRSTT:1;
      uint64_t reservedSpace0:23;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDV:12;
      uint64_t WDFIEN:1;
      uint64_t WDRSTEN:1;
      uint64_t WDRPROC:1;
      uint64_t WDDIS:1;
      uint64_t WDD:12;
      uint64_t WDDBGHLT:1;
      uint64_t WDIDLEHLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDUNF:1;
      uint64_t WDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_SR;

};

#define WDT_0_0 (*(volatile struct WDT_0_0_tag *) 0x400e1a50)

struct RTC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDTIM:1;
      uint64_t UPDCAL:1;
      uint64_t reservedSpace0:6;
      uint64_t TIMEVSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t CALEVSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t reservedSpace0:1;
      uint64_t MIN:7;
      uint64_t reservedSpace1:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENT:7;
      uint64_t reservedSpace0:1;
      uint64_t YEAR:8;
      uint64_t MONTH:5;
      uint64_t DAY:3;
      uint64_t DATE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t SECEN:1;
      uint64_t MIN:7;
      uint64_t MINEN:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
      uint64_t HOUREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MONTH:5;
      uint64_t reservedSpace1:2;
      uint64_t MTHEN:1;
      uint64_t DATE:6;
      uint64_t reservedSpace2:1;
      uint64_t DATEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CALALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKUPD:1;
      uint64_t ALARM:1;
      uint64_t SEC:1;
      uint64_t TIMEV:1;
      uint64_t CALEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKCLR:1;
      uint64_t ALRCLR:1;
      uint64_t SECCLR:1;
      uint64_t TIMCLR:1;
      uint64_t CALCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKEN:1;
      uint64_t ALREN:1;
      uint64_t SECEN:1;
      uint64_t TIMEN:1;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKDIS:1;
      uint64_t ALRDIS:1;
      uint64_t SECDIS:1;
      uint64_t TIMDIS:1;
      uint64_t CALDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
      uint64_t ALR:1;
      uint64_t SEC:1;
      uint64_t TIM:1;
      uint64_t CAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVTIM:1;
      uint64_t NVCAL:1;
      uint64_t NVTIMALR:1;
      uint64_t NVCALALR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_VER;

  uint8_t res0[180];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_WPMR;

};

#define RTC_0_0 (*(volatile struct RTC_0_0_tag *) 0x400e1a60)

struct GPBR_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_7;

};

#define GPBR_0_0 (*(volatile struct GPBR_0_0_tag *) 0x400e1a90)

struct System_Control_Space_System_Control_Block_1_0_tag
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

#define System_Control_Space_System_Control_Block_1_0 (*(volatile struct System_Control_Space_System_Control_Block_1_0_tag *) 0xe000ed00)

struct System_Control_Space_System_Control_and_ID_1_0_tag
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

#define System_Control_Space_System_Control_and_ID_1_0 (*(volatile struct System_Control_Space_System_Control_and_ID_1_0_tag *) 0xe000e004)

struct System_Control_Space_NVIC_1_0_tag
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

#define System_Control_Space_NVIC_1_0 (*(volatile struct System_Control_Space_NVIC_1_0_tag *) 0xe000e100)

struct System_Control_Space_SysTick_1_0_tag
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

#define System_Control_Space_SysTick_1_0 (*(volatile struct System_Control_Space_SysTick_1_0_tag *) 0xe000e010)

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

struct HSMCI_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_TDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:1;
      uint64_t reservedSpace1:3;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CFG;

  uint8_t res1[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_WPSR;

  uint8_t res2[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_255;

};

#define HSMCI_1_0 (*(volatile struct HSMCI_1_0_tag *) 0x40000000)

struct SSC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace1:5;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_CMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t LOOP:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t reservedSpace2:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace3:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t reservedSpace0:4;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t DATDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t FSDEN:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace2:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_THR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RC0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
      uint64_t reservedSpace2:4;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IMR;

  uint8_t res2[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_WPMR;

  uint32_t SSC_WPSR;
};

#define SSC_1 (*(volatile struct SSC_1_tag *) 0x40004000)

struct SPI0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIEN:1;
      uint64_t SPIDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:16;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR:1;
      uint64_t PS:1;
      uint64_t PCSDEC:1;
      uint64_t reservedSpace0:1;
      uint64_t MODFDIS:1;
      uint64_t WDRBT:1;
      uint64_t reservedSpace1:1;
      uint64_t LLB:1;
      uint64_t reservedSpace2:8;
      uint64_t PCS:4;
      uint64_t reservedSpace3:4;
      uint64_t DLYBCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:16;
      uint64_t PCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:16;
      uint64_t PCS:4;
      uint64_t reservedSpace0:4;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
      uint64_t reservedSpace1:5;
      uint64_t SPIENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IMR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_3;

  uint8_t res1[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_WPSR;

};

#define SPI0_1 (*(volatile struct SPI0_1_tag *) 0x40008000)

struct TWI0_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_THR;

  uint8_t res1[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_PTSR;

};

#define TWI0_1_0 (*(volatile struct TWI0_1_0_tag *) 0x4008c000)

struct TWI1_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_THR;

  uint8_t res1[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_PTSR;

};

#define TWI1_1_0 (*(volatile struct TWI1_1_0_tag *) 0x40090000)

struct PWM_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:8;
      uint64_t PREA:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVB:8;
      uint64_t PREB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:1;
      uint64_t SYNC1:1;
      uint64_t SYNC2:1;
      uint64_t SYNC3:1;
      uint64_t SYNC4:1;
      uint64_t SYNC5:1;
      uint64_t SYNC6:1;
      uint64_t SYNC7:1;
      uint64_t reservedSpace0:8;
      uint64_t UPDM:2;
      uint64_t reservedSpace1:2;
      uint64_t PTRM:1;
      uint64_t PTRCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCM;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDULOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPR:4;
      uint64_t UPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUPUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OOVH0:1;
      uint64_t OOVH1:1;
      uint64_t OOVH2:1;
      uint64_t OOVH3:1;
      uint64_t OOVH4:1;
      uint64_t OOVH5:1;
      uint64_t OOVH6:1;
      uint64_t OOVH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OOVL0:1;
      uint64_t OOVL1:1;
      uint64_t OOVL2:1;
      uint64_t OOVL3:1;
      uint64_t OOVL4:1;
      uint64_t OOVL5:1;
      uint64_t OOVL6:1;
      uint64_t OOVL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OOV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSH0:1;
      uint64_t OSH1:1;
      uint64_t OSH2:1;
      uint64_t OSH3:1;
      uint64_t OSH4:1;
      uint64_t OSH5:1;
      uint64_t OSH6:1;
      uint64_t OSH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSL0:1;
      uint64_t OSL1:1;
      uint64_t OSL2:1;
      uint64_t OSL3:1;
      uint64_t OSL4:1;
      uint64_t OSL5:1;
      uint64_t OSL6:1;
      uint64_t OSL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSH0:1;
      uint64_t OSSH1:1;
      uint64_t OSSH2:1;
      uint64_t OSSH3:1;
      uint64_t OSSH4:1;
      uint64_t OSSH5:1;
      uint64_t OSSH6:1;
      uint64_t OSSH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSSL0:1;
      uint64_t OSSL1:1;
      uint64_t OSSL2:1;
      uint64_t OSSL3:1;
      uint64_t OSSL4:1;
      uint64_t OSSL5:1;
      uint64_t OSSL6:1;
      uint64_t OSSL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCH0:1;
      uint64_t OSCH1:1;
      uint64_t OSCH2:1;
      uint64_t OSCH3:1;
      uint64_t OSCH4:1;
      uint64_t OSCH5:1;
      uint64_t OSCH6:1;
      uint64_t OSCH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSCL0:1;
      uint64_t OSCL1:1;
      uint64_t OSCL2:1;
      uint64_t OSCL3:1;
      uint64_t OSCL4:1;
      uint64_t OSCL5:1;
      uint64_t OSCL6:1;
      uint64_t OSCL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSUPH0:1;
      uint64_t OSSUPH1:1;
      uint64_t OSSUPH2:1;
      uint64_t OSSUPH3:1;
      uint64_t OSSUPH4:1;
      uint64_t OSSUPH5:1;
      uint64_t OSSUPH6:1;
      uint64_t OSSUPH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSSUPL0:1;
      uint64_t OSSUPL1:1;
      uint64_t OSSUPL2:1;
      uint64_t OSSUPL3:1;
      uint64_t OSSUPL4:1;
      uint64_t OSSUPL5:1;
      uint64_t OSSUPL6:1;
      uint64_t OSSUPL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSSUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCUPH0:1;
      uint64_t OSCUPH1:1;
      uint64_t OSCUPH2:1;
      uint64_t OSCUPH3:1;
      uint64_t OSCUPH4:1;
      uint64_t OSCUPH5:1;
      uint64_t OSCUPH6:1;
      uint64_t OSCUPH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSCUPL0:1;
      uint64_t OSCUPL1:1;
      uint64_t OSCUPL2:1;
      uint64_t OSCUPL3:1;
      uint64_t OSCUPL4:1;
      uint64_t OSCUPL5:1;
      uint64_t OSCUPL6:1;
      uint64_t OSCUPL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSCUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPOL:8;
      uint64_t FMOD:8;
      uint64_t FFIL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIV:8;
      uint64_t FS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPVH0:1;
      uint64_t FPVH1:1;
      uint64_t FPVH2:1;
      uint64_t FPVH3:1;
      uint64_t FPVH4:1;
      uint64_t FPVH5:1;
      uint64_t FPVH6:1;
      uint64_t FPVH7:1;
      uint64_t reservedSpace0:8;
      uint64_t FPVL0:1;
      uint64_t FPVL1:1;
      uint64_t FPVL2:1;
      uint64_t FPVL3:1;
      uint64_t FPVL4:1;
      uint64_t FPVL5:1;
      uint64_t FPVL6:1;
      uint64_t FPVL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPE0:8;
      uint64_t FPE1:8;
      uint64_t FPE2:8;
      uint64_t FPE3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPE4:8;
      uint64_t FPE5:8;
      uint64_t FPE6:8;
      uint64_t FPE7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPE2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t CSEL3:1;
      uint64_t CSEL4:1;
      uint64_t CSEL5:1;
      uint64_t CSEL6:1;
      uint64_t CSEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ELMR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t CSEL3:1;
      uint64_t CSEL4:1;
      uint64_t CSEL5:1;
      uint64_t CSEL6:1;
      uint64_t CSEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ELMR_1;

  uint8_t res2[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCEN0:1;
      uint64_t GCEN1:1;
      uint64_t GCEN2:1;
      uint64_t GCEN3:1;
      uint64_t reservedSpace0:12;
      uint64_t DOWN0:1;
      uint64_t DOWN1:1;
      uint64_t DOWN2:1;
      uint64_t DOWN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SMMR;

  uint8_t res3[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPCMD:2;
      uint64_t WPRG0:1;
      uint64_t WPRG1:1;
      uint64_t WPRG2:1;
      uint64_t WPRG3:1;
      uint64_t WPRG4:1;
      uint64_t WPRG5:1;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPSWS0:1;
      uint64_t WPSWS1:1;
      uint64_t WPSWS2:1;
      uint64_t WPSWS3:1;
      uint64_t WPSWS4:1;
      uint64_t WPSWS5:1;
      uint64_t reservedSpace0:1;
      uint64_t WPVS:1;
      uint64_t WPHWS0:1;
      uint64_t WPHWS1:1;
      uint64_t WPHWS2:1;
      uint64_t WPHWS3:1;
      uint64_t WPHWS4:1;
      uint64_t WPHWS5:1;
      uint64_t reservedSpace1:2;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_WPSR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_PTSR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD7;

  uint8_t res7[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD7;

};

#define PWM_1_0 (*(volatile struct PWM_1_0_tag *) 0x40094000)

struct EMAC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LB:1;
      uint64_t LLB:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t MPE:1;
      uint64_t CLRSTAT:1;
      uint64_t INCSTAT:1;
      uint64_t WESTAT:1;
      uint64_t BP:1;
      uint64_t TSTART:1;
      uint64_t THALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPD:1;
      uint64_t FD:1;
      uint64_t reservedSpace0:1;
      uint64_t JFRAME:1;
      uint64_t CAF:1;
      uint64_t NBC:1;
      uint64_t MTI:1;
      uint64_t UNI:1;
      uint64_t BIG:1;
      uint64_t reservedSpace1:1;
      uint64_t CLK:2;
      uint64_t RTY:1;
      uint64_t PAE:1;
      uint64_t RBOF:2;
      uint64_t RLCE:1;
      uint64_t DRFCS:1;
      uint64_t EFRHD:1;
      uint64_t IRXFCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDIO:1;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UBR:1;
      uint64_t COL:1;
      uint64_t RLES:1;
      uint64_t TGO:1;
      uint64_t BEX:1;
      uint64_t COMP:1;
      uint64_t UND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNA:1;
      uint64_t REC:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLEX:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFRE:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t CODE:2;
      uint64_t REGA:5;
      uint64_t PHYA:5;
      uint64_t RW:2;
      uint64_t SOF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_MAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_PFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTOK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_MCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FCSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ALE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_DTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_LCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ECOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TUND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_CSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROVR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ROV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ELE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RJB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RJA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_USF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_STE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RLE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_HRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_HRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA1T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA2B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA2T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA3B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA3T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA4B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA4T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TID;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMII:1;
      uint64_t CLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_USRIO;

};

#define EMAC_1 (*(volatile struct EMAC_1_tag *) 0x400b0000)

struct CAN0_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
      uint64_t reservedSpace0:16;
      uint64_t RXSYNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_WPSR;

  uint8_t res1[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR7;

};

#define CAN0_1_0 (*(volatile struct CAN0_1_0_tag *) 0x400b4000)

struct CAN1_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
      uint64_t reservedSpace0:16;
      uint64_t RXSYNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_WPSR;

  uint8_t res1[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR7;

};

#define CAN1_1_0 (*(volatile struct CAN1_1_0_tag *) 0x400b8000)

struct TRNG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_CR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ISR;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ODATA;

};

#define TRNG_1 (*(volatile struct TRNG_1_tag *) 0x400bc000)

struct ADC_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGEN:1;
      uint64_t TRGSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t SLEEP:1;
      uint64_t FWUP:1;
      uint64_t FREERUN:1;
      uint64_t PRESCAL:8;
      uint64_t STARTUP:4;
      uint64_t SETTLING:2;
      uint64_t reservedSpace1:1;
      uint64_t ANACH:1;
      uint64_t TRACKTIM:4;
      uint64_t TRANSFER:2;
      uint64_t reservedSpace2:1;
      uint64_t USEQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH1:4;
      uint64_t USCH2:4;
      uint64_t USCH3:4;
      uint64_t USCH4:4;
      uint64_t USCH5:4;
      uint64_t USCH6:4;
      uint64_t USCH7:4;
      uint64_t USCH8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_SEQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH9:4;
      uint64_t USCH10:4;
      uint64_t USCH11:4;
      uint64_t USCH12:4;
      uint64_t USCH13:4;
      uint64_t USCH14:4;
      uint64_t USCH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_SEQR2;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHER;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHDR;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDATA:12;
      uint64_t CHNB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_LCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_ISR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRE0:1;
      uint64_t OVRE1:1;
      uint64_t OVRE2:1;
      uint64_t OVRE3:1;
      uint64_t OVRE4:1;
      uint64_t OVRE5:1;
      uint64_t OVRE6:1;
      uint64_t OVRE7:1;
      uint64_t OVRE8:1;
      uint64_t OVRE9:1;
      uint64_t OVRE10:1;
      uint64_t OVRE11:1;
      uint64_t OVRE12:1;
      uint64_t OVRE13:1;
      uint64_t OVRE14:1;
      uint64_t OVRE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_OVER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CMPSEL:4;
      uint64_t reservedSpace1:1;
      uint64_t CMPALL:1;
      uint64_t reservedSpace2:2;
      uint64_t CMPFILTER:2;
      uint64_t reservedSpace3:10;
      uint64_t TAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWTHRES:12;
      uint64_t reservedSpace0:4;
      uint64_t HIGHTHRES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN0:2;
      uint64_t GAIN1:2;
      uint64_t GAIN2:2;
      uint64_t GAIN3:2;
      uint64_t GAIN4:2;
      uint64_t GAIN5:2;
      uint64_t GAIN6:2;
      uint64_t GAIN7:2;
      uint64_t GAIN8:2;
      uint64_t GAIN9:2;
      uint64_t GAIN10:2;
      uint64_t GAIN11:2;
      uint64_t GAIN12:2;
      uint64_t GAIN13:2;
      uint64_t GAIN14:2;
      uint64_t GAIN15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFF0:1;
      uint64_t OFF1:1;
      uint64_t OFF2:1;
      uint64_t OFF3:1;
      uint64_t OFF4:1;
      uint64_t OFF5:1;
      uint64_t OFF6:1;
      uint64_t OFF7:1;
      uint64_t OFF8:1;
      uint64_t OFF9:1;
      uint64_t OFF10:1;
      uint64_t OFF11:1;
      uint64_t OFF12:1;
      uint64_t OFF13:1;
      uint64_t OFF14:1;
      uint64_t OFF15:1;
      uint64_t DIFF0:1;
      uint64_t DIFF1:1;
      uint64_t DIFF2:1;
      uint64_t DIFF3:1;
      uint64_t DIFF4:1;
      uint64_t DIFF5:1;
      uint64_t DIFF6:1;
      uint64_t DIFF7:1;
      uint64_t DIFF8:1;
      uint64_t DIFF9:1;
      uint64_t DIFF10:1;
      uint64_t DIFF11:1;
      uint64_t DIFF12:1;
      uint64_t DIFF13:1;
      uint64_t DIFF14:1;
      uint64_t DIFF15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_15;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TSON:1;
      uint64_t reservedSpace1:3;
      uint64_t IBCTL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_ACR;

  uint8_t res3[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_WPSR;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RNCR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_PTSR;

};

#define ADC_1_0 (*(volatile struct ADC_1_0_tag *) 0x400c0000)

struct DMAC_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ARB_CFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_GCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSREQ0:1;
      uint64_t DSREQ0:1;
      uint64_t SSREQ1:1;
      uint64_t DSREQ1:1;
      uint64_t SSREQ2:1;
      uint64_t DSREQ2:1;
      uint64_t SSREQ3:1;
      uint64_t DSREQ3:1;
      uint64_t SSREQ4:1;
      uint64_t DSREQ4:1;
      uint64_t SSREQ5:1;
      uint64_t DSREQ5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCREQ0:1;
      uint64_t DCREQ0:1;
      uint64_t SCREQ1:1;
      uint64_t DCREQ1:1;
      uint64_t SCREQ2:1;
      uint64_t DCREQ2:1;
      uint64_t SCREQ3:1;
      uint64_t DCREQ3:1;
      uint64_t SCREQ4:1;
      uint64_t DCREQ4:1;
      uint64_t SCREQ5:1;
      uint64_t DCREQ5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAST0:1;
      uint64_t DLAST0:1;
      uint64_t SLAST1:1;
      uint64_t DLAST1:1;
      uint64_t SLAST2:1;
      uint64_t DLAST2:1;
      uint64_t SLAST3:1;
      uint64_t DLAST3:1;
      uint64_t SLAST4:1;
      uint64_t DLAST4:1;
      uint64_t SLAST5:1;
      uint64_t DLAST5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_LAST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t reservedSpace0:2;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t reservedSpace1:10;
      uint64_t KEEP0:1;
      uint64_t KEEP1:1;
      uint64_t KEEP2:1;
      uint64_t KEEP3:1;
      uint64_t KEEP4:1;
      uint64_t KEEP5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS0:1;
      uint64_t DIS1:1;
      uint64_t DIS2:1;
      uint64_t DIS3:1;
      uint64_t DIS4:1;
      uint64_t DIS5:1;
      uint64_t reservedSpace0:2;
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t RES3:1;
      uint64_t RES4:1;
      uint64_t RES5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t reservedSpace0:2;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t reservedSpace1:2;
      uint64_t EMPT0:1;
      uint64_t EMPT1:1;
      uint64_t EMPT2:1;
      uint64_t EMPT3:1;
      uint64_t EMPT4:1;
      uint64_t EMPT5:1;
      uint64_t reservedSpace2:2;
      uint64_t STAL0:1;
      uint64_t STAL1:1;
      uint64_t STAL2:1;
      uint64_t STAL3:1;
      uint64_t STAL4:1;
      uint64_t STAL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHSR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG0;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG1;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG2;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG3;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG4;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG5;

  uint8_t res7[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_WPSR;

};

#define DMAC_1_0 (*(volatile struct DMAC_1_0_tag *) 0x400c4000)

struct DACC_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGEN:1;
      uint64_t TRGSEL:3;
      uint64_t WORD:1;
      uint64_t SLEEP:1;
      uint64_t FASTWKUP:1;
      uint64_t reservedSpace0:1;
      uint64_t REFRESH:8;
      uint64_t USER_SEL:2;
      uint64_t reservedSpace1:2;
      uint64_t TAG:1;
      uint64_t MAXS:1;
      uint64_t reservedSpace2:2;
      uint64_t STARTUP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_ISR;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBCTLCH0:2;
      uint64_t IBCTLCH1:2;
      uint64_t reservedSpace0:4;
      uint64_t IBCTLDACCORE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_ACR;

  uint8_t res3[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_WPSR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_PTSR;

};

#define DACC_1_0 (*(volatile struct DACC_1_0_tag *) 0x400c8000)

struct MATRIX_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_5;

  uint8_t res0[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_8;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS3;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS4;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS5;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS6;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS7;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS8;

  uint8_t res10[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCB0:1;
      uint64_t RCB1:1;
      uint64_t RCB2:1;
      uint64_t RCB3:1;
      uint64_t RCB4:2;
      uint64_t RCB5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MRCR;

  uint8_t res11[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t SYSIO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_SYSIO;

  uint8_t res12[204];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_WPSR;

};

#define MATRIX_1_0 (*(volatile struct MATRIX_1_0_tag *) 0x400e0400)

struct PMC_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t UPLLEN:1;
      uint64_t reservedSpace1:3;
      uint64_t UPLLCOUNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_UCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTEN:1;
      uint64_t MOSCXTBY:1;
      uint64_t reservedSpace0:1;
      uint64_t MOSCRCEN:1;
      uint64_t MOSCRCF:3;
      uint64_t reservedSpace1:1;
      uint64_t MOSCXTST:8;
      uint64_t KEY:8;
      uint64_t MOSCSEL:1;
      uint64_t CFDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_MOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINF:16;
      uint64_t MAINFRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_MCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:8;
      uint64_t PLLACOUNT:6;
      uint64_t reservedSpace0:2;
      uint64_t MULA:11;
      uint64_t reservedSpace1:2;
      uint64_t ONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_PLLAR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:2;
      uint64_t reservedSpace0:2;
      uint64_t PRES:3;
      uint64_t reservedSpace1:5;
      uint64_t PLLADIV2:1;
      uint64_t UPLLDIV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_MCKR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBS:1;
      uint64_t reservedSpace0:7;
      uint64_t USBDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_USB;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_2;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t OSCSELS:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace2:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
      uint64_t CFDS:1;
      uint64_t FOS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSTT0:1;
      uint64_t FSTT1:1;
      uint64_t FSTT2:1;
      uint64_t FSTT3:1;
      uint64_t FSTT4:1;
      uint64_t FSTT5:1;
      uint64_t FSTT6:1;
      uint64_t FSTT7:1;
      uint64_t FSTT8:1;
      uint64_t FSTT9:1;
      uint64_t FSTT10:1;
      uint64_t FSTT11:1;
      uint64_t FSTT12:1;
      uint64_t FSTT13:1;
      uint64_t FSTT14:1;
      uint64_t FSTT15:1;
      uint64_t RTTAL:1;
      uint64_t RTCAL:1;
      uint64_t USBAL:1;
      uint64_t reservedSpace0:1;
      uint64_t LPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSTP0:1;
      uint64_t FSTP1:1;
      uint64_t FSTP2:1;
      uint64_t FSTP3:1;
      uint64_t FSTP4:1;
      uint64_t FSTP5:1;
      uint64_t FSTP6:1;
      uint64_t FSTP7:1;
      uint64_t FSTP8:1;
      uint64_t FSTP9:1;
      uint64_t FSTP10:1;
      uint64_t FSTP11:1;
      uint64_t FSTP12:1;
      uint64_t FSTP13:1;
      uint64_t FSTP14:1;
      uint64_t FSTP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FSPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FOCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FOCR;

  uint8_t res5[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_WPSR;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:6;
      uint64_t CMD:1;
      uint64_t reservedSpace1:3;
      uint64_t DIV:2;
      uint64_t reservedSpace2:10;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCR;

};

#define PMC_1_0 (*(volatile struct PMC_1_0_tag *) 0x400e0600)

struct UART_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_BRGR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_PTSR;

};

#define UART_1 (*(volatile struct UART_1_tag *) 0x400e0800)

struct CHIPID_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:5;
      uint64_t EPROC:3;
      uint64_t NVPSIZ:4;
      uint64_t NVPSIZ2:4;
      uint64_t SRAMSIZ:4;
      uint64_t ARCH:8;
      uint64_t NVPTYP:3;
      uint64_t EXT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID_CIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID_EXID;

};

#define CHIPID_1 (*(volatile struct CHIPID_1_tag *) 0x400e0940)

struct EFC0_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t FWS:4;
      uint64_t reservedSpace1:4;
      uint64_t SCOD:1;
      uint64_t reservedSpace2:7;
      uint64_t FAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMD:8;
      uint64_t FARG:16;
      uint64_t FKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t FCMDE:1;
      uint64_t FLOCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FRR;

};

#define EFC0_1 (*(volatile struct EFC0_1_tag *) 0x400e0a00)

struct EFC1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t FWS:4;
      uint64_t reservedSpace1:4;
      uint64_t SCOD:1;
      uint64_t reservedSpace2:7;
      uint64_t FAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMD:8;
      uint64_t FARG:16;
      uint64_t FKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t FCMDE:1;
      uint64_t FLOCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FRR;

};

#define EFC1_1 (*(volatile struct EFC1_1_tag *) 0x400e0c00)

struct PIOA_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_WPSR;

};

#define PIOA_1_0 (*(volatile struct PIOA_1_0_tag *) 0x400e0e00)

struct PIOB_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_WPSR;

};

#define PIOB_1_0 (*(volatile struct PIOB_1_0_tag *) 0x400e1000)

struct PIOC_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_WPSR;

};

#define PIOC_1_0 (*(volatile struct PIOC_1_0_tag *) 0x400e1200)

struct PIOD_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
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
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_WPSR;

};

#define PIOD_1_0 (*(volatile struct PIOD_1_0_tag *) 0x400e1400)

struct RSTC_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCRST:1;
      uint64_t reservedSpace0:1;
      uint64_t PERRST:1;
      uint64_t EXTRST:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTS:1;
      uint64_t reservedSpace0:7;
      uint64_t RSTTYP:3;
      uint64_t reservedSpace1:5;
      uint64_t NRSTL:1;
      uint64_t SRCMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t URSTIEN:1;
      uint64_t reservedSpace1:3;
      uint64_t ERSTL:4;
      uint64_t reservedSpace2:12;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_MR;

};

#define RSTC_1_0 (*(volatile struct RSTC_1_0_tag *) 0x400e1a00)

struct SUPC_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t VROFF:1;
      uint64_t XTALSEL:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMTH:4;
      uint64_t reservedSpace0:4;
      uint64_t SMSMPL:3;
      uint64_t reservedSpace1:1;
      uint64_t SMRSTEN:1;
      uint64_t SMIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_SMMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t BODRSTEN:1;
      uint64_t BODDIS:1;
      uint64_t VDDIORDY:1;
      uint64_t reservedSpace1:5;
      uint64_t OSCBYPASS:1;
      uint64_t reservedSpace2:3;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWUPEN:1;
      uint64_t SMEN:1;
      uint64_t RTTEN:1;
      uint64_t RTCEN:1;
      uint64_t reservedSpace0:4;
      uint64_t FWUPDBC:3;
      uint64_t reservedSpace1:1;
      uint64_t WKUPDBC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_WUMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPEN0:1;
      uint64_t WKUPEN1:1;
      uint64_t WKUPEN2:1;
      uint64_t WKUPEN3:1;
      uint64_t WKUPEN4:1;
      uint64_t WKUPEN5:1;
      uint64_t WKUPEN6:1;
      uint64_t WKUPEN7:1;
      uint64_t WKUPEN8:1;
      uint64_t WKUPEN9:1;
      uint64_t WKUPEN10:1;
      uint64_t WKUPEN11:1;
      uint64_t WKUPEN12:1;
      uint64_t WKUPEN13:1;
      uint64_t WKUPEN14:1;
      uint64_t WKUPEN15:1;
      uint64_t WKUPT0:1;
      uint64_t WKUPT1:1;
      uint64_t WKUPT2:1;
      uint64_t WKUPT3:1;
      uint64_t WKUPT4:1;
      uint64_t WKUPT5:1;
      uint64_t WKUPT6:1;
      uint64_t WKUPT7:1;
      uint64_t WKUPT8:1;
      uint64_t WKUPT9:1;
      uint64_t WKUPT10:1;
      uint64_t WKUPT11:1;
      uint64_t WKUPT12:1;
      uint64_t WKUPT13:1;
      uint64_t WKUPT14:1;
      uint64_t WKUPT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_WUIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWUPS:1;
      uint64_t WKUPS:1;
      uint64_t SMWS:1;
      uint64_t BODRSTS:1;
      uint64_t SMRSTS:1;
      uint64_t SMS:1;
      uint64_t SMOS:1;
      uint64_t OSCSEL:1;
      uint64_t reservedSpace0:4;
      uint64_t FWUPIS:1;
      uint64_t reservedSpace1:3;
      uint64_t WKUPIS0:1;
      uint64_t WKUPIS1:1;
      uint64_t WKUPIS2:1;
      uint64_t WKUPIS3:1;
      uint64_t WKUPIS4:1;
      uint64_t WKUPIS5:1;
      uint64_t WKUPIS6:1;
      uint64_t WKUPIS7:1;
      uint64_t WKUPIS8:1;
      uint64_t WKUPIS9:1;
      uint64_t WKUPIS10:1;
      uint64_t WKUPIS11:1;
      uint64_t WKUPIS12:1;
      uint64_t WKUPIS13:1;
      uint64_t WKUPIS14:1;
      uint64_t WKUPIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_SR;

};

#define SUPC_1_0 (*(volatile struct SUPC_1_0_tag *) 0x400e1a10)

struct RTT_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTPRES:16;
      uint64_t ALMIEN:1;
      uint64_t RTTINCIEN:1;
      uint64_t RTTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRTV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_VR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMS:1;
      uint64_t RTTINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_SR;

};

#define RTT_1_0 (*(volatile struct RTT_1_0_tag *) 0x400e1a30)

struct WDT_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDRSTT:1;
      uint64_t reservedSpace0:23;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDV:12;
      uint64_t WDFIEN:1;
      uint64_t WDRSTEN:1;
      uint64_t WDRPROC:1;
      uint64_t WDDIS:1;
      uint64_t WDD:12;
      uint64_t WDDBGHLT:1;
      uint64_t WDIDLEHLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDUNF:1;
      uint64_t WDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_SR;

};

#define WDT_1_0 (*(volatile struct WDT_1_0_tag *) 0x400e1a50)

struct RTC_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDTIM:1;
      uint64_t UPDCAL:1;
      uint64_t reservedSpace0:6;
      uint64_t TIMEVSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t CALEVSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t reservedSpace0:1;
      uint64_t MIN:7;
      uint64_t reservedSpace1:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENT:7;
      uint64_t reservedSpace0:1;
      uint64_t YEAR:8;
      uint64_t MONTH:5;
      uint64_t DAY:3;
      uint64_t DATE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t SECEN:1;
      uint64_t MIN:7;
      uint64_t MINEN:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
      uint64_t HOUREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MONTH:5;
      uint64_t reservedSpace1:2;
      uint64_t MTHEN:1;
      uint64_t DATE:6;
      uint64_t reservedSpace2:1;
      uint64_t DATEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CALALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKUPD:1;
      uint64_t ALARM:1;
      uint64_t SEC:1;
      uint64_t TIMEV:1;
      uint64_t CALEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKCLR:1;
      uint64_t ALRCLR:1;
      uint64_t SECCLR:1;
      uint64_t TIMCLR:1;
      uint64_t CALCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKEN:1;
      uint64_t ALREN:1;
      uint64_t SECEN:1;
      uint64_t TIMEN:1;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKDIS:1;
      uint64_t ALRDIS:1;
      uint64_t SECDIS:1;
      uint64_t TIMDIS:1;
      uint64_t CALDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
      uint64_t ALR:1;
      uint64_t SEC:1;
      uint64_t TIM:1;
      uint64_t CAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVTIM:1;
      uint64_t NVCAL:1;
      uint64_t NVTIMALR:1;
      uint64_t NVCALALR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_VER;

  uint8_t res0[180];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_WPMR;

};

#define RTC_1_0 (*(volatile struct RTC_1_0_tag *) 0x400e1a60)

struct GPBR_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_7;

};

#define GPBR_1_0 (*(volatile struct GPBR_1_0_tag *) 0x400e1a90)

struct CM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Ignored_The_value_written_to_this_field_is_ignored:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICIALLU;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICIMVAU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIMVAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t Level_Cache_level:2;
      uint64_t reservedSpace1:1;
      uint64_t SetWay_Cache_setway:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCISW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCMVAU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCMVAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t Level_Cache_level:2;
      uint64_t reservedSpace1:1;
      uint64_t SetWay_Cache_setway:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCIMVAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t Level_Cache_level:2;
      uint64_t reservedSpace1:1;
      uint64_t SetWay_Cache_setway:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCISW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Ignored_Ignored:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BPIALL;

};

#define CM_0 (*(volatile struct CM_0_tag *) 0xe000ef50)

struct ICB_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICTR;

  uint32_t ACTLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUS0:1;
      uint64_t SU0:1;
      uint64_t SUS1:1;
      uint64_t SU1:1;
      uint64_t SUS2:1;
      uint64_t SU2:1;
      uint64_t SUS3:1;
      uint64_t SU3:1;
      uint64_t SUS4:1;
      uint64_t SU4:1;
      uint64_t SUS5:1;
      uint64_t SU5:1;
      uint64_t SUS6:1;
      uint64_t SU6:1;
      uint64_t SUS7:1;
      uint64_t SU7:1;
      uint64_t reservedSpace0:12;
      uint64_t SU10:1;
      uint64_t SUS10:1;
      uint64_t SU11:1;
      uint64_t SUS11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPPWR;

};

#define ICB_0_0 (*(volatile struct ICB_0_0_tag *) 0xe000e004)

struct DCB_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t C_DEBUGEN:1;
      uint64_t C_HALT:1;
      uint64_t C_STEP:1;
      uint64_t C_MASKINTS:1;
      uint64_t reservedSpace0:1;
      uint64_t C_SNAPSTALL:1;
      uint64_t reservedSpace1:10;
      uint64_t DBGKEY:15;
      uint64_t S_REGRDY:1;
      uint64_t S_HALT:1;
      uint64_t S_SLEEP:1;
      uint64_t S_LOCKUP:1;
      uint64_t S_SDE:1;
      uint64_t reservedSpace2:3;
      uint64_t S_RETIRE_ST:1;
      uint64_t S_RESET_ST:1;
      uint64_t S_RESTART_ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGSEL:6;
      uint64_t reservedSpace0:10;
      uint64_t REGWnR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCRSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGTMP:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VC_CORERESET:1;
      uint64_t reservedSpace0:3;
      uint64_t VC_MMERR:1;
      uint64_t VC_NOCPERR:1;
      uint64_t VC_CHKERR:1;
      uint64_t VC_STATERR:1;
      uint64_t VC_BUSERR:1;
      uint64_t VC_INTERR:1;
      uint64_t VC_HARDERR:1;
      uint64_t VC_SFERR:1;
      uint64_t reservedSpace1:4;
      uint64_t MON_EN:1;
      uint64_t MON_PEND:1;
      uint64_t MON_STEP:1;
      uint64_t MON_REQ:1;
      uint64_t SDME:1;
      uint64_t reservedSpace2:3;
      uint64_t TRCENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEMCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIDENSEL:1;
      uint64_t INTSPIDEN:1;
      uint64_t SPNIDENSEL:1;
      uint64_t INTSPNIDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAUTHCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBRSELEN:1;
      uint64_t SBRSEL:1;
      uint64_t reservedSpace0:14;
      uint64_t CDS:1;
      uint64_t CDSKEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSCSR;

};

#define DCB_0 (*(volatile struct DCB_0_tag *) 0xe000edf0)

struct DIB_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLI:1;
      uint64_t SLK:1;
      uint64_t nTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSID:1;
      uint64_t reservedSpace0:1;
      uint64_t NSNID:1;
      uint64_t reservedSpace1:1;
      uint64_t SID:1;
      uint64_t reservedSpace2:1;
      uint64_t SNID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAUTHSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARCHPART:11;
      uint64_t reservedSpace0:1;
      uint64_t ARCHVER:3;
      uint64_t reservedSpace1:1;
      uint64_t REVISION:3;
      uint64_t reservedSpace2:1;
      uint64_t PRESENT:1;
      uint64_t ARCHITECT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDEVARCH;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAJOR:3;
      uint64_t reservedSpace0:1;
      uint64_t SUB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDEVTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DES_2:3;
      uint64_t reservedSpace0:1;
      uint64_t SIZE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR4;

  uint32_t DPIDR5;
  uint32_t DPIDR6;
  uint32_t DPIDR7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PART_0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PART_1:3;
      uint64_t reservedSpace0:1;
      uint64_t DES_0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DES_1:2;
      uint64_t reservedSpace0:1;
      uint64_t JEDEC:1;
      uint64_t REVISION:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMOD:3;
      uint64_t reservedSpace0:1;
      uint64_t REVAND:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPIDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_1:3;
      uint64_t reservedSpace0:1;
      uint64_t CLASS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCIDR3;

};

#define DIB_0_0 (*(volatile struct DIB_0_0_tag *) 0xe000efb0)

struct NVIC_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER15;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER15;

  uint8_t res1[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR15;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR15;

  uint8_t res3[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR15;

  uint8_t res4[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITNS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ITNS15;

  uint8_t res5[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_N0:7;
      uint64_t reservedSpace0:1;
      uint64_t PRI_N1:7;
      uint64_t reservedSpace1:1;
      uint64_t PRI_N2:7;
      uint64_t reservedSpace2:1;
      uint64_t PRI_N3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IPR123;

};

#define NVIC_0_0 (*(volatile struct NVIC_0_0_tag *) 0xe000e100)

struct SIG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

};

#define SIG_0 (*(volatile struct SIG_0_tag *) 0xe000ef00)

struct SAU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ALLNS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SREGION:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_RNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BADDR:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_RBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t NSC:1;
      uint64_t reservedSpace0:3;
      uint64_t LADDR:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAU_RLAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INVEP:1;
      uint64_t INVIS:1;
      uint64_t INVER:1;
      uint64_t AUVIOL:1;
      uint64_t INVTRAN:1;
      uint64_t LSPERR:1;
      uint64_t SFARVALID:1;
      uint64_t LSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFAR;

};

#define SAU_0 (*(volatile struct SAU_0_tag *) 0xe000edd0)

struct AC_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_CTRLA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t START0:1;
      uint64_t START1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_CTRLB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMPEO0:1;
      uint64_t COMPEO1:1;
      uint64_t reservedSpace0:2;
      uint64_t WINEO0:1;
      uint64_t reservedSpace1:3;
      uint64_t COMPEI0:1;
      uint64_t COMPEI1:1;
      uint64_t reservedSpace2:2;
      uint64_t INVEI0:1;
      uint64_t INVEI1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) AC_EVCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t reservedSpace0:2;
      uint64_t WIN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t reservedSpace0:2;
      uint64_t WIN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_INTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t reservedSpace0:2;
      uint64_t WIN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_INTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STATE0:1;
      uint64_t STATE1:1;
      uint64_t reservedSpace0:2;
      uint64_t WSTATE0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_STATUSA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t READY0:1;
      uint64_t READY1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_STATUSB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_DBGCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WEN0:1;
      uint64_t WINTSEL0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_WINCTRL;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VALUE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_SCALER_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VALUE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AC_SCALER_1;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t SINGLE:1;
      uint64_t INTSEL:2;
      uint64_t reservedSpace1:1;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace2:1;
      uint64_t MUXNEG:3;
      uint64_t reservedSpace3:1;
      uint64_t MUXPOS:3;
      uint64_t SWAP:1;
      uint64_t SPEED:2;
      uint64_t reservedSpace4:1;
      uint64_t HYSTEN:1;
      uint64_t HYST:2;
      uint64_t reservedSpace5:2;
      uint64_t FLEN:3;
      uint64_t reservedSpace6:1;
      uint64_t OUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC_COMPCTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t SINGLE:1;
      uint64_t INTSEL:2;
      uint64_t reservedSpace1:1;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace2:1;
      uint64_t MUXNEG:3;
      uint64_t reservedSpace3:1;
      uint64_t MUXPOS:3;
      uint64_t SWAP:1;
      uint64_t SPEED:2;
      uint64_t reservedSpace4:1;
      uint64_t HYSTEN:1;
      uint64_t HYST:2;
      uint64_t reservedSpace5:2;
      uint64_t FLEN:3;
      uint64_t reservedSpace6:1;
      uint64_t OUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC_COMPCTRL_1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t WINCTRL:1;
      uint64_t COMPCTRL0:1;
      uint64_t COMPCTRL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC_SYNCBUSY;

};

#define AC_0 (*(volatile struct AC_0_tag *) 0x40003400)

struct ADC_2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:3;
      uint64_t SLAVEEN:1;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_CTRLA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRESCALER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_CTRLB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t REFSEL:4;
      uint64_t reservedSpace0:3;
      uint64_t REFCOMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_REFCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLUSHEI:1;
      uint64_t STARTEI:1;
      uint64_t FLUSHINV:1;
      uint64_t STARTINV:1;
      uint64_t RESRDYEO:1;
      uint64_t WINMONEO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_EVCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESRDY:1;
      uint64_t OVERRUN:1;
      uint64_t WINMON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESRDY:1;
      uint64_t OVERRUN:1;
      uint64_t WINMON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_INTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESRDY:1;
      uint64_t OVERRUN:1;
      uint64_t WINMON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_INTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SEQSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SEQBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_SEQSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MUXPOS:5;
      uint64_t reservedSpace0:3;
      uint64_t MUXNEG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_INPUTCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIFFMODE:1;
      uint64_t LEFTADJ:1;
      uint64_t FREERUN:1;
      uint64_t CORREN:1;
      uint64_t RESSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t R2R:1;
      uint64_t WINMODE:3;
      uint64_t reservedSpace1:1;
      uint64_t DUALSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_CTRLC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SAMPLENUM:4;
      uint64_t ADJRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_AVGCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SAMPLEN:6;
      uint64_t reservedSpace0:1;
      uint64_t OFFCOMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_SAMPCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WINLT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_WINLT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WINUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_WINUT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GAINCORR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_GAINCORR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OFFSETCORR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_OFFSETCORR;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLUSH:1;
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_SWTRIG;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC_DBGCTRL;

  uint8_t res2[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t INPUTCTRL:1;
      uint64_t CTRLC:1;
      uint64_t AVGCTRL:1;
      uint64_t SAMPCTRL:1;
      uint64_t WINLT:1;
      uint64_t WINUT:1;
      uint64_t GAINCORR:1;
      uint64_t OFFSETCORR:1;
      uint64_t SWTRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_SYNCBUSY;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESULT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_RESULT;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEQEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_SEQCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BIASCOMP:3;
      uint64_t reservedSpace0:5;
      uint64_t BIASREFBUF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADC_CALIB;

};

#define ADC_2 (*(volatile struct ADC_2_tag *) 0x42001c00)

struct CCL_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:4;
      uint64_t RUNSTDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CCL_CTRL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SEQSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CCL_SEQCTRL_0;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace1:2;
      uint64_t FILTSEL:2;
      uint64_t reservedSpace2:1;
      uint64_t EDGESEL:1;
      uint64_t INSEL0:4;
      uint64_t INSEL1:4;
      uint64_t INSEL2:4;
      uint64_t INVEI:1;
      uint64_t LUTEI:1;
      uint64_t LUTEO:1;
      uint64_t reservedSpace3:1;
      uint64_t TRUTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCL_LUTCTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace1:2;
      uint64_t FILTSEL:2;
      uint64_t reservedSpace2:1;
      uint64_t EDGESEL:1;
      uint64_t INSEL0:4;
      uint64_t INSEL1:4;
      uint64_t INSEL2:4;
      uint64_t INVEI:1;
      uint64_t LUTEI:1;
      uint64_t LUTEO:1;
      uint64_t reservedSpace3:1;
      uint64_t TRUTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCL_LUTCTRL_1;

};

#define CCL_0 (*(volatile struct CCL_0_tag *) 0x42002c00)

struct DAC_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:4;
      uint64_t RUNSTDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAC_CTRLA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EOEN:1;
      uint64_t IOEN:1;
      uint64_t LEFTADJ:1;
      uint64_t VPD:1;
      uint64_t reservedSpace0:1;
      uint64_t DITHER:1;
      uint64_t REFSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAC_CTRLB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STARTEI:1;
      uint64_t EMPTYEO:1;
      uint64_t INVEI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAC_EVCTRL;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UNDERRUN:1;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAC_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UNDERRUN:1;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAC_INTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UNDERRUN:1;
      uint64_t EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAC_INTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAC_STATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DAC_DATA;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATABUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DAC_DATABUF;

  uint8_t res2[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t DATA:1;
      uint64_t DATABUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAC_SYNCBUSY;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAC_DBGCTRL;

};

#define DAC_0 (*(volatile struct DAC_0_tag *) 0x42002000)

struct DMAC_2_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t DMAENABLE:1;
      uint64_t CRCENABLE:1;
      uint64_t reservedSpace0:5;
      uint64_t LVLEN0:1;
      uint64_t LVLEN1:1;
      uint64_t LVLEN2:1;
      uint64_t LVLEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMAC_CTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CRCBEATSIZE:2;
      uint64_t CRCPOLY:2;
      uint64_t reservedSpace0:4;
      uint64_t CRCSRC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMAC_CRCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCDATAIN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CRCDATAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCCHKSUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CRCCHKSUM;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CRCBUSY:1;
      uint64_t CRCZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_CRCSTATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_DBGCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WRBQOS:2;
      uint64_t FQOS:2;
      uint64_t DQOS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_QOSCTRL;

  uint8_t res0[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG0:1;
      uint64_t SWTRIG1:1;
      uint64_t SWTRIG2:1;
      uint64_t SWTRIG3:1;
      uint64_t SWTRIG4:1;
      uint64_t SWTRIG5:1;
      uint64_t SWTRIG6:1;
      uint64_t SWTRIG7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SWTRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVLPRI0:3;
      uint64_t reservedSpace0:4;
      uint64_t RRLVLEN0:1;
      uint64_t LVLPRI1:3;
      uint64_t reservedSpace1:4;
      uint64_t RRLVLEN1:1;
      uint64_t LVLPRI2:3;
      uint64_t reservedSpace2:4;
      uint64_t RRLVLEN2:1;
      uint64_t LVLPRI3:3;
      uint64_t reservedSpace3:4;
      uint64_t RRLVLEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_PRICTRL0;

  uint8_t res1[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID:3;
      uint64_t reservedSpace0:5;
      uint64_t TERR:1;
      uint64_t TCMPL:1;
      uint64_t SUSP:1;
      uint64_t reservedSpace1:2;
      uint64_t FERR:1;
      uint64_t BUSY:1;
      uint64_t PEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMAC_INTPEND;

  uint8_t res2[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHINT0:1;
      uint64_t CHINT1:1;
      uint64_t CHINT2:1;
      uint64_t CHINT3:1;
      uint64_t CHINT4:1;
      uint64_t CHINT5:1;
      uint64_t CHINT6:1;
      uint64_t CHINT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_INTSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSYCH0:1;
      uint64_t BUSYCH1:1;
      uint64_t BUSYCH2:1;
      uint64_t BUSYCH3:1;
      uint64_t BUSYCH4:1;
      uint64_t BUSYCH5:1;
      uint64_t BUSYCH6:1;
      uint64_t BUSYCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_BUSYCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PENDCH0:1;
      uint64_t PENDCH1:1;
      uint64_t PENDCH2:1;
      uint64_t PENDCH3:1;
      uint64_t PENDCH4:1;
      uint64_t PENDCH5:1;
      uint64_t PENDCH6:1;
      uint64_t PENDCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_PENDCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVLEX0:1;
      uint64_t LVLEX1:1;
      uint64_t LVLEX2:1;
      uint64_t LVLEX3:1;
      uint64_t reservedSpace0:4;
      uint64_t ID:5;
      uint64_t reservedSpace1:2;
      uint64_t ABUSY:1;
      uint64_t BTCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_ACTIVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASEADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_BASEADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRBADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_WRBADDR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_CHID;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:4;
      uint64_t RUNSTDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_CHCTRLA;

  uint8_t res4[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVACT:3;
      uint64_t EVIE:1;
      uint64_t EVOE:1;
      uint64_t LVL:2;
      uint64_t reservedSpace0:1;
      uint64_t TRIGSRC:5;
      uint64_t reservedSpace1:9;
      uint64_t TRIGACT:2;
      uint64_t CMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHCTRLB;

  uint8_t res5[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TERR:1;
      uint64_t TCMPL:1;
      uint64_t SUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TERR:1;
      uint64_t TCMPL:1;
      uint64_t SUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TERR:1;
      uint64_t TCMPL:1;
      uint64_t SUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PEND:1;
      uint64_t BUSY:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DMAC_CHSTATUS;

};

#define DMAC_2_0 (*(volatile struct DMAC_2_0_tag *) 0x41006000)

struct DSU_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t reservedSpace0:1;
      uint64_t CRC:1;
      uint64_t MBIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSU_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t CRSTEXT:1;
      uint64_t BERR:1;
      uint64_t FAIL:1;
      uint64_t PERR:1;
      uint64_t BREXT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSU_STATUSA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAL:2;
      uint64_t DBGPRES:1;
      uint64_t HPE:1;
      uint64_t DCCD0:1;
      uint64_t DCCD1:1;
      uint64_t BCCD0:1;
      uint64_t BCCD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSU_STATUSB;

  uint8_t DSU_STATUSC;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AMOD:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LENGTH:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DCC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DCC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVSEL:8;
      uint64_t REVISION:4;
      uint64_t DIE:4;
      uint64_t SERIES:6;
      uint64_t reservedSpace0:1;
      uint64_t FAMILY:5;
      uint64_t PROCESSOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LQOS:2;
      uint64_t DCCDMALEVEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_BCC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_BCC_1;

  uint8_t res0[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DCFG_1;

  uint8_t res1[3848];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPRES:1;
      uint64_t FMT:1;
      uint64_t reservedSpace0:10;
      uint64_t ADDOFF:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_ENTRY0;

  uint32_t DSU_ENTRY1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t END:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_END;

  uint8_t res2[4032];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_MEMTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEPCC:4;
      uint64_t FKBC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID4;

  uint32_t DSU_PID5;
  uint32_t DSU_PID6;
  uint32_t DSU_PID7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNBL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNBH:4;
      uint64_t JEPIDCL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEPIDCH:3;
      uint64_t JEPU:1;
      uint64_t REVISION:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUSMOD:4;
      uint64_t REVAND:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLEB0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE:4;
      uint64_t CCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLEB2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLEB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CID3;

};

#define DSU_0 (*(volatile struct DSU_0_tag *) 0x41002000)

struct DSU_EXT_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t reservedSpace0:1;
      uint64_t CRC:1;
      uint64_t MBIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSU_CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t CRSTEXT:1;
      uint64_t BERR:1;
      uint64_t FAIL:1;
      uint64_t PERR:1;
      uint64_t BREXT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSU_STATUSA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAL:2;
      uint64_t DBGPRES:1;
      uint64_t HPE:1;
      uint64_t DCCD0:1;
      uint64_t DCCD1:1;
      uint64_t BCCD0:1;
      uint64_t BCCD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSU_STATUSB;

  uint8_t DSU_STATUSC;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AMOD:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LENGTH:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DCC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DCC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVSEL:8;
      uint64_t REVISION:4;
      uint64_t DIE:4;
      uint64_t SERIES:6;
      uint64_t reservedSpace0:1;
      uint64_t FAMILY:5;
      uint64_t PROCESSOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LQOS:2;
      uint64_t DCCDMALEVEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_BCC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_BCC_1;

  uint8_t res0[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_DCFG_1;

  uint8_t res1[3848];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPRES:1;
      uint64_t FMT:1;
      uint64_t reservedSpace0:10;
      uint64_t ADDOFF:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_ENTRY0;

  uint32_t DSU_ENTRY1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t END:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_END;

  uint8_t res2[4032];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_MEMTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEPCC:4;
      uint64_t FKBC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID4;

  uint32_t DSU_PID5;
  uint32_t DSU_PID6;
  uint32_t DSU_PID7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNBL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNBH:4;
      uint64_t JEPIDCL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JEPIDCH:3;
      uint64_t JEPU:1;
      uint64_t REVISION:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUSMOD:4;
      uint64_t REVAND:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLEB0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE:4;
      uint64_t CCLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLEB2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLEB3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSU_CID3;

};

#define DSU_EXT_0 (*(volatile struct DSU_EXT_0_tag *) 0x41002100)

struct EIC_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:2;
      uint64_t CKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EIC_CTRLA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMISENSE:3;
      uint64_t NMIFILTEN:1;
      uint64_t NMIASYNCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EIC_NMICTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EIC_NMIFLAG;

  uint8_t res0[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_SYNCBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINTEO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_EVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:8;
      uint64_t reservedSpace0:23;
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:8;
      uint64_t reservedSpace0:23;
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:8;
      uint64_t reservedSpace0:23;
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_INTFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASYNCH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_ASYNCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SENSE0:3;
      uint64_t FILTEN0:1;
      uint64_t SENSE1:3;
      uint64_t FILTEN1:1;
      uint64_t SENSE2:3;
      uint64_t FILTEN2:1;
      uint64_t SENSE3:3;
      uint64_t FILTEN3:1;
      uint64_t SENSE4:3;
      uint64_t FILTEN4:1;
      uint64_t SENSE5:3;
      uint64_t FILTEN5:1;
      uint64_t SENSE6:3;
      uint64_t FILTEN6:1;
      uint64_t SENSE7:3;
      uint64_t FILTEN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_CONFIG_0;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBOUNCEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_DEBOUNCEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALER0:3;
      uint64_t STATES0:1;
      uint64_t reservedSpace0:12;
      uint64_t TICKON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_DPRESCALER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINSTATE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_PINSTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:8;
      uint64_t reservedSpace0:23;
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_NSCHK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:8;
      uint64_t reservedSpace0:23;
      uint64_t NMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIC_NONSEC;

};

#define EIC_0 (*(volatile struct EIC_0_tag *) 0x40002800)

struct EVSYS_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CTRLA;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL0:1;
      uint64_t CHANNEL1:1;
      uint64_t CHANNEL2:1;
      uint64_t CHANNEL3:1;
      uint64_t CHANNEL4:1;
      uint64_t CHANNEL5:1;
      uint64_t CHANNEL6:1;
      uint64_t CHANNEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_SWEVT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI:2;
      uint64_t reservedSpace0:5;
      uint64_t RREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_PRICTRL;

  uint8_t res1[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID:2;
      uint64_t reservedSpace0:6;
      uint64_t OVR:1;
      uint64_t EVD:1;
      uint64_t reservedSpace1:4;
      uint64_t READY:1;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EVSYS_INTPEND;

  uint8_t res2[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHINT0:1;
      uint64_t CHINT1:1;
      uint64_t CHINT2:1;
      uint64_t CHINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_INTSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSYCH0:1;
      uint64_t BUSYCH1:1;
      uint64_t BUSYCH2:1;
      uint64_t BUSYCH3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_BUSYCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READYUSR0:1;
      uint64_t READYUSR1:1;
      uint64_t READYUSR2:1;
      uint64_t READYUSR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_READYUSR;

  uint8_t res3[256];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHANNEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_USER_22;

  uint8_t res4[157];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_INTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_INTFLAG;

  uint8_t res5[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL0:1;
      uint64_t CHANNEL1:1;
      uint64_t CHANNEL2:1;
      uint64_t CHANNEL3:1;
      uint64_t CHANNEL4:1;
      uint64_t CHANNEL5:1;
      uint64_t CHANNEL6:1;
      uint64_t CHANNEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_NONSECCHAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL0:1;
      uint64_t CHANNEL1:1;
      uint64_t CHANNEL2:1;
      uint64_t CHANNEL3:1;
      uint64_t CHANNEL4:1;
      uint64_t CHANNEL5:1;
      uint64_t CHANNEL6:1;
      uint64_t CHANNEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_NSCHKCHAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USER0:1;
      uint64_t USER1:1;
      uint64_t USER2:1;
      uint64_t USER3:1;
      uint64_t USER4:1;
      uint64_t USER5:1;
      uint64_t USER6:1;
      uint64_t USER7:1;
      uint64_t USER8:1;
      uint64_t USER9:1;
      uint64_t USER10:1;
      uint64_t USER11:1;
      uint64_t USER12:1;
      uint64_t USER13:1;
      uint64_t USER14:1;
      uint64_t USER15:1;
      uint64_t USER16:1;
      uint64_t USER17:1;
      uint64_t USER18:1;
      uint64_t USER19:1;
      uint64_t USER20:1;
      uint64_t USER21:1;
      uint64_t USER22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_NONSECUSER_0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USER0:1;
      uint64_t USER1:1;
      uint64_t USER2:1;
      uint64_t USER3:1;
      uint64_t USER4:1;
      uint64_t USER5:1;
      uint64_t USER6:1;
      uint64_t USER7:1;
      uint64_t USER8:1;
      uint64_t USER9:1;
      uint64_t USER10:1;
      uint64_t USER11:1;
      uint64_t USER12:1;
      uint64_t USER13:1;
      uint64_t USER14:1;
      uint64_t USER15:1;
      uint64_t USER16:1;
      uint64_t USER17:1;
      uint64_t USER18:1;
      uint64_t USER19:1;
      uint64_t USER20:1;
      uint64_t USER21:1;
      uint64_t USER22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_NSCHKUSER_0;

};

#define EVSYS_0 (*(volatile struct EVSYS_0_tag *) 0x42000000)

struct EVSYS_EVSYS_CHANNEL_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVGEN:6;
      uint64_t reservedSpace0:2;
      uint64_t PATH:2;
      uint64_t EDGSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_CHANNEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYUSR:1;
      uint64_t BUSYCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHSTATUS;

};

#define EVSYS_EVSYS_CHANNEL_0_0 (*(volatile struct EVSYS_EVSYS_CHANNEL_0_0_tag *) 0x42000020)

struct EVSYS_EVSYS_CHANNEL_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVGEN:6;
      uint64_t reservedSpace0:2;
      uint64_t PATH:2;
      uint64_t EDGSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_CHANNEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYUSR:1;
      uint64_t BUSYCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHSTATUS;

};

#define EVSYS_EVSYS_CHANNEL_1_0 (*(volatile struct EVSYS_EVSYS_CHANNEL_1_0_tag *) 0x42000028)

struct EVSYS_EVSYS_CHANNEL_2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVGEN:6;
      uint64_t reservedSpace0:2;
      uint64_t PATH:2;
      uint64_t EDGSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_CHANNEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYUSR:1;
      uint64_t BUSYCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHSTATUS;

};

#define EVSYS_EVSYS_CHANNEL_2_0 (*(volatile struct EVSYS_EVSYS_CHANNEL_2_0_tag *) 0x42000030)

struct EVSYS_EVSYS_CHANNEL_3_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVGEN:6;
      uint64_t reservedSpace0:2;
      uint64_t PATH:2;
      uint64_t EDGSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_CHANNEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYUSR:1;
      uint64_t BUSYCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHSTATUS;

};

#define EVSYS_EVSYS_CHANNEL_3_0 (*(volatile struct EVSYS_EVSYS_CHANNEL_3_0_tag *) 0x42000038)

struct EVSYS_EVSYS_CHANNEL_4_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVGEN:6;
      uint64_t reservedSpace0:2;
      uint64_t PATH:2;
      uint64_t EDGSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_CHANNEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYUSR:1;
      uint64_t BUSYCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHSTATUS;

};

#define EVSYS_EVSYS_CHANNEL_4_0 (*(volatile struct EVSYS_EVSYS_CHANNEL_4_0_tag *) 0x42000040)

struct EVSYS_EVSYS_CHANNEL_5_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVGEN:6;
      uint64_t reservedSpace0:2;
      uint64_t PATH:2;
      uint64_t EDGSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_CHANNEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYUSR:1;
      uint64_t BUSYCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHSTATUS;

};

#define EVSYS_EVSYS_CHANNEL_5_0 (*(volatile struct EVSYS_EVSYS_CHANNEL_5_0_tag *) 0x42000048)

struct EVSYS_EVSYS_CHANNEL_6_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVGEN:6;
      uint64_t reservedSpace0:2;
      uint64_t PATH:2;
      uint64_t EDGSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_CHANNEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYUSR:1;
      uint64_t BUSYCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHSTATUS;

};

#define EVSYS_EVSYS_CHANNEL_6_0 (*(volatile struct EVSYS_EVSYS_CHANNEL_6_0_tag *) 0x42000050)

struct EVSYS_EVSYS_CHANNEL_7_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVGEN:6;
      uint64_t reservedSpace0:2;
      uint64_t PATH:2;
      uint64_t EDGSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSYS_CHANNEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVR:1;
      uint64_t EVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHINTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYUSR:1;
      uint64_t BUSYCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EVSYS_CHSTATUS;

};

#define EVSYS_EVSYS_CHANNEL_7_0 (*(volatile struct EVSYS_EVSYS_CHANNEL_7_0_tag *) 0x42000058)

struct FREQM_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FREQM_CTRLA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FREQM_CTRLB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REFNUM:8;
      uint64_t reservedSpace0:7;
      uint64_t DIVREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FREQM_CFGA;

  uint8_t res0[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FREQM_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FREQM_INTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FREQM_INTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FREQM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQM_SYNCBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQM_VALUE;

};

#define FREQM_0 (*(volatile struct FREQM_0_tag *) 0x40002c00)

struct GCLK_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) GCLK_CTRLA;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t reservedSpace0:1;
      uint64_t GENCTRL0:1;
      uint64_t GENCTRL1:1;
      uint64_t GENCTRL2:1;
      uint64_t GENCTRL3:1;
      uint64_t GENCTRL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_SYNCBUSY;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t GENEN:1;
      uint64_t IDC:1;
      uint64_t OOV:1;
      uint64_t OE:1;
      uint64_t DIVSEL:1;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:2;
      uint64_t DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_GENCTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t GENEN:1;
      uint64_t IDC:1;
      uint64_t OOV:1;
      uint64_t OE:1;
      uint64_t DIVSEL:1;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:2;
      uint64_t DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_GENCTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t GENEN:1;
      uint64_t IDC:1;
      uint64_t OOV:1;
      uint64_t OE:1;
      uint64_t DIVSEL:1;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:2;
      uint64_t DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_GENCTRL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t GENEN:1;
      uint64_t IDC:1;
      uint64_t OOV:1;
      uint64_t OE:1;
      uint64_t DIVSEL:1;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:2;
      uint64_t DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_GENCTRL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t GENEN:1;
      uint64_t IDC:1;
      uint64_t OOV:1;
      uint64_t OE:1;
      uint64_t DIVSEL:1;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:2;
      uint64_t DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_GENCTRL_4;

  uint8_t res2[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN:3;
      uint64_t reservedSpace0:3;
      uint64_t CHEN:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCLK_PCHCTRL_20;

};

#define GCLK_0 (*(volatile struct GCLK_0_tag *) 0x40001c00)

struct MCLK_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCLK_CTRLA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCLK_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCLK_INTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCLK_INTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CPUDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCLK_CPUDIV;

  uint8_t res0[11];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPB0:1;
      uint64_t HPB1:1;
      uint64_t HPB2:1;
      uint64_t DMAC:1;
      uint64_t DSU_bitfield:1;
      uint64_t reservedSpace0:1;
      uint64_t PAC_bitfield:1;
      uint64_t NVMCTRL_bitfield:1;
      uint64_t reservedSpace1:4;
      uint64_t TRAM_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCLK_AHBMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAC_bitfield:1;
      uint64_t PM_bitfield:1;
      uint64_t MCLK_bitfield:1;
      uint64_t RSTC:1;
      uint64_t OSCCTRL_bitfield:1;
      uint64_t OSC32KCTRL_bitfield:1;
      uint64_t SUPC:1;
      uint64_t GCLK_bitfield:1;
      uint64_t WDT:1;
      uint64_t RTC:1;
      uint64_t EIC_bitfield:1;
      uint64_t FREQM_bitfield:1;
      uint64_t PORT:1;
      uint64_t AC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCLK_APBAMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAU:1;
      uint64_t DSU_bitfield:1;
      uint64_t NVMCTRL_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCLK_APBBMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSYS_bitfield:1;
      uint64_t SERCOM0:1;
      uint64_t SERCOM1:1;
      uint64_t SERCOM2:1;
      uint64_t TC0:1;
      uint64_t TC1:1;
      uint64_t TC2:1;
      uint64_t ADC:1;
      uint64_t DAC_bitfield:1;
      uint64_t PTC:1;
      uint64_t TRNG_bitfield:1;
      uint64_t CCL_bitfield:1;
      uint64_t OPAMP_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCLK_APBCMASK;

};

#define MCLK_0 (*(volatile struct MCLK_0_tag *) 0x40000800)

struct NVMCTRL_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMD:7;
      uint64_t reservedSpace0:1;
      uint64_t CMDEX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NVMCTRL_CTRLA;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RWS:4;
      uint64_t reservedSpace1:3;
      uint64_t SLEEPPRM:2;
      uint64_t reservedSpace2:1;
      uint64_t FWUP:1;
      uint64_t reservedSpace3:4;
      uint64_t READMODE:2;
      uint64_t CACHEDIS:1;
      uint64_t QWEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_CTRLB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MANW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVMCTRL_CTRLC;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AUTOWEI:1;
      uint64_t AUTOWINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVMCTRL_EVCTRL;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t PROGE:1;
      uint64_t LOCKE:1;
      uint64_t NVME:1;
      uint64_t KEYE:1;
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVMCTRL_INTENCLR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t PROGE:1;
      uint64_t LOCKE:1;
      uint64_t NVME:1;
      uint64_t KEYE:1;
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVMCTRL_INTENSET;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t PROGE:1;
      uint64_t LOCKE:1;
      uint64_t NVME:1;
      uint64_t KEYE:1;
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVMCTRL_INTFLAG;

  uint8_t res5[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRM:1;
      uint64_t LOAD:1;
      uint64_t READY:1;
      uint64_t DALFUSE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NVMCTRL_STATUS;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AOFFSET:16;
      uint64_t reservedSpace0:6;
      uint64_t ARRAY:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_ADDR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BS:1;
      uint64_t AS:1;
      uint64_t DS:1;
      uint64_t reservedSpace0:5;
      uint64_t SLKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NVMCTRL_SULCK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BNS:1;
      uint64_t ANS:1;
      uint64_t DNS:1;
      uint64_t reservedSpace0:5;
      uint64_t NSLKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NVMCTRL_NSULCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASHP:16;
      uint64_t PSZ:3;
      uint64_t reservedSpace0:1;
      uint64_t DFLASHP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_PARAM;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSCKEY:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_DSCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMPEEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SILACC:1;
      uint64_t DSCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t DXN:1;
      uint64_t reservedSpace2:1;
      uint64_t TEROW:3;
      uint64_t reservedSpace3:13;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_SECCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCREN:1;
      uint64_t BCWEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_SCFGB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URWEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_SCFGAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_NONSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVMCTRL_NSCHK;

};

#define NVMCTRL_0 (*(volatile struct NVMCTRL_0_tag *) 0x41004000)

struct OPAMP_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:5;
      uint64_t LPMUX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPAMP_CTRLA;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t READY0:1;
      uint64_t READY1:1;
      uint64_t READY2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPAMP_STATUS;

  uint8_t res1[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t ANAOUT:1;
      uint64_t BIAS:2;
      uint64_t RES2VCC:1;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
      uint64_t RES2OUT:1;
      uint64_t RES1EN:1;
      uint64_t RES1MUX:3;
      uint64_t POTMUX:3;
      uint64_t MUXPOS:4;
      uint64_t MUXNEG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP_OPAMPCTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t ANAOUT:1;
      uint64_t BIAS:2;
      uint64_t RES2VCC:1;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
      uint64_t RES2OUT:1;
      uint64_t RES1EN:1;
      uint64_t RES1MUX:3;
      uint64_t POTMUX:3;
      uint64_t MUXPOS:4;
      uint64_t MUXNEG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP_OPAMPCTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t ANAOUT:1;
      uint64_t BIAS:2;
      uint64_t RES2VCC:1;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
      uint64_t RES2OUT:1;
      uint64_t RES1EN:1;
      uint64_t RES1MUX:3;
      uint64_t POTMUX:3;
      uint64_t MUXPOS:4;
      uint64_t MUXNEG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPAMP_OPAMPCTRL_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RES2OUT:1;
      uint64_t RES1EN:1;
      uint64_t RES1MUX:1;
      uint64_t POTMUX:3;
      uint64_t REFBUFLEVEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPAMP_RESCTRL;

};

#define OPAMP_0 (*(volatile struct OPAMP_0_tag *) 0x42003000)

struct OSCCTRL_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CFDEO:1;
      uint64_t TUNEEI:1;
      uint64_t TUNEINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_EVCTRL;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSCRDY:1;
      uint64_t XOSCFAIL:1;
      uint64_t reservedSpace0:2;
      uint64_t OSC16MRDY:1;
      uint64_t reservedSpace1:3;
      uint64_t DFLLULPRDY:1;
      uint64_t DFLLULPLOCK:1;
      uint64_t DFLLULPNOLOCK:1;
      uint64_t reservedSpace2:5;
      uint64_t DPLLLCKR:1;
      uint64_t DPLLLCKF:1;
      uint64_t DPLLLTO:1;
      uint64_t DPLLLDRTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSCRDY:1;
      uint64_t XOSCFAIL:1;
      uint64_t reservedSpace0:2;
      uint64_t OSC16MRDY:1;
      uint64_t reservedSpace1:3;
      uint64_t DFLLULPRDY:1;
      uint64_t DFLLULPLOCK:1;
      uint64_t DFLLULPNOLOCK:1;
      uint64_t reservedSpace2:5;
      uint64_t DPLLLCKR:1;
      uint64_t DPLLLCKF:1;
      uint64_t DPLLLTO:1;
      uint64_t DPLLLDRTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSCRDY:1;
      uint64_t XOSCFAIL:1;
      uint64_t reservedSpace0:2;
      uint64_t OSC16MRDY:1;
      uint64_t reservedSpace1:3;
      uint64_t DFLLULPRDY:1;
      uint64_t DFLLULPLOCK:1;
      uint64_t DFLLULPNOLOCK:1;
      uint64_t reservedSpace2:5;
      uint64_t DPLLLCKR:1;
      uint64_t DPLLLCKF:1;
      uint64_t DPLLLTO:1;
      uint64_t DPLLLDRTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_INTFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSCRDY:1;
      uint64_t XOSCFAIL:1;
      uint64_t XOSCCKSW:1;
      uint64_t reservedSpace0:1;
      uint64_t OSC16MRDY:1;
      uint64_t reservedSpace1:3;
      uint64_t DFLLULPRDY:1;
      uint64_t DFLLULPLOCK:1;
      uint64_t DFLLULPNOLOCK:1;
      uint64_t reservedSpace2:5;
      uint64_t DPLLLCKR:1;
      uint64_t DPLLLCKF:1;
      uint64_t DPLLTO:1;
      uint64_t DPLLLDRTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_STATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t XTALEN:1;
      uint64_t CFDEN:1;
      uint64_t SWBEN:1;
      uint64_t reservedSpace1:1;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
      uint64_t GAIN:3;
      uint64_t AMPGC:1;
      uint64_t STARTUP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OSCCTRL_XOSCCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CFDPRESC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_CFDPRESC;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t FSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_OSC16MCTRL;

  uint8_t res2[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace1:1;
      uint64_t BINSE:1;
      uint64_t SAFE:1;
      uint64_t DITHER:1;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
      uint64_t DIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OSCCTRL_DFLLULPCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STEP:3;
      uint64_t reservedSpace0:1;
      uint64_t PER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_DFLLULPDITHER;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t RREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_DFLLULPRREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_DFLLULPDLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_DFLLULPRATIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t TUNE:1;
      uint64_t DELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_DFLLULPSYNCBUSY;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t reservedSpace1:4;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_DPLLCTRLA;

  uint8_t res3[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDR:12;
      uint64_t reservedSpace0:4;
      uint64_t LDRFRAC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_DPLLRATIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTER:2;
      uint64_t LPEN:1;
      uint64_t WUF:1;
      uint64_t REFCLK:2;
      uint64_t reservedSpace0:2;
      uint64_t LTIME:3;
      uint64_t reservedSpace1:1;
      uint64_t LBYPASS:1;
      uint64_t reservedSpace2:3;
      uint64_t DIV:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL_DPLLCTRLB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRESC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_DPLLPRESC;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t DPLLRATIO:1;
      uint64_t DPLLPRESC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_DPLLSYNCBUSY;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t CLKRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCCTRL_DPLLSTATUS;

};

#define OSCCTRL_0 (*(volatile struct OSCCTRL_0_tag *) 0x40001000)

struct OSC32KCTRL_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC32KRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKFAIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC32KCTRL_INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC32KRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKFAIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC32KCTRL_INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC32KRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKFAIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC32KCTRL_INTFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC32KRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKFAIL:1;
      uint64_t CLKSW:1;
      uint64_t ULP32KSW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC32KCTRL_STATUS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSC32KCTRL_RTCCTRL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ENABLE:1;
      uint64_t XTALEN:1;
      uint64_t EN32K:1;
      uint64_t EN1K:1;
      uint64_t reservedSpace1:1;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
      uint64_t STARTUP:3;
      uint64_t reservedSpace2:1;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OSC32KCTRL_XOSC32K;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CFDEN:1;
      uint64_t SWBACK:1;
      uint64_t CFDPRESC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSC32KCTRL_CFDCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CFDEO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSC32KCTRL_EVCTRL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ULP32KSW:1;
      uint64_t reservedSpace1:2;
      uint64_t CALIB:5;
      uint64_t reservedSpace2:2;
      uint64_t WRTLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC32KCTRL_OSCULP32K;

};

#define OSC32KCTRL_0 (*(volatile struct OSC32KCTRL_0_tag *) 0x40001400)

struct PAC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:16;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_WRCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ERREO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PAC_EVCTRL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PAC_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PAC_INTENSET;

  uint8_t res1[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH:1;
      uint64_t HPB0:1;
      uint64_t HPB1:1;
      uint64_t HPB2:1;
      uint64_t HSRAMCPU:1;
      uint64_t HSRAMDMAC:1;
      uint64_t HSRAMDSU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_INTFLAGAHB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAC_bitfield:1;
      uint64_t PM_bitfield:1;
      uint64_t MCLK_bitfield:1;
      uint64_t RSTC:1;
      uint64_t OSCCTRL_bitfield:1;
      uint64_t OSC32KCTRL_bitfield:1;
      uint64_t SUPC:1;
      uint64_t GCLK_bitfield:1;
      uint64_t WDT:1;
      uint64_t RTC:1;
      uint64_t EIC_bitfield:1;
      uint64_t FREQM_bitfield:1;
      uint64_t PORT:1;
      uint64_t AC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_INTFLAGA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAU:1;
      uint64_t DSU_bitfield:1;
      uint64_t NVMCTRL_bitfield:1;
      uint64_t DMAC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_INTFLAGB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSYS_bitfield:1;
      uint64_t SERCOM0:1;
      uint64_t SERCOM1:1;
      uint64_t SERCOM2:1;
      uint64_t TC0:1;
      uint64_t TC1:1;
      uint64_t TC2:1;
      uint64_t ADC:1;
      uint64_t DAC_bitfield:1;
      uint64_t PTC:1;
      uint64_t TRNG_bitfield:1;
      uint64_t CCL_bitfield:1;
      uint64_t OPAMP_bitfield:1;
      uint64_t TRAM_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_INTFLAGC;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAC_bitfield:1;
      uint64_t PM_bitfield:1;
      uint64_t MCLK_bitfield:1;
      uint64_t RSTC:1;
      uint64_t OSCCTRL_bitfield:1;
      uint64_t OSC32KCTRL_bitfield:1;
      uint64_t SUPC:1;
      uint64_t GCLK_bitfield:1;
      uint64_t WDT:1;
      uint64_t RTC:1;
      uint64_t EIC_bitfield:1;
      uint64_t FREQM_bitfield:1;
      uint64_t PORT:1;
      uint64_t AC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_STATUSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAU:1;
      uint64_t DSU_bitfield:1;
      uint64_t NVMCTRL_bitfield:1;
      uint64_t DMAC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_STATUSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSYS_bitfield:1;
      uint64_t SERCOM0:1;
      uint64_t SERCOM1:1;
      uint64_t SERCOM2:1;
      uint64_t TC0:1;
      uint64_t TC1:1;
      uint64_t TC2:1;
      uint64_t ADC:1;
      uint64_t DAC_bitfield:1;
      uint64_t PTC:1;
      uint64_t TRNG_bitfield:1;
      uint64_t CCL_bitfield:1;
      uint64_t OPAMP_bitfield:1;
      uint64_t TRAM_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_STATUSC;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAC_bitfield:1;
      uint64_t PM_bitfield:1;
      uint64_t MCLK_bitfield:1;
      uint64_t RSTC:1;
      uint64_t OSCCTRL_bitfield:1;
      uint64_t OSC32KCTRL_bitfield:1;
      uint64_t SUPC:1;
      uint64_t GCLK_bitfield:1;
      uint64_t WDT:1;
      uint64_t RTC:1;
      uint64_t EIC_bitfield:1;
      uint64_t FREQM_bitfield:1;
      uint64_t PORT:1;
      uint64_t AC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_NONSECA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAU:1;
      uint64_t DSU_bitfield:1;
      uint64_t NVMCTRL_bitfield:1;
      uint64_t DMAC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_NONSECB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSYS_bitfield:1;
      uint64_t SERCOM0:1;
      uint64_t SERCOM1:1;
      uint64_t SERCOM2:1;
      uint64_t TC0:1;
      uint64_t TC1:1;
      uint64_t TC2:1;
      uint64_t ADC:1;
      uint64_t DAC_bitfield:1;
      uint64_t PTC:1;
      uint64_t TRNG_bitfield:1;
      uint64_t CCL_bitfield:1;
      uint64_t OPAMP_bitfield:1;
      uint64_t TRAM_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_NONSECC;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAC_bitfield:1;
      uint64_t PM_bitfield:1;
      uint64_t MCLK_bitfield:1;
      uint64_t RSTC:1;
      uint64_t OSCCTRL_bitfield:1;
      uint64_t OSC32KCTRL_bitfield:1;
      uint64_t SUPC:1;
      uint64_t GCLK_bitfield:1;
      uint64_t WDT:1;
      uint64_t RTC:1;
      uint64_t EIC_bitfield:1;
      uint64_t FREQM_bitfield:1;
      uint64_t PORT:1;
      uint64_t AC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_SECLOCKA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAU:1;
      uint64_t DSU_bitfield:1;
      uint64_t NVMCTRL_bitfield:1;
      uint64_t DMAC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_SECLOCKB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSYS_bitfield:1;
      uint64_t SERCOM0:1;
      uint64_t SERCOM1:1;
      uint64_t SERCOM2:1;
      uint64_t TC0:1;
      uint64_t TC1:1;
      uint64_t TC2:1;
      uint64_t ADC:1;
      uint64_t DAC_bitfield:1;
      uint64_t PTC:1;
      uint64_t TRNG_bitfield:1;
      uint64_t CCL_bitfield:1;
      uint64_t OPAMP_bitfield:1;
      uint64_t TRAM_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAC_SECLOCKC;

};

#define PAC_0 (*(volatile struct PAC_0_tag *) 0x40000000)

struct PM_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SLEEPMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PM_SLEEPCFG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLSEL:2;
      uint64_t reservedSpace0:5;
      uint64_t PLDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PM_PLCFG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAMPSWC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PM_PWCFG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PM_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PM_INTENSET;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PM_INTFLAG;

  uint8_t res0[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PDCFG:1;
      uint64_t reservedSpace0:3;
      uint64_t DPGPDSW:1;
      uint64_t reservedSpace1:1;
      uint64_t VREGSMOD:2;
      uint64_t reservedSpace2:2;
      uint64_t BBIASHS:1;
      uint64_t reservedSpace3:1;
      uint64_t BBIASTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PM_STDBYCFG;

};

#define PM_0 (*(volatile struct PM_0_tag *) 0x40000401)

struct PORT_PORT_GROUP_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_DIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_DIRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_DIRSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRTGL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_DIRTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_OUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_OUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTTGL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_OUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMPLING:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINMASK:16;
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
      uint64_t reservedSpace1:1;
      uint64_t PMUX:4;
      uint64_t WRPMUX:1;
      uint64_t reservedSpace2:1;
      uint64_t WRPINCFG:1;
      uint64_t HWSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_WRCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID0:5;
      uint64_t EVACT0:2;
      uint64_t PORTEI0:1;
      uint64_t PID1:5;
      uint64_t EVACT1:2;
      uint64_t PORTEI1:1;
      uint64_t PID2:5;
      uint64_t EVACT2:2;
      uint64_t PORTEI2:1;
      uint64_t PID3:5;
      uint64_t EVACT3:2;
      uint64_t PORTEI3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_EVCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_INTFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONSEC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_NONSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSCHK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_NSCHK;

};

#define PORT_PORT_GROUP_0_0 (*(volatile struct PORT_PORT_GROUP_0_0_tag *) 0x40003000)

struct PORT_IOBUS_PORT_GROUP_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_DIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_DIRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_DIRSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRTGL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_DIRTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_OUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_OUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTTGL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_OUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMPLING:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINMASK:16;
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
      uint64_t reservedSpace1:1;
      uint64_t PMUX:4;
      uint64_t WRPMUX:1;
      uint64_t reservedSpace2:1;
      uint64_t WRPINCFG:1;
      uint64_t HWSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_WRCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID0:5;
      uint64_t EVACT0:2;
      uint64_t PORTEI0:1;
      uint64_t PID1:5;
      uint64_t EVACT1:2;
      uint64_t PORTEI1:1;
      uint64_t PID2:5;
      uint64_t EVACT2:2;
      uint64_t PORTEI2:1;
      uint64_t PID3:5;
      uint64_t EVACT3:2;
      uint64_t PORTEI3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_EVCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXE:4;
      uint64_t PMUXO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PMUX_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMUXEN:1;
      uint64_t INEN:1;
      uint64_t PULLEN:1;
      uint64_t reservedSpace0:3;
      uint64_t DRVSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PORT_PINCFG_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_INTFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONSEC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_NONSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSCHK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_NSCHK;

};

#define PORT_IOBUS_PORT_GROUP_0_0 (*(volatile struct PORT_IOBUS_PORT_GROUP_0_0_tag *) 0x60000000)

struct RSTC_2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t POR:1;
      uint64_t BODCORE:1;
      uint64_t BODVDD:1;
      uint64_t reservedSpace0:1;
      uint64_t EXT:1;
      uint64_t WDT:1;
      uint64_t SYST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RSTC_RCAUSE;

};

#define RSTC_2 (*(volatile struct RSTC_2_tag *) 0x40000c00)

struct RTC_RTC_MODE0_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:3;
      uint64_t MATCHCLR:1;
      uint64_t PRESCALER:4;
      uint64_t reservedSpace1:2;
      uint64_t GPTRST:1;
      uint64_t COUNTSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_CTRLA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP0EN:1;
      uint64_t reservedSpace0:3;
      uint64_t DEBMAJ:1;
      uint64_t DEBASYNC:1;
      uint64_t RTCOUT:1;
      uint64_t DMAEN:1;
      uint64_t DEBF:3;
      uint64_t reservedSpace1:1;
      uint64_t ACTF:3;
      uint64_t SEPTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEREO0:1;
      uint64_t PEREO1:1;
      uint64_t PEREO2:1;
      uint64_t PEREO3:1;
      uint64_t PEREO4:1;
      uint64_t PEREO5:1;
      uint64_t PEREO6:1;
      uint64_t PEREO7:1;
      uint64_t CMPEO0:1;
      uint64_t reservedSpace0:5;
      uint64_t TAMPEREO:1;
      uint64_t OVFEO:1;
      uint64_t TAMPEVEI:1;
      uint64_t reservedSpace1:7;
      uint64_t PERDEO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_EVCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t CMP0:1;
      uint64_t reservedSpace0:5;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTENCLR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t CMP0:1;
      uint64_t reservedSpace0:5;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTENSET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t CMP0:1;
      uint64_t reservedSpace0:5;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTC_DBGCTRL;

  uint8_t res0[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t FREQCORR:1;
      uint64_t COUNT:1;
      uint64_t reservedSpace0:1;
      uint64_t COMP0:1;
      uint64_t reservedSpace1:9;
      uint64_t COUNTSYNC:1;
      uint64_t GP0:1;
      uint64_t GP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SYNCBUSY;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VALUE:7;
      uint64_t SIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTC_FREQCORR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_COUNT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_COMP_0;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_GP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_GP_1;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN0ACT:2;
      uint64_t IN1ACT:2;
      uint64_t IN2ACT:2;
      uint64_t IN3ACT:2;
      uint64_t reservedSpace0:8;
      uint64_t TAMLVL0:1;
      uint64_t TAMLVL1:1;
      uint64_t TAMLVL2:1;
      uint64_t TAMLVL3:1;
      uint64_t reservedSpace1:4;
      uint64_t DEBNC0:1;
      uint64_t DEBNC1:1;
      uint64_t DEBNC2:1;
      uint64_t DEBNC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMESTAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMPID0:1;
      uint64_t TAMPID1:1;
      uint64_t TAMPID2:1;
      uint64_t TAMPID3:1;
      uint64_t reservedSpace0:27;
      uint64_t TAMPEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALSI0:1;
      uint64_t ALSI1:1;
      uint64_t ALSI2:1;
      uint64_t ALSI3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPCTRLB;

};

#define RTC_RTC_MODE0_0 (*(volatile struct RTC_RTC_MODE0_0_tag *) 0x40002400)

struct RTC_RTC_MODE1_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:4;
      uint64_t PRESCALER:4;
      uint64_t reservedSpace1:2;
      uint64_t GPTRST:1;
      uint64_t COUNTSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_CTRLA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP0EN:1;
      uint64_t reservedSpace0:3;
      uint64_t DEBMAJ:1;
      uint64_t DEBASYNC:1;
      uint64_t RTCOUT:1;
      uint64_t DMAEN:1;
      uint64_t DEBF:3;
      uint64_t reservedSpace1:1;
      uint64_t ACTF:3;
      uint64_t SEPTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEREO0:1;
      uint64_t PEREO1:1;
      uint64_t PEREO2:1;
      uint64_t PEREO3:1;
      uint64_t PEREO4:1;
      uint64_t PEREO5:1;
      uint64_t PEREO6:1;
      uint64_t PEREO7:1;
      uint64_t CMPEO0:1;
      uint64_t CMPEO1:1;
      uint64_t reservedSpace0:4;
      uint64_t TAMPEREO:1;
      uint64_t OVFEO:1;
      uint64_t TAMPEVEI:1;
      uint64_t reservedSpace1:7;
      uint64_t PERDEO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_EVCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t CMP0:1;
      uint64_t CMP1:1;
      uint64_t reservedSpace0:4;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTENCLR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t CMP0:1;
      uint64_t CMP1:1;
      uint64_t reservedSpace0:4;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTENSET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t CMP0:1;
      uint64_t CMP1:1;
      uint64_t reservedSpace0:4;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTC_DBGCTRL;

  uint8_t res0[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t FREQCORR:1;
      uint64_t COUNT:1;
      uint64_t PER:1;
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t reservedSpace0:8;
      uint64_t COUNTSYNC:1;
      uint64_t GP0:1;
      uint64_t GP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SYNCBUSY;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VALUE:7;
      uint64_t SIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTC_FREQCORR;

  uint8_t res1[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_COUNT;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_PER;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_COMP_0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_COMP_1;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_GP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_GP_1;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN0ACT:2;
      uint64_t IN1ACT:2;
      uint64_t IN2ACT:2;
      uint64_t IN3ACT:2;
      uint64_t reservedSpace0:8;
      uint64_t TAMLVL0:1;
      uint64_t TAMLVL1:1;
      uint64_t TAMLVL2:1;
      uint64_t TAMLVL3:1;
      uint64_t reservedSpace1:4;
      uint64_t DEBNC0:1;
      uint64_t DEBNC1:1;
      uint64_t DEBNC2:1;
      uint64_t DEBNC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMESTAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMPID0:1;
      uint64_t TAMPID1:1;
      uint64_t TAMPID2:1;
      uint64_t TAMPID3:1;
      uint64_t reservedSpace0:27;
      uint64_t TAMPEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALSI0:1;
      uint64_t ALSI1:1;
      uint64_t ALSI2:1;
      uint64_t ALSI3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPCTRLB;

};

#define RTC_RTC_MODE1_0 (*(volatile struct RTC_RTC_MODE1_0_tag *) 0x40002400)

struct RTC_RTC_MODE2_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CLKREP:1;
      uint64_t MATCHCLR:1;
      uint64_t PRESCALER:4;
      uint64_t reservedSpace1:2;
      uint64_t GPTRST:1;
      uint64_t CLOCKSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_CTRLA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP0EN:1;
      uint64_t reservedSpace0:3;
      uint64_t DEBMAJ:1;
      uint64_t DEBASYNC:1;
      uint64_t RTCOUT:1;
      uint64_t DMAEN:1;
      uint64_t DEBF:3;
      uint64_t reservedSpace1:1;
      uint64_t ACTF:3;
      uint64_t SEPTO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_CTRLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEREO0:1;
      uint64_t PEREO1:1;
      uint64_t PEREO2:1;
      uint64_t PEREO3:1;
      uint64_t PEREO4:1;
      uint64_t PEREO5:1;
      uint64_t PEREO6:1;
      uint64_t PEREO7:1;
      uint64_t ALARMEO0:1;
      uint64_t reservedSpace0:5;
      uint64_t TAMPEREO:1;
      uint64_t OVFEO:1;
      uint64_t TAMPEVEI:1;
      uint64_t reservedSpace1:7;
      uint64_t PERDEO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_EVCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t ALARM0:1;
      uint64_t reservedSpace0:5;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTENCLR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t ALARM0:1;
      uint64_t reservedSpace0:5;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTENSET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER0:1;
      uint64_t PER1:1;
      uint64_t PER2:1;
      uint64_t PER3:1;
      uint64_t PER4:1;
      uint64_t PER5:1;
      uint64_t PER6:1;
      uint64_t PER7:1;
      uint64_t ALARM0:1;
      uint64_t reservedSpace0:5;
      uint64_t TAMPER:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RTC_INTFLAG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTC_DBGCTRL;

  uint8_t res0[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t FREQCORR:1;
      uint64_t CLOCK:1;
      uint64_t reservedSpace0:1;
      uint64_t ALARM0:1;
      uint64_t reservedSpace1:5;
      uint64_t MASK0:1;
      uint64_t reservedSpace2:3;
      uint64_t CLOCKSYNC:1;
      uint64_t GP0:1;
      uint64_t GP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SYNCBUSY;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VALUE:7;
      uint64_t SIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTC_FREQCORR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECOND:6;
      uint64_t MINUTE:6;
      uint64_t HOUR:5;
      uint64_t DAY:5;
      uint64_t MONTH:4;
      uint64_t YEAR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CLOCK;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_GP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_GP_1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN0ACT:2;
      uint64_t IN1ACT:2;
      uint64_t IN2ACT:2;
      uint64_t IN3ACT:2;
      uint64_t reservedSpace0:8;
      uint64_t TAMLVL0:1;
      uint64_t TAMLVL1:1;
      uint64_t TAMLVL2:1;
      uint64_t TAMLVL3:1;
      uint64_t reservedSpace1:4;
      uint64_t DEBNC0:1;
      uint64_t DEBNC1:1;
      uint64_t DEBNC2:1;
      uint64_t DEBNC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECOND:6;
      uint64_t MINUTE:6;
      uint64_t HOUR:5;
      uint64_t DAY:5;
      uint64_t MONTH:4;
      uint64_t YEAR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMESTAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMPID0:1;
      uint64_t TAMPID1:1;
      uint64_t TAMPID2:1;
      uint64_t TAMPID3:1;
      uint64_t reservedSpace0:27;
      uint64_t TAMPEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALSI0:1;
      uint64_t ALSI1:1;
      uint64_t ALSI2:1;
      uint64_t ALSI3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TAMPCTRLB;

};

#define RTC_RTC_MODE2_0 (*(volatile struct RTC_RTC_MODE2_0_tag *) 0x40002400)

struct RTC_RTC_MODE2_RTC_MODE2_ALARM_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECOND:6;
      uint64_t MINUTE:6;
      uint64_t HOUR:5;
      uint64_t DAY:5;
      uint64_t MONTH:4;
      uint64_t YEAR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_ALARM;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTC_MASK;

};

#define RTC_RTC_MODE2_RTC_MODE2_ALARM_0_0 (*(volatile struct RTC_RTC_MODE2_RTC_MODE2_ALARM_0_0_tag *) 0x40002420)

struct SERCOM0_SERCOM_I2CM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:8;
      uint64_t PINOUT:1;
      uint64_t reservedSpace2:3;
      uint64_t SDAHOLD:2;
      uint64_t MEXTTOEN:1;
      uint64_t SEXTTOEN:1;
      uint64_t SPEED:2;
      uint64_t reservedSpace3:1;
      uint64_t SCLSM:1;
      uint64_t INACTOUT:2;
      uint64_t LOWTOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SMEN:1;
      uint64_t QCEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CMD:2;
      uint64_t ACKACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUD:8;
      uint64_t BAUDLOW:8;
      uint64_t HSBAUD:8;
      uint64_t HSBAUDLOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_BAUD;

  uint8_t res1[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res3[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res4[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t ARBLOST:1;
      uint64_t RXNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSSTATE:2;
      uint64_t LOWTOUT:1;
      uint64_t CLKHOLD:1;
      uint64_t MEXTTOUT:1;
      uint64_t SEXTTOUT:1;
      uint64_t LENERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t SYSOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:11;
      uint64_t reservedSpace0:2;
      uint64_t LENEN:1;
      uint64_t HS:1;
      uint64_t TENBITEN:1;
      uint64_t LEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DATA;

  uint8_t res6[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGSTOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DBGCTRL;

};

#define SERCOM0_SERCOM_I2CM_0 (*(volatile struct SERCOM0_SERCOM_I2CM_0_tag *) 0x42000400)

struct SERCOM0_SERCOM_I2CS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:8;
      uint64_t PINOUT:1;
      uint64_t reservedSpace2:3;
      uint64_t SDAHOLD:2;
      uint64_t reservedSpace3:1;
      uint64_t SEXTTOEN:1;
      uint64_t SPEED:2;
      uint64_t reservedSpace4:1;
      uint64_t SCLSM:1;
      uint64_t reservedSpace5:2;
      uint64_t LOWTOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SMEN:1;
      uint64_t GCMD:1;
      uint64_t AACKEN:1;
      uint64_t reservedSpace1:3;
      uint64_t AMODE:2;
      uint64_t CMD:2;
      uint64_t ACKACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res3[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t COLL:1;
      uint64_t RXNACK:1;
      uint64_t DIR:1;
      uint64_t SR:1;
      uint64_t reservedSpace0:1;
      uint64_t LOWTOUT:1;
      uint64_t CLKHOLD:1;
      uint64_t reservedSpace1:1;
      uint64_t SEXTTOUT:1;
      uint64_t HS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GENCEN:1;
      uint64_t ADDR:10;
      uint64_t reservedSpace0:4;
      uint64_t TENBITEN:1;
      uint64_t reservedSpace1:1;
      uint64_t ADDRMASK:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DATA;

};

#define SERCOM0_SERCOM_I2CS_0 (*(volatile struct SERCOM0_SERCOM_I2CS_0_tag *) 0x42000400)

struct SERCOM0_SERCOM_SPI_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t IBON:1;
      uint64_t reservedSpace1:7;
      uint64_t DOPO:2;
      uint64_t reservedSpace2:2;
      uint64_t DIPO:2;
      uint64_t reservedSpace3:2;
      uint64_t FORM:4;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t DORD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t PLOADEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SSDE:1;
      uint64_t reservedSpace2:3;
      uint64_t MSSEN:1;
      uint64_t AMODE:2;
      uint64_t reservedSpace3:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BAUD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_BAUD;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res3[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res4[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BUFOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t CTRLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t ADDRMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_DATA;

  uint8_t res6[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGSTOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DBGCTRL;

};

#define SERCOM0_SERCOM_SPI_0 (*(volatile struct SERCOM0_SERCOM_SPI_0_tag *) 0x42000400)

struct SERCOM1_SERCOM_I2CM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:8;
      uint64_t PINOUT:1;
      uint64_t reservedSpace2:3;
      uint64_t SDAHOLD:2;
      uint64_t MEXTTOEN:1;
      uint64_t SEXTTOEN:1;
      uint64_t SPEED:2;
      uint64_t reservedSpace3:1;
      uint64_t SCLSM:1;
      uint64_t INACTOUT:2;
      uint64_t LOWTOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SMEN:1;
      uint64_t QCEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CMD:2;
      uint64_t ACKACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUD:8;
      uint64_t BAUDLOW:8;
      uint64_t HSBAUD:8;
      uint64_t HSBAUDLOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_BAUD;

  uint8_t res1[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res3[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res4[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t ARBLOST:1;
      uint64_t RXNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSSTATE:2;
      uint64_t LOWTOUT:1;
      uint64_t CLKHOLD:1;
      uint64_t MEXTTOUT:1;
      uint64_t SEXTTOUT:1;
      uint64_t LENERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t SYSOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:11;
      uint64_t reservedSpace0:2;
      uint64_t LENEN:1;
      uint64_t HS:1;
      uint64_t TENBITEN:1;
      uint64_t LEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DATA;

  uint8_t res6[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGSTOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DBGCTRL;

};

#define SERCOM1_SERCOM_I2CM_0 (*(volatile struct SERCOM1_SERCOM_I2CM_0_tag *) 0x42000800)

struct SERCOM1_SERCOM_I2CS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:8;
      uint64_t PINOUT:1;
      uint64_t reservedSpace2:3;
      uint64_t SDAHOLD:2;
      uint64_t reservedSpace3:1;
      uint64_t SEXTTOEN:1;
      uint64_t SPEED:2;
      uint64_t reservedSpace4:1;
      uint64_t SCLSM:1;
      uint64_t reservedSpace5:2;
      uint64_t LOWTOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SMEN:1;
      uint64_t GCMD:1;
      uint64_t AACKEN:1;
      uint64_t reservedSpace1:3;
      uint64_t AMODE:2;
      uint64_t CMD:2;
      uint64_t ACKACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res3[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t COLL:1;
      uint64_t RXNACK:1;
      uint64_t DIR:1;
      uint64_t SR:1;
      uint64_t reservedSpace0:1;
      uint64_t LOWTOUT:1;
      uint64_t CLKHOLD:1;
      uint64_t reservedSpace1:1;
      uint64_t SEXTTOUT:1;
      uint64_t HS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GENCEN:1;
      uint64_t ADDR:10;
      uint64_t reservedSpace0:4;
      uint64_t TENBITEN:1;
      uint64_t reservedSpace1:1;
      uint64_t ADDRMASK:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DATA;

};

#define SERCOM1_SERCOM_I2CS_0 (*(volatile struct SERCOM1_SERCOM_I2CS_0_tag *) 0x42000800)

struct SERCOM1_SERCOM_SPI_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t IBON:1;
      uint64_t reservedSpace1:7;
      uint64_t DOPO:2;
      uint64_t reservedSpace2:2;
      uint64_t DIPO:2;
      uint64_t reservedSpace3:2;
      uint64_t FORM:4;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t DORD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t PLOADEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SSDE:1;
      uint64_t reservedSpace2:3;
      uint64_t MSSEN:1;
      uint64_t AMODE:2;
      uint64_t reservedSpace3:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BAUD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_BAUD;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res3[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res4[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BUFOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t CTRLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t ADDRMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_DATA;

  uint8_t res6[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGSTOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DBGCTRL;

};

#define SERCOM1_SERCOM_SPI_0 (*(volatile struct SERCOM1_SERCOM_SPI_0_tag *) 0x42000800)

struct SERCOM2_SERCOM_I2CM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:8;
      uint64_t PINOUT:1;
      uint64_t reservedSpace2:3;
      uint64_t SDAHOLD:2;
      uint64_t MEXTTOEN:1;
      uint64_t SEXTTOEN:1;
      uint64_t SPEED:2;
      uint64_t reservedSpace3:1;
      uint64_t SCLSM:1;
      uint64_t INACTOUT:2;
      uint64_t LOWTOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SMEN:1;
      uint64_t QCEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CMD:2;
      uint64_t ACKACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUD:8;
      uint64_t BAUDLOW:8;
      uint64_t HSBAUD:8;
      uint64_t HSBAUDLOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_BAUD;

  uint8_t res1[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res3[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:1;
      uint64_t SB:1;
      uint64_t reservedSpace0:5;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res4[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t ARBLOST:1;
      uint64_t RXNACK:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSSTATE:2;
      uint64_t LOWTOUT:1;
      uint64_t CLKHOLD:1;
      uint64_t MEXTTOUT:1;
      uint64_t SEXTTOUT:1;
      uint64_t LENERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t SYSOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:11;
      uint64_t reservedSpace0:2;
      uint64_t LENEN:1;
      uint64_t HS:1;
      uint64_t TENBITEN:1;
      uint64_t LEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DATA;

  uint8_t res6[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGSTOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DBGCTRL;

};

#define SERCOM2_SERCOM_I2CM_0 (*(volatile struct SERCOM2_SERCOM_I2CM_0_tag *) 0x42000c00)

struct SERCOM2_SERCOM_I2CS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t reservedSpace1:8;
      uint64_t PINOUT:1;
      uint64_t reservedSpace2:3;
      uint64_t SDAHOLD:2;
      uint64_t reservedSpace3:1;
      uint64_t SEXTTOEN:1;
      uint64_t SPEED:2;
      uint64_t reservedSpace4:1;
      uint64_t SCLSM:1;
      uint64_t reservedSpace5:2;
      uint64_t LOWTOUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SMEN:1;
      uint64_t GCMD:1;
      uint64_t AACKEN:1;
      uint64_t reservedSpace1:3;
      uint64_t AMODE:2;
      uint64_t CMD:2;
      uint64_t ACKACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PREC:1;
      uint64_t AMATCH:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:4;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res3[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t COLL:1;
      uint64_t RXNACK:1;
      uint64_t DIR:1;
      uint64_t SR:1;
      uint64_t reservedSpace0:1;
      uint64_t LOWTOUT:1;
      uint64_t CLKHOLD:1;
      uint64_t reservedSpace1:1;
      uint64_t SEXTTOUT:1;
      uint64_t HS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GENCEN:1;
      uint64_t ADDR:10;
      uint64_t reservedSpace0:4;
      uint64_t TENBITEN:1;
      uint64_t reservedSpace1:1;
      uint64_t ADDRMASK:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DATA;

};

#define SERCOM2_SERCOM_I2CS_0 (*(volatile struct SERCOM2_SERCOM_I2CS_0_tag *) 0x42000c00)

struct SERCOM2_SERCOM_SPI_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:3;
      uint64_t reservedSpace0:2;
      uint64_t RUNSTDBY:1;
      uint64_t IBON:1;
      uint64_t reservedSpace1:7;
      uint64_t DOPO:2;
      uint64_t reservedSpace2:2;
      uint64_t DIPO:2;
      uint64_t reservedSpace3:2;
      uint64_t FORM:4;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t DORD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSIZE:3;
      uint64_t reservedSpace0:3;
      uint64_t PLOADEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SSDE:1;
      uint64_t reservedSpace2:3;
      uint64_t MSSEN:1;
      uint64_t AMODE:2;
      uint64_t reservedSpace3:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_CTRLB;

  uint8_t res0[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BAUD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_BAUD;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENCLR;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTENSET;

  uint8_t res3[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRE:1;
      uint64_t TXC:1;
      uint64_t RXC:1;
      uint64_t SSL:1;
      uint64_t reservedSpace0:3;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_INTFLAG;

  uint8_t res4[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BUFOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SERCOM_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t CTRLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_SYNCBUSY;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t ADDRMASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERCOM_DATA;

  uint8_t res6[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DBGSTOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERCOM_DBGCTRL;

};

#define SERCOM2_SERCOM_SPI_0 (*(volatile struct SERCOM2_SERCOM_SPI_0_tag *) 0x42000c00)

struct TC0_TC_COUNT8_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t ENABLE:1;
      uint64_t MODE:2;
      uint64_t PRESCSYNC:2;
      uint64_t RUNSTDBY:1;
      uint64_t ONDEMAND:1;
      uint64_t PRESCALER:3;
      uint64_t ALOCK:1;
      uint64_t reservedSpace0:4;
      uint64_t CAPTEN0:1;
      uint64_t CAPTEN1:1;
      uint64_t reservedSpace1:2;
      uint64_t COPEN0:1;
      uint64_t COPEN1:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPTMODE0:2;
      uint64_t reservedSpace3:1;
      uint64_t CAPTMODE1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC_CTRLA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t LUPD:1;
      uint64_t ONESHOT:1;
      uint64_t reservedSpace0:2;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TC_CTRLBCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t LUPD:1;
      uint64_t ONESHOT:1;
      uint64_t reservedSpace0:2;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TC_CTRLBSET;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EVACT:3;
      uint64_t reservedSpace0:1;
      uint64_t TCINV:1;
      uint64_t TCEI:1;
      uint64_t reservedSpace1:2;
      uint64_t OVFEO:1;
      uint64_t reservedSpace2:3;
      uint64_t MCEO0:1;
      uint64_t MCEO1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TC_EVCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t ERR:1;
      uint64_t reservedSpace0:2;
      uint64_t MC0:1;
      uint64_t MC1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TC_INTENCLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t ERR:1;
      uint64_t reservedSpace0:2;
      uint64_t MC0:1;
      uint64_t MC1:1;
    } __attribute__((packed)) B;

  union
  {
    uint8_t R;
    {
