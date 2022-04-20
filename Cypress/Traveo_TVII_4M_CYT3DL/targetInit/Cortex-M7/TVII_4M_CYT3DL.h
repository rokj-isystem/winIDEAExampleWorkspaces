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


struct TCPWM0_GRP_0_CNT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC0:1;
      uint64_t AUTO_RELOAD_CC1:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t AUTO_RELOAD_LINE_SEL:1;
      uint64_t CC0_MATCH_UP_EN:1;
      uint64_t CC0_MATCH_DOWN_EN:1;
      uint64_t CC1_MATCH_UP_EN:1;
      uint64_t CC1_MATCH_DOWN_EN:1;
      uint64_t PWM_IMM_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t reservedSpace0:1;
      uint64_t PWM_DISABLE_MODE:2;
      uint64_t reservedSpace1:2;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace2:1;
      uint64_t QUAD_ENCODING_MODE:2;
      uint64_t reservedSpace3:2;
      uint64_t MODE:3;
      uint64_t reservedSpace4:3;
      uint64_t DBG_FREEZE_EN:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:3;
      uint64_t TR_CAPTURE0:1;
      uint64_t TR_COUNT:1;
      uint64_t TR_RELOAD:1;
      uint64_t TR_STOP:1;
      uint64_t TR_START:1;
      uint64_t TR_CAPTURE1:1;
      uint64_t LINE_OUT:1;
      uint64_t LINE_COMPL_OUT:1;
      uint64_t reservedSpace1:3;
      uint64_t RUNNING:1;
      uint64_t DT_CNT_L:8;
      uint64_t DT_CNT_H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t COMPL_OUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINE_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t COMPL_OUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINE_SEL_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT_LINE_OUT_L:8;
      uint64_t DT_LINE_OUT_H:8;
      uint64_t DT_LINE_COMPL_OUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DT;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE0:1;
      uint64_t reservedSpace0:1;
      uint64_t RELOAD:1;
      uint64_t STOP:1;
      uint64_t START:1;
      uint64_t CAPTURE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE0_SEL:8;
      uint64_t COUNT_SEL:8;
      uint64_t RELOAD_SEL:8;
      uint64_t STOP_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_IN_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_SEL:8;
      uint64_t CAPTURE1_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_IN_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE0_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
      uint64_t CAPTURE1_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_IN_EDGE_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
      uint64_t CC1_MATCH_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_PWM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0:3;
      uint64_t reservedSpace0:1;
      uint64_t OUT1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_SEL;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC0_MATCH:1;
      uint64_t CC1_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC0_MATCH:1;
      uint64_t CC1_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC0_MATCH:1;
      uint64_t CC1_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC0_MATCH:1;
      uint64_t CC1_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM0_GRP_0_CNT_0 (*(volatile struct TCPWM0_GRP_0_CNT_0_tag *) 0x40380000)

struct TCPWM0_GRP_0_CNT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC0:1;
      uint64_t AUTO_RELOAD_CC1:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t AUTO_RELOAD_LINE_SEL:1;
      uint64_t CC0_MATCH_UP_EN:1;
      uint64_t CC0_MATCH_DOWN_EN:1;
      uint64_t CC1_MATCH_UP_EN:1;
      uint64_t CC1_MATCH_DOWN_EN:1;
      uint64_t PWM_IMM_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t reservedSpace0:1;
      uint64_t PWM_DISABLE_MODE:2;
      uint64_t reservedSpace1:2;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace2:1;
      uint64_t QUAD_ENCODING_MODE:2;
      uint64_t reservedSpace3:2;
      uint64_t MODE:3;
      uint64_t reservedSpace4:3;
      uint64_t DBG_FREEZE_EN:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:3;
      uint64_t TR_CAPTURE0:1;
      uint64_t TR_COUNT:1;
      uint64_t TR_RELOAD:1;
      uint64_t TR_STOP:1;
      uint64_t TR_START:1;
      uint64_t TR_CAPTURE1:1;
      uint64_t LINE_OUT:1;
      uint64_t LINE_COMPL_OUT:1;
      uint64_t reservedSpace1:3;
      uint64_t RUNNING:1;
      uint64_t DT_CNT_L:8;
      uint64_t DT_CNT_H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t COMPL_OUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINE_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t COMPL_OUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINE_SEL_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT_LINE_OUT_L:8;
      uint64_t DT_LINE_OUT_H:8;
      uint64_t DT_LINE_COMPL_OUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DT;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE0:1;
      uint64_t reservedSpace0:1;
      uint64_t RELOAD:1;
      uint64_t STOP:1;
      uint64_t START:1;
      uint64_t CAPTURE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE0_SEL:8;
      uint64_t COUNT_SEL:8;
      uint64_t RELOAD_SEL:8;
      uint64_t STOP_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_IN_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_SEL:8;
      uint64_t CAPTURE1_SEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_IN_SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE0_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
      uint64_t CAPTURE1_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_IN_EDGE_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
      uint64_t CC1_MATCH_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_PWM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0:3;
      uint64_t reservedSpace0:1;
      uint64_t OUT1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_SEL;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC0_MATCH:1;
      uint64_t CC1_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC0_MATCH:1;
      uint64_t CC1_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC0_MATCH:1;
      uint64_t CC1_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC0_MATCH:1;
      uint64_t CC1_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM0_GRP_0_CNT_1 (*(volatile struct TCPWM0_GRP_0_CNT_1_tag *) 0x40380080)


