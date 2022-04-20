#include <stdint.h>

struct CPU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADFLIP:8;
      uint64_t ADTYPE:2;
      uint64_t RES:21;
      uint64_t AE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SEGEN;

  uint8_t res0[28624];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASI:5;
      uint64_t RES:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TASK_ASI;

  uint8_t res1[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC_0:10;
      uint64_t DAC_1:1;
      uint64_t DAC_2:2;
      uint64_t DAC_3:3;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PMA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAC_0:10;
      uint64_t CAC_1:1;
      uint64_t CAC_2:1;
      uint64_t CAC_3:1;
      uint64_t CAC_4:1;
      uint64_t CAC_5:2;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PMA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSI:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PMA2;

  uint8_t res2[3828];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCACHE_SZE:16;
      uint64_t DSCRATCH_SZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DCON2;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:1;
      uint64_t RES_0:1;
      uint64_t PT:1;
      uint64_t RES_1:5;
      uint64_t DC:1;
      uint64_t RES_2:1;
      uint64_t DT:1;
      uint64_t RES_3:5;
      uint64_t RES_4:8;
      uint64_t IODT:1;
      uint64_t RES_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SMACON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRE:1;
      uint64_t GAE:1;
      uint64_t LBE:1;
      uint64_t RES_0:3;
      uint64_t CRE:1;
      uint64_t RES_1:7;
      uint64_t DTME:1;
      uint64_t LOE:1;
      uint64_t SDE:1;
      uint64_t SCE:1;
      uint64_t CAC:1;
      uint64_t MPE:1;
      uint64_t CLE:1;
      uint64_t RES_2:3;
      uint64_t ALN:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DSTR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:3;
      uint64_t SBE:1;
      uint64_t RES_1:5;
      uint64_t CWE:1;
      uint64_t CFE:1;
      uint64_t RES_2:3;
      uint64_t SOE:1;
      uint64_t SME:1;
      uint64_t RES_3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERROR_ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DEADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DIEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IED:1;
      uint64_t IE_T:1;
      uint64_t IE_C:1;
      uint64_t IE_S:1;
      uint64_t IE_BI:1;
      uint64_t E_INFO:6;
      uint64_t IE_DUAL:1;
      uint64_t IE_SP:1;
      uint64_t IE_BS:1;
      uint64_t RES:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DIETR;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:1;
      uint64_t DCBYP:1;
      uint64_t RES_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DCON0;

  uint8_t res6[444];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRE:1;
      uint64_t RES_0:1;
      uint64_t FBE:1;
      uint64_t RES_1:9;
      uint64_t FPE:1;
      uint64_t RES_2:1;
      uint64_t FME:1;
      uint64_t RES_3:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCINV:1;
      uint64_t PBINV:1;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCACHE_SZE:16;
      uint64_t PSCRATCH_SZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:1;
      uint64_t PCBYP:1;
      uint64_t RES_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PIEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IED:1;
      uint64_t IE_T:1;
      uint64_t IE_C:1;
      uint64_t IE_S:1;
      uint64_t IE_BI:1;
      uint64_t E_INFO:6;
      uint64_t IE_DUAL:1;
      uint64_t IE_SP:1;
      uint64_t IE_BS:1;
      uint64_t RES:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PIETR;

  uint8_t res7[488];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:3;
      uint64_t RM:1;
      uint64_t SP:1;
      uint64_t RES_1:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_COMPAT;

  uint8_t res8[3068];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TST:1;
      uint64_t TCL:1;
      uint64_t RES_0:6;
      uint64_t RM:2;
      uint64_t RES_1:8;
      uint64_t FXE:1;
      uint64_t FUE:1;
      uint64_t FZE:1;
      uint64_t FVE:1;
      uint64_t FIE:1;
      uint64_t RES_2:3;
      uint64_t FX:1;
      uint64_t FU:1;
      uint64_t FZ:1;
      uint64_t FV:1;
      uint64_t FI:1;
      uint64_t RES_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_FPU_TRAP_CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_FPU_TRAP_PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPC:8;
      uint64_t FMT:1;
      uint64_t RES_0:7;
      uint64_t DREG:4;
      uint64_t RES_1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_FPU_TRAP_OPC;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_FPU_TRAP_SRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_FPU_TRAP_SRC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_FPU_TRAP_SRC3;

  uint8_t res10[8164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR0_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR0_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR1_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR1_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR2_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR2_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR3_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR3_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR4_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR4_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR5_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR5_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR6_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR6_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR7_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR7_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR8_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR8_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR9_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR9_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR10_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR10_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR11_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR11_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR12_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR12_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR13_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR13_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR14_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR14_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR15_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPR15_U;

  uint8_t res11[3968];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR0_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR0_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR1_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR1_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR2_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR2_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR3_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR3_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR4_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR4_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR5_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR5_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR6_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR6_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR7_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPR7_U;

  uint8_t res12[4032];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPXE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPXE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPXE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPXE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPRE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPRE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPRE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPRE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPWE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPWE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPWE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DPWE_3;

  uint8_t res13[976];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEXP0:1;
      uint64_t TEXP1:1;
      uint64_t TEXP2:1;
      uint64_t RES_0:13;
      uint64_t TTRAP:1;
      uint64_t RES_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TPS_CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TPS_TIMER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TPS_TIMER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TPS_TIMER2;

  uint8_t res14[3056];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES_0:4;
      uint64_t TYP:1;
      uint64_t RNG:1;
      uint64_t RES_1:1;
      uint64_t ASI_EN:1;
      uint64_t ASI:5;
      uint64_t RES_2:6;
      uint64_t AST:1;
      uint64_t ALD:1;
      uint64_t RES_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR0EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR0ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES_0:4;
      uint64_t TYP:1;
      uint64_t RNG:1;
      uint64_t RES_1:1;
      uint64_t ASI_EN:1;
      uint64_t ASI:5;
      uint64_t RES_2:6;
      uint64_t AST:1;
      uint64_t ALD:1;
      uint64_t RES_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR1EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR1ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES_0:4;
      uint64_t TYP:1;
      uint64_t RNG:1;
      uint64_t RES_1:1;
      uint64_t ASI_EN:1;
      uint64_t ASI:5;
      uint64_t RES_2:6;
      uint64_t AST:1;
      uint64_t ALD:1;
      uint64_t RES_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR2EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR2ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES_0:4;
      uint64_t TYP:1;
      uint64_t RNG:1;
      uint64_t RES_1:1;
      uint64_t ASI_EN:1;
      uint64_t ASI:5;
      uint64_t RES_2:6;
      uint64_t AST:1;
      uint64_t ALD:1;
      uint64_t RES_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR3EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR3ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES_0:4;
      uint64_t TYP:1;
      uint64_t RNG:1;
      uint64_t RES_1:1;
      uint64_t ASI_EN:1;
      uint64_t ASI:5;
      uint64_t RES_2:6;
      uint64_t AST:1;
      uint64_t ALD:1;
      uint64_t RES_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR4EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR4ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES_0:4;
      uint64_t TYP:1;
      uint64_t RNG:1;
      uint64_t RES_1:1;
      uint64_t ASI_EN:1;
      uint64_t ASI:5;
      uint64_t RES_2:6;
      uint64_t AST:1;
      uint64_t ALD:1;
      uint64_t RES_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR5EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR5ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES_0:4;
      uint64_t TYP:1;
      uint64_t RNG:1;
      uint64_t RES_1:1;
      uint64_t ASI_EN:1;
      uint64_t ASI:5;
      uint64_t RES_2:6;
      uint64_t AST:1;
      uint64_t ALD:1;
      uint64_t RES_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR6EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR6ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES_0:4;
      uint64_t TYP:1;
      uint64_t RNG:1;
      uint64_t RES_1:1;
      uint64_t ASI_EN:1;
      uint64_t ASI:5;
      uint64_t RES_2:6;
      uint64_t AST:1;
      uint64_t ALD:1;
      uint64_t RES_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR7EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TR7ADR;

  uint8_t res15[3008];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM:1;
      uint64_t CE:1;
      uint64_t M1:3;
      uint64_t M2:3;
      uint64_t M3:3;
      uint64_t RES:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_ICNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_M1CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_M2CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_M3CNT;

  uint8_t res16[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DE:1;
      uint64_t HALT:2;
      uint64_t SIH:1;
      uint64_t SUSP:1;
      uint64_t RES_0:1;
      uint64_t PREVSUSP:1;
      uint64_t PEVT:1;
      uint64_t EVTSRC:5;
      uint64_t RES_1:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DBGSR;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_EXEVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CREVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTA:3;
      uint64_t BBM:1;
      uint64_t BOD:1;
      uint64_t SUSP:1;
      uint64_t CNT:2;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SWEVT;

  uint8_t res18[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T0:1;
      uint64_t T1:1;
      uint64_t T2:1;
      uint64_t T3:1;
      uint64_t T4:1;
      uint64_t T5:1;
      uint64_t T6:1;
      uint64_t T7:1;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_TRIG_ACC;

  uint8_t res19[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t DMSValue:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:6;
      uint64_t DCXValue:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DCX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTA:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_DBGTCR;

  uint8_t res20[180];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCXO:16;
      uint64_t PCXS:4;
      uint64_t UL:1;
      uint64_t PIE:1;
      uint64_t PCPN:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PCXI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDC:7;
      uint64_t CDE:1;
      uint64_t GW:1;
      uint64_t IS:1;
      uint64_t IO:2;
      uint64_t PRS:2;
      uint64_t S:1;
      uint64_t RES:12;
      uint64_t SAV:1;
      uint64_t AV:1;
      uint64_t SV:1;
      uint64_t V:1;
      uint64_t C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t PC:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_PC;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCDSF:1;
      uint64_t PROTEN:1;
      uint64_t TPROTEN:1;
      uint64_t IS:1;
      uint64_t IT:1;
      uint64_t RES:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SYSCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_32B:8;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CPU_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORE_ID:3;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CORE_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSS:1;
      uint64_t BIV:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_BIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t BTV:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_BTV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_ISP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCPN:10;
      uint64_t RES_0:5;
      uint64_t IE:1;
      uint64_t PIPN:10;
      uint64_t RES_1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_ICR;

  uint8_t res22[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCXO:16;
      uint64_t FCXS:4;
      uint64_t RES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_FCX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCXO:16;
      uint64_t LCXS:4;
      uint64_t RES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_LCX;

  uint8_t res23[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CID:3;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_CUS_ID;

  uint8_t res24[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_D15;

  uint8_t res25[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_A15;

};

#define CPU (*(volatile struct CPU_tag *) 0xf8811030)

struct SPROT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNLA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNUA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNLA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNUA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNLA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNUA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNLA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNUA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNLA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNUA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNLA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNUA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNLA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNUA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENB6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNLA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNUA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_RGNACCENB7;

  uint8_t res0[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_ACCENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU0_SPROT_ACCENB;

};

#define SPROT (*(volatile struct SPROT_tag *) 0xf880e000)

struct BUS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_NUMBER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_ID;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:16;
      uint64_t DBG:1;
      uint64_t reservedSpace0:2;
      uint64_t ONE:1;
      uint64_t reservedSpace1:4;
      uint64_t SPC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED8:4;
      uint64_t RESERVED9:4;
      uint64_t RESERVEDA:4;
      uint64_t RESERVEDB:4;
      uint64_t HSMRMI:4;
      uint64_t HSMCMI:4;
      uint64_t RESERVEDE:4;
      uint64_t DMAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_PRIOH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAH:4;
      uint64_t RESERVED1:4;
      uint64_t RESERVED2:4;
      uint64_t RESERVED3:4;
      uint64_t RESERVED4:4;
      uint64_t DMAM:4;
      uint64_t RESERVED6:4;
      uint64_t CPU0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_PRIOL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRCNT:14;
      uint64_t TOUT:1;
      uint64_t RDY:1;
      uint64_t ABT:1;
      uint64_t ACK:2;
      uint64_t SVM:1;
      uint64_t WRN:1;
      uint64_t RDN:1;
      uint64_t TAG:6;
      uint64_t OPC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_ECON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_EADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_EDAT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EO:1;
      uint64_t OA:1;
      uint64_t reservedSpace0:2;
      uint64_t RA:1;
      uint64_t reservedSpace1:7;
      uint64_t CONCOM0:1;
      uint64_t CONCOM1:1;
      uint64_t CONCOM2:1;
      uint64_t reservedSpace2:1;
      uint64_t ONG:1;
      uint64_t reservedSpace3:3;
      uint64_t ONA1:2;
      uint64_t reservedSpace4:2;
      uint64_t ONA2:2;
      uint64_t reservedSpace5:2;
      uint64_t ONBOS0:1;
      uint64_t ONBOS1:1;
      uint64_t ONBOS2:1;
      uint64_t ONBOS3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBCNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAH:1;
      uint64_t ONE_0:4;
      uint64_t DMAM:1;
      uint64_t ONE_1:1;
      uint64_t CPU0:1;
      uint64_t ONE_2:4;
      uint64_t HSMRMI:1;
      uint64_t HSMCMI:1;
      uint64_t ONE_3:1;
      uint64_t DMAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBGRNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBADR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBADR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPC:4;
      uint64_t SVM:1;
      uint64_t reservedSpace0:3;
      uint64_t WR:1;
      uint64_t reservedSpace1:3;
      uint64_t RD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBBOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAH:1;
      uint64_t ONE_0:4;
      uint64_t DMAM:1;
      uint64_t ONE_1:1;
      uint64_t CPU0:1;
      uint64_t ONE_2:4;
      uint64_t HSMRMI:1;
      uint64_t HSMCMI:1;
      uint64_t ONE_3:1;
      uint64_t DMAL:1;
      uint64_t DMACHNR:8;
      uint64_t ONE_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBGNTT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBADRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIOPC:4;
      uint64_t FPISVM:1;
      uint64_t FPIACK:2;
      uint64_t FPIRDY:1;
      uint64_t FPIWR:1;
      uint64_t FPIRST:2;
      uint64_t FPIOPS:1;
      uint64_t FPIRD:1;
      uint64_t FPIABORT:1;
      uint64_t FPITOUT:1;
      uint64_t ENDINIT:1;
      uint64_t FPITAG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBBOST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCU_DBDAT;

  uint8_t res3[164];

  uint32_t SBCU_ACCEN1;
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
  } __attribute__((aligned(4))) SBCU_ACCEN0;

  uint8_t res4[141360896];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t WFWD:1;
      uint64_t reservedSpace1:2;
      uint64_t FREQDISF:1;
      uint64_t reservedSpace2:2;
      uint64_t NODELTR:1;
      uint64_t NORMW:1;
      uint64_t reservedSpace3:2;
      uint64_t MAX_WS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_EXTCOND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRERREN:1;
      uint64_t SCERREN:1;
      uint64_t SETPRINT:1;
      uint64_t SETSCINT:1;
      uint64_t INTACK:1;
      uint64_t reservedSpace0:15;
      uint64_t SPC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ARBCOND;

  uint32_t XBAR_PRIOHD;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:4;
      uint64_t reservedSpace0:16;
      uint64_t MASTER5:4;
      uint64_t MASTER6:4;
      uint64_t MASTER7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRADDRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:1;
      uint64_t WR:1;
      uint64_t SVM:1;
      uint64_t reservedSpace0:1;
      uint64_t OPC:4;
      uint64_t TR_ID:8;
      uint64_t ADDR_ECC:8;
      uint64_t MCI_SBS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBEN:1;
      uint64_t DBSAT:1;
      uint64_t REARM:1;
      uint64_t SETDBEVT:1;
      uint64_t reservedSpace0:12;
      uint64_t RDEN:1;
      uint64_t WREN:1;
      uint64_t SVMEN:1;
      uint64_t ADDEN:1;
      uint64_t ERREN:1;
      uint64_t reservedSpace1:2;
      uint64_t MASEN:1;
      uint64_t MASTER:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBCOND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADDD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADDD;

  uint8_t res5[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRERREN:1;
      uint64_t SCERREN:1;
      uint64_t SETPRINT:1;
      uint64_t SETSCINT:1;
      uint64_t INTACK:1;
      uint64_t reservedSpace0:15;
      uint64_t SPC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ARBCON0;

  uint32_t XBAR_PRIOH0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:4;
      uint64_t reservedSpace0:16;
      uint64_t MASTER5:4;
      uint64_t MASTER6:4;
      uint64_t MASTER7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:1;
      uint64_t WR:1;
      uint64_t SVM:1;
      uint64_t reservedSpace0:1;
      uint64_t OPC:4;
      uint64_t TR_ID:8;
      uint64_t ADDR_ECC:8;
      uint64_t MCI_SBS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBEN:1;
      uint64_t DBSAT:1;
      uint64_t REARM:1;
      uint64_t SETDBEVT:1;
      uint64_t reservedSpace0:12;
      uint64_t RDEN:1;
      uint64_t WREN:1;
      uint64_t SVMEN:1;
      uint64_t ADDEN:1;
      uint64_t ERREN:1;
      uint64_t reservedSpace1:2;
      uint64_t MASEN:1;
      uint64_t MASTER:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS_0:19;
      uint64_t reservedSpace1:2;
      uint64_t ADDRESS_1:1;
      uint64_t reservedSpace2:3;
      uint64_t ADDRESS_2:1;
      uint64_t ONE:3;
      uint64_t ADDRESS_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS_0:19;
      uint64_t ONE_0:2;
      uint64_t ADDRESS_1:1;
      uint64_t ONE_1:3;
      uint64_t ADDRESS_2:1;
      uint64_t ONE_2:3;
      uint64_t ADDRESS_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD0;

  uint8_t res6[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRERREN:1;
      uint64_t SCERREN:1;
      uint64_t SETPRINT:1;
      uint64_t SETSCINT:1;
      uint64_t INTACK:1;
      uint64_t reservedSpace0:15;
      uint64_t SPC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ARBCON4;

  uint32_t XBAR_PRIOH4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:4;
      uint64_t reservedSpace0:16;
      uint64_t MASTER5:4;
      uint64_t MASTER6:4;
      uint64_t MASTER7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:1;
      uint64_t WR:1;
      uint64_t SVM:1;
      uint64_t reservedSpace0:1;
      uint64_t OPC:4;
      uint64_t TR_ID:8;
      uint64_t ADDR_ECC:8;
      uint64_t MCI_SBS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBEN:1;
      uint64_t DBSAT:1;
      uint64_t REARM:1;
      uint64_t SETDBEVT:1;
      uint64_t reservedSpace0:12;
      uint64_t RDEN:1;
      uint64_t WREN:1;
      uint64_t SVMEN:1;
      uint64_t ADDEN:1;
      uint64_t ERREN:1;
      uint64_t reservedSpace1:2;
      uint64_t MASEN:1;
      uint64_t MASTER:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBCON4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS:29;
      uint64_t ONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS:29;
      uint64_t ONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD4;

  uint8_t res7[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRERREN:1;
      uint64_t SCERREN:1;
      uint64_t SETPRINT:1;
      uint64_t SETSCINT:1;
      uint64_t INTACK:1;
      uint64_t reservedSpace0:15;
      uint64_t SPC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ARBCON6;

  uint32_t XBAR_PRIOH6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:4;
      uint64_t reservedSpace0:16;
      uint64_t MASTER5:4;
      uint64_t MASTER6:4;
      uint64_t MASTER7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRADDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:1;
      uint64_t WR:1;
      uint64_t SVM:1;
      uint64_t reservedSpace0:1;
      uint64_t OPC:4;
      uint64_t TR_ID:8;
      uint64_t ADDR_ECC:8;
      uint64_t MCI_SBS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBEN:1;
      uint64_t DBSAT:1;
      uint64_t REARM:1;
      uint64_t SETDBEVT:1;
      uint64_t reservedSpace0:12;
      uint64_t RDEN:1;
      uint64_t WREN:1;
      uint64_t SVMEN:1;
      uint64_t ADDEN:1;
      uint64_t ERREN:1;
      uint64_t reservedSpace1:2;
      uint64_t MASEN:1;
      uint64_t MASTER:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBCON6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS_0:25;
      uint64_t reservedSpace1:1;
      uint64_t ADDRESS_1:3;
      uint64_t ONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS_0:25;
      uint64_t ONE_0:1;
      uint64_t ADDRESS_1:3;
      uint64_t ONE_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD6;

  uint8_t res8[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRERREN:1;
      uint64_t SCERREN:1;
      uint64_t SETPRINT:1;
      uint64_t SETSCINT:1;
      uint64_t INTACK:1;
      uint64_t reservedSpace0:15;
      uint64_t SPC:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ARBCON7;

  uint32_t XBAR_PRIOH7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:4;
      uint64_t reservedSpace0:16;
      uint64_t MASTER5:4;
      uint64_t MASTER6:4;
      uint64_t MASTER7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRADDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:1;
      uint64_t WR:1;
      uint64_t SVM:1;
      uint64_t reservedSpace0:1;
      uint64_t OPC:4;
      uint64_t TR_ID:8;
      uint64_t ADDR_ECC:8;
      uint64_t MCI_SBS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBEN:1;
      uint64_t DBSAT:1;
      uint64_t REARM:1;
      uint64_t SETDBEVT:1;
      uint64_t reservedSpace0:12;
      uint64_t RDEN:1;
      uint64_t WREN:1;
      uint64_t SVMEN:1;
      uint64_t ADDEN:1;
      uint64_t ERREN:1;
      uint64_t reservedSpace1:2;
      uint64_t MASEN:1;
      uint64_t MASTER:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBCON7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS_0:19;
      uint64_t reservedSpace1:8;
      uint64_t ADDRESS_1:1;
      uint64_t reservedSpace2:1;
      uint64_t ONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS_0:19;
      uint64_t ONE_0:8;
      uint64_t ADDRESS_1:1;
      uint64_t ONE_1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD7;

  uint8_t res9[484];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCI0:1;
      uint64_t reservedSpace0:3;
      uint64_t SCI4:1;
      uint64_t reservedSpace1:1;
      uint64_t SCI6:1;
      uint64_t SCI7:1;
      uint64_t reservedSpace2:7;
      uint64_t SCID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBSAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSCI0:1;
      uint64_t reservedSpace0:3;
      uint64_t SCSCI4:1;
      uint64_t reservedSpace1:1;
      uint64_t SCSCI6:1;
      uint64_t SCSCI7:1;
      uint64_t reservedSpace2:7;
      uint64_t SCSCID:1;
      uint64_t PRSCI0:1;
      uint64_t reservedSpace3:3;
      uint64_t PRSCI4:1;
      uint64_t reservedSpace4:1;
      uint64_t PRSCI6:1;
      uint64_t PRSCI7:1;
      uint64_t reservedSpace5:7;
      uint64_t PRSCID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_INTSAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDSCI0:1;
      uint64_t reservedSpace0:3;
      uint64_t IDCSCI4:1;
      uint64_t reservedSpace1:1;
      uint64_t IDSCI6:1;
      uint64_t IDSCI7:1;
      uint64_t reservedSpace2:7;
      uint64_t IDSCID:1;
      uint64_t IDMCI0:1;
      uint64_t reservedSpace3:4;
      uint64_t IDMCI5:1;
      uint64_t reservedSpace4:6;
      uint64_t IDMCI12:1;
      uint64_t IDMCI13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_IDINTSAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENSCI0:1;
      uint64_t reservedSpace0:3;
      uint64_t ENSCI4:1;
      uint64_t reservedSpace1:1;
      uint64_t ENSCI6:1;
      uint64_t ENSCI7:1;
      uint64_t reservedSpace2:7;
      uint64_t ENSCID:1;
      uint64_t ENMCI0:1;
      uint64_t reservedSpace3:4;
      uint64_t ENMCI5:1;
      uint64_t reservedSpace4:6;
      uint64_t ENMCI12:1;
      uint64_t ENMCI13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_IDINTEN;

  uint8_t res10[220];

  uint32_t XBAR_ACCEN1;
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
  } __attribute__((aligned(4))) XBAR_ACCEN0;

};

#define BUS (*(volatile struct BUS_tag *) 0xf0030008)

struct INT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_ID;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t TRIG3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_SRB0;

  uint8_t res1[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTGB0:16;
      uint64_t OTGB1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OOBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TGS:2;
      uint64_t TGB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OSSIC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TGS:2;
      uint64_t reservedSpace0:6;
      uint64_t OBS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OIXTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OIXMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ0:10;
      uint64_t reservedSpace0:6;
      uint64_t IRQ1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OIXS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ2:10;
      uint64_t reservedSpace0:6;
      uint64_t IRQ3:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OIXS1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOS0:2;
      uint64_t reservedSpace0:5;
      uint64_t OE0:1;
      uint64_t TOS1:2;
      uint64_t reservedSpace1:5;
      uint64_t OE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTGB0:16;
      uint64_t OTGB1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OMISP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTGB0:16;
      uint64_t OTGB1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_OMISN;

  uint8_t res3[68];

  uint32_t INT_ACCEN01;
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
  } __attribute__((aligned(4))) INT_ACCEN00;

  uint32_t INT_ACCEN11;
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
  } __attribute__((aligned(4))) INT_ACCEN10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PN:8;
      uint64_t reservedSpace0:2;
      uint64_t ECC:6;
      uint64_t ID:10;
      uint64_t reservedSpace1:5;
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_LWSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PN:8;
      uint64_t reservedSpace0:2;
      uint64_t ECC:6;
      uint64_t ID:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_LASR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PN:8;
      uint64_t reservedSpace0:2;
      uint64_t ECC:6;
      uint64_t ID:10;
      uint64_t reservedSpace1:4;
      uint64_t EOV:1;
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_ECR0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PN:8;
      uint64_t reservedSpace0:2;
      uint64_t ECC:6;
      uint64_t ID:10;
      uint64_t reservedSpace1:5;
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_LWSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PN:8;
      uint64_t reservedSpace0:2;
      uint64_t ECC:6;
      uint64_t ID:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_LASR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PN:8;
      uint64_t reservedSpace0:2;
      uint64_t ECC:6;
      uint64_t ID:10;
      uint64_t reservedSpace1:4;
      uint64_t EOV:1;
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_ECR1;

  uint8_t res5[3812];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CPU0SBSRC;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_EMEM;

  uint8_t res7[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_BCUSPBSBSRC;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_XBARSRC;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CERBERUS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CERBERUS1;

  uint8_t res10[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ASCLIN0TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ASCLIN0RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ASCLIN0ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ASCLIN1TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ASCLIN1RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ASCLIN1ERR;

  uint8_t res11[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI0TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI0RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI0ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI0PT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_RESERVED10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI0U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI1TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI1RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI1ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI1PT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_RESERVED11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI1U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI2TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI2RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI2ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI2PT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI2HC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI2U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI3TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI3RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI3ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI3PT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI3HC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_QSPI3U;

  uint8_t res12[352];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SENT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SENT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SENT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SENT3;

  uint8_t res13[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CCU60SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CCU60SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CCU60SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CCU60SR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CCU61SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CCU61SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CCU61SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CCU61SR3;

  uint8_t res14[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPT120CIRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPT120T2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPT120T3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPT120T4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPT120T5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPT120T6;

  uint8_t res15[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_STM0SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_STM0SR1;

  uint8_t res16[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMAERR;

  uint8_t res17[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_DMACH15;

  uint8_t res18[944];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ETH;

  uint8_t res19[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CANINT15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CAN1INT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CAN1INT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CAN1INT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CAN1INT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CAN1INT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CAN1INT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CAN1INT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_CAN1INT7;

  uint8_t res20[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG0SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG0SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG0SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG0SR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG1SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG1SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG1SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG1SR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG2SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG2SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG2SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG2SR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG3SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG3SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG3SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCG3SR3;

  uint8_t res21[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCCG0SR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCCG0SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCCG0SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_VADCCG0SR3;

  uint8_t res22[304];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYTINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYTINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYNDAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYNDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYMBSC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYMBSC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYOBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_ERAYIBUSY;

  uint8_t res23[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_PMU00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_PMU01;

  uint8_t res24[136];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_HSM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_HSM1;

  uint8_t res25[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SCUDTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SCUERU0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SCUERU1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SCUERU2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SCUERU3;

  uint8_t res26[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SMU0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SMU1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_SMU2;

  uint8_t res27[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_LMU;

  uint8_t res28[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_EVRWUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_EVRSCDC;

  uint8_t res29[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_FFTDONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_FFTERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_FFTRFS;

  uint8_t res30[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPSR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPSR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPSR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GPSR03;

  uint8_t res31[1520];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMAEIIRQ;

  uint8_t res32[364];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMERR;

  uint8_t res33[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTIM00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTIM01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTIM02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTIM03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTIM04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTIM05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTIM06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTIM07;

  uint8_t res34[992];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRPN:8;
      uint64_t reservedSpace0:2;
      uint64_t SRE:1;
      uint64_t TOS:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC:5;
      uint64_t reservedSpace2:3;
      uint64_t SRR:1;
      uint64_t CLRR:1;
      uint64_t SETR:1;
      uint64_t IOV:1;
      uint64_t IOVCLR:1;
      uint64_t SWS:1;
      uint64_t SWSCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC_GTMTOM17;

};

#define INT (*(volatile struct INT_tag *) 0xf0037008)

struct DMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISR:1;
      uint64_t DISS:1;
      uint64_t RES_0:1;
      uint64_t EDIS:1;
      uint64_t RES_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CLC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ID;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:2;
      uint64_t INTERR:1;
      uint64_t RES_1:1;
      uint64_t RMWERR:1;
      uint64_t RES_2:1;
      uint64_t DATAERR:1;
      uint64_t RES_3:1;
      uint64_t PMIC:1;
      uint64_t ERRDIS:1;
      uint64_t RES_4:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_MEMCON;

  uint8_t res2[28];

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
  } __attribute__((aligned(4))) DMA_ACCEN00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ACCEN01;

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
  } __attribute__((aligned(4))) DMA_ACCEN10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ACCEN11;

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
  } __attribute__((aligned(4))) DMA_ACCEN20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ACCEN21;

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
  } __attribute__((aligned(4))) DMA_ACCEN30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ACCEN31;

  uint8_t res3[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:16;
      uint64_t ESER:1;
      uint64_t EDER:1;
      uint64_t RES_1:6;
      uint64_t ERER:1;
      uint64_t RES_2:1;
      uint64_t ELER:1;
      uint64_t RES_3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_EER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:7;
      uint64_t RES_0:9;
      uint64_t SER:1;
      uint64_t DER:1;
      uint64_t RES_1:2;
      uint64_t SPBER:1;
      uint64_t SRIER:1;
      uint64_t RES_2:2;
      uint64_t RAMER:1;
      uint64_t SLLER:1;
      uint64_t DLLER:1;
      uint64_t RES_3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ERRSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:16;
      uint64_t CSER:1;
      uint64_t CDER:1;
      uint64_t RES_1:2;
      uint64_t CSPBER:1;
      uint64_t CSRIER:1;
      uint64_t RES_2:2;
      uint64_t CRAMER:1;
      uint64_t CSLLER:1;
      uint64_t CDLLER:1;
      uint64_t RES_3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CLRE0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RS:1;
      uint64_t RES_0:3;
      uint64_t WS:1;
      uint64_t RES_1:11;
      uint64_t CH:7;
      uint64_t RES_2:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0SR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD00:8;
      uint64_t RD01:8;
      uint64_t RD02:8;
      uint64_t RD03:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME00R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD10:8;
      uint64_t RD11:8;
      uint64_t RD12:8;
      uint64_t RD13:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME01R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD20:8;
      uint64_t RD21:8;
      uint64_t RD22:8;
      uint64_t RD23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME02R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD30:8;
      uint64_t RD31:8;
      uint64_t RD32:8;
      uint64_t RD33:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME03R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD40:8;
      uint64_t RD41:8;
      uint64_t RD42:8;
      uint64_t RD43:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME04R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD50:8;
      uint64_t RD51:8;
      uint64_t RD52:8;
      uint64_t RD53:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME05R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD60:8;
      uint64_t RD61:8;
      uint64_t RD62:8;
      uint64_t RD63:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME06R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD70:8;
      uint64_t RD71:8;
      uint64_t RD72:8;
      uint64_t RD73:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME07R;

  uint8_t res6[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0RDCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0SDCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0SADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0DADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0ADICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0CHCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0SHADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t RES_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME0CHSR;

  uint8_t res7[3968];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:16;
      uint64_t ESER:1;
      uint64_t EDER:1;
      uint64_t RES_1:6;
      uint64_t ERER:1;
      uint64_t RES_2:1;
      uint64_t ELER:1;
      uint64_t RES_3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_EER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:7;
      uint64_t RES_0:9;
      uint64_t SER:1;
      uint64_t DER:1;
      uint64_t RES_1:2;
      uint64_t SPBER:1;
      uint64_t SRIER:1;
      uint64_t RES_2:2;
      uint64_t RAMER:1;
      uint64_t SLLER:1;
      uint64_t DLLER:1;
      uint64_t RES_3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ERRSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:16;
      uint64_t CSER:1;
      uint64_t CDER:1;
      uint64_t RES_1:2;
      uint64_t CSPBER:1;
      uint64_t CSRIER:1;
      uint64_t RES_2:2;
      uint64_t CRAMER:1;
      uint64_t CSLLER:1;
      uint64_t CDLLER:1;
      uint64_t RES_3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CLRE1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RS:1;
      uint64_t RES_0:3;
      uint64_t WS:1;
      uint64_t RES_1:11;
      uint64_t CH:7;
      uint64_t RES_2:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1SR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD00:8;
      uint64_t RD01:8;
      uint64_t RD02:8;
      uint64_t RD03:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME10R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD10:8;
      uint64_t RD11:8;
      uint64_t RD12:8;
      uint64_t RD13:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME11R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD20:8;
      uint64_t RD21:8;
      uint64_t RD22:8;
      uint64_t RD23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME12R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD30:8;
      uint64_t RD31:8;
      uint64_t RD32:8;
      uint64_t RD33:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME13R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD40:8;
      uint64_t RD41:8;
      uint64_t RD42:8;
      uint64_t RD43:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME14R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD50:8;
      uint64_t RD51:8;
      uint64_t RD52:8;
      uint64_t RD53:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME15R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD60:8;
      uint64_t RD61:8;
      uint64_t RD62:8;
      uint64_t RD63:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME16R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD70:8;
      uint64_t RD71:8;
      uint64_t RD72:8;
      uint64_t RD73:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME17R;

  uint8_t res10[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1RDCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1SDCRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1SADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1DADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1ADICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1CHCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1SHADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t RES_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ME1CHSR;

  uint8_t res11[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TGS:4;
      uint64_t RES_0:3;
      uint64_t BS:1;
      uint64_t RES_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_OTSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIT:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ERRINTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT00:8;
      uint64_t PAT01:8;
      uint64_t PAT02:8;
      uint64_t PAT03:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_PRR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT10:8;
      uint64_t PAT11:8;
      uint64_t PAT12:8;
      uint64_t PAT13:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_PRR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TIME;

  uint8_t res12[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_MODE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_MODE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_MODE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_MODE3;

  uint8_t res13[1264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRP:2;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_HRR015;

  uint8_t res14[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSEN:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSENR015;

  uint8_t res15[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSAC:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SUSACR015;

  uint8_t res16[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST:1;
      uint64_t HTRE:1;
      uint64_t TRL:1;
      uint64_t CH:1;
      uint64_t RES_0:4;
      uint64_t HLTREQ:1;
      uint64_t HLTACK:1;
      uint64_t RES_1:6;
      uint64_t ECH:1;
      uint64_t DCH:1;
      uint64_t CTL:1;
      uint64_t RES_2:5;
      uint64_t HLTCLR:1;
      uint64_t RES_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TSR015;

  uint8_t res17[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RDCRCR015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SDCRCR015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SADR015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DADR015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMF:3;
      uint64_t INCS:1;
      uint64_t DMF:3;
      uint64_t INCD:1;
      uint64_t CBLS:4;
      uint64_t CBLD:4;
      uint64_t SHCT:4;
      uint64_t SCBE:1;
      uint64_t DCBE:1;
      uint64_t STAMP:1;
      uint64_t ETRL:1;
      uint64_t WRPSE:1;
      uint64_t WRPDE:1;
      uint64_t INTCT:2;
      uint64_t IRDV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ADICR015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TREL:14;
      uint64_t RES_0:2;
      uint64_t BLKM:3;
      uint64_t RROAT:1;
      uint64_t CHMODE:1;
      uint64_t CHDW:3;
      uint64_t PATSEL:3;
      uint64_t RES_1:1;
      uint64_t PRSEL:1;
      uint64_t RES_2:1;
      uint64_t DMAPRIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCFGR015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SHADR015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCOUNT:14;
      uint64_t RES_0:1;
      uint64_t LXO:1;
      uint64_t WRPS:1;
      uint64_t WRPD:1;
      uint64_t ICH:1;
      uint64_t IPM:1;
      uint64_t RES_1:2;
      uint64_t BUFFER:1;
      uint64_t FROZEN:1;
      uint64_t SWB:1;
      uint64_t CWRP:1;
      uint64_t CICH:1;
      uint64_t SIT:1;
      uint64_t RES_2:3;
      uint64_t SCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHCSR015;

};

#define DMA (*(volatile struct DMA_tag *) 0xf0010000)

struct PMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMU0_ID;

  uint8_t res0[2804];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_COMM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:8;
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_COMM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:8;
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_COMM2;

  uint8_t res1[4092];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_TYPE:8;
      uint64_t MOD_NUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_ID;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FABUSY:1;
      uint64_t D0BUSY:1;
      uint64_t RES1:1;
      uint64_t P0BUSY:1;
      uint64_t RES4:1;
      uint64_t RES5:1;
      uint64_t RES6:1;
      uint64_t PROG:1;
      uint64_t ERASE:1;
      uint64_t PFPAGE:1;
      uint64_t DFPAGE:1;
      uint64_t OPER:1;
      uint64_t SQER:1;
      uint64_t PROER:1;
      uint64_t PFSBER:1;
      uint64_t PFDBER:1;
      uint64_t PFMBER:1;
      uint64_t RES17:1;
      uint64_t DFSBER:1;
      uint64_t DFDBER:1;
      uint64_t DFTBER:1;
      uint64_t DFMBER:1;
      uint64_t SRIADDERR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES:1;
      uint64_t PVER:1;
      uint64_t EVER:1;
      uint64_t SPND:1;
      uint64_t SLM:1;
      uint64_t reservedSpace1:1;
      uint64_t ORIER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSPFLASH:4;
      uint64_t WSECPF:2;
      uint64_t WSDFLASH:6;
      uint64_t WSECDF:3;
      uint64_t IDLE:1;
      uint64_t ESLDIS:1;
      uint64_t SLEEP:1;
      uint64_t NSAFECC:1;
      uint64_t STALL:1;
      uint64_t RES21:2;
      uint64_t RES23:2;
      uint64_t VOPERM:1;
      uint64_t SQERM:1;
      uint64_t PROERM:1;
      uint64_t reservedSpace0:3;
      uint64_t PR5V:1;
      uint64_t EOBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_FCON;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROINP:1;
      uint64_t PRODISP:1;
      uint64_t PROIND:1;
      uint64_t PRODISD:1;
      uint64_t PROINHSMCOTP:1;
      uint64_t RES5:1;
      uint64_t PROINOTP:1;
      uint64_t RES7:1;
      uint64_t PROINDBG:1;
      uint64_t PRODISDBG:1;
      uint64_t PROINHSM:1;
      uint64_t reservedSpace0:5;
      uint64_t DCFP:1;
      uint64_t DDFP:1;
      uint64_t DDFPX:1;
      uint64_t reservedSpace1:1;
      uint64_t DDFD:1;
      uint64_t reservedSpace2:1;
      uint64_t ENPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_FPRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0L:1;
      uint64_t S1L:1;
      uint64_t S2L:1;
      uint64_t S3L:1;
      uint64_t S4L:1;
      uint64_t S5L:1;
      uint64_t S6L:1;
      uint64_t S7L:1;
      uint64_t S8L:1;
      uint64_t S9L:1;
      uint64_t S10L:1;
      uint64_t S11L:1;
      uint64_t S12L:1;
      uint64_t S13L:1;
      uint64_t S14L:1;
      uint64_t S15L:1;
      uint64_t S16L:1;
      uint64_t S17L:1;
      uint64_t S18L:1;
      uint64_t S19L:1;
      uint64_t S20L:1;
      uint64_t S21L:1;
      uint64_t S22L:1;
      uint64_t S23L:1;
      uint64_t S24L:1;
      uint64_t S25L:1;
      uint64_t S26L:1;
      uint64_t RES:4;
      uint64_t RPRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_PROCONP0;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L:1;
      uint64_t NSAFECC:1;
      uint64_t RAMIN:2;
      uint64_t RAMINSEL:4;
      uint64_t RES8:1;
      uint64_t RES9:1;
      uint64_t RES10:1;
      uint64_t RES11:1;
      uint64_t RES12:1;
      uint64_t RES13:1;
      uint64_t RES14:1;
      uint64_t RES15:1;
      uint64_t ESR0CNT:12;
      uint64_t RES29:2;
      uint64_t RES30:1;
      uint64_t RPRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_PROCOND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSMBOOTEN:1;
      uint64_t SSWWAIT:1;
      uint64_t HSMDX:1;
      uint64_t HSM6X:1;
      uint64_t HSM16X:1;
      uint64_t HSM17X:1;
      uint64_t S6ROM:1;
      uint64_t HSMENPINS:2;
      uint64_t HSMENRES:2;
      uint64_t DESTDBG:2;
      uint64_t BLKFLAN:1;
      uint64_t BOOTSEL:2;
      uint64_t S16ROM:1;
      uint64_t S17ROM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_PROCONHSMCOTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0ROM:1;
      uint64_t S1ROM:1;
      uint64_t S2ROM:1;
      uint64_t S3ROM:1;
      uint64_t S4ROM:1;
      uint64_t S5ROM:1;
      uint64_t S6ROM:1;
      uint64_t S7ROM:1;
      uint64_t S8ROM:1;
      uint64_t S9ROM:1;
      uint64_t S10ROM:1;
      uint64_t S11ROM:1;
      uint64_t S12ROM:1;
      uint64_t S13ROM:1;
      uint64_t S14ROM:1;
      uint64_t S15ROM:1;
      uint64_t S16ROM:1;
      uint64_t S17ROM:1;
      uint64_t S18ROM:1;
      uint64_t S19ROM:1;
      uint64_t S20ROM:1;
      uint64_t S21ROM:1;
      uint64_t S22ROM:1;
      uint64_t S23ROM:1;
      uint64_t S24ROM:1;
      uint64_t S25ROM:1;
      uint64_t S26ROM:1;
      uint64_t RES:2;
      uint64_t BML:2;
      uint64_t TP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_PROCONOTP0;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0WOP:1;
      uint64_t S1WOP:1;
      uint64_t S2WOP:1;
      uint64_t S3WOP:1;
      uint64_t S4WOP:1;
      uint64_t S5WOP:1;
      uint64_t S6WOP:1;
      uint64_t S7WOP:1;
      uint64_t S8WOP:1;
      uint64_t S9WOP:1;
      uint64_t S10WOP:1;
      uint64_t S11WOP:1;
      uint64_t S12WOP:1;
      uint64_t S13WOP:1;
      uint64_t S14WOP:1;
      uint64_t S15WOP:1;
      uint64_t S16WOP:1;
      uint64_t S17WOP:1;
      uint64_t S18WOP:1;
      uint64_t S19WOP:1;
      uint64_t S20WOP:1;
      uint64_t S21WOP:1;
      uint64_t S22WOP:1;
      uint64_t S23WOP:1;
      uint64_t S24WOP:1;
      uint64_t S25WOP:1;
      uint64_t S26WOP:1;
      uint64_t RES:4;
      uint64_t DATM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_PROCONWOP0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCDSDIS:1;
      uint64_t DBGIFLCK:1;
      uint64_t EDM:2;
      uint64_t RES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_PROCONDBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSMDBGDIS:1;
      uint64_t DBGIFLCK:1;
      uint64_t TSTIFLCK:1;
      uint64_t HSMTSTDIS:1;
      uint64_t RES15:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_PROCONHSM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_RDBCFG00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_RDBCFG01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_RDBCFG02;

  uint8_t res7[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCODE:22;
      uint64_t reservedSpace0:8;
      uint64_t DECENCDIS:1;
      uint64_t PECENCDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_ECCW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCODE:22;
      uint64_t RES:2;
      uint64_t reservedSpace0:6;
      uint64_t EDCERRINJ:1;
      uint64_t ECCORDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_ECCRP0;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCODE:22;
      uint64_t RES:2;
      uint64_t reservedSpace0:6;
      uint64_t EDCERRINJ:1;
      uint64_t ECCORDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_ECCRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELP0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t RES3:1;
      uint64_t reservedSpace0:11;
      uint64_t TRAPDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_MARP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HMARGIN:1;
      uint64_t SELD0:1;
      uint64_t reservedSpace0:1;
      uint64_t SPND:1;
      uint64_t SPNDERR:1;
      uint64_t reservedSpace1:10;
      uint64_t TRAPDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_MARD;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t CLR:1;
      uint64_t DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_CBABCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD0:1;
      uint64_t VLD1:1;
      uint64_t VLD2:1;
      uint64_t VLD3:1;
      uint64_t VLD4:1;
      uint64_t VLD5:1;
      uint64_t VLD6:1;
      uint64_t VLD7:1;
      uint64_t VLD8:1;
      uint64_t VLD9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_CBABSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ADDR:19;
      uint64_t ERR:6;
      uint64_t VLD:1;
      uint64_t CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_CBABTOP0;

  uint8_t res10[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:6;
      uint64_t reservedSpace0:2;
      uint64_t CLR:1;
      uint64_t DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_UBABCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_UBABSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ADDR:19;
      uint64_t ERR:6;
      uint64_t VLD:1;
      uint64_t CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_UBABTOP0;

  uint8_t res11[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRT:1;
      uint64_t STP:1;
      uint64_t BUSY:1;
      uint64_t DONE:1;
      uint64_t ERR:1;
      uint64_t reservedSpace0:3;
      uint64_t EOBM:1;
      uint64_t reservedSpace1:7;
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_RRCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_RRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_RRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADD:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_RRAD;

  uint8_t res12[176];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t D1BUSY:1;
      uint64_t reservedSpace1:4;
      uint64_t PROG:1;
      uint64_t ERASE:1;
      uint64_t reservedSpace2:1;
      uint64_t DFPAGE:1;
      uint64_t OPER:1;
      uint64_t SQER:1;
      uint64_t reservedSpace3:12;
      uint64_t PVER:1;
      uint64_t EVER:1;
      uint64_t SPND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_HSMFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCKHSMUCB:2;
      uint64_t reservedSpace0:22;
      uint64_t VOPERM:1;
      uint64_t SQERM:1;
      uint64_t reservedSpace1:5;
      uint64_t EOBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_HSMFCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SELD1:1;
      uint64_t reservedSpace1:1;
      uint64_t SPND:1;
      uint64_t SPNDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_HSMMARD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRT:1;
      uint64_t STP:1;
      uint64_t BUSY:1;
      uint64_t DONE:1;
      uint64_t ERR:1;
      uint64_t reservedSpace0:3;
      uint64_t EOBM:1;
      uint64_t reservedSpace1:7;
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_HSMRRCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_HSMRRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_HSMRRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADD:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_HSMRRAD;

  uint8_t res13[476];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH0_ACCEN1;

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
  } __attribute__((aligned(4))) FLASH0_ACCEN0;

};

#define PMU (*(volatile struct PMU_tag *) 0xf8000508)

struct LMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISR:1;
      uint64_t DISS:1;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMU_CLC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMU_MODID;

  uint8_t res1[4];

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
  } __attribute__((aligned(4))) LMU_ACCEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMU_ACCEN1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLDAEN:1;
      uint64_t POLDAEN:1;
      uint64_t reservedSpace0:1;
      uint64_t ERERR:1;
      uint64_t reservedSpace1:1;
      uint64_t EWERR:1;
      uint64_t DATAERR:1;
      uint64_t ADDERR:1;
      uint64_t reservedSpace2:4;
      uint64_t WSTATES:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMU_MEMCON;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG1:6;
      uint64_t reservedSpace0:2;
      uint64_t TAG2:6;
      uint64_t reservedSpace1:8;
      uint64_t EREN:1;
      uint64_t EPEN:1;
      uint64_t reservedSpace2:6;
      uint64_t EN1:1;
      uint64_t EN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMU_BUFCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG1:6;
      uint64_t reservedSpace0:2;
      uint64_t TAG2:6;
      uint64_t reservedSpace1:8;
      uint64_t EREN:1;
      uint64_t EPEN:1;
      uint64_t reservedSpace2:6;
      uint64_t EN1:1;
      uint64_t EN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMU_BUFCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG1:6;
      uint64_t reservedSpace0:2;
      uint64_t TAG2:6;
      uint64_t reservedSpace1:8;
      uint64_t EREN:1;
      uint64_t EPEN:1;
      uint64_t reservedSpace2:6;
      uint64_t EN1:1;
      uint64_t EN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMU_BUFCON2;

};

#define LMU (*(volatile struct LMU_tag *) 0xf8700800)

struct OVC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHOVEN0:1;
      uint64_t SHOVEN1:1;
      uint64_t SHOVEN2:1;
      uint64_t SHOVEN3:1;
      uint64_t SHOVEN4:1;
      uint64_t SHOVEN5:1;
      uint64_t SHOVEN6:1;
      uint64_t SHOVEN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OSEL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OBASE:17;
      uint64_t reservedSpace1:2;
      uint64_t OMEM:3;
      uint64_t reservedSpace2:4;
      uint64_t OVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_RABR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TBASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OTAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OMASK:12;
      uint64_t ONE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OMASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OBASE:17;
      uint64_t reservedSpace1:2;
      uint64_t OMEM:3;
      uint64_t reservedSpace2:4;
      uint64_t OVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_RABR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TBASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OTAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OMASK:12;
      uint64_t ONE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OBASE:17;
      uint64_t reservedSpace1:2;
      uint64_t OMEM:3;
      uint64_t reservedSpace2:4;
      uint64_t OVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_RABR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TBASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OTAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OMASK:12;
      uint64_t ONE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OBASE:17;
      uint64_t reservedSpace1:2;
      uint64_t OMEM:3;
      uint64_t reservedSpace2:4;
      uint64_t OVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_RABR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TBASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OTAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OMASK:12;
      uint64_t ONE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OMASK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OBASE:17;
      uint64_t reservedSpace1:2;
      uint64_t OMEM:3;
      uint64_t reservedSpace2:4;
      uint64_t OVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_RABR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TBASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OTAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OMASK:12;
      uint64_t ONE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OMASK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OBASE:17;
      uint64_t reservedSpace1:2;
      uint64_t OMEM:3;
      uint64_t reservedSpace2:4;
      uint64_t OVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_RABR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TBASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OTAR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OMASK:12;
      uint64_t ONE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OMASK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OBASE:17;
      uint64_t reservedSpace1:2;
      uint64_t OMEM:3;
      uint64_t reservedSpace2:4;
      uint64_t OVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_RABR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TBASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OTAR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OMASK:12;
      uint64_t ONE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OMASK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OBASE:17;
      uint64_t reservedSpace1:2;
      uint64_t OMEM:3;
      uint64_t reservedSpace2:4;
      uint64_t OVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_RABR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TBASE:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OTAR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t OMASK:12;
      uint64_t ONE:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVC0_OMASK7;

};

#define OVC (*(volatile struct OVC_tag *) 0xf880fb00)

struct MTU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISR:1;
      uint64_t DISS:1;
      uint64_t Resvd:1;
      uint64_t EDIS:1;
      uint64_t reservedSpace0:4;
      uint64_t Reserved:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_CLC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODREV:8;
      uint64_t MODTYPE:8;
      uint64_t MODNUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_ID;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU2XEN:6;
      uint64_t CPU1XEN:6;
      uint64_t LMUEN:1;
      uint64_t MMCDSEN:1;
      uint64_t CPU0DSEN:1;
      uint64_t Res_0:1;
      uint64_t CPU0PSEN:1;
      uint64_t CPU0PTEN:1;
      uint64_t Res_1:1;
      uint64_t CPU0DTEN:1;
      uint64_t CPUXDS2EN:2;
      uint64_t ETHEN:1;
      uint64_t Res_2:3;
      uint64_t FSI0EN:1;
      uint64_t CPU0DS2EN:1;
      uint64_t GTMFEN:1;
      uint64_t GTMM0EN:1;
      uint64_t GTMM1EN:1;
      uint64_t GTM1AEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_MEMTEST0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GTM1BEN:1;
      uint64_t GTM2EN:1;
      uint64_t PSI5EN:1;
      uint64_t Res:1;
      uint64_t MCAN0EN:1;
      uint64_t MCAN1EN:1;
      uint64_t ERAY0OEN:1;
      uint64_t ERAY0TEN:1;
      uint64_t ERAY0MEN:1;
      uint64_t ERAY1XEN:3;
      uint64_t STBY1EN:1;
      uint64_t MCDSEN:1;
      uint64_t EMEML0EN:1;
      uint64_t EMEML1EN:1;
      uint64_t EMEML2EN:1;
      uint64_t EMEML3EN:1;
      uint64_t EMEMLXEN:12;
      uint64_t EMEMUXEN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_MEMTEST1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMEMUxEN:14;
      uint64_t CIF0EN:1;
      uint64_t DAMEN:1;
      uint64_t CIFxEN:2;
      uint64_t STBY2EN:1;
      uint64_t DMAEN:1;
      uint64_t XTM0EN:1;
      uint64_t XTM1EN:1;
      uint64_t FFT0EN:1;
      uint64_t FFT1EN:1;
      uint64_t Res:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_MEMTEST2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res_0:1;
      uint64_t CPU2DxMAP:2;
      uint64_t Res_1:1;
      uint64_t CPU2PxMAP:2;
      uint64_t Res_2:1;
      uint64_t CPU1DxMAP:2;
      uint64_t Res_3:1;
      uint64_t CPU1PxMAP:2;
      uint64_t Res_4:3;
      uint64_t CPU0PCMAP:1;
      uint64_t Res_5:1;
      uint64_t CPU0PTMAP:1;
      uint64_t CPU0DxMAP:2;
      uint64_t Res_6:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_MEMMAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res_0:1;
      uint64_t Res_1:1;
      uint64_t Res_2:1;
      uint64_t Res_3:1;
      uint64_t Res_4:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_RES0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res_0:3;
      uint64_t Res_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_RES1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res_0:7;
      uint64_t Res_1:1;
      uint64_t Res_2:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_RES2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_RES3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU2DSAIU:1;
      uint64_t reservedSpace0:1;
      uint64_t CPU2DTAIU:1;
      uint64_t CPU2PSAIU:1;
      uint64_t reservedSpace1:1;
      uint64_t CPU2PTAIU:1;
      uint64_t CPU1DSAIU:1;
      uint64_t reservedSpace2:1;
      uint64_t CPU1DTAIU:1;
      uint64_t CPU1PSAIU:1;
      uint64_t reservedSpace3:1;
      uint64_t CPU1PTAIU:1;
      uint64_t reservedSpace4:2;
      uint64_t CPU0DSAIU:1;
      uint64_t reservedSpace5:1;
      uint64_t CPU0PSAIU:1;
      uint64_t CPU0PTAIU:1;
      uint64_t reservedSpace6:1;
      uint64_t CPU0DxAIU:1;
      uint64_t CPU1DS2AIU:1;
      uint64_t CPU2DS2AIU:1;
      uint64_t reservedSpace7:1;
      uint64_t HSMCAIU:1;
      uint64_t HSMTAIU:1;
      uint64_t HSMRAIU:1;
      uint64_t FSI0AIU:1;
      uint64_t CPU0DS2AIU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_MEMSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_MEMSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_MEMSTAT2;

  uint8_t res3[180];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_ACCEN1;

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
  } __attribute__((aligned(4))) MTU_ACCEN0;

  uint8_t res4[3840];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RANGE;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_ETRR4;

  uint8_t res6[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC0_RDBFL39;

  uint8_t res7[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RANGE;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_ETRR4;

  uint8_t res9[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC1_RDBFL39;

  uint8_t res10[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RANGE;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_ETRR4;

  uint8_t res12[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC2_RDBFL39;

  uint8_t res13[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RANGE;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_ETRR4;

  uint8_t res15[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC3_RDBFL39;

  uint8_t res16[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RANGE;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_ETRR4;

  uint8_t res18[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC4_RDBFL39;

  uint8_t res19[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RANGE;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_ETRR4;

  uint8_t res21[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC5_RDBFL39;

  uint8_t res22[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RANGE;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_ETRR4;

  uint8_t res24[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC6_RDBFL39;

  uint8_t res25[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RANGE;

  uint8_t res26[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_ETRR4;

  uint8_t res27[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC7_RDBFL39;

  uint8_t res28[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RANGE;

  uint8_t res29[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_ETRR4;

  uint8_t res30[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC8_RDBFL39;

  uint8_t res31[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RANGE;

  uint8_t res32[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_ETRR4;

  uint8_t res33[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC9_RDBFL39;

  uint8_t res34[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RANGE;

  uint8_t res35[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_ETRR4;

  uint8_t res36[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC10_RDBFL39;

  uint8_t res37[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RANGE;

  uint8_t res38[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_ETRR4;

  uint8_t res39[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC11_RDBFL39;

  uint8_t res40[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RANGE;

  uint8_t res41[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_ETRR4;

  uint8_t res42[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC12_RDBFL39;

  uint8_t res43[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RANGE;

  uint8_t res44[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_ETRR4;

  uint8_t res45[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC13_RDBFL39;

  uint8_t res46[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RANGE;

  uint8_t res47[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_ETRR4;

  uint8_t res48[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC14_RDBFL39;

  uint8_t res49[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RANGE;

  uint8_t res50[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_ETRR4;

  uint8_t res51[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC15_RDBFL39;

  uint8_t res52[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RANGE;

  uint8_t res53[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_ETRR4;

  uint8_t res54[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC16_RDBFL39;

  uint8_t res55[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RANGE;

  uint8_t res56[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_ETRR4;

  uint8_t res57[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC17_RDBFL39;

  uint8_t res58[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RANGE;

  uint8_t res59[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_ETRR4;

  uint8_t res60[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC18_RDBFL39;

  uint8_t res61[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RANGE;

  uint8_t res62[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_ETRR4;

  uint8_t res63[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC19_RDBFL39;

  uint8_t res64[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RANGE;

  uint8_t res65[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_ETRR4;

  uint8_t res66[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC20_RDBFL39;

  uint8_t res67[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RANGE;

  uint8_t res68[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_ETRR4;

  uint8_t res69[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC21_RDBFL39;

  uint8_t res70[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RANGE;

  uint8_t res71[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_ETRR4;

  uint8_t res72[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC22_RDBFL39;

  uint8_t res73[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RANGE;

  uint8_t res74[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_ETRR4;

  uint8_t res75[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC23_RDBFL39;

  uint8_t res76[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RANGE;

  uint8_t res77[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_ETRR4;

  uint8_t res78[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC24_RDBFL39;

  uint8_t res79[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RANGE;

  uint8_t res80[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_ETRR4;

  uint8_t res81[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC25_RDBFL39;

  uint8_t res82[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RANGE;

  uint8_t res83[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_ETRR4;

  uint8_t res84[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC26_RDBFL39;

  uint8_t res85[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RANGE;

  uint8_t res86[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_ETRR4;

  uint8_t res87[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC27_RDBFL39;

  uint8_t res88[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RANGE;

  uint8_t res89[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_ETRR4;

  uint8_t res90[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC28_RDBFL39;

  uint8_t res91[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RANGE;

  uint8_t res92[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_ETRR4;

  uint8_t res93[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC29_RDBFL39;

  uint8_t res94[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RANGE;

  uint8_t res95[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_ETRR4;

  uint8_t res96[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC30_RDBFL39;

  uint8_t res97[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RANGE;

  uint8_t res98[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_ETRR4;

  uint8_t res99[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC31_RDBFL39;

  uint8_t res100[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RANGE;

  uint8_t res101[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_ETRR4;

  uint8_t res102[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC32_RDBFL39;

  uint8_t res103[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RANGE;

  uint8_t res104[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_ETRR4;

  uint8_t res105[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC33_RDBFL39;

  uint8_t res106[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RANGE;

  uint8_t res107[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_ETRR4;

  uint8_t res108[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC34_RDBFL39;

  uint8_t res109[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RANGE;

  uint8_t res110[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_ETRR4;

  uint8_t res111[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC35_RDBFL39;

  uint8_t res112[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RANGE;

  uint8_t res113[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_ETRR4;

  uint8_t res114[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC36_RDBFL39;

  uint8_t res115[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RANGE;

  uint8_t res116[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_ETRR4;

  uint8_t res117[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC37_RDBFL39;

  uint8_t res118[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RANGE;

  uint8_t res119[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_ETRR4;

  uint8_t res120[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC38_RDBFL39;

  uint8_t res121[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RANGE;

  uint8_t res122[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_ETRR4;

  uint8_t res123[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC39_RDBFL39;

  uint8_t res124[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RANGE;

  uint8_t res125[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_ETRR4;

  uint8_t res126[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC40_RDBFL39;

  uint8_t res127[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RANGE;

  uint8_t res128[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_ETRR4;

  uint8_t res129[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC41_RDBFL39;

  uint8_t res130[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RANGE;

  uint8_t res131[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_ETRR4;

  uint8_t res132[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC42_RDBFL39;

  uint8_t res133[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RANGE;

  uint8_t res134[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_ETRR4;

  uint8_t res135[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC43_RDBFL39;

  uint8_t res136[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RANGE;

  uint8_t res137[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_ETRR4;

  uint8_t res138[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC44_RDBFL39;

  uint8_t res139[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RANGE;

  uint8_t res140[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_ETRR4;

  uint8_t res141[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC45_RDBFL39;

  uint8_t res142[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RANGE;

  uint8_t res143[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_ETRR4;

  uint8_t res144[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC46_RDBFL39;

  uint8_t res145[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RANGE;

  uint8_t res146[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_ETRR4;

  uint8_t res147[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC47_RDBFL39;

  uint8_t res148[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RANGE;

  uint8_t res149[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_ETRR4;

  uint8_t res150[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC48_RDBFL39;

  uint8_t res151[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RANGE;

  uint8_t res152[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_ETRR4;

  uint8_t res153[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC49_RDBFL39;

  uint8_t res154[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RANGE;

  uint8_t res155[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_ETRR4;

  uint8_t res156[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC50_RDBFL39;

  uint8_t res157[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RANGE;

  uint8_t res158[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_ETRR4;

  uint8_t res159[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC51_RDBFL39;

  uint8_t res160[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RANGE;

  uint8_t res161[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_ETRR4;

  uint8_t res162[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC52_RDBFL39;

  uint8_t res163[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RANGE;

  uint8_t res164[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_ETRR4;

  uint8_t res165[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC53_RDBFL39;

  uint8_t res166[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RANGE;

  uint8_t res167[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_ETRR4;

  uint8_t res168[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC54_RDBFL39;

  uint8_t res169[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RANGE;

  uint8_t res170[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_ETRR4;

  uint8_t res171[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC55_RDBFL39;

  uint8_t res172[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RANGE;

  uint8_t res173[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_ETRR4;

  uint8_t res174[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC56_RDBFL39;

  uint8_t res175[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RANGE;

  uint8_t res176[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_ETRR4;

  uint8_t res177[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC57_RDBFL39;

  uint8_t res178[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RANGE;

  uint8_t res179[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_ETRR4;

  uint8_t res180[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC58_RDBFL39;

  uint8_t res181[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RANGE;

  uint8_t res182[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_ETRR4;

  uint8_t res183[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC59_RDBFL39;

  uint8_t res184[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RANGE;

  uint8_t res185[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_ETRR4;

  uint8_t res186[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC60_RDBFL39;

  uint8_t res187[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RANGE;

  uint8_t res188[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_ETRR4;

  uint8_t res189[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC61_RDBFL39;

  uint8_t res190[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RANGE;

  uint8_t res191[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_ETRR4;

  uint8_t res192[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC62_RDBFL39;

  uint8_t res193[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RANGE;

  uint8_t res194[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_ETRR4;

  uint8_t res195[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC63_RDBFL39;

  uint8_t res196[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RANGE;

  uint8_t res197[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_ETRR4;

  uint8_t res198[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC64_RDBFL39;

  uint8_t res199[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RANGE;

  uint8_t res200[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_ETRR4;

  uint8_t res201[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC65_RDBFL39;

  uint8_t res202[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RANGE;

  uint8_t res203[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_ETRR4;

  uint8_t res204[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC66_RDBFL39;

  uint8_t res205[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RANGE;

  uint8_t res206[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_ETRR4;

  uint8_t res207[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC67_RDBFL39;

  uint8_t res208[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RANGE;

  uint8_t res209[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_ETRR4;

  uint8_t res210[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC68_RDBFL39;

  uint8_t res211[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RANGE;

  uint8_t res212[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_ETRR4;

  uint8_t res213[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC69_RDBFL39;

  uint8_t res214[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RANGE;

  uint8_t res215[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_ETRR4;

  uint8_t res216[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC70_RDBFL39;

  uint8_t res217[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RANGE;

  uint8_t res218[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_ETRR4;

  uint8_t res219[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC71_RDBFL39;

  uint8_t res220[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RANGE;

  uint8_t res221[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_ETRR4;

  uint8_t res222[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC72_RDBFL39;

  uint8_t res223[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RANGE;

  uint8_t res224[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_ETRR4;

  uint8_t res225[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC73_RDBFL39;

  uint8_t res226[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RANGE;

  uint8_t res227[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_ETRR4;

  uint8_t res228[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC74_RDBFL39;

  uint8_t res229[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RANGE;

  uint8_t res230[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_ETRR4;

  uint8_t res231[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC75_RDBFL39;

  uint8_t res232[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RANGE;

  uint8_t res233[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_ETRR4;

  uint8_t res234[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC76_RDBFL39;

  uint8_t res235[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RANGE;

  uint8_t res236[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_ETRR4;

  uint8_t res237[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC77_RDBFL39;

  uint8_t res238[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RANGE;

  uint8_t res239[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_ETRR4;

  uint8_t res240[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC78_RDBFL39;

  uint8_t res241[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RANGE;

  uint8_t res242[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_ETRR4;

  uint8_t res243[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC79_RDBFL39;

  uint8_t res244[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RANGE;

  uint8_t res245[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_ETRR4;

  uint8_t res246[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC80_RDBFL39;

  uint8_t res247[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RANGE;

  uint8_t res248[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_ETRR4;

  uint8_t res249[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC81_RDBFL39;

  uint8_t res250[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSTYPE:8;
      uint64_t Res:4;
      uint64_t NUMACCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_CONFIG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACCSPAT:8;
      uint64_t SELFASTB:4;
      uint64_t AG_MOD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_CONFIG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RESUME:1;
      uint64_t ESTF:1;
      uint64_t DIR:1;
      uint64_t DINIT:1;
      uint64_t RCADR:1;
      uint64_t ROWTOG:1;
      uint64_t BITTOG:1;
      uint64_t GP_BASE:1;
      uint64_t FAILDMP:1;
      uint64_t Res4:5;
      uint64_t Res:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_MCONTROL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DONE:1;
      uint64_t FAIL:1;
      uint64_t FDA:1;
      uint64_t SFAIL:1;
      uint64_t Res:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_MSTATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:15;
      uint64_t RAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RANGE;

  uint8_t res251[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_REVID;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t TRE:1;
      uint64_t BFLE:1;
      uint64_t SFLE:2;
      uint64_t ECCMAP:2;
      uint64_t TC_WAY_SEL:2;
      uint64_t Res:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_ECCS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t CERR:1;
      uint64_t UERR:1;
      uint64_t AERR:1;
      uint64_t TRC:1;
      uint64_t VAL:5;
      uint64_t reservedSpace0:1;
      uint64_t CENE:1;
      uint64_t UENE:1;
      uint64_t AENE:1;
      uint64_t ECE:1;
      uint64_t EOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_ECCD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_ETRR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_ETRR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_ETRR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_ETRR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADDR:13;
      uint64_t MBI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_ETRR4;

  uint8_t res252[132];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MC82_RDBFL34;

  union
  {
    uint16_t R;
    struct
    {

  union
  {