struct PERI_PCLK_GR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
      uint64_t reservedSpace0:6;
      uint64_t PA_DIV_SEL:8;
      uint64_t PA_TYPE_SEL:2;
      uint64_t reservedSpace1:4;
      uint64_t DISABLE:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_CMD;

  uint8_t res0[3068];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_SEL:8;
      uint64_t TYPE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCK_CTL_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_254;

};

#define PERI_PCLK_GR_0 (*(volatile struct PERI_PCLK_GR_0_tag *) 0x40040000)

struct GPIO_PRT_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0:1;
      uint64_t OUT1:1;
      uint64_t OUT2:1;
      uint64_t OUT3:1;
      uint64_t OUT4:1;
      uint64_t OUT5:1;
      uint64_t OUT6:1;
      uint64_t OUT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0:1;
      uint64_t OUT1:1;
      uint64_t OUT2:1;
      uint64_t OUT3:1;
      uint64_t OUT4:1;
      uint64_t OUT5:1;
      uint64_t OUT6:1;
      uint64_t OUT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0:1;
      uint64_t OUT1:1;
      uint64_t OUT2:1;
      uint64_t OUT3:1;
      uint64_t OUT4:1;
      uint64_t OUT5:1;
      uint64_t OUT6:1;
      uint64_t OUT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0:1;
      uint64_t OUT1:1;
      uint64_t OUT2:1;
      uint64_t OUT3:1;
      uint64_t OUT4:1;
      uint64_t OUT5:1;
      uint64_t OUT6:1;
      uint64_t OUT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT_INV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN0:1;
      uint64_t IN1:1;
      uint64_t IN2:1;
      uint64_t IN3:1;
      uint64_t IN4:1;
      uint64_t IN5:1;
      uint64_t IN6:1;
      uint64_t IN7:1;
      uint64_t FLT_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE0:1;
      uint64_t EDGE1:1;
      uint64_t EDGE2:1;
      uint64_t EDGE3:1;
      uint64_t EDGE4:1;
      uint64_t EDGE5:1;
      uint64_t EDGE6:1;
      uint64_t EDGE7:1;
      uint64_t FLT_EDGE:1;
      uint64_t reservedSpace0:7;
      uint64_t IN_IN0:1;
      uint64_t IN_IN1:1;
      uint64_t IN_IN2:1;
      uint64_t IN_IN3:1;
      uint64_t IN_IN4:1;
      uint64_t IN_IN5:1;
      uint64_t IN_IN6:1;
      uint64_t IN_IN7:1;
      uint64_t FLT_IN_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE0:1;
      uint64_t EDGE1:1;
      uint64_t EDGE2:1;
      uint64_t EDGE3:1;
      uint64_t EDGE4:1;
      uint64_t EDGE5:1;
      uint64_t EDGE6:1;
      uint64_t EDGE7:1;
      uint64_t FLT_EDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE0:1;
      uint64_t EDGE1:1;
      uint64_t EDGE2:1;
      uint64_t EDGE3:1;
      uint64_t EDGE4:1;
      uint64_t EDGE5:1;
      uint64_t EDGE6:1;
      uint64_t EDGE7:1;
      uint64_t FLT_EDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE0:1;
      uint64_t EDGE1:1;
      uint64_t EDGE2:1;
      uint64_t EDGE3:1;
      uint64_t EDGE4:1;
      uint64_t EDGE5:1;
      uint64_t EDGE6:1;
      uint64_t EDGE7:1;
      uint64_t FLT_EDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE0_SEL:2;
      uint64_t EDGE1_SEL:2;
      uint64_t EDGE2_SEL:2;
      uint64_t EDGE3_SEL:2;
      uint64_t EDGE4_SEL:2;
      uint64_t EDGE5_SEL:2;
      uint64_t EDGE6_SEL:2;
      uint64_t EDGE7_SEL:2;
      uint64_t FLT_EDGE_SEL:2;
      uint64_t FLT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVE_MODE0:3;
      uint64_t IN_EN0:1;
      uint64_t DRIVE_MODE1:3;
      uint64_t IN_EN1:1;
      uint64_t DRIVE_MODE2:3;
      uint64_t IN_EN2:1;
      uint64_t DRIVE_MODE3:3;
      uint64_t IN_EN3:1;
      uint64_t DRIVE_MODE4:3;
      uint64_t IN_EN4:1;
      uint64_t DRIVE_MODE5:3;
      uint64_t IN_EN5:1;
      uint64_t DRIVE_MODE6:3;
      uint64_t IN_EN6:1;
      uint64_t DRIVE_MODE7:3;
      uint64_t IN_EN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIP_SEL0_0:1;
      uint64_t VTRIP_SEL1_0:1;
      uint64_t VTRIP_SEL2_0:1;
      uint64_t VTRIP_SEL3_0:1;
      uint64_t VTRIP_SEL4_0:1;
      uint64_t VTRIP_SEL5_0:1;
      uint64_t VTRIP_SEL6_0:1;
      uint64_t VTRIP_SEL7_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOW0:1;
      uint64_t SLOW1:1;
      uint64_t SLOW2:1;
      uint64_t SLOW3:1;
      uint64_t SLOW4:1;
      uint64_t SLOW5:1;
      uint64_t SLOW6:1;
      uint64_t SLOW7:1;
      uint64_t reservedSpace0:8;
      uint64_t DRIVE_SEL0:2;
      uint64_t DRIVE_SEL1:2;
      uint64_t DRIVE_SEL2:2;
      uint64_t DRIVE_SEL3:2;
      uint64_t DRIVE_SEL4:2;
      uint64_t DRIVE_SEL5:2;
      uint64_t DRIVE_SEL6:2;
      uint64_t DRIVE_SEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREG_EN01:1;
      uint64_t IBUF_SEL01:1;
      uint64_t VTRIP_SEL01:1;
      uint64_t VREF_SEL01:2;
      uint64_t VOH_SEL01:3;
      uint64_t VREG_EN23:1;
      uint64_t IBUF_SEL23:1;
      uint64_t VTRIP_SEL23:1;
      uint64_t VREF_SEL23:2;
      uint64_t VOH_SEL23:3;
      uint64_t VREG_EN45:1;
      uint64_t IBUF_SEL45:1;
      uint64_t VTRIP_SEL45:1;
      uint64_t VREF_SEL45:2;
      uint64_t VOH_SEL45:3;
      uint64_t VREG_EN67:1;
      uint64_t IBUF_SEL67:1;
      uint64_t VTRIP_SEL67:1;
      uint64_t VREF_SEL67:2;
      uint64_t VOH_SEL67:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_SIO;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIP_SEL0_1:1;
      uint64_t VTRIP_SEL1_1:1;
      uint64_t VTRIP_SEL2_1:1;
      uint64_t VTRIP_SEL3_1:1;
      uint64_t VTRIP_SEL4_1:1;
      uint64_t VTRIP_SEL5_1:1;
      uint64_t VTRIP_SEL6_1:1;
      uint64_t VTRIP_SEL7_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_IN_AUTOLVL;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS_TRIM0:3;
      uint64_t DS_TRIM1:3;
      uint64_t DS_TRIM2:3;
      uint64_t DS_TRIM3:3;
      uint64_t DS_TRIM4:3;
      uint64_t DS_TRIM5:3;
      uint64_t DS_TRIM6:3;
      uint64_t DS_TRIM7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_OUT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEW0:3;
      uint64_t reservedSpace0:1;
      uint64_t SLEW1:3;
      uint64_t reservedSpace1:1;
      uint64_t SLEW2:3;
      uint64_t reservedSpace2:1;
      uint64_t SLEW3:3;
      uint64_t reservedSpace3:1;
      uint64_t SLEW4:3;
      uint64_t reservedSpace4:1;
      uint64_t SLEW5:3;
      uint64_t reservedSpace5:1;
      uint64_t SLEW6:3;
      uint64_t reservedSpace6:1;
      uint64_t SLEW7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_SLEW_EXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVE_SEL_EXT0:5;
      uint64_t reservedSpace0:3;
      uint64_t DRIVE_SEL_EXT1:5;
      uint64_t reservedSpace1:3;
      uint64_t DRIVE_SEL_EXT2:5;
      uint64_t reservedSpace2:3;
      uint64_t DRIVE_SEL_EXT3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DRIVE_EXT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVE_SEL_EXT4:5;
      uint64_t reservedSpace0:3;
      uint64_t DRIVE_SEL_EXT5:5;
      uint64_t reservedSpace1:3;
      uint64_t DRIVE_SEL_EXT6:5;
      uint64_t reservedSpace2:3;
      uint64_t DRIVE_SEL_EXT7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DRIVE_EXT1;

};

#define GPIO_PRT_7 (*(volatile struct GPIO_PRT_7_tag *) 0x40310380)

struct CPUSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P:1;
      uint64_t NS:1;
      uint64_t reservedSpace0:2;
      uint64_t PC:4;
      uint64_t MS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDENTITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEEPING:1;
      uint64_t SLEEPDEEP:1;
      uint64_t reservedSpace0:2;
      uint64_t PWR_DONE:1;
      uint64_t reservedSpace1:4;
      uint64_t TCMC_CM7_1_MS:1;
      uint64_t TCMC_EXT_MS_2_TO_0:1;
      uint64_t TCMC_EXT_MS_3:1;
      uint64_t TCMC_AHB_MS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t FRAC_DIV:5;
      uint64_t INT_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAST_0_CLOCK_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPB_LOCK:4;
      uint64_t CPU_WAIT:1;
      uint64_t reservedSpace0:3;
      uint64_t INIT_TCM_EN:2;
      uint64_t INIT_RMW_EN:2;
      uint64_t reservedSpace1:4;
      uint64_t ITCM_ECC_EN:1;
      uint64_t ITCM_ECC_INJ_EN:1;
      uint64_t ITCM_READ_WS:1;
      uint64_t ITCM_ECC_CHECK_DIS:1;
      uint64_t DTCM_ECC_EN:1;
      uint64_t DTCM_ECC_INJ_EN:1;
      uint64_t DTCM_READ_WS:1;
      uint64_t TCMC_EN:1;
      uint64_t IOC_MASK:1;
      uint64_t DZC_MASK:1;
      uint64_t OFC_MASK:1;
      uint64_t UFC_MASK:1;
      uint64_t IXC_MASK:1;
      uint64_t reservedSpace2:2;
      uint64_t IDC_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_CTL;

  uint8_t res0[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_INT_STATUS_15;

  uint8_t res1[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t ADDR25:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_VECTOR_TABLE_BASE;

  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_NMI_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_NMI_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_NMI_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_NMI_CTL_3;

  uint8_t res3[176];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDB_PWR_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDB_PWR_DELAY_CTL;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INT_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC_DBG_CLOCK_CTL;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEEPING:1;
      uint64_t SLEEPDEEP:1;
      uint64_t reservedSpace0:2;
      uint64_t PWR_DONE:1;
      uint64_t reservedSpace1:3;
      uint64_t TCMC_CM7_0_MS:1;
      uint64_t reservedSpace2:1;
      uint64_t TCMC_EXT_MS_2_TO_0:1;
      uint64_t TCMC_EXT_MS_3:1;
      uint64_t TCMC_AHB_MS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t FRAC_DIV:5;
      uint64_t INT_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAST_1_CLOCK_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPB_LOCK:4;
      uint64_t CPU_WAIT:1;
      uint64_t reservedSpace0:3;
      uint64_t INIT_TCM_EN:2;
      uint64_t INIT_RMW_EN:2;
      uint64_t reservedSpace1:4;
      uint64_t ITCM_ECC_EN:1;
      uint64_t ITCM_ECC_INJ_EN:1;
      uint64_t ITCM_READ_WS:1;
      uint64_t ITCM_ECC_CHECK_DIS:1;
      uint64_t DTCM_ECC_EN:1;
      uint64_t DTCM_ECC_INJ_EN:1;
      uint64_t DTCM_READ_WS:1;
      uint64_t TCMC_EN:1;
      uint64_t IOC_MASK:1;
      uint64_t DZC_MASK:1;
      uint64_t OFC_MASK:1;
      uint64_t UFC_MASK:1;
      uint64_t IXC_MASK:1;
      uint64_t reservedSpace2:2;
      uint64_t IDC_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_CTL;

  uint8_t res6[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_INT_STATUS_15;

  uint8_t res7[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t ADDR25:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_VECTOR_TABLE_BASE;

  uint8_t res8[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_NMI_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_NMI_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_NMI_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_NMI_CTL_3;

  uint8_t res9[2480];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLV_STALL:1;
      uint64_t ENABLED:1;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEEPING:1;
      uint64_t SLEEPDEEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INT_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLOW_CLOCK_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INT_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERI_CLOCK_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INT_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM_CLOCK_CTL;

  uint8_t res10[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_INT0_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_INT1_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_INT2_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_INT3_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_INT4_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_INT5_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_INT6_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
      uint64_t reservedSpace0:21;
      uint64_t SYSTEM_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_INT7_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ADDR24:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_VECTOR_TABLE_BASE;

  uint8_t res11[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_NMI_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_NMI_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_NMI_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTEM_INT_IDX:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_NMI_CTL_3;

  uint8_t res12[176];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_PWR_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_PWR_DELAY_CTL;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_PWR_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_PWR_DELAY_CTL;

  uint8_t res14[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOW_WS:2;
      uint64_t reservedSpace0:6;
      uint64_t FAST_WS:2;
      uint64_t reservedSpace1:6;
      uint64_t ECC_EN:1;
      uint64_t ECC_AUTO_CORRECT:1;
      uint64_t ECC_INJ_EN:1;
      uint64_t ECC_CHECK_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WB_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_STATUS;

  uint8_t res15[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0_PWR_MACRO_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOW_WS:2;
      uint64_t reservedSpace0:6;
      uint64_t FAST_WS:2;
      uint64_t reservedSpace1:6;
      uint64_t ECC_EN:1;
      uint64_t ECC_AUTO_CORRECT:1;
      uint64_t ECC_INJ_EN:1;
      uint64_t ECC_CHECK_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM1_CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WB_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM1_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM1_PWR_CTL;

  uint8_t res16[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOW_WS:2;
      uint64_t reservedSpace0:6;
      uint64_t FAST_WS:2;
      uint64_t reservedSpace1:6;
      uint64_t ECC_EN:1;
      uint64_t ECC_AUTO_CORRECT:1;
      uint64_t ECC_INJ_EN:1;
      uint64_t ECC_CHECK_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM2_CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WB_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM2_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_MODE:2;
      uint64_t reservedSpace0:14;
      uint64_t VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM2_PWR_CTL;

  uint8_t res17[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_PWR_DELAY_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOW_WS:2;
      uint64_t reservedSpace0:6;
      uint64_t FAST_WS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORD_ADDR:24;
      uint64_t PARITY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_CTL;

  uint8_t res18[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAMILY_ID:12;
      uint64_t reservedSpace0:4;
      uint64_t MAJOR_REV:4;
      uint64_t MINOR_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRODUCT_ID;

  uint8_t res19[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWJ_CONNECTED:1;
      uint64_t SWJ_DEBUG_EN:1;
      uint64_t SWJ_JTAG_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DP_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_ENABLE:1;
      uint64_t CM7_ENABLE:1;
      uint64_t SYS_ENABLE:1;
      uint64_t reservedSpace0:13;
      uint64_t CM0_DISABLE:1;
      uint64_t CM7_DISABLE:1;
      uint64_t SYS_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AP_CTL;

  uint8_t res20[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUFF_CTL;

  uint8_t res21[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t CLOCK_SOURCE:2;
      uint64_t reservedSpace0:4;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTICK_CTL;

  uint8_t res22[256];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFP_READY:1;
      uint64_t SFP_FAIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBIST_STAT;

  uint8_t res23[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAL_SUP_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAL_SUP_CLR;

  uint8_t res24[2040];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_PC_CTL;

  uint8_t res25[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_PC0_HANDLER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_PC1_HANDLER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_PC2_HANDLER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_PC3_HANDLER;

  uint8_t res26[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROTECTION;

  uint8_t res27[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM_ROM_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM_RAM_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM_RAM200_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIM_RAM350_CTL;

  uint8_t res28[24304];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_257;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_258;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_259;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_260;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_261;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_262;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_263;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_265;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_266;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_267;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_268;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_269;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_270;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_271;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_272;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_273;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_274;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_275;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_276;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_277;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_278;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_279;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_280;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_281;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_282;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_283;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_284;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_285;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_286;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_287;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_288;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_289;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_290;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_295;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_296;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_298;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_299;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_300;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_301;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_302;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_303;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_304;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_305;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_306;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_307;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_308;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_309;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_312;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_313;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_315;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_316;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_317;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_318;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_319;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_321;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_322;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_323;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_324;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_325;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_326;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_327;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_328;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_329;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_330;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_331;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_332;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_333;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_334;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_335;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_336;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_337;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_338;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_339;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_340;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_341;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_342;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_343;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_344;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_345;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_346;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_347;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_348;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_349;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_350;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_351;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_352;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_353;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_354;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_355;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_356;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_357;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_358;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_359;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_360;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_361;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_362;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_363;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_364;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_365;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_366;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_367;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_368;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_369;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_370;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_371;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_372;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_373;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_374;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_375;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_376;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_377;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_378;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_379;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_380;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_381;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_382;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_383;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_384;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_385;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_386;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_387;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_388;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_389;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_390;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_391;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_392;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_393;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_394;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_395;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_396;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_397;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_398;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_399;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_400;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_401;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_402;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_403;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_404;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_405;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_406;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_407;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_408;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_409;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_410;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_411;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_412;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_413;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_414;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_415;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_416;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_417;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_418;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_419;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_420;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_421;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_422;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_423;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_424;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_425;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_426;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_427;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_428;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_429;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_430;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_431;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_432;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_433;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_434;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_435;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_436;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_437;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_438;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_439;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_440;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_441;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_442;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_443;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_444;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_445;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_446;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_447;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_448;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_449;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_450;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_451;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_452;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_453;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_454;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_455;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_456;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_457;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_458;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_459;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_460;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_461;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_462;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_463;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_464;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_465;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_466;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_467;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_468;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_469;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_470;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_471;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_472;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_473;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_474;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_475;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_476;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_477;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_478;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_479;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_480;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_481;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_482;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_483;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_484;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_485;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_486;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_487;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_488;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_489;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_490;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_491;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_492;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_493;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_494;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_495;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_496;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_497;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_498;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_499;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_500;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_501;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_502;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_503;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_504;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_505;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_506;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_507;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_508;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_509;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_510;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_512;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_513;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_514;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_515;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_516;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_517;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_519;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_520;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_521;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_522;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_523;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_524;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_525;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_526;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_527;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_528;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_529;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_530;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_531;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_532;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_533;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_534;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_535;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_536;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_537;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_538;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_539;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_540;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_541;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_542;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_543;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_544;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_545;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_546;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_547;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_548;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_549;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_550;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_551;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_552;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_553;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_554;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_555;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_556;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_557;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_558;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_559;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_560;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_561;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_562;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_563;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_564;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_565;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_566;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_567;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_568;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_569;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_570;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_571;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_572;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_573;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_574;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_575;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_576;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_577;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_578;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_579;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_580;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_581;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_582;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_583;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_584;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_585;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_586;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_587;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_588;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_589;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_590;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_591;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_592;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_593;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_594;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_595;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_596;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_597;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_598;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_599;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_600;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_601;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_602;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_603;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_604;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_605;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_606;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_607;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_608;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_609;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_610;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_611;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_612;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_613;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_614;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_615;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_616;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_617;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_618;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_619;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_620;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_621;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_622;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_623;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_624;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_625;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_626;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_627;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_628;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_629;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_630;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_631;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_632;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_633;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_634;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_635;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_636;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_637;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_638;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_639;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_640;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_641;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_642;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_643;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_644;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_645;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_646;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_647;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_648;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_649;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_650;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_651;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_652;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_653;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_654;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_655;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_656;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_657;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_658;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_659;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_660;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_661;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_662;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_663;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_664;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_665;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_666;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_667;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_668;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_669;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_670;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_671;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_672;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_673;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_674;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_675;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_676;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_677;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_678;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_679;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_680;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_681;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_682;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_683;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_684;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_685;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_686;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_687;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_688;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_689;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_690;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_691;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_692;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_693;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_694;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_695;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_696;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_697;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_698;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_699;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_700;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_701;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_702;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_703;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_704;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_705;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_706;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_707;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_708;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_709;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_710;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_711;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_712;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_713;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_714;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_715;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_716;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_717;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_718;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_719;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_720;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_721;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_722;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_723;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_724;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_725;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_726;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_727;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_728;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_729;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_730;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_731;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_732;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_733;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_734;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_735;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_736;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_737;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_738;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_739;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_740;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_741;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_742;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_743;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_744;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_745;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_746;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_747;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_748;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_749;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_750;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_751;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_752;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_753;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_754;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_755;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_756;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_757;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_758;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_759;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_760;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_761;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_762;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_763;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_764;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_765;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_766;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_767;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_768;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_769;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_770;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_771;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_772;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_773;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_774;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_775;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_776;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_777;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_778;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_779;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_780;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_781;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_782;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_783;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_784;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_785;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_786;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_787;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_788;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_789;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_790;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_791;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_792;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_793;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_794;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_795;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_796;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_797;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_798;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_799;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_800;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_801;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_802;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_803;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_804;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_805;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_806;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_807;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_808;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_809;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_810;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_811;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_812;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_813;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_814;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_815;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_816;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_817;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_818;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_819;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_820;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_821;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_822;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_823;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_824;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_825;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_826;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_827;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_828;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_829;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_830;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_831;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_832;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_833;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_834;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_835;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_836;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_837;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_838;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_839;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_840;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_841;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_842;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_843;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_844;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_845;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_846;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_847;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_848;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_849;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_850;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_851;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_852;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_853;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_854;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_855;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_856;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_857;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_858;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_859;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_860;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_861;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_862;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_863;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_864;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_865;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_866;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_867;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_868;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_869;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_870;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_871;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_872;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_873;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_874;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_875;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_876;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_877;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_878;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_879;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_880;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_881;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_882;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_883;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_884;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_885;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_886;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_887;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_888;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_889;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_890;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_891;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_892;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_893;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_894;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_895;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_896;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_897;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_898;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_899;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_900;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_901;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_902;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_903;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_904;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_905;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_906;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_907;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_908;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_909;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_910;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_911;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_912;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_913;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_914;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_915;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_916;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_917;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_918;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_919;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_920;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_921;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_922;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_923;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_924;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_925;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_926;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_927;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_928;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_929;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_930;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_931;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_932;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_933;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_934;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_935;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_936;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_937;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_938;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_939;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_940;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_941;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_942;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_943;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_944;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_945;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_946;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_947;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_948;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_949;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_950;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_951;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_952;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_953;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_954;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_955;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_956;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_957;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_958;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_959;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_960;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_961;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_962;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_963;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_964;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_965;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_966;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_967;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_968;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_969;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_970;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_971;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_972;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_973;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_974;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_975;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_976;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_977;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_978;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_979;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_980;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_981;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_982;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_983;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_984;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_985;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_986;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_987;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_988;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_989;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_990;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_991;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_992;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_993;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_994;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_995;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_996;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_997;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_998;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_999;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM0_CPU_INT_IDX:3;
      uint64_t reservedSpace0:28;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM0_SYSTEM_INT_CTL_1022;

  uint8_t res29[4100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_257;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_258;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_259;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_260;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_261;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_262;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_263;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_265;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_266;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_267;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_268;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_269;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_270;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_271;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_272;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_273;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_274;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_275;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_276;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_277;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_278;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_279;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_280;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_281;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_282;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_283;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_284;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_285;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_286;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_287;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_288;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_289;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_290;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_295;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_296;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_298;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_299;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_300;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_301;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_302;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_303;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_304;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_305;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_306;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_307;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_308;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_309;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_312;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_313;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_315;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_316;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_317;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_318;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_319;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_321;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_322;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_323;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_324;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_325;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_326;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_327;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_328;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_329;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_330;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_331;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_332;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_333;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_334;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_335;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_336;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_337;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_338;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_339;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_340;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_341;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_342;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_343;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_344;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_345;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_346;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_347;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_348;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_349;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_350;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_351;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_352;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_353;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_354;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_355;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_356;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_357;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_358;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_359;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_360;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_361;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_362;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_363;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_364;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_365;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_366;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_367;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_368;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_369;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_370;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_371;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_372;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_373;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_374;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_375;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_376;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_377;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_378;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_379;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_380;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_381;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_382;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_383;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_384;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_385;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_386;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_387;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_388;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_389;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_390;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_391;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_392;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_393;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_394;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_395;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_396;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_397;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_398;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_399;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_400;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_401;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_402;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_403;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_404;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_405;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_406;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_407;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_408;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_409;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_410;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_411;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_412;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_413;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_414;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_415;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_416;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_417;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_418;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_419;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_420;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_421;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_422;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_423;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_424;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_425;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_426;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_427;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_428;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_429;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_430;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_431;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_432;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_433;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_434;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_435;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_436;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_437;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_438;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_439;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_440;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_441;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_442;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_443;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_444;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_445;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_446;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_447;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_448;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_449;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_450;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_451;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_452;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_453;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_454;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_455;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_456;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_457;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_458;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_459;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_460;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_461;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_462;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_463;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_464;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_465;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_466;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_467;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_468;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_469;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_470;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_471;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_472;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_473;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_474;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_475;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_476;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_477;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_478;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_479;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_480;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_481;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_482;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_483;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_484;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_485;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_486;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_487;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_488;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_489;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_490;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_491;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_492;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_493;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_494;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_495;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_496;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_497;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_498;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_499;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_500;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_501;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_502;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_503;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_504;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_505;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_506;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_507;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_508;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_509;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_510;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_512;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_513;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_514;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_515;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_516;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_517;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_519;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_520;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_521;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_522;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_523;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_524;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_525;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_526;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_527;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_528;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_529;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_530;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_531;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_532;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_533;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_534;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_535;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_536;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_537;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_538;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_539;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_540;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_541;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_542;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_543;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_544;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_545;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_546;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_547;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_548;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_549;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_550;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_551;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_552;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_553;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_554;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_555;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_556;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_557;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_558;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_559;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_560;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_561;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_562;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_563;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_564;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_565;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_566;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_567;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_568;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_569;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_570;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_571;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_572;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_573;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_574;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_575;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_576;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_577;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_578;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_579;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_580;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_581;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_582;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_583;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_584;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_585;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_586;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_587;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_588;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_589;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_590;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_591;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_592;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_593;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_594;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_595;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_596;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_597;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_598;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_599;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_600;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_601;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_602;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_603;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_604;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_605;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_606;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_607;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_608;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_609;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_610;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_611;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_612;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_613;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_614;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_615;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_616;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_617;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_618;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_619;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_620;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_621;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_622;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_623;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_624;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_625;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_626;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_627;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_628;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_629;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_630;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_631;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_632;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_633;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_634;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_635;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_636;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_637;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_638;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_639;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_640;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_641;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_642;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_643;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_644;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_645;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_646;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_647;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_648;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_649;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_650;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_651;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_652;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_653;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_654;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_655;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_656;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_657;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_658;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_659;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_660;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_661;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_662;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_663;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_664;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_665;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_666;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_667;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_668;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_669;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_670;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_671;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_672;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_673;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_674;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_675;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_676;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_677;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_678;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_679;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_680;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_681;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_682;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_683;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_684;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_685;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_686;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_687;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_688;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_689;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_690;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_691;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_692;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_693;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_694;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_695;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_696;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_697;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_698;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_699;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_700;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_701;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_702;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_703;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_704;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_705;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_706;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_707;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_708;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_709;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_710;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_711;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_712;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_713;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_714;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_715;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_716;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_717;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_718;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_719;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_720;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_721;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_722;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_723;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_724;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_725;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_726;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_727;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_728;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_729;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_730;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_731;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_732;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_733;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_734;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_735;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_736;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_737;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_738;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_739;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_740;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_741;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_742;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_743;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_744;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_745;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_746;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_747;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_748;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_749;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_750;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_751;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_752;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_753;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_754;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_755;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_756;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_757;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_758;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_759;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_760;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_761;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_762;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_763;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_764;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_765;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_766;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_767;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_768;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_769;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_770;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_771;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_772;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_773;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_774;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_775;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_776;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_777;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_778;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_779;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_780;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_781;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_782;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_783;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_784;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_785;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_786;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_787;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_788;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_789;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_790;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_791;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_792;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_793;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_794;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_795;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_796;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_797;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_798;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_799;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_800;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_801;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_802;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_803;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_804;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_805;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_806;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_807;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_808;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_809;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_810;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_811;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_812;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_813;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_814;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_815;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_816;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_817;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_818;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_819;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_820;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_821;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_822;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_823;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_824;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_825;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_826;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_827;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_828;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_829;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_830;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_831;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_832;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_833;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_834;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_835;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_836;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_837;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_838;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_839;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_840;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_841;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_842;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_843;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_844;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_845;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_846;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_847;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_848;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_849;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_850;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_851;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_852;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_853;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_854;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_855;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_856;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_857;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_858;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_859;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_860;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_861;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_862;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_863;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_864;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_865;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_866;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_867;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_868;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_869;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_870;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_871;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_872;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_873;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_874;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_875;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_876;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_877;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_878;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_879;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_880;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_881;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_882;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_883;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_884;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_885;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_886;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_887;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_888;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_889;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_890;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_891;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_892;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_893;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_894;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_895;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_896;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_897;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_898;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_899;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_900;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_901;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_902;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_903;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_904;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_905;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_906;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_907;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_908;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_909;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_910;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_911;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_912;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_913;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_914;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_915;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_916;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_917;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_918;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_919;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_920;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_921;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_922;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_923;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_924;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_925;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_926;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_927;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_928;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_929;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_930;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_931;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_932;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_933;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_934;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_935;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_936;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_937;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_938;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_939;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_940;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_941;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_942;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_943;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_944;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_945;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_946;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_947;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_948;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_949;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_950;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_951;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_952;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_953;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_954;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_955;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_956;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_957;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_958;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_959;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_960;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_961;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_962;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_963;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_964;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_965;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_966;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_967;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_968;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_969;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_970;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_971;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_972;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_973;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_974;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_975;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_976;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_977;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_978;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_979;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_980;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_981;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_982;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_983;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_984;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_985;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_986;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_987;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_988;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_989;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_990;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_991;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_992;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_993;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_994;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_995;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_996;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_997;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_998;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_999;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_0_SYSTEM_INT_CTL_1022;

  uint8_t res30[4100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_257;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_258;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_259;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_260;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_261;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_262;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_263;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_264;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_265;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_266;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_267;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_268;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_269;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_270;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_271;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_272;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_273;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_274;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_275;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_276;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_277;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_278;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_279;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_280;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_281;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_282;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_283;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_284;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_285;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_286;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_287;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_288;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_289;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_290;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_291;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_292;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_293;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_294;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_295;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_296;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_297;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_298;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_299;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_300;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_301;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_302;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_303;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_304;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_305;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_306;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_307;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_308;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_309;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_312;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_313;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_315;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_316;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_317;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_318;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_319;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_320;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_321;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_322;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_323;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_324;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_325;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_326;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_327;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_328;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_329;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_330;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_331;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_332;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_333;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_334;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_335;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_336;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_337;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_338;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_339;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_340;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_341;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_342;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_343;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_344;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_345;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_346;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_347;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_348;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_349;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_350;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_351;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_352;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_353;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_354;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_355;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_356;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_357;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_358;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_359;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_360;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_361;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_362;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_363;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_364;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_365;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_366;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_367;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_368;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_369;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_370;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_371;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_372;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_373;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_374;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_375;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_376;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_377;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_378;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_379;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_380;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_381;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_382;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_383;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_384;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_385;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_386;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_387;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_388;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_389;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_390;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_391;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_392;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_393;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_394;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_395;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_396;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_397;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_398;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_399;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_400;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_401;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_402;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_403;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_404;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_405;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_406;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_407;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_408;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_409;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_410;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_411;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_412;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_413;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_414;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_415;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_416;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_417;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_418;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_419;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_420;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_421;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_422;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_423;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_424;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_425;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_426;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_427;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_428;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_429;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_430;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_431;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_432;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_433;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_434;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_435;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_436;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_437;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_438;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_439;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_440;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_441;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_442;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_443;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_444;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_445;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_446;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_447;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_448;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_449;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_450;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_451;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_452;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_453;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_454;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_455;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_456;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_457;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_458;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_459;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_460;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_461;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_462;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_463;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_464;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_465;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_466;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_467;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_468;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_469;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_470;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_471;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_472;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_473;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_474;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_475;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_476;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_477;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_478;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_479;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_480;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_481;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_482;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_483;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_484;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_485;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_486;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_487;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_488;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_489;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_490;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_491;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_492;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_493;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_494;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_495;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_496;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_497;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_498;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_499;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_500;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_501;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_502;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_503;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_504;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_505;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_506;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_507;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_508;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_509;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_510;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_512;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_513;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_514;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_515;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_516;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_517;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_518;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_519;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_520;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_521;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_522;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_523;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_524;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_525;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_526;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_527;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_528;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_529;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_530;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_531;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_532;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_533;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_534;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_535;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_536;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_537;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_538;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_539;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_540;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_541;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_542;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_543;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_544;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_545;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_546;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_547;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_548;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_549;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_550;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_551;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_552;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_553;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_554;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_555;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_556;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_557;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_558;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_559;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_560;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_561;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_562;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_563;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_564;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_565;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_566;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_567;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_568;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_569;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_570;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_571;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_572;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_573;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_574;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_575;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_576;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_577;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_578;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_579;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_580;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_581;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_582;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_583;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_584;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_585;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_586;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_587;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_588;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_589;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_590;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_591;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_592;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_593;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_594;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_595;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_596;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_597;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_598;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_599;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_600;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_601;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_602;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_603;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_604;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_605;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_606;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_607;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_608;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_609;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_610;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_611;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_612;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_613;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_614;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_615;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_616;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_617;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_618;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_619;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_620;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_621;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_622;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_623;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_624;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_625;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_626;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_627;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_628;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_629;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_630;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_631;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_632;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_633;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_634;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_635;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_636;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_637;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_638;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_639;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_640;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_641;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_642;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_643;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_644;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_645;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_646;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_647;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_648;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_649;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_650;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_651;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_652;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_653;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_654;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_655;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_656;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_657;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_658;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_659;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_660;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_661;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_662;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_663;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_664;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_665;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_666;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_667;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_668;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_669;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_670;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_671;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_672;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_673;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_674;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_675;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_676;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_677;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_678;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_679;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_680;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_681;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_682;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_683;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_684;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_685;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_686;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_687;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_688;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_689;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_690;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_691;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_692;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_693;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_694;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_695;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_696;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_697;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_698;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_699;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_700;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_701;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_702;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_703;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_704;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_705;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_706;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_707;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_708;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_709;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_710;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_711;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_712;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_713;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_714;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_715;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_716;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_717;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_718;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_719;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_720;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_721;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_722;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_723;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_724;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_725;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_726;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_727;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_728;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_729;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_730;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_731;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_732;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_733;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_734;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_735;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_736;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_737;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_738;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_739;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_740;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_741;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_742;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_743;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_744;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_745;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_746;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_747;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_748;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_749;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_750;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_751;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_752;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_753;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_754;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_755;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_756;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_757;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_758;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_759;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_760;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_761;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_762;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_763;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_764;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_765;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_766;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_767;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_768;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_769;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_770;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_771;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_772;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_773;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_774;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_775;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_776;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_777;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_778;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_779;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_780;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_781;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_782;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_783;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_784;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_785;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_786;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_787;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_788;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_789;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_790;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_791;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_792;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_793;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_794;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_795;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_796;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_797;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_798;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_799;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_800;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_801;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_802;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_803;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_804;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_805;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_806;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_807;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_808;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_809;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_810;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_811;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_812;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_813;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_814;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_815;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_816;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_817;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_818;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_819;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_820;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_821;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_822;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_823;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_824;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_825;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_826;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_827;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_828;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_829;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_830;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_831;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_832;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_833;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_834;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_INT_IDX:4;
      uint64_t reservedSpace0:27;
      uint64_t CPU_INT_VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM7_1_SYSTEM_INT_CTL_835;

  union