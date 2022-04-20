#include <stdint.h>

struct Floating_point_registers_Advanced_SIMD_and_Floating_point_Extension_system_registers_tag
{
  uint32_t FPSID;
  uint8_t res0[4092];

  uint32_t FPSCR;
  uint8_t res1[20476];

  uint32_t MVFR1;
  uint8_t res2[4092];

  uint32_t MVFR0;
  uint8_t res3[4092];

  uint32_t FPEXC;
};

#define Floating_point_registers_Advanced_SIMD_and_Floating_point_Extension_system_registers (*(volatile struct Floating_point_registers_Advanced_SIMD_and_Floating_point_Extension_system_registers_tag *) 0xa0000)

struct MSS_VIM_R5A_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t BU:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTERRUPTS:11;
      uint64_t RES1:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:10;
      uint64_t RES3:6;
      uint64_t PRI:4;
      uint64_t RES2:11;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIIRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:10;
      uint64_t RES5:6;
      uint64_t PRI:4;
      uint64_t RES4:11;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIFIQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQGSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQGSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES21:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQVEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES22:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQVEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:10;
      uint64_t RES7:6;
      uint64_t PRI:4;
      uint64_t RES6:11;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTIRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:10;
      uint64_t RES9:6;
      uint64_t PRI:4;
      uint64_t RES8:11;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTFIQ;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES23:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEDVEC;

  uint8_t res1[972];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_7;

  uint8_t res2[2816];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_255;

  uint8_t res3[3072];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_255;

};

#define MSS_VIM_R5A (*(volatile struct MSS_VIM_R5A_tag *) 0x2080000)

struct MSS_VIM_R5B_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t BU:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTERRUPTS:11;
      uint64_t RES1:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:10;
      uint64_t RES3:6;
      uint64_t PRI:4;
      uint64_t RES2:11;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIIRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:10;
      uint64_t RES5:6;
      uint64_t PRI:4;
      uint64_t RES4:11;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIFIQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQGSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQGSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES21:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQVEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES22:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQVEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:10;
      uint64_t RES7:6;
      uint64_t PRI:4;
      uint64_t RES6:11;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTIRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM:10;
      uint64_t RES9:6;
      uint64_t PRI:4;
      uint64_t RES8:11;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTFIQ;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES23:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEDVEC;

  uint8_t res1[972];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_EN_SET_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTER_EN_CLR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQSTS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMAP_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTYPE_7;

  uint8_t res2[2816];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:4;
      uint64_t RES19:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPRIORITY_255;

  uint8_t res3[3072];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES20:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECTOR_255;

};

#define MSS_VIM_R5B (*(volatile struct MSS_VIM_R5B_tag *) 0x20a0000)

struct MSS_IOMUX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAA_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAB_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAC_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAD_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAE_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAF_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAG_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAH_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAI_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAJ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAK_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAL_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAM_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAN_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAO_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAP_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAQ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAR_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAS_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAT_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAU_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAV_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAW_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAX_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAY_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAZ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBA_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBB_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBC_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBD_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBE_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBF_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBG_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBH_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBI_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBJ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBK_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBL_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBM_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBN_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBO_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBP_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBQ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBR_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBS_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBT_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBU_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBV_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBW_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBX_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBY_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBZ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCA_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCB_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCC_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCD_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCE_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCF_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCG_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCH_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCI_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCJ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCK_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCL_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCM_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCN_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCO_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCP_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCQ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCR_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCS_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCT_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCU_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCV_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCW_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCX_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCY_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADCZ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDA_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDB_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDC_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDD_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDE_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDF_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDG_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDH_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDI_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDJ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDK_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDL_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDM_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDN_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDO_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDP_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDQ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDR_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDS_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDT_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDU_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDV_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDW_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDX_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDY_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADDZ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEA_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEB_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEC_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADED_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEE_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEF_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEG_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEH_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEI_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEJ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEK_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEL_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEM_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEN_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEO_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADEP_cfg_reg;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USERMODEEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USERMODEEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADGLBLCFGREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADGLBLCFGREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOCFGKICK0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFGKICK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOCFGKICK1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFGKICK1;

};

#define MSS_IOMUX (*(volatile struct MSS_IOMUX_tag *) 0x20c0000)

struct MSS_RCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clr:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RST_CAUSE_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cause:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RST_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t r5a:3;
      uint64_t reservedSpace0:13;
      uint64_t r5b:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSRST_BY_DBG_RST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t common:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RST_ASSERDLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t r5ssa:8;
      uint64_t r5ssb:8;
      uint64_t r5a:8;
      uint64_t r5b:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RST2ASSERTDLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t r5ssa:3;
      uint64_t reservedSpace0:5;
      uint64_t r5ssb:3;
      uint64_t reservedSpace1:5;
      uint64_t r5a:3;
      uint64_t reservedSpace2:5;
      uint64_t r5b:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RST_WFICHECK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANA_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANB_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIA_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIB_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIC_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_WDT_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_I2C_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIA_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIB_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPTS_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANA_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANB_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIA_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIB_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIC_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_WDT_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_I2C_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIA_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIB_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPTS_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RGMII_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MII100_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MII10_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANA_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANB_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIA_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIB_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIC_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_WDT_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_I2C_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIA_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIB_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPTS_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RGMII_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MII100_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MII10_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANA_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANB_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIA_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIB_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIC_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_WDT_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_I2C_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIA_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIB_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPTS_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RGMII_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MII100_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MII10_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5SS_POR_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5SSA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5SSB_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_VIMA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_VIMB_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CRC_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIB_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RTIC_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_WDT_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_ESM_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DCCA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DCCB_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DCCC_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DCCD_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GIO_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PWM1_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PWM2_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PWM3_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANB_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_I2C_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCIB_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
      uint64_t reservedSpace0:1;
      uint64_t tpcca_assert:3;
      uint64_t reservedSpace1:1;
      uint64_t tptca0_assert:3;
      uint64_t reservedSpace2:1;
      uint64_t tptca1_assert:3;
      uint64_t reservedSpace3:1;
      uint64_t tpccb_assert:3;
      uint64_t reservedSpace4:5;
      uint64_t tptcb0_assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_EDMA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_INFRA_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_RST_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkgate:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_COREA_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkgate:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_COREB_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t iso:3;
      uint64_t reservedSpace0:1;
      uint64_t aonin:3;
      uint64_t reservedSpace1:1;
      uint64_t agoodin:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_BANKA_PD_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t iso:3;
      uint64_t reservedSpace0:1;
      uint64_t aonin:3;
      uint64_t reservedSpace1:1;
      uint64_t agoodin:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_BANKB_PD_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t aonout:1;
      uint64_t agoodout:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_BANKA_PD_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t aonout:1;
      uint64_t agoodout:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_BANKB_PD_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREVIOUS_NAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG3;

  uint8_t res0[548];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_RTIA_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_WDT_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_RTC_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DMTA_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DMTB_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_RTI_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_WDT_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_RTC_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DMTA_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdivr:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DMTB_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_RTI_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_WDT_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_RTC_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DMTA_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DMTB_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_RTI_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_WDT_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_RTC_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DMTA_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DMTB_CLK_STATUS;

  uint8_t res1[2944];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_wph:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_WPH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rec0:1;
      uint64_t hw_spare_rec1:1;
      uint64_t hw_spare_rec2:1;
      uint64_t hw_spare_rec3:1;
      uint64_t hw_spare_rec4:1;
      uint64_t hw_spare_rec5:1;
      uint64_t hw_spare_rec6:1;
      uint64_t hw_spare_rec7:1;
      uint64_t hw_spare_rec8:1;
      uint64_t hw_spare_rec9:1;
      uint64_t hw_spare_rec10:1;
      uint64_t hw_spare_rec11:1;
      uint64_t hw_spare_rec12:1;
      uint64_t hw_spare_rec13:1;
      uint64_t hw_spare_rec14:1;
      uint64_t hw_spare_rec15:1;
      uint64_t hw_spare_rec16:1;
      uint64_t hw_spare_rec17:1;
      uint64_t hw_spare_rec18:1;
      uint64_t hw_spare_rec19:1;
      uint64_t hw_spare_rec20:1;
      uint64_t hw_spare_rec21:1;
      uint64_t hw_spare_rec22:1;
      uint64_t hw_spare_rec23:1;
      uint64_t hw_spare_rec24:1;
      uint64_t hw_spare_rec25:1;
      uint64_t hw_spare_rec26:1;
      uint64_t hw_spare_rec27:1;
      uint64_t hw_spare_rec28:1;
      uint64_t hw_spare_rec29:1;
      uint64_t hw_spare_rec30:1;
      uint64_t hw_spare_rec31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REC;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_raw_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enabled_status_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eoi;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_address;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b6_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_type_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
      uint64_t b19_8:12;
      uint64_t b31_20:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_attr_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_clear;

};

#define MSS_RCM (*(volatile struct MSS_RCM_tag *) 0x2100000)

struct MSS_CTRL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t pulse:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SW_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t src0:8;
      uint64_t src1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CAPEVNT_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t select:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMA_REQ_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t select:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMA1_REQ_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t select:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_IRQ_REQ_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t trig_spia:2;
      uint64_t reservedSpace0:14;
      uint64_t trig_spib:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPI_TRIG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem_init:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_ATCM_MEM_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem_init_done:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_ATCM_MEM_INIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_ATCM_MEM_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem_init:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BTCM_MEM_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem_init_done:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BTCM_MEM_INIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BTCM_MEM_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t partition0:1;
      uint64_t partition1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_MEM_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t partition0:1;
      uint64_t partition1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_MEM_INIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t partition0:1;
      uint64_t partition1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_MEM_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_init:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MAILBOX_MEM_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_done:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MAIlBOX_MEM_INIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MAILBOX_MEM_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_init:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RETRAM_MEM_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_done:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RETRAM_MEM_INIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_RETRAM_MEM_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_init:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_MEM_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_done:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_MEM_INIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_MEM_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_init:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_MEM_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_done:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_MEM_INIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_MEM_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_meminit_start:1;
      uint64_t reservedSpace0:15;
      uint64_t tpcc_b_meminit_start:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_MEMINIT_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_meminit_done:1;
      uint64_t reservedSpace0:15;
      uint64_t tpcc_b_meminit_done:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_MEMINIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_meminit_status:1;
      uint64_t reservedSpace0:15;
      uint64_t tpcc_b_meminit_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_MEMINIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_init:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_MEM_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_done:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_MEM_INIT_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mem0_status:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_MEM_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t spiasync2sen:3;
      uint64_t reservedSpace0:5;
      uint64_t spia_cs_trigsrc_en:1;
      uint64_t reservedSpace1:7;
      uint64_t spia_trig_gate_en:1;
      uint64_t reservedSpace2:7;
      uint64_t spia_int_trig_polarity:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIA_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t spibsync2sen:3;
      uint64_t reservedSpace0:5;
      uint64_t spib_cs_trigsrc_en:1;
      uint64_t reservedSpace1:7;
      uint64_t spib_trig_gate_en:1;
      uint64_t reservedSpace2:7;
      uint64_t spib_int_trig_polarity:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SPIB_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t epwm_config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_EPWM_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gio_config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GIO_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mcana_fe_select:3;
      uint64_t reservedSpace0:13;
      uint64_t mcanb_fe_select:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCAN_FE_SELECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mcan_int_clr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANA_INT_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mcan_int_mask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANA_INT_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mcan_int_status:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCANA_INT_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ccca_errot_status:8;
      uint64_t reservedSpace0:8;
      uint64_t cccb_errot_status:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCC_ERR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ccca_clk0_sel:3;
      uint64_t ccca_clk1_sel:3;
      uint64_t ccca_disable_clocks:1;
      uint64_t ccca_enable_module:1;
      uint64_t ccca_single_shot_mode:1;
      uint64_t Reserved:7;
      uint64_t ccca_margin_count:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCA_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ccca_cfg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCA_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ccca_cfg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCA_CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ccca_cfg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCA_CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ccca_cfg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCA_CNTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCB_clk0_sel:3;
      uint64_t CCCB_clk1_sel:3;
      uint64_t cccb_disable_clocks:1;
      uint64_t cccb_enable_module:1;
      uint64_t cccb_single_shot_mode:1;
      uint64_t Reserved:7;
      uint64_t cccb_margin_count:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCB_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cccb_cfg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCB_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cccb_cfg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCB_CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cccb_cfg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCB_CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cccb_cfg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCB_CNTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t enable_cccb_err_rstn:1;
      uint64_t reservedSpace1:3;
      uint64_t enable_cccb_err_nmi:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCC_DCC_COMMON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t teinit:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_GLOBAL_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cpu0_ahb_init:3;
      uint64_t reservedSpace0:13;
      uint64_t cpu1_ahb_init:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_AHB_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ahb_base:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5A_AHB_BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ahb_size:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5A_AHB_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ahb_base:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5B_AHB_BASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ahb_size:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5B_AHB_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cpu0_tcm:3;
      uint64_t reservedSpace0:13;
      uint64_t cpu1_tcm:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_TCM_EXT_ERR_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cpu0_tcm:3;
      uint64_t reservedSpace0:13;
      uint64_t cpu1_tcm:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_TCM_ERR_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tcma_cpu0:3;
      uint64_t reservedSpace0:1;
      uint64_t tcmb_cpu0:3;
      uint64_t reservedSpace1:1;
      uint64_t lockzram_cpu0:3;
      uint64_t reservedSpace2:1;
      uint64_t tcma_cpu1:3;
      uint64_t reservedSpace3:1;
      uint64_t tcmb_cpu1:3;
      uint64_t reservedSpace4:1;
      uint64_t lockzram_cpu1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_INIT_TCM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cpu0_tcma_wrenz_en:3;
      uint64_t reservedSpace0:1;
      uint64_t cpu0_tcmb0_wrenz_en:3;
      uint64_t reservedSpace1:1;
      uint64_t cpu0_tcmb1_wrenz_en:3;
      uint64_t reservedSpace2:1;
      uint64_t cpu1_tcma_wrenz_en:3;
      uint64_t reservedSpace3:1;
      uint64_t cpu1_tcmb0_wrenz_en:3;
      uint64_t reservedSpace4:1;
      uint64_t cpu1_tcmb1_wrenz_en:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_TCM_ECC_WRENZ_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t esm_gating:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESM_GATING0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t esm_gating:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESM_GATING1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t esm_gating:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESM_GATING2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t esm_gating:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESM_GATING3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t esm_gating:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESM_GATING4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t esm_gating:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESM_GATING5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t esm_gating:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESM_GATING6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t esm_gating:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESM_GATING7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_PARITY_ATCM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_PARITY_ATCM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_PARITY_B0TCM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_PARITY_B0TCM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_PARITY_B1TCM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_PARITY_B1TCM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t atcm0_erraddr_clr:3;
      uint64_t reservedSpace0:1;
      uint64_t atcm1_erraddr_clr:3;
      uint64_t reservedSpace1:1;
      uint64_t b0tcm0_erraddr_clr:3;
      uint64_t reservedSpace2:1;
      uint64_t b0cm1_erraddr_clr:3;
      uint64_t reservedSpace3:1;
      uint64_t b1tcm0_erraddr_clr:3;
      uint64_t reservedSpace4:1;
      uint64_t b1tcm1_erraddr_clr:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCM_PARITY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t atcm0:3;
      uint64_t reservedSpace0:1;
      uint64_t atcm1:3;
      uint64_t reservedSpace1:1;
      uint64_t b0tcm0:3;
      uint64_t reservedSpace2:1;
      uint64_t b0tcm1:3;
      uint64_t reservedSpace3:1;
      uint64_t b1tcm0:3;
      uint64_t reservedSpace4:1;
      uint64_t b1tcm1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCM_PARITY_ERRFRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cs_deact:3;
      uint64_t reservedSpace0:5;
      uint64_t cs_pol:3;
      uint64_t reservedSpace1:5;
      uint64_t miso_oen_by_cs:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIA_IO_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cs_deact:3;
      uint64_t reservedSpace0:5;
      uint64_t cs_pol:3;
      uint64_t reservedSpace1:5;
      uint64_t miso_oen_by_cs:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIB_IO_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t host_irq:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_HOST_IRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tptc_a0:2;
      uint64_t reservedSpace0:2;
      uint64_t tptc_a1:2;
      uint64_t reservedSpace1:2;
      uint64_t tptc_b0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC_DBS_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_parity_en:1;
      uint64_t reservedSpace0:3;
      uint64_t tpcc_a_parity_testen:1;
      uint64_t reservedSpace1:3;
      uint64_t tpcc_b_parity_en:1;
      uint64_t reservedSpace2:3;
      uint64_t tpcc_b_parity_testen:1;
      uint64_t reservedSpace3:3;
      uint64_t tpcc_a_parity_err_clr:1;
      uint64_t reservedSpace4:3;
      uint64_t tpcc_b_parity_err_clr:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPCC_PARITY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_parity_addr:8;
      uint64_t reservedSpace0:8;
      uint64_t tpcc_b_parity_addr:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPCC_PARITY_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ccca:3;
      uint64_t reservedSpace0:1;
      uint64_t cccb:3;
      uint64_t reservedSpace1:1;
      uint64_t dcca:3;
      uint64_t reservedSpace2:1;
      uint64_t dccb:3;
      uint64_t reservedSpace3:1;
      uint64_t dccc:3;
      uint64_t reservedSpace4:1;
      uint64_t dccd:3;
      uint64_t reservedSpace5:1;
      uint64_t cpsw:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DBG_ACK_CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dcan:3;
      uint64_t reservedSpace0:1;
      uint64_t rti:3;
      uint64_t reservedSpace1:1;
      uint64_t wdt:3;
      uint64_t reservedSpace2:1;
      uint64_t mcrc:3;
      uint64_t reservedSpace3:1;
      uint64_t i2c:3;
      uint64_t reservedSpace4:1;
      uint64_t scia:3;
      uint64_t reservedSpace5:1;
      uint64_t scib:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DBG_ACK_CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t port1_mode_sel:3;
      uint64_t reservedSpace0:5;
      uint64_t rmii_ref_clk_oe_n:1;
      uint64_t reservedSpace1:7;
      uint64_t rgmii1_id_mode:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSW_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_errint:1;
      uint64_t tpcc_a_mpint:1;
      uint64_t tptc_a0_err:1;
      uint64_t tptc_a1_err:1;
      uint64_t tpcc_a_par_err:1;
      uint64_t reservedSpace0:11;
      uint64_t tpcc_a_write_access_error:1;
      uint64_t tptc_a0_write_access_error:1;
      uint64_t tptc_a1_write_access_error:1;
      uint64_t reservedSpace1:5;
      uint64_t tpcc_a_read_access_error:1;
      uint64_t tptc_a0_read_access_error:1;
      uint64_t tptc_a1_read_access_error:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_A_ERRAGG_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_errint:1;
      uint64_t tpcc_a_mpint:1;
      uint64_t tptc_a0_err:1;
      uint64_t tptc_a1_err:1;
      uint64_t tpcc_a_par_err:1;
      uint64_t reservedSpace0:11;
      uint64_t tpcc_a_write_access_error:1;
      uint64_t tptc_a0_write_access_error:1;
      uint64_t tptc_a1_write_access_error:1;
      uint64_t reservedSpace1:5;
      uint64_t tpcc_a_read_access_error:1;
      uint64_t tptc_a0_read_access_error:1;
      uint64_t tptc_a1_read_access_error:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_A_ERRAGG_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_errint:1;
      uint64_t tpcc_a_mpint:1;
      uint64_t tptc_a0_err:1;
      uint64_t tptc_a1_err:1;
      uint64_t tpcc_a_par_err:1;
      uint64_t reservedSpace0:11;
      uint64_t tpcc_a_write_access_error:1;
      uint64_t tptc_a0_write_access_error:1;
      uint64_t tptc_a1_write_access_error:1;
      uint64_t reservedSpace1:5;
      uint64_t tpcc_a_read_access_error:1;
      uint64_t tptc_a0_read_access_error:1;
      uint64_t tptc_a1_read_access_error:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_A_ERRAGG_STATUS_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_intg:1;
      uint64_t tpcc_a_int0:1;
      uint64_t tpcc_a_int1:1;
      uint64_t tpcc_a_int2:1;
      uint64_t tpcc_a_int3:1;
      uint64_t tpcc_a_int4:1;
      uint64_t tpcc_a_int5:1;
      uint64_t tpcc_a_int6:1;
      uint64_t tpcc_a_int7:1;
      uint64_t reservedSpace0:7;
      uint64_t tptc_a0:1;
      uint64_t tptc_a1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_A_INTAGG_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_intg:1;
      uint64_t tpcc_a_int0:1;
      uint64_t tpcc_a_int1:1;
      uint64_t tpcc_a_int2:1;
      uint64_t tpcc_a_int3:1;
      uint64_t tpcc_a_int4:1;
      uint64_t tpcc_a_int5:1;
      uint64_t tpcc_a_int6:1;
      uint64_t tpcc_a_int7:1;
      uint64_t reservedSpace0:7;
      uint64_t tptc_a0:1;
      uint64_t tptc_a1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_A_INTAGG_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_a_intg:1;
      uint64_t tpcc_a_int0:1;
      uint64_t tpcc_a_int1:1;
      uint64_t tpcc_a_int2:1;
      uint64_t tpcc_a_int3:1;
      uint64_t tpcc_a_int4:1;
      uint64_t tpcc_a_int5:1;
      uint64_t tpcc_a_int6:1;
      uint64_t tpcc_a_int7:1;
      uint64_t reservedSpace0:7;
      uint64_t tptc_a0:1;
      uint64_t tptc_a1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_A_INTAGG_STATUS_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_b_errint:1;
      uint64_t tpcc_b_mpint:1;
      uint64_t tptc_b0_err:1;
      uint64_t reservedSpace0:1;
      uint64_t tpcc_b_par_err:1;
      uint64_t reservedSpace1:11;
      uint64_t tpcc_b_write_access_error:1;
      uint64_t tptc_b0_write_access_error:1;
      uint64_t reservedSpace2:6;
      uint64_t tpcc_b_read_access_error:1;
      uint64_t tptc_b0_read_access_error:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_B_ERRAGG_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_b_errint:1;
      uint64_t tpcc_b_mpint:1;
      uint64_t tptc_b0_err:1;
      uint64_t reservedSpace0:1;
      uint64_t tpcc_b_par_err:1;
      uint64_t reservedSpace1:11;
      uint64_t tpcc_b_write_access_error:1;
      uint64_t tptc_b0_write_access_error:1;
      uint64_t reservedSpace2:6;
      uint64_t tpcc_b_read_access_error:1;
      uint64_t tptc_b0_read_access_error:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_B_ERRAGG_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_b_errint:1;
      uint64_t tpcc_b_mpint:1;
      uint64_t tptc_b0_err:1;
      uint64_t reservedSpace0:1;
      uint64_t tpcc_b_par_err:1;
      uint64_t reservedSpace1:11;
      uint64_t tpcc_b_write_access_error:1;
      uint64_t tptc_b0_write_access_error:1;
      uint64_t reservedSpace2:6;
      uint64_t tpcc_b_read_access_error:1;
      uint64_t tptc_b0_read_access_error:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_B_ERRAGG_STATUS_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_b_intg:1;
      uint64_t tpcc_b_int0:1;
      uint64_t tpcc_b_int1:1;
      uint64_t tpcc_b_int2:1;
      uint64_t tpcc_b_int3:1;
      uint64_t tpcc_b_int4:1;
      uint64_t tpcc_b_int5:1;
      uint64_t tpcc_b_int6:1;
      uint64_t tpcc_b_int7:1;
      uint64_t reservedSpace0:7;
      uint64_t tptc_b0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_B_INTAGG_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_b_intg:1;
      uint64_t tpcc_b_int0:1;
      uint64_t tpcc_b_int1:1;
      uint64_t tpcc_b_int2:1;
      uint64_t tpcc_b_int3:1;
      uint64_t tpcc_b_int4:1;
      uint64_t tpcc_b_int5:1;
      uint64_t tpcc_b_int6:1;
      uint64_t tpcc_b_int7:1;
      uint64_t reservedSpace0:7;
      uint64_t tptc_b0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_B_INTAGG_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tpcc_b_intg:1;
      uint64_t tpcc_b_int0:1;
      uint64_t tpcc_b_int1:1;
      uint64_t tpcc_b_int2:1;
      uint64_t tpcc_b_int3:1;
      uint64_t tpcc_b_int4:1;
      uint64_t tpcc_b_int5:1;
      uint64_t tpcc_b_int6:1;
      uint64_t tpcc_b_int7:1;
      uint64_t reservedSpace0:7;
      uint64_t tptc_b0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPCC_B_INTAGG_STATUS_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_RD_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_RD_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_RD_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_RD_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_RD_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_RD_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_RD_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_RD_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_RD_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_RD_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_RD_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_RD_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_WR_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_WR_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_WR_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_WR_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_WR_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_WR_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_WR_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_WR_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_WR_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_WR_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_WR_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_WR_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_WR_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_WR_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_S_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_S_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_S_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_S_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_S_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_S_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_S_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AXI_S_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_S_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_S_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_S_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_S_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_S_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_S_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_S_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AXI_S_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_RD_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_RD_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_RD_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_RD_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_RD_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_RD_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_RD_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_RD_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_RD_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_RD_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_RD_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_RD_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_RD_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_RD_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_RD_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_RD_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_RD_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_RD_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_WR_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_WR_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_WR_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_WR_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_WR_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_WR_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A0_WR_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_WR_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_WR_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_WR_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_WR_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_WR_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_WR_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_A1_WR_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_WR_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_WR_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_WR_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_WR_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_WR_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_WR_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_B0_WR_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_RD_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_RD_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_RD_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_RD_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_RD_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_RD_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_RD_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_RD_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_RD_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_RD_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_RD_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_RD_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_WR_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_WR_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_WR_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_WR_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_WR_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_WR_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A0_WR_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_WR_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_WR_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_WR_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_WR_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_WR_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_WR_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_TPTC_A1_WR_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DTHE_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DTHE_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DTHE_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DTHE_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DTHE_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DTHE_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DTHE_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_DTHE_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CPSW_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCRC_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCRC_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCRC_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCRC_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCRC_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCRC_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCRC_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MCRC_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR2_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR2_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR2_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR2_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR2_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR2_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR2_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PCR2_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_M_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_M_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_M_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_M_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_M_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_M_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_M_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_M_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_S_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_S_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_S_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_S_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_S_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_S_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_S_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSM_S_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAP_R232_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAP_R232_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAP_R232_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAP_R232_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAP_R232_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAP_R232_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAP_R232_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAP_R232_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_A_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_A_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_A_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_A_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_A_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_A_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_A_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_A_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_B_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_B_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_B_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_B_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_B_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_B_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_B_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_L2_B_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MBOX_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MBOX_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MBOX_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MBOX_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MBOX_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MBOX_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MBOX_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_MBOX_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SWBUF_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SWBUF_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SWBUF_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SWBUF_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SWBUF_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SWBUF_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SWBUF_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SWBUF_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_GPADC_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cr5a_rd:1;
      uint64_t cr5b_rd:1;
      uint64_t cr5a_wr:1;
      uint64_t cr5b_wr:1;
      uint64_t cr5a_slv:1;
      uint64_t cr5b_slv:1;
      uint64_t dap_rs232:1;
      uint64_t hsm:1;
      uint64_t cpsw:1;
      uint64_t mss_tptc_A0_rd:1;
      uint64_t mss_tptc_A1_rd:1;
      uint64_t mss_tptc_B1_rd:1;
      uint64_t mss_tptc_A0_wr:1;
      uint64_t mss_tptc_A1_wr:1;
      uint64_t mss_tptc_B1_wr:1;
      uint64_t hsm_tptc_A0_rd:1;
      uint64_t hsm_tptc_A0_wr:1;
      uint64_t hsm_tptc_A1_rd:1;
      uint64_t hsm_tptc_A1_wr:1;
      uint64_t qspi:1;
      uint64_t mcrc:1;
      uint64_t per_pcr:1;
      uint64_t per_pcr2:1;
      uint64_t hsm_s:1;
      uint64_t dthe:1;
      uint64_t l2ram0:1;
      uint64_t l2ram1:1;
      uint64_t mss_mbox:1;
      uint64_t mss_swbuf:1;
      uint64_t gpadc:1;
      uint64_t mss_dmm:1;
      uint64_t mss_dmmslv:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BUS_SAFETY_SEC_ERR_STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t mss_to_mdo:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BUS_SAFETY_SEC_ERR_STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREVIOUS_NAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_SLV_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_SLV_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_SLV_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_SLV_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_SLV_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_SLV_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_SLV_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_SLV_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TO_MDO_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TO_MDO_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TO_MDO_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TO_MDO_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TO_MDO_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TO_MDO_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TO_MDO_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TO_MDO_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCRP_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCRP_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCRP_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCRP_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCRP_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCRP_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCRP_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SCRP_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AHB_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AHB_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AHB_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AHB_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AHB_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AHB_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AHB_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_AHB_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:3;
      uint64_t reservedSpace0:5;
      uint64_t err_clear:1;
      uint64_t reservedSpace1:7;
      uint64_t type:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AHB_BUS_SAFETY_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t global_main:1;
      uint64_t global_safe:1;
      uint64_t global_main_req:1;
      uint64_t global_safe_req:1;
      uint64_t sec:1;
      uint64_t ded:1;
      uint64_t reservedSpace0:2;
      uint64_t data:8;
      uint64_t main:8;
      uint64_t safe:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AHB_BUS_SAFETY_FI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t comp_err:8;
      uint64_t comp_check:8;
      uint64_t sec:8;
      uint64_t ded:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AHB_BUS_SAFETY_ERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t d0:8;
      uint64_t d1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AHB_BUS_SAFETY_ERR_STAT_DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AHB_BUS_SAFETY_ERR_STAT_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AHB_BUS_SAFETY_ERR_STAT_WRITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AHB_BUS_SAFETY_ERR_STAT_READ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_AHB_BUS_SAFETY_ERR_STAT_WRITERESP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dmm_pad_select:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMM_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t proc_0:1;
      uint64_t reservedSpace0:3;
      uint64_t proc_1:1;
      uint64_t reservedSpace1:3;
      uint64_t proc_2:1;
      uint64_t reservedSpace2:3;
      uint64_t proc_3:1;
      uint64_t reservedSpace3:3;
      uint64_t proc_4:1;
      uint64_t reservedSpace4:3;
      uint64_t proc_5:1;
      uint64_t reservedSpace5:3;
      uint64_t proc_6:1;
      uint64_t reservedSpace6:3;
      uint64_t proc_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_MBOX_WRITE_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t proc_0:1;
      uint64_t reservedSpace0:3;
      uint64_t proc_1:1;
      uint64_t reservedSpace1:3;
      uint64_t proc_2:1;
      uint64_t reservedSpace2:3;
      uint64_t proc_3:1;
      uint64_t reservedSpace3:3;
      uint64_t proc_4:1;
      uint64_t reservedSpace4:3;
      uint64_t proc_5:1;
      uint64_t reservedSpace5:3;
      uint64_t proc_6:1;
      uint64_t reservedSpace6:3;
      uint64_t proc_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_MBOX_READ_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t proc_0:1;
      uint64_t reservedSpace0:3;
      uint64_t proc_1:1;
      uint64_t reservedSpace1:3;
      uint64_t proc_2:1;
      uint64_t reservedSpace2:3;
      uint64_t proc_3:1;
      uint64_t reservedSpace3:3;
      uint64_t proc_4:1;
      uint64_t reservedSpace4:3;
      uint64_t proc_5:1;
      uint64_t reservedSpace5:3;
      uint64_t proc_6:1;
      uint64_t reservedSpace6:3;
      uint64_t proc_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5A_MBOX_READ_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t proc_0:1;
      uint64_t reservedSpace0:3;
      uint64_t proc_1:1;
      uint64_t reservedSpace1:3;
      uint64_t proc_2:1;
      uint64_t reservedSpace2:3;
      uint64_t proc_3:1;
      uint64_t reservedSpace3:3;
      uint64_t proc_4:1;
      uint64_t reservedSpace4:3;
      uint64_t proc_5:1;
      uint64_t reservedSpace5:3;
      uint64_t proc_6:1;
      uint64_t reservedSpace6:3;
      uint64_t proc_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_MBOX_WRITE_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t proc_0:1;
      uint64_t reservedSpace0:3;
      uint64_t proc_1:1;
      uint64_t reservedSpace1:3;
      uint64_t proc_2:1;
      uint64_t reservedSpace2:3;
      uint64_t proc_3:1;
      uint64_t reservedSpace3:3;
      uint64_t proc_4:1;
      uint64_t reservedSpace4:3;
      uint64_t proc_5:1;
      uint64_t reservedSpace5:3;
      uint64_t proc_6:1;
      uint64_t reservedSpace6:3;
      uint64_t proc_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_MBOX_READ_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t proc_0:1;
      uint64_t reservedSpace0:3;
      uint64_t proc_1:1;
      uint64_t reservedSpace1:3;
      uint64_t proc_2:1;
      uint64_t reservedSpace2:3;
      uint64_t proc_3:1;
      uint64_t reservedSpace3:3;
      uint64_t proc_4:1;
      uint64_t reservedSpace4:3;
      uint64_t proc_5:1;
      uint64_t reservedSpace5:3;
      uint64_t proc_6:1;
      uint64_t reservedSpace6:3;
      uint64_t proc_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5B_MBOX_READ_DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t pbist_st_key:4;
      uint64_t pbist_st_rst:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PBIST_KEY_RST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t pbist_reg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PBIST_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t pbist_reg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PBIST_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t pbist_reg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PBIST_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ext_clk:3;
      uint64_t reservedSpace0:5;
      uint64_t clk_loopback:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_QSPI_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cr5_wfi_overide:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_STC_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t trig8_sel:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CTI_TRIG_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t trig1:8;
      uint64_t trig2:8;
      uint64_t trig3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DBGSS_CTI_TRIG_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BOOT_INFO_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BOOT_INFO_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BOOT_INFO_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BOOT_INFO_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BOOT_INFO_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BOOT_INFO_REG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BOOT_INFO_REG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t config:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_BOOT_INFO_REG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tptc_A0:1;
      uint64_t tptc_A1:1;
      uint64_t tptc_B0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_ECCAGGR_CLK_CNTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mss_ctrl_rd:1;
      uint64_t mss_ctrl_wr:1;
      uint64_t mss_rcm_rd:1;
      uint64_t mss_rcm_wr:1;
      uint64_t top_ctrl_rd:1;
      uint64_t top_ctrl_wr:1;
      uint64_t top_rcm_rd:1;
      uint64_t top_rcm_wr:1;
      uint64_t top_aurora_rd:1;
      uint64_t top_aurora_wr:1;
      uint64_t hsm_soc_ctrl_rd:1;
      uint64_t hsm_soc_ctrl_wr:1;
      uint64_t hsm_ctrl_rd:1;
      uint64_t hsm_ctrl_wr:1;
      uint64_t dss_ctrl_rd:1;
      uint64_t dss_ctrl_wr:1;
      uint64_t dss_rcm_rd:1;
      uint64_t dss_rcm_wr:1;
      uint64_t dss_cm4_ctrl_rd:1;
      uint64_t dss_cm4_ctrl_wr:1;
      uint64_t hwa_cfg_rd:1;
      uint64_t hwa_cfg_wr:1;
      uint64_t rcss_ctrl_rd:1;
      uint64_t rcss_ctrl_wr:1;
      uint64_t rcss_rcm_rd:1;
      uint64_t rcss_rcm_wr:1;
      uint64_t top_mdo_rd:1;
      uint64_t top_mdo_wr:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PERIPH_ERRAGG_MASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mss_ctrl_rd:1;
      uint64_t mss_ctrl_wr:1;
      uint64_t mss_rcm_rd:1;
      uint64_t mss_rcm_wr:1;
      uint64_t top_ctrl_rd:1;
      uint64_t top_ctrl_wr:1;
      uint64_t top_rcm_rd:1;
      uint64_t top_rcm_wr:1;
      uint64_t top_aurora_rd:1;
      uint64_t top_aurora_wr:1;
      uint64_t hsm_soc_ctrl_rd:1;
      uint64_t hsm_soc_ctrl_wr:1;
      uint64_t hsm_ctrl_rd:1;
      uint64_t hsm_ctrl_wr:1;
      uint64_t dss_ctrl_rd:1;
      uint64_t dss_ctrl_wr:1;
      uint64_t dss_rcm_rd:1;
      uint64_t dss_rcm_wr:1;
      uint64_t dss_cm4_ctrl_rd:1;
      uint64_t dss_cm4_ctrl_wr:1;
      uint64_t hwa_cfg_rd:1;
      uint64_t hwa_cfg_wr:1;
      uint64_t rcss_ctrl_rd:1;
      uint64_t rcss_ctrl_wr:1;
      uint64_t rcss_rcm_rd:1;
      uint64_t rcss_rcm_wr:1;
      uint64_t top_mdo_rd:1;
      uint64_t top_mdo_wr:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PERIPH_ERRAGG_STATUS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mss_ctrl_rd:1;
      uint64_t mss_ctrl_wr:1;
      uint64_t mss_rcm_rd:1;
      uint64_t mss_rcm_wr:1;
      uint64_t top_ctrl_rd:1;
      uint64_t top_ctrl_wr:1;
      uint64_t top_rcm_rd:1;
      uint64_t top_rcm_wr:1;
      uint64_t top_aurora_rd:1;
      uint64_t top_aurora_wr:1;
      uint64_t hsm_soc_ctrl_rd:1;
      uint64_t hsm_soc_ctrl_wr:1;
      uint64_t hsm_ctrl_rd:1;
      uint64_t hsm_ctrl_wr:1;
      uint64_t dss_ctrl_rd:1;
      uint64_t dss_ctrl_wr:1;
      uint64_t dss_rcm_rd:1;
      uint64_t dss_rcm_wr:1;
      uint64_t dss_cm4_ctrl_rd:1;
      uint64_t dss_cm4_ctrl_wr:1;
      uint64_t hwa_cfg_rd:1;
      uint64_t hwa_cfg_wr:1;
      uint64_t rcss_ctrl_rd:1;
      uint64_t rcss_ctrl_wr:1;
      uint64_t rcss_rcm_rd:1;
      uint64_t rcss_rcm_wr:1;
      uint64_t top_mdo_rd:1;
      uint64_t top_mdo_wr:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PERIPH_ERRAGG_STATUS_RAW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mpu_rd_mss_l2_banka:1;
      uint64_t mpu_rd_mss_l2_bankb:1;
      uint64_t mpu_rd_hsm_dthe:1;
      uint64_t mpu_rd_mss_mbox:1;
      uint64_t mpu_rd_mss_pcra:1;
      uint64_t mpu_rd_mss_qspi:1;
      uint64_t mpu_rd_mss_cr5a_axis:1;
      uint64_t mpu_rd_mss_cr5b_axis:1;
      uint64_t mpu_rd_dss_l3_banka:1;
      uint64_t mpu_rd_dss_l3_bankb:1;
      uint64_t mpu_rd_dss_l3_bankc:1;
      uint64_t mpu_rd_dss_l3_bankd:1;
      uint64_t mpu_rd_dss_hwa_dma0:1;
      uint64_t mpu_rd_dss_hwa_dma1:1;
      uint64_t mpu_rd_dss_hwa_proc:1;
      uint64_t mpu_rd_dss_mbox:1;
      uint64_t mpu_rd_hsm:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PERIPH_ERRAGG_MASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mpu_rd_mss_l2_banka:1;
      uint64_t mpu_rd_mss_l2_bankb:1;
      uint64_t mpu_rd_hsm_dthe:1;
      uint64_t mpu_rd_mss_mbox:1;
      uint64_t mpu_rd_mss_pcra:1;
      uint64_t mpu_rd_mss_qspi:1;
      uint64_t mpu_rd_mss_cr5a_axis:1;
      uint64_t mpu_rd_mss_cr5b_axis:1;
      uint64_t mpu_rd_dss_l3_banka:1;
      uint64_t mpu_rd_dss_l3_bankb:1;
      uint64_t mpu_rd_dss_l3_bankc:1;
      uint64_t mpu_rd_dss_l3_bankd:1;
      uint64_t mpu_rd_dss_hwa_dma0:1;
      uint64_t mpu_rd_dss_hwa_dma1:1;
      uint64_t mpu_rd_dss_hwa_proc:1;
      uint64_t mpu_rd_dss_mbox:1;
      uint64_t mpu_rd_hsm:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PERIPH_ERRAGG_STATUS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mpu_rd_mss_l2_banka:1;
      uint64_t mpu_rd_mss_l2_bankb:1;
      uint64_t mpu_rd_hsm_dthe:1;
      uint64_t mpu_rd_mss_mbox:1;
      uint64_t mpu_rd_mss_pcra:1;
      uint64_t mpu_rd_mss_qspi:1;
      uint64_t mpu_rd_mss_cr5a_axis:1;
      uint64_t mpu_rd_mss_cr5b_axis:1;
      uint64_t mpu_rd_dss_l3_banka:1;
      uint64_t mpu_rd_dss_l3_bankb:1;
      uint64_t mpu_rd_dss_l3_bankc:1;
      uint64_t mpu_rd_dss_l3_bankd:1;
      uint64_t mpu_rd_dss_hwa_dma0:1;
      uint64_t mpu_rd_dss_hwa_dma1:1;
      uint64_t mpu_rd_dss_hwa_proc:1;
      uint64_t mpu_rd_dss_mbox:1;
      uint64_t mpu_rd_hsm:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_PERIPH_ERRAGG_STATUS_RAW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig0:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel0:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig1:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel1:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig2:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel2:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig3:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig4:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel4:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig5:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel5:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig6:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel6:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig7:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig8:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel8:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig9:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel9:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig10:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel10:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig11:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig12:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel12:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig13:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel13:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig14:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel14:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig15:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig16:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel16:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig17:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel17:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig18:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel18:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig19:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT4_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig20:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel20:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig21:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel21:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig22:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel22:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig23:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT5_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig24:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel24:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig25:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel25:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig26:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel26:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig27:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT6_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig28:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel28:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig29:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel29:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig30:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel30:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig31:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT7_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig32:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel32:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig33:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel33:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig34:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel34:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig35:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel35:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT8_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig36:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel36:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig37:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel37:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig38:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel38:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig39:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel39:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT9_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig40:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel40:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig41:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel41:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig42:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel42:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig43:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel43:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT10_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig44:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel44:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig45:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel45:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig46:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel46:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig47:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT11_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig48:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel48:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig49:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel49:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig50:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel50:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig51:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel51:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT12_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig52:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel52:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig53:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel53:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig54:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel54:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig55:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel55:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT13_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig56:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel56:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig57:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel57:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig58:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel58:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig59:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel59:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT14_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t event_trig60:1;
      uint64_t reservedSpace0:3;
      uint64_t event_sel60:1;
      uint64_t reservedSpace1:3;
      uint64_t event_trig61:1;
      uint64_t reservedSpace2:3;
      uint64_t event_sel61:1;
      uint64_t reservedSpace3:3;
      uint64_t event_trig62:1;
      uint64_t reservedSpace4:3;
      uint64_t event_sel62:1;
      uint64_t reservedSpace5:3;
      uint64_t event_trig63:1;
      uint64_t reservedSpace6:3;
      uint64_t event_sel63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_DMM_EVENT15_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tptc_a0_size:6;
      uint64_t reservedSpace0:2;
      uint64_t tptc_a1_size:6;
      uint64_t reservedSpace1:2;
      uint64_t tptc_b0_size:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_BOUNDARY_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t tptc_a0_disable:1;
      uint64_t reservedSpace0:7;
      uint64_t tptc_a1_disable:1;
      uint64_t reservedSpace1:7;
      uint64_t tptc_b0_disable:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_TPTC_XID_REORDER_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gpadc_sw_trig:1;
      uint64_t reservedSpace0:7;
      uint64_t gpadc_trigin_sel:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPADC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t fe1_sel:1;
      uint64_t reservedSpace0:7;
      uint64_t fe2_sel:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_Sync_FE_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSETB_FLUSHIN:1;
      uint64_t reservedSpace0:7;
      uint64_t CSETB_FLUSHINACK:1;
      uint64_t CSETB_ACQ_COMPLETE:1;
      uint64_t CSETB_FULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUGSS_CSETB_FLUSH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t inv_ctrl:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANALOG_WU_STATUS_REG_POLARITY_INV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t inv_ctrl:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANALOG_CLK_STATUS_REG_POLARITY_INV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANALOG_WU_STATUS_REG_GRP1_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANALOG_CLK_STATUS_REG_GRP1_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANALOG_WU_STATUS_REG_GRP2_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANALOG_CLK_STATUS_REG_GRP2_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mask:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NERROR_MASK;

  uint8_t res0[288];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t lock_step:3;
      uint64_t reservedSpace0:5;
      uint64_t lock_step_switch_wait:3;
      uint64_t reservedSpace1:5;
      uint64_t reset_fsm_trigger:3;
      uint64_t reservedSpace2:5;
      uint64_t rom_wait_state:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t memswap:3;
      uint64_t reservedSpace0:5;
      uint64_t memswap_wait:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_ROM_ECLIPSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t halt:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_COREA_HALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t halt:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_COREB_HALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t memswap:1;
      uint64_t reservedSpace0:7;
      uint64_t lock_step:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5_STATUS_REG;

  uint8_t res1[1980];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_wph:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_WPH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rec0:1;
      uint64_t hw_spare_rec1:1;
      uint64_t hw_spare_rec2:1;
      uint64_t hw_spare_rec3:1;
      uint64_t hw_spare_rec4:1;
      uint64_t hw_spare_rec5:1;
      uint64_t hw_spare_rec6:1;
      uint64_t hw_spare_rec7:1;
      uint64_t hw_spare_rec8:1;
      uint64_t hw_spare_rec9:1;
      uint64_t hw_spare_rec10:1;
      uint64_t hw_spare_rec11:1;
      uint64_t hw_spare_rec12:1;
      uint64_t hw_spare_rec13:1;
      uint64_t hw_spare_rec14:1;
      uint64_t hw_spare_rec15:1;
      uint64_t hw_spare_rec16:1;
      uint64_t hw_spare_rec17:1;
      uint64_t hw_spare_rec18:1;
      uint64_t hw_spare_rec19:1;
      uint64_t hw_spare_rec20:1;
      uint64_t hw_spare_rec21:1;
      uint64_t hw_spare_rec22:1;
      uint64_t hw_spare_rec23:1;
      uint64_t hw_spare_rec24:1;
      uint64_t hw_spare_rec25:1;
      uint64_t hw_spare_rec26:1;
      uint64_t hw_spare_rec27:1;
      uint64_t hw_spare_rec28:1;
      uint64_t hw_spare_rec29:1;
      uint64_t hw_spare_rec30:1;
      uint64_t hw_spare_rec31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REC;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_raw_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enabled_status_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eoi;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_address;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b6_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_type_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
      uint64_t b19_8:12;
      uint64_t b31_20:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_attr_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_clear;

};

#define MSS_CTRL (*(volatile struct MSS_CTRL_tag *) 0x2120000)

struct MSS_TOPRCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PREVIOUS_NAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSI_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSIRX_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCLKOUT_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMICCLKOUT_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBSCLKOUT_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRCCLKOUT_CLK_SRC_SEL;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdiv:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSI_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdiv:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSIRX_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdiv:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCLKOUT_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdiv:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMICCLKOUT_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdiv:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBSCLKOUT_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdiv:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRCCLKOUT_DIV_VAL;

  uint8_t res1[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSI_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSIRX_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCLKOUT_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMICCLKOUT_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBSCLKOUT_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRCCLKOUT_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSS_CLK_GATE;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSI_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSIRX_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCLKOUT_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMICCLKOUT_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBSCLKOUT_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRCCLKOUT_CLK_STATUS;

  uint8_t res3[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t pad_bypass:3;
      uint64_t reservedSpace0:5;
      uint64_t sw_rst:3;
      uint64_t reservedSpace1:5;
      uint64_t wdog_rst_en:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARM_RESET_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cause:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RST_CAUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clear:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RST_CAUSE_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSS_RST_CTRL;

  uint8_t res4[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t bitinterval:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RS232_BITINTERVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ctrl:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVDS_PAD_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ctlr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVDS_PAD_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFT_DMLED_EXEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFT_DMLED_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dcca_en:3;
      uint64_t reservedSpace0:1;
      uint64_t ccca_en:3;
      uint64_t reservedSpace1:1;
      uint64_t force_rcclk_en:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIMP_MODE_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t dcdc_clk_en:1;
      uint64_t dither_en:1;
      uint64_t freq_acc_mode:1;
      uint64_t reservedSpace0:1;
      uint64_t reset_assert:3;
      uint64_t reservedSpace1:1;
      uint64_t min_freq_thr:8;
      uint64_t max_freq_thr:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMICCLKOUT_DCDC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t slope_val:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMICCLKOUT_DCDC_SLOPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t stoposc:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSC32K_CTRL;

  uint8_t res5[472];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFMODE:1;
      uint64_t ISOSCAN:1;
      uint64_t ISORET:1;
      uint64_t RET:1;
      uint64_t PGOODIN:1;
      uint64_t PONIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_PWRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TINTZ:1;
      uint64_t SSCTYPE:1;
      uint64_t reservedSpace0:6;
      uint64_t RELAXED_LOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SELFREQDCO:3;
      uint64_t reservedSpace2:1;
      uint64_t STOPMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t M2PWDNZ:1;
      uint64_t CLKDCOLDOPWDNZ:1;
      uint64_t ULOWCLKEN:1;
      uint64_t CLKOUTLDOEN:1;
      uint64_t CLKOUTEN:1;
      uint64_t STBYRET:1;
      uint64_t BYPASSACKZ:1;
      uint64_t IDLE:1;
      uint64_t NWELLTRIM:5;
      uint64_t CLKDCOLDOEN:1;
      uint64_t ENSSC:1;
      uint64_t CYCLESLIPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_CLKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_TENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENABLEDIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_TENABLEDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t N:8;
      uint64_t reservedSpace0:8;
      uint64_t M2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_M2NDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M:12;
      uint64_t reservedSpace0:4;
      uint64_t N2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_MN2DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRACTIONALM:18;
      uint64_t reservedSpace0:6;
      uint64_t REGSD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_FRACDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BW_INCR_DECRZ:1;
      uint64_t BWCONTROL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_BWCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DeltaMStepFraction:18;
      uint64_t DeltaMStepInteger:3;
      uint64_t ModFreqDividerMantissa:7;
      uint64_t ModFreqDividerExponent:3;
      uint64_t DOWNSPREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_FRACCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t HIGHJITTER:1;
      uint64_t SSCACK:1;
      uint64_t M2CHANGEACK:1;
      uint64_t LOCK2:1;
      uint64_t CLKOUTENACK:1;
      uint64_t LOSSREF:1;
      uint64_t STBYRETACK:1;
      uint64_t BYPASSACK:1;
      uint64_t FREQLOCK:1;
      uint64_t PHASELOCK:1;
      uint64_t CLKDCOLDOACK:1;
      uint64_t reservedSpace0:15;
      uint64_t RECAL_OPPIN:1;
      uint64_t RECAL_BSTATUS3:1;
      uint64_t LDOPWDN:1;
      uint64_t PGOODOUT:1;
      uint64_t PONOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t LDOPWDN:1;
      uint64_t TENABLEDIV:1;
      uint64_t reservedSpace0:13;
      uint64_t BYPASSACKZ:1;
      uint64_t LDOPWDNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_HSDIVIDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_HSDIVIDER_CLKOUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_HSDIVIDER_CLKOUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_HSDIVIDER_CLKOUT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_HSDIVIDER_CLKOUT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clksrcsel:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5_CLK_SRC_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdiv:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkdiv:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_CLK_DIV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t gated:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_CLK_GATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t clkinuse:8;
      uint64_t currdivider:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_CR5_CLK_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_RSTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CORE_HSDIVIDER_RSTCTRL;

  uint8_t res6[928];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFMODE:1;
      uint64_t ISOSCAN:1;
      uint64_t ISORET:1;
      uint64_t RET:1;
      uint64_t PGOODIN:1;
      uint64_t PONIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_PWRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TINTZ:1;
      uint64_t SSCTYPE:1;
      uint64_t reservedSpace0:6;
      uint64_t RELAXED_LOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SELFREQDCO:3;
      uint64_t reservedSpace2:1;
      uint64_t STOPMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t M2PWDNZ:1;
      uint64_t CLKDCOLDOPWDNZ:1;
      uint64_t ULOWCLKEN:1;
      uint64_t CLKOUTLDOEN:1;
      uint64_t CLKOUTEN:1;
      uint64_t STBYRET:1;
      uint64_t BYPASSACKZ:1;
      uint64_t IDLE:1;
      uint64_t NWELLTRIM:5;
      uint64_t CLKDCOLDOEN:1;
      uint64_t ENSSC:1;
      uint64_t CYCLESLIPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_CLKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_TENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENABLEDIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_TENABLEDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t N:8;
      uint64_t reservedSpace0:8;
      uint64_t M2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_M2NDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M:12;
      uint64_t reservedSpace0:4;
      uint64_t N2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_MN2DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRACTIONALM:18;
      uint64_t reservedSpace0:6;
      uint64_t REGSD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_FRACDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BW_INCR_DECRZ:1;
      uint64_t BWCONTROL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_BWCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DeltaMStepFraction:18;
      uint64_t DeltaMStepInteger:3;
      uint64_t ModFreqDividerMantissa:7;
      uint64_t ModFreqDividerExponent:3;
      uint64_t DOWNSPREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_FRACCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t HIGHJITTER:1;
      uint64_t SSCACK:1;
      uint64_t M2CHANGEACK:1;
      uint64_t LOCK2:1;
      uint64_t CLKOUTENACK:1;
      uint64_t LOSSREF:1;
      uint64_t STBYRETACK:1;
      uint64_t BYPASSACK:1;
      uint64_t FREQLOCK:1;
      uint64_t PHASELOCK:1;
      uint64_t CLKDCOLDOACK:1;
      uint64_t reservedSpace0:15;
      uint64_t RECAL_OPPIN:1;
      uint64_t RECAL_BSTATUS3:1;
      uint64_t LDOPWDN:1;
      uint64_t PGOODOUT:1;
      uint64_t PONOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t LDOPWDN:1;
      uint64_t TENABLEDIV:1;
      uint64_t reservedSpace0:13;
      uint64_t BYPASSACKZ:1;
      uint64_t LDOPWDNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_HSDIVIDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_HSDIVIDER_CLKOUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_HSDIVIDER_CLKOUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_HSDIVIDER_CLKOUT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_HSDIVIDER_CLKOUT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFMODE:1;
      uint64_t ISOSCAN:1;
      uint64_t ISORET:1;
      uint64_t RET:1;
      uint64_t PGOODIN:1;
      uint64_t PONIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_PWRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TINTZ:1;
      uint64_t SSCTYPE:1;
      uint64_t reservedSpace0:6;
      uint64_t RELAXED_LOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t SELFREQDCO:3;
      uint64_t reservedSpace2:1;
      uint64_t STOPMODE:1;
      uint64_t reservedSpace3:1;
      uint64_t M2PWDNZ:1;
      uint64_t CLKDCOLDOPWDNZ:1;
      uint64_t ULOWCLKEN:1;
      uint64_t CLKOUTLDOEN:1;
      uint64_t CLKOUTEN:1;
      uint64_t STBYRET:1;
      uint64_t BYPASSACKZ:1;
      uint64_t IDLE:1;
      uint64_t NWELLTRIM:5;
      uint64_t CLKDCOLDOEN:1;
      uint64_t ENSSC:1;
      uint64_t CYCLESLIPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_CLKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_TENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENABLEDIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_TENABLEDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t N:8;
      uint64_t reservedSpace0:8;
      uint64_t M2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_M2NDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M:12;
      uint64_t reservedSpace0:4;
      uint64_t N2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_MN2DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRACTIONALM:18;
      uint64_t reservedSpace0:6;
      uint64_t REGSD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_FRACDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BW_INCR_DECRZ:1;
      uint64_t BWCONTROL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_BWCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DeltaMStepFraction:18;
      uint64_t DeltaMStepInteger:3;
      uint64_t ModFreqDividerMantissa:7;
      uint64_t ModFreqDividerExponent:3;
      uint64_t DOWNSPREAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_FRACCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t HIGHJITTER:1;
      uint64_t SSCACK:1;
      uint64_t M2CHANGEACK:1;
      uint64_t LOCK2:1;
      uint64_t CLKOUTENACK:1;
      uint64_t LOSSREF:1;
      uint64_t STBYRETACK:1;
      uint64_t BYPASSACK:1;
      uint64_t FREQLOCK:1;
      uint64_t PHASELOCK:1;
      uint64_t CLKDCOLDOACK:1;
      uint64_t reservedSpace0:15;
      uint64_t RECAL_OPPIN:1;
      uint64_t RECAL_BSTATUS3:1;
      uint64_t LDOPWDN:1;
      uint64_t PGOODOUT:1;
      uint64_t PONOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t LDOPWDN:1;
      uint64_t TENABLEDIV:1;
      uint64_t reservedSpace0:13;
      uint64_t BYPASSACKZ:1;
      uint64_t LDOPWDNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_HSDIVIDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_HSDIVIDER_CLKOUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_HSDIVIDER_CLKOUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_HSDIVIDER_CLKOUT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:5;
      uint64_t DIVCHACK:1;
      uint64_t reservedSpace0:2;
      uint64_t GATE_CTRL:1;
      uint64_t STATUS:1;
      uint64_t reservedSpace1:2;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_HSDIVIDER_CLKOUT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_RSTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_DSP_HSDIVIDER_RSTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_RSTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t assert:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_PER_HSDIVIDER_RSTCTRL;

  uint8_t res7[888];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRIM_BIAS_XO_SLICER:4;
      uint64_t XOSC_DRIVE_XO_SLICER:5;
      uint64_t FASTCHARGEZ_BIAS_XO_SLICER:1;
      uint64_t SLICER_HIPWR_XO_SLICER:1;
      uint64_t SLICER_DCCPL_XO_SLICER:1;
      uint64_t XTAL_DETECT_XO_SLICER:1;
      uint64_t RESERVED0:11;
      uint64_t OSC_CLKOUT_DRV:4;
      uint64_t OSC_CLKOUT_CLRZ_DIV:1;
      uint64_t OSC_CLKOUT_FREQ_SEL:2;
      uint64_t OSC_CLKOUT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_CLK_CTRL_REG1_XO_SLICER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE_BIAS_XO_SLICER:1;
      uint64_t ENABLE_SLICER_CLKP:1;
      uint64_t ENABLE_XOSC:1;
      uint64_t RESERVED0:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_CLK_CTRL_REG1_CLKTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED0:31;
      uint64_t CTRL_DC_BIST_BUFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_CLK_CTRL_REG2_CLKTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN_SLICER_LDO:1;
      uint64_t RESERVED0:6;
      uint64_t CLK_BIST_DISABLE_LDO:1;
      uint64_t RESERVED1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_CLK_CTRL_REG1_LDO_CLKTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDO_VOUT_CTRL:4;
      uint64_t ENZ_LOW_BW_CAP:1;
      uint64_t EN_TEST_MODE:1;
      uint64_t EN_SHRT_CKT:1;
      uint64_t EN_BYPASS:1;
      uint64_t LDO_BW_CTRL:3;
      uint64_t SCPRT_IBIAS_CTRL:1;
      uint64_t ENABLE_PMOS_PULLDOWN:1;
      uint64_t TLOAD_CTRL:3;
      uint64_t TESTMUX_CTRL:4;
      uint64_t BISTMUX_CTRL:4;
      uint64_t RESERVED0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_CLK_CTRL_REG2_LDO_CLKTOP;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLICER_LDO_SC_OUT:1;
      uint64_t RESERVED0:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_CLK_STATUS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFSYS_BGAP_EN_CTRL:1;
      uint64_t REFSYS_V2I_EN_CTRL:1;
      uint64_t REFSYS_CAP_SW_CTRLZ:1;
      uint64_t REFSYS_PRE_CHARGE:1;
      uint64_t SLOPE_TRIM_4_0:5;
      uint64_t MAG_TRIM_4_0:5;
      uint64_t IREF_TRIM_4_0:5;
      uint64_t BGAP_ISW:1;
      uint64_t V2I_STARTUP:1;
      uint64_t CLKTOP_IBIAS_EN:1;
      uint64_t LODIST_IBIAS_EN:1;
      uint64_t TX_TOP_IBIAS_EN:1;
      uint64_t REFSYS_V2I_BYPASS_EN:1;
      uint64_t IDIODE_EN:1;
      uint64_t RESERVED1:1;
      uint64_t FTRIM_3_0:4;
      uint64_t RESERVED2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_REFSYS_CTRL_REG_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREF_0P45V:1;
      uint64_t VREF_0P9V:1;
      uint64_t VBG_1P22V:1;
      uint64_t RESERVED2:1;
      uint64_t VBE_WEAK:1;
      uint64_t RESERVED3:1;
      uint64_t IBIASP_20U:1;
      uint64_t IBIASP_TS_6U:1;
      uint64_t RESERVED4:1;
      uint64_t IDIODEP_100U:1;
      uint64_t IREFP_10UA:1;
      uint64_t VSSA_REF:1;
      uint64_t I2V_SENSE:1;
      uint64_t BYPASS_MIRR_VPBIAS:1;
      uint64_t TX_IBIASP_20u:1;
      uint64_t LO_IBIASP_20u:1;
      uint64_t RESERVED1:15;
      uint64_t REFSYS_CTRL_8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_REFSYS_TMUX_CTRL_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDD_IR_DROP_COMP_SEL:2;
      uint64_t VDDS_3P3V_IR_DROP_COMP_SEL:2;
      uint64_t VDDA_OSC_IR_DROP_COMP_SEL:2;
      uint64_t VDD_SR_SEL:2;
      uint64_t VDD_UV_SELF_TEST_SEL:1;
      uint64_t VDD_OV_SELF_TEST_SEL:1;
      uint64_t VDDA_OSC_UV_SELF_TEST_SEL:1;
      uint64_t RESERVED0:1;
      uint64_t VDDS_3P3V_UV_SELF_TEST_SEL:1;
      uint64_t RESERVED1:1;
      uint64_t VDD_OV_IR_DROP_COMP_SEL:2;
      uint64_t VDD_OV_SR_SEL:2;
      uint64_t VIOIN_UV_RSET_EN:1;
      uint64_t VDDA_OSC_UV_RSET_EN:1;
      uint64_t VDD_UV_RSET_EN:1;
      uint64_t VDD_OV_RSET_EN:1;
      uint64_t REFSYS_SPARE_30_22:9;
      uint64_t ANALOGTEST_TMUX_ESD_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_REFSYS_SPARE_REG_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_CLK_EN:1;
      uint64_t INT_CLK_STOP:1;
      uint64_t INT_CLK_SW_SEL:1;
      uint64_t INT_CLK_TRIM_7_0:8;
      uint64_t INT_CLK_FREQ_SEL_3_0:4;
      uint64_t WU_CPU_CLK_CTRL:1;
      uint64_t XTAL_EN_OVERRIDE:1;
      uint64_t WU_UV_DET_CTRL:1;
      uint64_t WU_OV_DET_CTRL:1;
      uint64_t WU_XTAL_DLY_CTRL:1;
      uint64_t WU_SUPP_VMON_EN:1;
      uint64_t WU_VRAM_VMON_EN:1;
      uint64_t WU_SUPP_DET_CTRL:1;
      uint64_t WU_SPARE_IN:2;
      uint64_t WU_VDDS_3P3V_UV_VMON_EN:1;
      uint64_t WU_VDDA_OSC_UV_VMON_EN:1;
      uint64_t WU_VDD_UV_VMON_EN:1;
      uint64_t WU_VDD_OV_VMON_EN:1;
      uint64_t WU_SPARE_IN_2:2;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_WU_CTRL_REG_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCALED_VDDA_OSC_UV:1;
      uint64_t SCALED_VIO3318:1;
      uint64_t SCALED_VDDS18:1;
      uint64_t VFB_0P6V:1;
      uint64_t SCALED_VIOIN:1;
      uint64_t SCALED_VDDA_LVDS_1P8V:1;
      uint64_t VDD_SR_OV_VREF:1;
      uint64_t VREF_0P9V:1;
      uint64_t SCALED_VDDA18:1;
      uint64_t VIOIN_UV_VREF:1;
      uint64_t VDDA14_INT:1;
      uint64_t SCALED_VDDA_LVDS_1P8V_1P2:1;
      uint64_t VDDA14_2_INT:1;
      uint64_t VT_ANA_SIG:1;
      uint64_t VT_DIG_SIG_UV:1;
      uint64_t VT_DIG_SIG_OV:1;
      uint64_t VDD_SR_UV_VREF:1;
      uint64_t VDDA_OSC_UV_VREF:1;
      uint64_t VFB_0P85V:1;
      uint64_t SCALED_VDDA_OSC:1;
      uint64_t VDDSINT18:1;
      uint64_t RESERVED0:10;
      uint64_t WU_TMUX_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_WU_TMUX_CTRL_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_EN:1;
      uint64_t ADC_START_CONV:1;
      uint64_t ADC_RESET:1;
      uint64_t ADC_INP_BUF_EN:1;
      uint64_t ADC_REF_BUF_EN:1;
      uint64_t ADC_REF_SEL_2_0:3;
      uint64_t TS_DIFF_INP_BUF_EN:1;
      uint64_t TS_SE_INP_BUF_EN:1;
      uint64_t IFORCE_EXT_CTRL:1;
      uint64_t VREF_EXT_CTRL:1;
      uint64_t VIN_EXT_CTRL:1;
      uint64_t ANA_TMUX_BUF_BYPASS:1;
      uint64_t ANA_TMUX_BUF_EN:1;
      uint64_t RTRIM_TW_4_0:5;
      uint64_t Reserved1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_TW_CTRL_REG_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU_ANA_TEST_OUT_1P8V:1;
      uint64_t REFSYS_TEST_OUT_1P8V:1;
      uint64_t PM_ANA_INP_2:1;
      uint64_t PM_ANA_INP_3:1;
      uint64_t PM_ANA_INP_4:1;
      uint64_t PM_ANA_INP_5:1;
      uint64_t VBE_S_BUFF:1;
      uint64_t VBE_W_BUFF:1;
      uint64_t DC_BIST_BUF_INP_1P8V:1;
      uint64_t ADC_BUF_OUT_1P8V:1;
      uint64_t ADC_REF_BUF_OUT:1;
      uint64_t DELVBE_BUFF_OUT:1;
      uint64_t VBE_TS_STRONG:1;
      uint64_t VBE_TS_WEAK:1;
      uint64_t ODP:1;
      uint64_t BIST_MUX_OUT_1P8V:1;
      uint64_t I2V_SENSE:1;
      uint64_t TMUX_BUF_OUT_EN:1;
      uint64_t ATESTV_VSLDO:1;
      uint64_t Reserved0:11;
      uint64_t CLK_TMUX_ESD_CTRL:1;
      uint64_t ANA_TEST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_TW_ANA_TMUX_CTRL_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_TW_SPARE_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNC_TEST_DET_SYNC:1;
      uint64_t TEST_MODE_DET_SYNC:1;
      uint64_t SOP_MODE_LAT_4_0:5;
      uint64_t Reserved0:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_WU_MODE_REG_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORE_OVDET_LAT:1;
      uint64_t CORE_UVDET_LAT:1;
      uint64_t SUPP_OK_ANA18:1;
      uint64_t SUPP_OK_CLK18:1;
      uint64_t SUPP_OK_IO18:1;
      uint64_t SUPP_OK_IO33:1;
      uint64_t SUPP_OK_RF10:1;
      uint64_t SUPP_OK_RF14:1;
      uint64_t SUPP_OK_RF2_14:1;
      uint64_t SUPP_OK_SRAM12:1;
      uint64_t SUPP_OK_VDDD18:1;
      uint64_t REF_CLK_STATUS:1;
      uint64_t RCOSC_CLK_STATUS:1;
      uint64_t XTAL_DET_STATUS:1;
      uint64_t LIMP_MODE_STATUS:1;
      uint64_t HVMODE:1;
      uint64_t SUPP_OK_APLLVCO18:1;
      uint64_t VDDA_OSC_UVDET_LAT:1;
      uint64_t VDDS_3P3V_UVDET_LAT:1;
      uint64_t Reserved0:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_WU_STATUS_REG_LOWV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDCLK18DET:1;
      uint64_t VDDARF_DET:1;
      uint64_t VDDS18DET:1;
      uint64_t HVMODE:1;
      uint64_t SUPPDET_OV_CTRL:1;
      uint64_t INT_OSC_CTRL:1;
      uint64_t CORE_OVDET_LOWV:1;
      uint64_t CORE_UVDET_LOWV:1;
      uint64_t Reserved0:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA_REG_WU_SPARE_OUT_LOWV;

  uint8_t res9[904];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_wph:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_WPH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rec0:1;
      uint64_t hw_spare_rec1:1;
      uint64_t hw_spare_rec2:1;
      uint64_t hw_spare_rec3:1;
      uint64_t hw_spare_rec4:1;
      uint64_t hw_spare_rec5:1;
      uint64_t hw_spare_rec6:1;
      uint64_t hw_spare_rec7:1;
      uint64_t hw_spare_rec8:1;
      uint64_t hw_spare_rec9:1;
      uint64_t hw_spare_rec10:1;
      uint64_t hw_spare_rec11:1;
      uint64_t hw_spare_rec12:1;
      uint64_t hw_spare_rec13:1;
      uint64_t hw_spare_rec14:1;
      uint64_t hw_spare_rec15:1;
      uint64_t hw_spare_rec16:1;
      uint64_t hw_spare_rec17:1;
      uint64_t hw_spare_rec18:1;
      uint64_t hw_spare_rec19:1;
      uint64_t hw_spare_rec20:1;
      uint64_t hw_spare_rec21:1;
      uint64_t hw_spare_rec22:1;
      uint64_t hw_spare_rec23:1;
      uint64_t hw_spare_rec24:1;
      uint64_t hw_spare_rec25:1;
      uint64_t hw_spare_rec26:1;
      uint64_t hw_spare_rec27:1;
      uint64_t hw_spare_rec28:1;
      uint64_t hw_spare_rec29:1;
      uint64_t hw_spare_rec30:1;
      uint64_t hw_spare_rec31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REC;

  uint8_t res10[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_raw_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enabled_status_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eoi;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_address;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b6_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_type_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
      uint64_t b19_8:12;
      uint64_t b31_20:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_attr_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_clear;

};

#define MSS_TOPRCM (*(volatile struct MSS_TOPRCM_tag *) 0x2140000)

struct MSS_PCR1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0_PROT_SET:1;
      uint64_t PCS1_PROT_SET:1;
      uint64_t PCS2_PROT_SET:1;
      uint64_t PCS3_PROT_SET:1;
      uint64_t PCS4_PROT_SET:1;
      uint64_t PCS5_PROT_SET:1;
      uint64_t PCS6_PROT_SET:1;
      uint64_t PCS7_PROT_SET:1;
      uint64_t PCS8_PROT_SET:1;
      uint64_t PCS9_PROT_SET:1;
      uint64_t PCS10_PROT_SET:1;
      uint64_t PCS11_PROT_SET:1;
      uint64_t PCS12_PROT_SET:1;
      uint64_t PCS13_PROT_SET:1;
      uint64_t PCS14_PROT_SET:1;
      uint64_t PCS15_PROT_SET:1;
      uint64_t PCS16_PROT_SET:1;
      uint64_t PCS17_PROT_SET:1;
      uint64_t PCS18_PROT_SET:1;
      uint64_t PCS19_PROT_SET:1;
      uint64_t PCS20_PROT_SET:1;
      uint64_t PCS21_PROT_SET:1;
      uint64_t PCS22_PROT_SET:1;
      uint64_t PCS23_PROT_SET:1;
      uint64_t PCS24_PROT_SET:1;
      uint64_t PCS25_PROT_SET:1;
      uint64_t PCS26_PROT_SET:1;
      uint64_t PCS27_PROT_SET:1;
      uint64_t PCS28_PROT_SET:1;
      uint64_t PCS29_PROT_SET:1;
      uint64_t PCS30_PROT_SET:1;
      uint64_t PCS31_PROT_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROTSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS32_PROT_SET:1;
      uint64_t PCS33_PROT_SET:1;
      uint64_t PCS34_PROT_SET:1;
      uint64_t PCS35_PROT_SET:1;
      uint64_t PCS36_PROT_SET:1;
      uint64_t PCS37_PROT_SET:1;
      uint64_t PCS38_PROT_SET:1;
      uint64_t PCS39_PROT_SET:1;
      uint64_t PCS40_PROT_SET:1;
      uint64_t PCS41_PROT_SET:1;
      uint64_t PCS42_PROT_SET:1;
      uint64_t PCS43_PROT_SET:1;
      uint64_t PCS44_PROT_SET:1;
      uint64_t PCS45_PROT_SET:1;
      uint64_t PCS46_PROT_SET:1;
      uint64_t PCS47_PROT_SET:1;
      uint64_t PCS48_PROT_SET:1;
      uint64_t PCS49_PROT_SET:1;
      uint64_t PCS50_PROT_SET:1;
      uint64_t PCS51_PROT_SET:1;
      uint64_t PCS52_PROT_SET:1;
      uint64_t PCS53_PROT_SET:1;
      uint64_t PCS54_PROT_SET:1;
      uint64_t PCS55_PROT_SET:1;
      uint64_t PCS56_PROT_SET:1;
      uint64_t PCS57_PROT_SET:1;
      uint64_t PCS58_PROT_SET:1;
      uint64_t PCS59_PROT_SET:1;
      uint64_t PCS60_PROT_SET:1;
      uint64_t PCS61_PROT_SET:1;
      uint64_t PCS62_PROT_SET:1;
      uint64_t PCS63_PROT_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROTSET1;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0_PROT_CLR:1;
      uint64_t PCS1_PROT_CLR:1;
      uint64_t PCS2_PROT_CLR:1;
      uint64_t PCS3_PROT_CLR:1;
      uint64_t PCS4_PROT_CLR:1;
      uint64_t PCS5_PROT_CLR:1;
      uint64_t PCS6_PROT_CLR:1;
      uint64_t PCS7_PROT_CLR:1;
      uint64_t PCS8_PROT_CLR:1;
      uint64_t PCS9_PROT_CLR:1;
      uint64_t PCS10_PROT_CLR:1;
      uint64_t PCS11_PROT_CLR:1;
      uint64_t PCS12_PROT_CLR:1;
      uint64_t PCS13_PROT_CLR:1;
      uint64_t PCS14_PROT_CLR:1;
      uint64_t PCS15_PROT_CLR:1;
      uint64_t PCS16_PROT_CLR:1;
      uint64_t PCS17_PROT_CLR:1;
      uint64_t PCS18_PROT_CLR:1;
      uint64_t PCS19_PROT_CLR:1;
      uint64_t PCS20_PROT_CLR:1;
      uint64_t PCS21_PROT_CLR:1;
      uint64_t PCS22_PROT_CLR:1;
      uint64_t PCS23_PROT_CLR:1;
      uint64_t PCS24_PROT_CLR:1;
      uint64_t PCS25_PROT_CLR:1;
      uint64_t PCS26_PROT_CLR:1;
      uint64_t PCS27_PROT_CLR:1;
      uint64_t PCS28_PROT_CLR:1;
      uint64_t PCS29_PROT_CLR:1;
      uint64_t PCS30_PROT_CLR:1;
      uint64_t PCS31_PROT_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROTCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS32_PROT_CLR:1;
      uint64_t PCS33_PROT_CLR:1;
      uint64_t PCS34_PROT_CLR:1;
      uint64_t PCS35_PROT_CLR:1;
      uint64_t PCS36_PROT_CLR:1;
      uint64_t PCS37_PROT_CLR:1;
      uint64_t PCS38_PROT_CLR:1;
      uint64_t PCS39_PROT_CLR:1;
      uint64_t PCS40_PROT_CLR:1;
      uint64_t PCS41_PROT_CLR:1;
      uint64_t PCS42_PROT_CLR:1;
      uint64_t PCS43_PROT_CLR:1;
      uint64_t PCS44_PROT_CLR:1;
      uint64_t PCS45_PROT_CLR:1;
      uint64_t PCS46_PROT_CLR:1;
      uint64_t PCS47_PROT_CLR:1;
      uint64_t PCS48_PROT_CLR:1;
      uint64_t PCS49_PROT_CLR:1;
      uint64_t PCS50_PROT_CLR:1;
      uint64_t PCS51_PROT_CLR:1;
      uint64_t PCS52_PROT_CLR:1;
      uint64_t PCS53_PROT_CLR:1;
      uint64_t PCS54_PROT_CLR:1;
      uint64_t PCS55_PROT_CLR:1;
      uint64_t PCS56_PROT_CLR:1;
      uint64_t PCS57_PROT_CLR:1;
      uint64_t PCS58_PROT_CLR:1;
      uint64_t PCS59_PROT_CLR:1;
      uint64_t PCS60_PROT_CLR:1;
      uint64_t PCS61_PROT_CLR:1;
      uint64_t PCS62_PROT_CLR:1;
      uint64_t PCS63_PROT_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROTCLR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0_QUAD0_PROT_SET:1;
      uint64_t PS0_QUAD1_PROT_SET:1;
      uint64_t PS0_QUAD2_PROT_SET:1;
      uint64_t PS0_QUAD3_PROT_SET:1;
      uint64_t PS1_QUAD0_PROT_SET:1;
      uint64_t PS1_QUAD1_PROT_SET:1;
      uint64_t PS1_QUAD2_PROT_SET:1;
      uint64_t PS1_QUAD3_PROT_SET:1;
      uint64_t PS2_QUAD0_PROT_SET:1;
      uint64_t PS2_QUAD1_PROT_SET:1;
      uint64_t PS2_QUAD2_PROT_SET:1;
      uint64_t PS2_QUAD3_PROT_SET:1;
      uint64_t PS3_QUAD0_PROT_SET:1;
      uint64_t PS3_QUAD1_PROT_SET:1;
      uint64_t PS3_QUAD2_PROT_SET:1;
      uint64_t PS3_QUAD3_PROT_SET:1;
      uint64_t PS4_QUAD0_PROT_SET:1;
      uint64_t PS4_QUAD1_PROT_SET:1;
      uint64_t PS4_QUAD2_PROT_SET:1;
      uint64_t PS4_QUAD3_PROT_SET:1;
      uint64_t PS5_QUAD0_PROT_SET:1;
      uint64_t PS5_QUAD1_PROT_SET:1;
      uint64_t PS5_QUAD2_PROT_SET:1;
      uint64_t PS5_QUAD3_PROT_SET:1;
      uint64_t PS6_QUAD0_PROT_SET:1;
      uint64_t PS6_QUAD1_PROT_SET:1;
      uint64_t PS6_QUAD2_PROT_SET:1;
      uint64_t PS6_QUAD3_PROT_SET:1;
      uint64_t PS7_QUAD0_PROT_SET:1;
      uint64_t PS7_QUAD1_PROT_SET:1;
      uint64_t PS7_QUAD2_PROT_SET:1;
      uint64_t PS7_QUAD3_PROT_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS8_QUAD0_PROT_SET:1;
      uint64_t PS8_QUAD1_PROT_SET:1;
      uint64_t PS8_QUAD2_PROT_SET:1;
      uint64_t PS8_QUAD3_PROT_SET:1;
      uint64_t PS9_QUAD0_PROT_SET:1;
      uint64_t PS9_QUAD1_PROT_SET:1;
      uint64_t PS9_QUAD2_PROT_SET:1;
      uint64_t PS9_QUAD3_PROT_SET:1;
      uint64_t PS10_QUAD0_PROT_SET:1;
      uint64_t PS10_QUAD1_PROT_SET:1;
      uint64_t PS10_QUAD2_PROT_SET:1;
      uint64_t PS10_QUAD3_PROT_SET:1;
      uint64_t PS11_QUAD0_PROT_SET:1;
      uint64_t PS11_QUAD1_PROT_SET:1;
      uint64_t PS11_QUAD2_PROT_SET:1;
      uint64_t PS11_QUAD3_PROT_SET:1;
      uint64_t PS12_QUAD0_PROT_SET:1;
      uint64_t PS12_QUAD1_PROT_SET:1;
      uint64_t PS12_QUAD2_PROT_SET:1;
      uint64_t PS12_QUAD3_PROT_SET:1;
      uint64_t PS13_QUAD0_PROT_SET:1;
      uint64_t PS13_QUAD1_PROT_SET:1;
      uint64_t PS13_QUAD2_PROT_SET:1;
      uint64_t PS13_QUAD3_PROT_SET:1;
      uint64_t PS14_QUAD0_PROT_SET:1;
      uint64_t PS14_QUAD1_PROT_SET:1;
      uint64_t PS14_QUAD2_PROT_SET:1;
      uint64_t PS14_QUAD3_PROT_SET:1;
      uint64_t PS15_QUAD0_PROT_SET:1;
      uint64_t PS15_QUAD1_PROT_SET:1;
      uint64_t PS15_QUAD2_PROT_SET:1;
      uint64_t PS15_QUAD3_PROT_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTSET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS16_QUAD0_PROT_SET:1;
      uint64_t PS16_QUAD1_PROT_SET:1;
      uint64_t PS16_QUAD2_PROT_SET:1;
      uint64_t PS16_QUAD3_PROT_SET:1;
      uint64_t PS17_QUAD0_PROT_SET:1;
      uint64_t PS17_QUAD1_PROT_SET:1;
      uint64_t PS17_QUAD2_PROT_SET:1;
      uint64_t PS17_QUAD3_PROT_SET:1;
      uint64_t PS18_QUAD0_PROT_SET:1;
      uint64_t PS18_QUAD1_PROT_SET:1;
      uint64_t PS18_QUAD2_PROT_SET:1;
      uint64_t PS18_QUAD3_PROT_SET:1;
      uint64_t PS19_QUAD0_PROT_SET:1;
      uint64_t PS19_QUAD1_PROT_SET:1;
      uint64_t PS19_QUAD2_PROT_SET:1;
      uint64_t PS19_QUAD3_PROT_SET:1;
      uint64_t PS20_QUAD0_PROT_SET:1;
      uint64_t PS20_QUAD1_PROT_SET:1;
      uint64_t PS20_QUAD2_PROT_SET:1;
      uint64_t PS20_QUAD3_PROT_SET:1;
      uint64_t PS21_QUAD0_PROT_SET:1;
      uint64_t PS21_QUAD1_PROT_SET:1;
      uint64_t PS21_QUAD2_PROT_SET:1;
      uint64_t PS21_QUAD3_PROT_SET:1;
      uint64_t PS22_QUAD0_PROT_SET:1;
      uint64_t PS22_QUAD1_PROT_SET:1;
      uint64_t PS22_QUAD2_PROT_SET:1;
      uint64_t PS22_QUAD3_PROT_SET:1;
      uint64_t PS23_QUAD0_PROT_SET:1;
      uint64_t PS23_QUAD1_PROT_SET:1;
      uint64_t PS23_QUAD2_PROT_SET:1;
      uint64_t PS23_QUAD3_PROT_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTSET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS24_QUAD0_PROT_SET:1;
      uint64_t PS24_QUAD1_PROT_SET:1;
      uint64_t PS24_QUAD2_PROT_SET:1;
      uint64_t PS24_QUAD3_PROT_SET:1;
      uint64_t PS25_QUAD0_PROT_SET:1;
      uint64_t PS25_QUAD1_PROT_SET:1;
      uint64_t PS25_QUAD2_PROT_SET:1;
      uint64_t PS25_QUAD3_PROT_SET:1;
      uint64_t PS26_QUAD0_PROT_SET:1;
      uint64_t PS26_QUAD1_PROT_SET:1;
      uint64_t PS26_QUAD2_PROT_SET:1;
      uint64_t PS26_QUAD3_PROT_SET:1;
      uint64_t PS27_QUAD0_PROT_SET:1;
      uint64_t PS27_QUAD1_PROT_SET:1;
      uint64_t PS27_QUAD2_PROT_SET:1;
      uint64_t PS27_QUAD3_PROT_SET:1;
      uint64_t PS28_QUAD0_PROT_SET:1;
      uint64_t PS28_QUAD1_PROT_SET:1;
      uint64_t PS28_QUAD2_PROT_SET:1;
      uint64_t PS28_QUAD3_PROT_SET:1;
      uint64_t PS29_QUAD0_PROT_SET:1;
      uint64_t PS29_QUAD1_PROT_SET:1;
      uint64_t PS29_QUAD2_PROT_SET:1;
      uint64_t PS29_QUAD3_PROT_SET:1;
      uint64_t PS30_QUAD0_PROT_SET:1;
      uint64_t PS30_QUAD1_PROT_SET:1;
      uint64_t PS30_QUAD2_PROT_SET:1;
      uint64_t PS30_QUAD3_PROT_SET:1;
      uint64_t PS31_QUAD0_PROT_SET:1;
      uint64_t PS31_QUAD1_PROT_SET:1;
      uint64_t PS31_QUAD2_PROT_SET:1;
      uint64_t PS31_QUAD3_PROT_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTSET_3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0_QUAD0_PROT_CLR:1;
      uint64_t PS0_QUAD1_PROT_CLR:1;
      uint64_t PS0_QUAD2_PROT_CLR:1;
      uint64_t PS0_QUAD3_PROT_CLR:1;
      uint64_t PS1_QUAD0_PROT_CLR:1;
      uint64_t PS1_QUAD1_PROT_CLR:1;
      uint64_t PS1_QUAD2_PROT_CLR:1;
      uint64_t PS1_QUAD3_PROT_CLR:1;
      uint64_t PS2_QUAD0_PROT_CLR:1;
      uint64_t PS2_QUAD1_PROT_CLR:1;
      uint64_t PS2_QUAD2_PROT_CLR:1;
      uint64_t PS2_QUAD3_PROT_CLR:1;
      uint64_t PS3_QUAD0_PROT_CLR:1;
      uint64_t PS3_QUAD1_PROT_CLR:1;
      uint64_t PS3_QUAD2_PROT_CLR:1;
      uint64_t PS3_QUAD3_PROT_CLR:1;
      uint64_t PS4_QUAD0_PROT_CLR:1;
      uint64_t PS4_QUAD1_PROT_CLR:1;
      uint64_t PS4_QUAD2_PROT_CLR:1;
      uint64_t PS4_QUAD3_PROT_CLR:1;
      uint64_t PS5_QUAD0_PROT_CLR:1;
      uint64_t PS5_QUAD1_PROT_CLR:1;
      uint64_t PS5_QUAD2_PROT_CLR:1;
      uint64_t PS5_QUAD3_PROT_CLR:1;
      uint64_t PS6_QUAD0_PROT_CLR:1;
      uint64_t PS6_QUAD1_PROT_CLR:1;
      uint64_t PS6_QUAD2_PROT_CLR:1;
      uint64_t PS6_QUAD3_PROT_CLR:1;
      uint64_t PS7_QUAD0_PROT_CLR:1;
      uint64_t PS7_QUAD1_PROT_CLR:1;
      uint64_t PS7_QUAD2_PROT_CLR:1;
      uint64_t PS7_QUAD3_PROT_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS8_QUAD0_PROT_CLR:1;
      uint64_t PS8_QUAD1_PROT_CLR:1;
      uint64_t PS8_QUAD2_PROT_CLR:1;
      uint64_t PS8_QUAD3_PROT_CLR:1;
      uint64_t PS9_QUAD0_PROT_CLR:1;
      uint64_t PS9_QUAD1_PROT_CLR:1;
      uint64_t PS9_QUAD2_PROT_CLR:1;
      uint64_t PS9_QUAD3_PROT_CLR:1;
      uint64_t PS10_QUAD0_PROT_CLR:1;
      uint64_t PS10_QUAD1_PROT_CLR:1;
      uint64_t PS10_QUAD2_PROT_CLR:1;
      uint64_t PS10_QUAD3_PROT_CLR:1;
      uint64_t PS11_QUAD0_PROT_CLR:1;
      uint64_t PS11_QUAD1_PROT_CLR:1;
      uint64_t PS11_QUAD2_PROT_CLR:1;
      uint64_t PS11_QUAD3_PROT_CLR:1;
      uint64_t PS12_QUAD0_PROT_CLR:1;
      uint64_t PS12_QUAD1_PROT_CLR:1;
      uint64_t PS12_QUAD2_PROT_CLR:1;
      uint64_t PS12_QUAD3_PROT_CLR:1;
      uint64_t PS13_QUAD0_PROT_CLR:1;
      uint64_t PS13_QUAD1_PROT_CLR:1;
      uint64_t PS13_QUAD2_PROT_CLR:1;
      uint64_t PS13_QUAD3_PROT_CLR:1;
      uint64_t PS14_QUAD0_PROT_CLR:1;
      uint64_t PS14_QUAD1_PROT_CLR:1;
      uint64_t PS14_QUAD2_PROT_CLR:1;
      uint64_t PS14_QUAD3_PROT_CLR:1;
      uint64_t PS15_QUAD0_PROT_CLR:1;
      uint64_t PS15_QUAD1_PROT_CLR:1;
      uint64_t PS15_QUAD2_PROT_CLR:1;
      uint64_t PS15_QUAD3_PROT_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS16_QUAD0_PROT_CLR:1;
      uint64_t PS16_QUAD1_PROT_CLR:1;
      uint64_t PS16_QUAD2_PROT_CLR:1;
      uint64_t PS16_QUAD3_PROT_CLR:1;
      uint64_t PS17_QUAD0_PROT_CLR:1;
      uint64_t PS17_QUAD1_PROT_CLR:1;
      uint64_t PS17_QUAD2_PROT_CLR:1;
      uint64_t PS17_QUAD3_PROT_CLR:1;
      uint64_t PS18_QUAD0_PROT_CLR:1;
      uint64_t PS18_QUAD1_PROT_CLR:1;
      uint64_t PS18_QUAD2_PROT_CLR:1;
      uint64_t PS18_QUAD3_PROT_CLR:1;
      uint64_t PS19_QUAD0_PROT_CLR:1;
      uint64_t PS19_QUAD1_PROT_CLR:1;
      uint64_t PS19_QUAD2_PROT_CLR:1;
      uint64_t PS19_QUAD3_PROT_CLR:1;
      uint64_t PS20_QUAD0_PROT_CLR:1;
      uint64_t PS20_QUAD1_PROT_CLR:1;
      uint64_t PS20_QUAD2_PROT_CLR:1;
      uint64_t PS20_QUAD3_PROT_CLR:1;
      uint64_t PS21_QUAD0_PROT_CLR:1;
      uint64_t PS21_QUAD1_PROT_CLR:1;
      uint64_t PS21_QUAD2_PROT_CLR:1;
      uint64_t PS21_QUAD3_PROT_CLR:1;
      uint64_t PS22_QUAD0_PROT_CLR:1;
      uint64_t PS22_QUAD1_PROT_CLR:1;
      uint64_t PS22_QUAD2_PROT_CLR:1;
      uint64_t PS22_QUAD3_PROT_CLR:1;
      uint64_t PS23_QUAD0_PROT_CLR:1;
      uint64_t PS23_QUAD1_PROT_CLR:1;
      uint64_t PS23_QUAD2_PROT_CLR:1;
      uint64_t PS23_QUAD3_PROT_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS24_QUAD0_PROT_CLR:1;
      uint64_t PS24_QUAD1_PROT_CLR:1;
      uint64_t PS24_QUAD2_PROT_CLR:1;
      uint64_t PS24_QUAD3_PROT_CLR:1;
      uint64_t PS25_QUAD0_PROT_CLR:1;
      uint64_t PS25_QUAD1_PROT_CLR:1;
      uint64_t PS25_QUAD2_PROT_CLR:1;
      uint64_t PS25_QUAD3_PROT_CLR:1;
      uint64_t PS26_QUAD0_PROT_CLR:1;
      uint64_t PS26_QUAD1_PROT_CLR:1;
      uint64_t PS26_QUAD2_PROT_CLR:1;
      uint64_t PS26_QUAD3_PROT_CLR:1;
      uint64_t PS27_QUAD0_PROT_CLR:1;
      uint64_t PS27_QUAD1_PROT_CLR:1;
      uint64_t PS27_QUAD2_PROT_CLR:1;
      uint64_t PS27_QUAD3_PROT_CLR:1;
      uint64_t PS28_QUAD0_PROT_CLR:1;
      uint64_t PS28_QUAD1_PROT_CLR:1;
      uint64_t PS28_QUAD2_PROT_CLR:1;
      uint64_t PS28_QUAD3_PROT_CLR:1;
      uint64_t PS29_QUAD0_PROT_CLR:1;
      uint64_t PS29_QUAD1_PROT_CLR:1;
      uint64_t PS29_QUAD2_PROT_CLR:1;
      uint64_t PS29_QUAD3_PROT_CLR:1;
      uint64_t PS30_QUAD0_PROT_CLR:1;
      uint64_t PS30_QUAD1_PROT_CLR:1;
      uint64_t PS30_QUAD2_PROT_CLR:1;
      uint64_t PS30_QUAD3_PROT_CLR:1;
      uint64_t PS31_QUAD0_PROT_CLR:1;
      uint64_t PS31_QUAD1_PROT_CLR:1;
      uint64_t PS31_QUAD2_PROT_CLR:1;
      uint64_t PS31_QUAD3_PROT_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTCLR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0_PWRDWN_SET:1;
      uint64_t PCS1_PWRDWN_SET:1;
      uint64_t PCS2_PWRDWN_SET:1;
      uint64_t PCS3_PWRDWN_SET:1;
      uint64_t PCS4_PWRDWN_SET:1;
      uint64_t PCS5_PWRDWN_SET:1;
      uint64_t PCS6_PWRDWN_SET:1;
      uint64_t PCS7_PWRDWN_SET:1;
      uint64_t PCS8_PWRDWN_SET:1;
      uint64_t PCS9_PWRDWN_SET:1;
      uint64_t PCS10_PWRDWN_SET:1;
      uint64_t PCS11_PWRDWN_SET:1;
      uint64_t PCS12_PWRDWN_SET:1;
      uint64_t PCS13_PWRDWN_SET:1;
      uint64_t PCS14_PWRDWN_SET:1;
      uint64_t PCS15_PWRDWN_SET:1;
      uint64_t PCS16_PWRDWN_SET:1;
      uint64_t PCS17_PWRDWN_SET:1;
      uint64_t PCS18_PWRDWN_SET:1;
      uint64_t PCS19_PWRDWN_SET:1;
      uint64_t PCS20_PWRDWN_SET:1;
      uint64_t PCS21_PWRDWN_SET:1;
      uint64_t PCS22_PWRDWN_SET:1;
      uint64_t PCS23_PWRDWN_SET:1;
      uint64_t PCS24_PWRDWN_SET:1;
      uint64_t PCS25_PWRDWN_SET:1;
      uint64_t PCS26_PWRDWN_SET:1;
      uint64_t PCS27_PWRDWN_SET:1;
      uint64_t PCS28_PWRDWN_SET:1;
      uint64_t PCS29_PWRDWN_SET:1;
      uint64_t PCS30_PWRDWN_SET:1;
      uint64_t PCS31_PWRDWN_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSPWRDWNSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS32_PWRDWN_SET:1;
      uint64_t PCS33_PWRDWN_SET:1;
      uint64_t PCS34_PWRDWN_SET:1;
      uint64_t PCS35_PWRDWN_SET:1;
      uint64_t PCS36_PWRDWN_SET:1;
      uint64_t PCS37_PWRDWN_SET:1;
      uint64_t PCS38_PWRDWN_SET:1;
      uint64_t PCS39_PWRDWN_SET:1;
      uint64_t PCS40_PWRDWN_SET:1;
      uint64_t PCS41_PWRDWN_SET:1;
      uint64_t PCS42_PWRDWN_SET:1;
      uint64_t PCS43_PWRDWN_SET:1;
      uint64_t PCS44_PWRDWN_SET:1;
      uint64_t PCS45_PWRDWN_SET:1;
      uint64_t PCS46_PWRDWN_SET:1;
      uint64_t PCS47_PWRDWN_SET:1;
      uint64_t PCS48_PWRDWN_SET:1;
      uint64_t PCS49_PWRDWN_SET:1;
      uint64_t PCS50_PWRDWN_SET:1;
      uint64_t PCS51_PWRDWN_SET:1;
      uint64_t PCS52_PWRDWN_SET:1;
      uint64_t PCS53_PWRDWN_SET:1;
      uint64_t PCS54_PWRDWN_SET:1;
      uint64_t PCS55_PWRDWN_SET:1;
      uint64_t PCS56_PWRDWN_SET:1;
      uint64_t PCS57_PWRDWN_SET:1;
      uint64_t PCS58_PWRDWN_SET:1;
      uint64_t PCS59_PWRDWN_SET:1;
      uint64_t PCS60_PWRDWN_SET:1;
      uint64_t PCS61_PWRDWN_SET:1;
      uint64_t PCS62_PWRDWN_SET:1;
      uint64_t PCS63_PWRDWN_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSPWRDWNSET1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0_PWRDWN_CLR:1;
      uint64_t PCS1_PWRDWN_CLR:1;
      uint64_t PCS2_PWRDWN_CLR:1;
      uint64_t PCS3_PWRDWN_CLR:1;
      uint64_t PCS4_PWRDWN_CLR:1;
      uint64_t PCS5_PWRDWN_CLR:1;
      uint64_t PCS6_PWRDWN_CLR:1;
      uint64_t PCS7_PWRDWN_CLR:1;
      uint64_t PCS8_PWRDWN_CLR:1;
      uint64_t PCS9_PWRDWN_CLR:1;
      uint64_t PCS10_PWRDWN_CLR:1;
      uint64_t PCS11_PWRDWN_CLR:1;
      uint64_t PCS12_PWRDWN_CLR:1;
      uint64_t PCS13_PWRDWN_CLR:1;
      uint64_t PCS14_PWRDWN_CLR:1;
      uint64_t PCS15_PWRDWN_CLR:1;
      uint64_t PCS16_PWRDWN_CLR:1;
      uint64_t PCS17_PWRDWN_CLR:1;
      uint64_t PCS18_PWRDWN_CLR:1;
      uint64_t PCS19_PWRDWN_CLR:1;
      uint64_t PCS20_PWRDWN_CLR:1;
      uint64_t PCS21_PWRDWN_CLR:1;
      uint64_t PCS22_PWRDWN_CLR:1;
      uint64_t PCS23_PWRDWN_CLR:1;
      uint64_t PCS24_PWRDWN_CLR:1;
      uint64_t PCS25_PWRDWN_CLR:1;
      uint64_t PCS26_PWRDWN_CLR:1;
      uint64_t PCS27_PWRDWN_CLR:1;
      uint64_t PCS28_PWRDWN_CLR:1;
      uint64_t PCS29_PWRDWN_CLR:1;
      uint64_t PCS30_PWRDWN_CLR:1;
      uint64_t PCS31_PWRDWN_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSPWRDWNCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS32_PWRDWN_CLR:1;
      uint64_t PCS33_PWRDWN_CLR:1;
      uint64_t PCS34_PWRDWN_CLR:1;
      uint64_t PCS35_PWRDWN_CLR:1;
      uint64_t PCS36_PWRDWN_CLR:1;
      uint64_t PCS37_PWRDWN_CLR:1;
      uint64_t PCS38_PWRDWN_CLR:1;
      uint64_t PCS39_PWRDWN_CLR:1;
      uint64_t PCS40_PWRDWN_CLR:1;
      uint64_t PCS41_PWRDWN_CLR:1;
      uint64_t PCS42_PWRDWN_CLR:1;
      uint64_t PCS43_PWRDWN_CLR:1;
      uint64_t PCS44_PWRDWN_CLR:1;
      uint64_t PCS45_PWRDWN_CLR:1;
      uint64_t PCS46_PWRDWN_CLR:1;
      uint64_t PCS47_PWRDWN_CLR:1;
      uint64_t PCS48_PWRDWN_CLR:1;
      uint64_t PCS49_PWRDWN_CLR:1;
      uint64_t PCS50_PWRDWN_CLR:1;
      uint64_t PCS51_PWRDWN_CLR:1;
      uint64_t PCS52_PWRDWN_CLR:1;
      uint64_t PCS53_PWRDWN_CLR:1;
      uint64_t PCS54_PWRDWN_CLR:1;
      uint64_t PCS55_PWRDWN_CLR:1;
      uint64_t PCS56_PWRDWN_CLR:1;
      uint64_t PCS57_PWRDWN_CLR:1;
      uint64_t PCS58_PWRDWN_CLR:1;
      uint64_t PCS59_PWRDWN_CLR:1;
      uint64_t PCS60_PWRDWN_CLR:1;
      uint64_t PCS61_PWRDWN_CLR:1;
      uint64_t PCS62_PWRDWN_CLR:1;
      uint64_t PCS63_PWRDWN_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSPWRDWNCLR1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0_QUAD0_PWRDWN_SET:1;
      uint64_t PS0_QUAD1_PWRDWN_SET:1;
      uint64_t PS0_QUAD2_PWRDWN_SET:1;
      uint64_t PS0_QUAD3_PWRDWN_SET:1;
      uint64_t PS1_QUAD0_PWRDWN_SET:1;
      uint64_t PS1_QUAD1_PWRDWN_SET:1;
      uint64_t PS1_QUAD2_PWRDWN_SET:1;
      uint64_t PS1_QUAD3_PWRDWN_SET:1;
      uint64_t PS2_QUAD0_PWRDWN_SET:1;
      uint64_t PS2_QUAD1_PWRDWN_SET:1;
      uint64_t PS2_QUAD2_PWRDWN_SET:1;
      uint64_t PS2_QUAD3_PWRDWN_SET:1;
      uint64_t PS3_QUAD0_PWRDWN_SET:1;
      uint64_t PS3_QUAD1_PWRDWN_SET:1;
      uint64_t PS3_QUAD2_PWRDWN_SET:1;
      uint64_t PS3_QUAD3_PWRDWN_SET:1;
      uint64_t PS4_QUAD0_PWRDWN_SET:1;
      uint64_t PS4_QUAD1_PWRDWN_SET:1;
      uint64_t PS4_QUAD2_PWRDWN_SET:1;
      uint64_t PS4_QUAD3_PWRDWN_SET:1;
      uint64_t PS5_QUAD0_PWRDWN_SET:1;
      uint64_t PS5_QUAD1_PWRDWN_SET:1;
      uint64_t PS5_QUAD2_PWRDWN_SET:1;
      uint64_t PS5_QUAD3_PWRDWN_SET:1;
      uint64_t PS6_QUAD0_PWRDWN_SET:1;
      uint64_t PS6_QUAD1_PWRDWN_SET:1;
      uint64_t PS6_QUAD2_PWRDWN_SET:1;
      uint64_t PS6_QUAD3_PWRDWN_SET:1;
      uint64_t PS7_QUAD0_PWRDWN_SET:1;
      uint64_t PS7_QUAD1_PWRDWN_SET:1;
      uint64_t PS7_QUAD2_PWRDWN_SET:1;
      uint64_t PS7_QUAD3_PWRDWN_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS8_QUAD0_PWRDWN_SET:1;
      uint64_t PS8_QUAD1_PWRDWN_SET:1;
      uint64_t PS8_QUAD2_PWRDWN_SET:1;
      uint64_t PS8_QUAD3_PWRDWN_SET:1;
      uint64_t PS9_QUAD0_PWRDWN_SET:1;
      uint64_t PS9_QUAD1_PWRDWN_SET:1;
      uint64_t PS9_QUAD2_PWRDWN_SET:1;
      uint64_t PS9_QUAD3_PWRDWN_SET:1;
      uint64_t PS10_QUAD0_PWRDWN_SET:1;
      uint64_t PS10_QUAD1_PWRDWN_SET:1;
      uint64_t PS10_QUAD2_PWRDWN_SET:1;
      uint64_t PS10_QUAD3_PWRDWN_SET:1;
      uint64_t PS11_QUAD0_PWRDWN_SET:1;
      uint64_t PS11_QUAD1_PWRDWN_SET:1;
      uint64_t PS11_QUAD2_PWRDWN_SET:1;
      uint64_t PS11_QUAD3_PWRDWN_SET:1;
      uint64_t PS12_QUAD0_PWRDWN_SET:1;
      uint64_t PS12_QUAD1_PWRDWN_SET:1;
      uint64_t PS12_QUAD2_PWRDWN_SET:1;
      uint64_t PS12_QUAD3_PWRDWN_SET:1;
      uint64_t PS13_QUAD0_PWRDWN_SET:1;
      uint64_t PS13_QUAD1_PWRDWN_SET:1;
      uint64_t PS13_QUAD2_PWRDWN_SET:1;
      uint64_t PS13_QUAD3_PWRDWN_SET:1;
      uint64_t PS14_QUAD0_PWRDWN_SET:1;
      uint64_t PS14_QUAD1_PWRDWN_SET:1;
      uint64_t PS14_QUAD2_PWRDWN_SET:1;
      uint64_t PS14_QUAD3_PWRDWN_SET:1;
      uint64_t PS15_QUAD0_PWRDWN_SET:1;
      uint64_t PS15_QUAD1_PWRDWN_SET:1;
      uint64_t PS15_QUAD2_PWRDWN_SET:1;
      uint64_t PS15_QUAD3_PWRDWN_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNSET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS16_QUAD0_PWRDWN_SET:1;
      uint64_t PS16_QUAD1_PWRDWN_SET:1;
      uint64_t PS16_QUAD2_PWRDWN_SET:1;
      uint64_t PS16_QUAD3_PWRDWN_SET:1;
      uint64_t PS17_QUAD0_PWRDWN_SET:1;
      uint64_t PS17_QUAD1_PWRDWN_SET:1;
      uint64_t PS17_QUAD2_PWRDWN_SET:1;
      uint64_t PS17_QUAD3_PWRDWN_SET:1;
      uint64_t PS18_QUAD0_PWRDWN_SET:1;
      uint64_t PS18_QUAD1_PWRDWN_SET:1;
      uint64_t PS18_QUAD2_PWRDWN_SET:1;
      uint64_t PS18_QUAD3_PWRDWN_SET:1;
      uint64_t PS19_QUAD0_PWRDWN_SET:1;
      uint64_t PS19_QUAD1_PWRDWN_SET:1;
      uint64_t PS19_QUAD2_PWRDWN_SET:1;
      uint64_t PS19_QUAD3_PWRDWN_SET:1;
      uint64_t PS20_QUAD0_PWRDWN_SET:1;
      uint64_t PS20_QUAD1_PWRDWN_SET:1;
      uint64_t PS20_QUAD2_PWRDWN_SET:1;
      uint64_t PS20_QUAD3_PWRDWN_SET:1;
      uint64_t PS21_QUAD0_PWRDWN_SET:1;
      uint64_t PS21_QUAD1_PWRDWN_SET:1;
      uint64_t PS21_QUAD2_PWRDWN_SET:1;
      uint64_t PS21_QUAD3_PWRDWN_SET:1;
      uint64_t PS22_QUAD0_PWRDWN_SET:1;
      uint64_t PS22_QUAD1_PWRDWN_SET:1;
      uint64_t PS22_QUAD2_PWRDWN_SET:1;
      uint64_t PS22_QUAD3_PWRDWN_SET:1;
      uint64_t PS23_QUAD0_PWRDWN_SET:1;
      uint64_t PS23_QUAD1_PWRDWN_SET:1;
      uint64_t PS23_QUAD2_PWRDWN_SET:1;
      uint64_t PS23_QUAD3_PWRDWN_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNSET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS24_QUAD0_PWRDWN_SET:1;
      uint64_t PS24_QUAD1_PWRDWN_SET:1;
      uint64_t PS24_QUAD2_PWRDWN_SET:1;
      uint64_t PS24_QUAD3_PWRDWN_SET:1;
      uint64_t PS25_QUAD0_PWRDWN_SET:1;
      uint64_t PS25_QUAD1_PWRDWN_SET:1;
      uint64_t PS25_QUAD2_PWRDWN_SET:1;
      uint64_t PS25_QUAD3_PWRDWN_SET:1;
      uint64_t PS26_QUAD0_PWRDWN_SET:1;
      uint64_t PS26_QUAD1_PWRDWN_SET:1;
      uint64_t PS26_QUAD2_PWRDWN_SET:1;
      uint64_t PS26_QUAD3_PWRDWN_SET:1;
      uint64_t PS27_QUAD0_PWRDWN_SET:1;
      uint64_t PS27_QUAD1_PWRDWN_SET:1;
      uint64_t PS27_QUAD2_PWRDWN_SET:1;
      uint64_t PS27_QUAD3_PWRDWN_SET:1;
      uint64_t PS28_QUAD0_PWRDWN_SET:1;
      uint64_t PS28_QUAD1_PWRDWN_SET:1;
      uint64_t PS28_QUAD2_PWRDWN_SET:1;
      uint64_t PS28_QUAD3_PWRDWN_SET:1;
      uint64_t PS29_QUAD0_PWRDWN_SET:1;
      uint64_t PS29_QUAD1_PWRDWN_SET:1;
      uint64_t PS29_QUAD2_PWRDWN_SET:1;
      uint64_t PS29_QUAD3_PWRDWN_SET:1;
      uint64_t PS30_QUAD0_PWRDWN_SET:1;
      uint64_t PS30_QUAD1_PWRDWN_SET:1;
      uint64_t PS30_QUAD2_PWRDWN_SET:1;
      uint64_t PS30_QUAD3_PWRDWN_SET:1;
      uint64_t PS31_QUAD0_PWRDWN_SET:1;
      uint64_t PS31_QUAD1_PWRDWN_SET:1;
      uint64_t PS31_QUAD2_PWRDWN_SET:1;
      uint64_t PS31_QUAD3_PWRDWN_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNSET3;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0_QUAD0_PWRDWN_CLR:1;
      uint64_t PS0_QUAD1_PWRDWN_CLR:1;
      uint64_t PS0_QUAD2_PWRDWN_CLR:1;
      uint64_t PS0_QUAD3_PWRDWN_CLR:1;
      uint64_t PS1_QUAD0_PWRDWN_CLR:1;
      uint64_t PS1_QUAD1_PWRDWN_CLR:1;
      uint64_t PS1_QUAD2_PWRDWN_CLR:1;
      uint64_t PS1_QUAD3_PWRDWN_CLR:1;
      uint64_t PS2_QUAD0_PWRDWN_CLR:1;
      uint64_t PS2_QUAD1_PWRDWN_CLR:1;
      uint64_t PS2_QUAD2_PWRDWN_CLR:1;
      uint64_t PS2_QUAD3_PWRDWN_CLR:1;
      uint64_t PS3_QUAD0_PWRDWN_CLR:1;
      uint64_t PS3_QUAD1_PWRDWN_CLR:1;
      uint64_t PS3_QUAD2_PWRDWN_CLR:1;
      uint64_t PS3_QUAD3_PWRDWN_CLR:1;
      uint64_t PS4_QUAD0_PWRDWN_CLR:1;
      uint64_t PS4_QUAD1_PWRDWN_CLR:1;
      uint64_t PS4_QUAD2_PWRDWN_CLR:1;
      uint64_t PS4_QUAD3_PWRDWN_CLR:1;
      uint64_t PS5_QUAD0_PWRDWN_CLR:1;
      uint64_t PS5_QUAD1_PWRDWN_CLR:1;
      uint64_t PS5_QUAD2_PWRDWN_CLR:1;
      uint64_t PS5_QUAD3_PWRDWN_CLR:1;
      uint64_t PS6_QUAD0_PWRDWN_CLR:1;
      uint64_t PS6_QUAD1_PWRDWN_CLR:1;
      uint64_t PS6_QUAD2_PWRDWN_CLR:1;
      uint64_t PS6_QUAD3_PWRDWN_CLR:1;
      uint64_t PS7_QUAD0_PWRDWN_CLR:1;
      uint64_t PS7_QUAD1_PWRDWN_CLR:1;
      uint64_t PS7_QUAD2_PWRDWN_CLR:1;
      uint64_t PS7_QUAD3_PWRDWN_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS8_QUAD0_PWRDWN_CLR:1;
      uint64_t PS8_QUAD1_PWRDWN_CLR:1;
      uint64_t PS8_QUAD2_PWRDWN_CLR:1;
      uint64_t PS8_QUAD3_PWRDWN_CLR:1;
      uint64_t PS9_QUAD0_PWRDWN_CLR:1;
      uint64_t PS9_QUAD1_PWRDWN_CLR:1;
      uint64_t PS9_QUAD2_PWRDWN_CLR:1;
      uint64_t PS9_QUAD3_PWRDWN_CLR:1;
      uint64_t PS10_QUAD0_PWRDWN_CLR:1;
      uint64_t PS10_QUAD1_PWRDWN_CLR:1;
      uint64_t PS10_QUAD2_PWRDWN_CLR:1;
      uint64_t PS10_QUAD3_PWRDWN_CLR:1;
      uint64_t PS11_QUAD0_PWRDWN_CLR:1;
      uint64_t PS11_QUAD1_PWRDWN_CLR:1;
      uint64_t PS11_QUAD2_PWRDWN_CLR:1;
      uint64_t PS11_QUAD3_PWRDWN_CLR:1;
      uint64_t PS12_QUAD0_PWRDWN_CLR:1;
      uint64_t PS12_QUAD1_PWRDWN_CLR:1;
      uint64_t PS12_QUAD2_PWRDWN_CLR:1;
      uint64_t PS12_QUAD3_PWRDWN_CLR:1;
      uint64_t PS13_QUAD0_PWRDWN_CLR:1;
      uint64_t PS13_QUAD1_PWRDWN_CLR:1;
      uint64_t PS13_QUAD2_PWRDWN_CLR:1;
      uint64_t PS13_QUAD3_PWRDWN_CLR:1;
      uint64_t PS14_QUAD0_PWRDWN_CLR:1;
      uint64_t PS14_QUAD1_PWRDWN_CLR:1;
      uint64_t PS14_QUAD2_PWRDWN_CLR:1;
      uint64_t PS14_QUAD3_PWRDWN_CLR:1;
      uint64_t PS15_QUAD0_PWRDWN_CLR:1;
      uint64_t PS15_QUAD1_PWRDWN_CLR:1;
      uint64_t PS15_QUAD2_PWRDWN_CLR:1;
      uint64_t PS15_QUAD3_PWRDWN_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS16_QUAD0_PWRDWN_CLR:1;
      uint64_t PS16_QUAD1_PWRDWN_CLR:1;
      uint64_t PS16_QUAD2_PWRDWN_CLR:1;
      uint64_t PS16_QUAD3_PWRDWN_CLR:1;
      uint64_t PS17_QUAD0_PWRDWN_CLR:1;
      uint64_t PS17_QUAD1_PWRDWN_CLR:1;
      uint64_t PS17_QUAD2_PWRDWN_CLR:1;
      uint64_t PS17_QUAD3_PWRDWN_CLR:1;
      uint64_t PS18_QUAD0_PWRDWN_CLR:1;
      uint64_t PS18_QUAD1_PWRDWN_CLR:1;
      uint64_t PS18_QUAD2_PWRDWN_CLR:1;
      uint64_t PS18_QUAD3_PWRDWN_CLR:1;
      uint64_t PS19_QUAD0_PWRDWN_CLR:1;
      uint64_t PS19_QUAD1_PWRDWN_CLR:1;
      uint64_t PS19_QUAD2_PWRDWN_CLR:1;
      uint64_t PS19_QUAD3_PWRDWN_CLR:1;
      uint64_t PS20_QUAD0_PWRDWN_CLR:1;
      uint64_t PS20_QUAD1_PWRDWN_CLR:1;
      uint64_t PS20_QUAD2_PWRDWN_CLR:1;
      uint64_t PS20_QUAD3_PWRDWN_CLR:1;
      uint64_t PS21_QUAD0_PWRDWN_CLR:1;
      uint64_t PS21_QUAD1_PWRDWN_CLR:1;
      uint64_t PS21_QUAD2_PWRDWN_CLR:1;
      uint64_t PS21_QUAD3_PWRDWN_CLR:1;
      uint64_t PS22_QUAD0_PWRDWN_CLR:1;
      uint64_t PS22_QUAD1_PWRDWN_CLR:1;
      uint64_t PS22_QUAD2_PWRDWN_CLR:1;
      uint64_t PS22_QUAD3_PWRDWN_CLR:1;
      uint64_t PS23_QUAD0_PWRDWN_CLR:1;
      uint64_t PS23_QUAD1_PWRDWN_CLR:1;
      uint64_t PS23_QUAD2_PWRDWN_CLR:1;
      uint64_t PS23_QUAD3_PWRDWN_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS24_QUAD0_PWRDWN_CLR:1;
      uint64_t PS24_QUAD1_PWRDWN_CLR:1;
      uint64_t PS24_QUAD2_PWRDWN_CLR:1;
      uint64_t PS24_QUAD3_PWRDWN_CLR:1;
      uint64_t PS25_QUAD0_PWRDWN_CLR:1;
      uint64_t PS25_QUAD1_PWRDWN_CLR:1;
      uint64_t PS25_QUAD2_PWRDWN_CLR:1;
      uint64_t PS25_QUAD3_PWRDWN_CLR:1;
      uint64_t PS26_QUAD0_PWRDWN_CLR:1;
      uint64_t PS26_QUAD1_PWRDWN_CLR:1;
      uint64_t PS26_QUAD2_PWRDWN_CLR:1;
      uint64_t PS26_QUAD3_PWRDWN_CLR:1;
      uint64_t PS27_QUAD0_PWRDWN_CLR:1;
      uint64_t PS27_QUAD1_PWRDWN_CLR:1;
      uint64_t PS27_QUAD2_PWRDWN_CLR:1;
      uint64_t PS27_QUAD3_PWRDWN_CLR:1;
      uint64_t PS28_QUAD0_PWRDWN_CLR:1;
      uint64_t PS28_QUAD1_PWRDWN_CLR:1;
      uint64_t PS28_QUAD2_PWRDWN_CLR:1;
      uint64_t PS28_QUAD3_PWRDWN_CLR:1;
      uint64_t PS29_QUAD0_PWRDWN_CLR:1;
      uint64_t PS29_QUAD1_PWRDWN_CLR:1;
      uint64_t PS29_QUAD2_PWRDWN_CLR:1;
      uint64_t PS29_QUAD3_PWRDWN_CLR:1;
      uint64_t PS30_QUAD0_PWRDWN_CLR:1;
      uint64_t PS30_QUAD1_PWRDWN_CLR:1;
      uint64_t PS30_QUAD2_PWRDWN_CLR:1;
      uint64_t PS30_QUAD3_PWRDWN_CLR:1;
      uint64_t PS31_QUAD0_PWRDWN_CLR:1;
      uint64_t PS31_QUAD1_PWRDWN_CLR:1;
      uint64_t PS31_QUAD2_PWRDWN_CLR:1;
      uint64_t PS31_QUAD3_PWRDWN_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNCLR3;

  uint8_t res7[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD_PWRDWN_SET:1;
      uint64_t Reserved:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDPWRDWNSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD_PWRDWN_CLR:1;
      uint64_t Reserved:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDPWRDWNCLR;

  uint8_t res8[312];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTIDREG_WRENA:4;
      uint64_t Reserved:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTIDWRENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTID_CHK_EN:4;
      uint64_t Reserved:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTIDENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIAG_MODE_EN:4;
      uint64_t Reserved1:4;
      uint64_t DIAG_CMP_VALUE:4;
      uint64_t Reserved2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTIDDIAGCTRL;

  uint8_t res9[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0_QUAD0_MSTID:16;
      uint64_t PS0_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS0MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0_QUAD2_MSTID:16;
      uint64_t PS0_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS0MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS1_QUAD0_MSTID:16;
      uint64_t PS1_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS1MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS1_QUAD2_MSTID:16;
      uint64_t PS1_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS1MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS2_QUAD0_MSTID:16;
      uint64_t PS2_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS2MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS2_QUAD2_MSTID:16;
      uint64_t PS2_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS2MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS3_QUAD0_MSTID:16;
      uint64_t PS3_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS3MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS3_QUAD2_MSTID:16;
      uint64_t PS3_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS3MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS4_QUAD0_MSTID:16;
      uint64_t PS4_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS4MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS4_QUAD2_MSTID:16;
      uint64_t PS4_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS4MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS5_QUAD0_MSTID:16;
      uint64_t PS5_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS5MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS5_QUAD2_MSTID:16;
      uint64_t PS5_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS5MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS6_QUAD0_MSTID:16;
      uint64_t PS6_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS6MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS6_QUAD2_MSTID:16;
      uint64_t PS6_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS6MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS7_QUAD0_MSTID:16;
      uint64_t PS7_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS7MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS7_QUAD2_MSTID:16;
      uint64_t PS7_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS7MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS8_QUAD0_MSTID:16;
      uint64_t PS8_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS8MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS8_QUAD2_MSTID:16;
      uint64_t PS8_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS8MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS9_QUAD0_MSTID:16;
      uint64_t PS9_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS9MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS9_QUAD2_MSTID:16;
      uint64_t PS9_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS9MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS10_QUAD0_MSTID:16;
      uint64_t PS10_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS10MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS10_QUAD2_MSTID:16;
      uint64_t PS10_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS10MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS11_QUAD0_MSTID:16;
      uint64_t PS11_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS11MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS11_QUAD2_MSTID:16;
      uint64_t PS11_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS11MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS12_QUAD0_MSTID:16;
      uint64_t PS12_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS12MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS12_QUAD2_MSTID:16;
      uint64_t PS12_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS12MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS13_QUAD0_MSTID:16;
      uint64_t PS13_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS13MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS13_QUAD2_MSTID:16;
      uint64_t PS13_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS13MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS14_QUAD0_MSTID:16;
      uint64_t PS14_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS14MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS14_QUAD2_MSTID:16;
      uint64_t PS14_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS14MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS15_QUAD0_MSTID:16;
      uint64_t PS15_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS15MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS15_QUAD2_MSTID:16;
      uint64_t PS15_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS15MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS16_QUAD0_MSTID:16;
      uint64_t PS16_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS16MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS16_QUAD2_MSTID:16;
      uint64_t PS16_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS16MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS17_QUAD0_MSTID:16;
      uint64_t PS17_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS17MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS17_QUAD2_MSTID:16;
      uint64_t PS17_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS17MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS18_QUAD0_MSTID:16;
      uint64_t PS18_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS18MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS18_QUAD2_MSTID:16;
      uint64_t PS18_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS18MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS19_QUAD0_MSTID:16;
      uint64_t PS19_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS19MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS19_QUAD2_MSTID:16;
      uint64_t PS19_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS19MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS20_QUAD0_MSTID:16;
      uint64_t PS20_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS20MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS20_QUAD2_MSTID:16;
      uint64_t PS20_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS20MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS21_QUAD0_MSTID:16;
      uint64_t PS21_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS21MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS21_QUAD2_MSTID:16;
      uint64_t PS21_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS21MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS22_QUAD0_MSTID:16;
      uint64_t PS22_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS22MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS22_QUAD2_MSTID:16;
      uint64_t PS22_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS22MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS23_QUAD0_MSTID:16;
      uint64_t PS23_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS23MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS23_QUAD2_MSTID:16;
      uint64_t PS23_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS23MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS24_QUAD0_MSTID:16;
      uint64_t PS24_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS24MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS24_QUAD2_MSTID:16;
      uint64_t PS24_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS24MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS25_QUAD0_MSTID:16;
      uint64_t PS25_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS25MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS25_QUAD2_MSTID:16;
      uint64_t PS25_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS25MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS26_QUAD0_MSTID:16;
      uint64_t PS26_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS26MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS26_QUAD2_MSTID:16;
      uint64_t PS26_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS26MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS27_QUAD0_MSTID:16;
      uint64_t PS27_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS27MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS27_QUAD2_MSTID:16;
      uint64_t PS27_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS27MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS28_QUAD0_MSTID:16;
      uint64_t PS28_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS28MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS28_QUAD2_MSTID:16;
      uint64_t PS28_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS28MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS29_QUAD0_MSTID:16;
      uint64_t PS29_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS29MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS29_QUAD2_MSTID:16;
      uint64_t PS29_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS29MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS30_QUAD0_MSTID:16;
      uint64_t PS30_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS30MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS30_QUAD2_MSTID:16;
      uint64_t PS30_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS30MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS31_QUAD0_MSTID:16;
      uint64_t PS31_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS31MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS31_QUAD2_MSTID:16;
      uint64_t PS31_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS31MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0_QUAD0_MSTID:16;
      uint64_t PPS0_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS0MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS0_QUAD2_MSTID:16;
      uint64_t PPS0_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS0MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS1_QUAD0_MSTID:16;
      uint64_t PPS1_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS1MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS1_QUAD2_MSTID:16;
      uint64_t PPS1_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS1MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS2_QUAD0_MSTID:16;
      uint64_t PPS2_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS2MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS2_QUAD2_MSTID:16;
      uint64_t PPS2_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS2MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS3_QUAD0_MSTID:16;
      uint64_t PPS3_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS3MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS3_QUAD2_MSTID:16;
      uint64_t PPS3_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS3MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS4_QUAD0_MSTID:16;
      uint64_t PPS4_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS4MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS4_QUAD2_MSTID:16;
      uint64_t PPS4_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS4MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS5_QUAD0_MSTID:16;
      uint64_t PPS5_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS5MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS5_QUAD2_MSTID:16;
      uint64_t PPS5_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS5MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS6_QUAD0_MSTID:16;
      uint64_t PPS6_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS6MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS6_QUAD2_MSTID:16;
      uint64_t PPS6_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS6MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS7_QUAD0_MSTID:16;
      uint64_t PPS7_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS7MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPS7_QUAD2_MSTID:16;
      uint64_t PPS7_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPS7MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE0_QUAD0_MSTID:16;
      uint64_t PPSE0_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE0MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE0_QUAD2_MSTID:16;
      uint64_t PPSE0_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE0MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE1_QUAD0_MSTID:16;
      uint64_t PPSE1_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE1MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE1_QUAD2_MSTID:16;
      uint64_t PPSE1_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE1MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE2_QUAD0_MSTID:16;
      uint64_t PPSE2_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE2MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE2_QUAD2_MSTID:16;
      uint64_t PPSE2_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE2MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE3_QUAD0_MSTID:16;
      uint64_t PPSE3_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE3MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE3_QUAD2_MSTID:16;
      uint64_t PPSE3_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE3MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE4_QUAD0_MSTID:16;
      uint64_t PPSE4_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE4MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE4_QUAD2_MSTID:16;
      uint64_t PPSE4_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE4MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE5_QUAD0_MSTID:16;
      uint64_t PPSE5_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE5MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE5_QUAD2_MSTID:16;
      uint64_t PPSE5_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE5MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE6_QUAD0_MSTID:16;
      uint64_t PPSE6_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE6MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE6_QUAD2_MSTID:16;
      uint64_t PPSE6_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE6MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE7_QUAD0_MSTID:16;
      uint64_t PPSE7_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE7MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE7_QUAD2_MSTID:16;
      uint64_t PPSE7_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE7MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE8_QUAD0_MSTID:16;
      uint64_t PPSE8_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE8MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE8_QUAD2_MSTID:16;
      uint64_t PPSE8_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE8MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE9_QUAD0_MSTID:16;
      uint64_t PPSE9_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE9MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE9_QUAD2_MSTID:16;
      uint64_t PPSE9_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE9MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE10_QUAD0_MSTID:16;
      uint64_t PPSE10_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE10MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE10_QUAD2_MSTID:16;
      uint64_t PPSE10_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE10MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE11_QUAD0_MSTID:16;
      uint64_t PPSE11_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE11MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE11_QUAD2_MSTID:16;
      uint64_t PPSE11_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE11MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE12_QUAD0_MSTID:16;
      uint64_t PPSE12_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE12MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE12_QUAD2_MSTID:16;
      uint64_t PPSE12_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE12MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE13_QUAD0_MSTID:16;
      uint64_t PPSE13_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE13MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE13_QUAD2_MSTID:16;
      uint64_t PPSE13_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE13MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE14_QUAD0_MSTID:16;
      uint64_t PPSE14_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE14MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE14_QUAD2_MSTID:16;
      uint64_t PPSE14_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE14MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE15_QUAD0_MSTID:16;
      uint64_t PPSE15_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE15MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE15_QUAD2_MSTID:16;
      uint64_t PPSE15_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE15MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE16_QUAD0_MSTID:16;
      uint64_t PPSE16_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE16MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE16_QUAD2_MSTID:16;
      uint64_t PPSE16_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE16MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE17_QUAD0_MSTID:16;
      uint64_t PPSE17_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE17MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE17_QUAD2_MSTID:16;
      uint64_t PPSE17_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE17MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE18_QUAD0_MSTID:16;
      uint64_t PPSE18_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE18MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE18_QUAD2_MSTID:16;
      uint64_t PPSE18_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE18MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE19_QUAD0_MSTID:16;
      uint64_t PPSE19_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE19MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE19_QUAD2_MSTID:16;
      uint64_t PPSE19_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE19MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE20_QUAD0_MSTID:16;
      uint64_t PPSE20_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE20MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE20_QUAD2_MSTID:16;
      uint64_t PPSE20_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE20MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE21_QUAD0_MSTID:16;
      uint64_t PPSE21_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE21MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE21_QUAD2_MSTID:16;
      uint64_t PPSE21_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE21MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE22_QUAD0_MSTID:16;
      uint64_t PPSE22_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE22MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE22_QUAD2_MSTID:16;
      uint64_t PPSE22_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE22MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE23_QUAD0_MSTID:16;
      uint64_t PPSE23_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE23MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE23_QUAD2_MSTID:16;
      uint64_t PPSE23_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE23MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE24_QUAD0_MSTID:16;
      uint64_t PPSE24_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE24MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE24_QUAD2_MSTID:16;
      uint64_t PPSE24_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE24MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE25_QUAD0_MSTID:16;
      uint64_t PPSE25_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE25MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE25_QUAD2_MSTID:16;
      uint64_t PPSE25_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE25MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE26_QUAD0_MSTID:16;
      uint64_t PPSE26_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE26MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE26_QUAD2_MSTID:16;
      uint64_t PPSE26_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE26MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE27_QUAD0_MSTID:16;
      uint64_t PPSE27_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE27MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE27_QUAD2_MSTID:16;
      uint64_t PPSE27_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE27MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE28_QUAD0_MSTID:16;
      uint64_t PPSE28_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE28MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE28_QUAD2_MSTID:16;
      uint64_t PPSE28_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE28MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE29_QUAD0_MSTID:16;
      uint64_t PPSE29_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE29MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE29_QUAD2_MSTID:16;
      uint64_t PPSE29_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE29MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE30_QUAD0_MSTID:16;
      uint64_t PPSE30_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE30MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE30_QUAD2_MSTID:16;
      uint64_t PPSE30_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE30MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE31_QUAD0_MSTID:16;
      uint64_t PPSE31_QUAD1_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE31MSTID_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSE31_QUAD2_MSTID:16;
      uint64_t PPSE31_QUAD3_MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPSE31MSTID_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0MSTID:16;
      uint64_t PCS1MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS0MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS2MSTID:16;
      uint64_t PCS3MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS1MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS4MSTID:16;
      uint64_t PCS5MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS2MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS6MSTID:16;
      uint64_t PCS7MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS3MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS8MSTID:16;
      uint64_t PCS9MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS4MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS10MSTID:16;
      uint64_t PCS11MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS5MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS12MSTID:16;
      uint64_t PCS13MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS6MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS14MSTID:16;
      uint64_t PCS15MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS7MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS16MSTID:16;
      uint64_t PCS17MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS8MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS18MSTID:16;
      uint64_t PCS19MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS9MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS20MSTID:16;
      uint64_t PCS21MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS10MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS22MSTID:16;
      uint64_t PCS23MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS11MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS24MSTID:16;
      uint64_t PCS25MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS12MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS26MSTID:16;
      uint64_t PCS27MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS13MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS28MSTID:16;
      uint64_t PCS29MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS14MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS30MSTID:16;
      uint64_t PCS31MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS15MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS32MSTID:16;
      uint64_t PCS33MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS16MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS34MSTID:16;
      uint64_t PCS35MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS17MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS36MSTID:16;
      uint64_t PCS37MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS18MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS38MSTID:16;
      uint64_t PCS39MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS19MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS40MSTID:16;
      uint64_t PCS41MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS20MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS42MSTID:16;
      uint64_t PCS43MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS21MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS44MSTID:16;
      uint64_t PCS45MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS22MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS46MSTID:16;
      uint64_t PCS47MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS23MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS48MSTID:16;
      uint64_t PCS49MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS24MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS50MSTID:16;
      uint64_t PCS51MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS25MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS52MSTID:16;
      uint64_t PCS53MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS26MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS54MSTID:16;
      uint64_t PCS55MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS27MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS56MSTID:16;
      uint64_t PCS57MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS28MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS58MSTID:16;
      uint64_t PCS59MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS29MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS60MSTID:16;
      uint64_t PCS61MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS30MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS62MSTID:16;
      uint64_t PCS63MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS31MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPCS0MSTID:16;
      uint64_t PPCS1MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCS0MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPCS2MSTID:16;
      uint64_t PPCS3MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCS1MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPCS4MSTID:16;
      uint64_t PPCS5MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCS2MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPCS6MSTID:16;
      uint64_t PPCS7MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCS3MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPCS8MSTID:16;
      uint64_t PPCS9MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCS4MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPCS10MSTID:16;
      uint64_t PPCS11MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCS5MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPCS12MSTID:16;
      uint64_t PPCS13MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCS6MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPCS14MSTID:16;
      uint64_t PPCS15MSTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPCS7MSTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCREXT_MSTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCREXTMSTID;

};

#define MSS_PCR1 (*(volatile struct MSS_PCR1_tag *) 0x2f78000)

struct TOP_PBIST_tag
{
  uint32_t PBIST_A0;
  uint32_t PBIST_A1;
  uint32_t PBIST_A2;
  uint32_t PBIST_A3;
  uint32_t PBIST_L0;
  uint32_t PBIST_L1;
  uint32_t PBIST_L2;
  uint32_t PBIST_L3;
  uint32_t PBIST_DD10;
  uint32_t PBIST_DE10;
  uint8_t res0[8];

  uint32_t PBIST_CA0;
  uint32_t PBIST_CA1;
  uint32_t PBIST_CA2;
  uint32_t PBIST_CA3;
  uint32_t PBIST_CL0;
  uint32_t PBIST_CL1;
  uint32_t PBIST_CL2;
  uint32_t PBIST_CL3;
  uint32_t PBIST_CI0;
  uint32_t PBIST_CI1;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBIST_CI2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBIST_CI2;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBIST_CI3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBIST_CI3;

  uint8_t res2[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM:8;
      uint64_t DWR:8;
      uint64_t RDS:8;
      uint64_t RGS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_RAMT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DLR0:8;
      uint64_t DLR1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBIST_DLR;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_CMS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_CMS;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_PC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_PC;

  uint8_t res5[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCR0:8;
      uint64_t SCR1:8;
      uint64_t SCR2:8;
      uint64_t SCR3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_SCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCR4:8;
      uint64_t SCR5:8;
      uint64_t SCR6:8;
      uint64_t SCR7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_SCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS0:8;
      uint64_t CS1:8;
      uint64_t CS2:8;
      uint64_t CS3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_CS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_FDLY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_FDLY;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_PACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_PACT;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_ID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_ID;

  uint8_t res8[3];

  uint32_t PBIST_OVR;
  uint8_t res9[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_FSFR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_FSFR0;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_FSFR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_FSFR1;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_FSRCR0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_FSRCR0;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_FSRCR1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_FSRCR1;

  uint8_t res13[3];

  uint32_t PBIST_FSRA0;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBIST_FSRA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBIST_FSRA1;

  uint8_t res14[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBIST_FSRDL0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_FSRDL0;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBIST_FSRDL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_FSRDL1;

  uint32_t PBIST_MARGIN;
  uint32_t PBIST_WRENZ;
  uint32_t PBIST_PGS;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBIST_ROM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PBIST_ROM;

  uint8_t res16[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALGO0:8;
      uint64_t ALGO1:8;
      uint64_t ALGO2:8;
      uint64_t ALGO3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_ALGO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RINFOL0:8;
      uint64_t RINFOL1:8;
      uint64_t RINFOL2:8;
      uint64_t RINFOL3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_RINFOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RINFOU0:8;
      uint64_t RINFOU1:8;
      uint64_t RINFOU2:8;
      uint64_t RINFOU3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_RINFOU;

};

#define TOP_PBIST (*(volatile struct TOP_PBIST_tag *) 0x2f79500)

struct MSS_R5SS_STC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RS_CNT_B1:2;
      uint64_t NU1:3;
      uint64_t SCANEN_HIGH_CAP_IDLE_CYCLE:3;
      uint64_t CAP_IDLE_CYCLE:3;
      uint64_t NU0:5;
      uint64_t INTCOUNT_B16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST_ENA_B4:4;
      uint64_t ROM_ACCESS_INV:1;
      uint64_t LP_SCAN_MODE:1;
      uint64_t CODEC_SPREAD_MODE:1;
      uint64_t NU3:1;
      uint64_t SEG0_CORE_SEL:4;
      uint64_t NU2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO_PRELOAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC_CADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORE1_ICOUNT:16;
      uint64_t CORE2_ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCCICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_DONE:1;
      uint64_t TEST_FAIL:1;
      uint64_t NU5:6;
      uint64_t ST_ACTIVE:4;
      uint64_t NU4:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCGSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU1_FAIL_B1:1;
      uint64_t CPU2_FAIL_B1:1;
      uint64_t TO_ER_B1:1;
      uint64_t FSEG_ID:2;
      uint64_t NU6:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCFSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELF_CHECK_KEY_B4:4;
      uint64_t FAULT_INS_B1:1;
      uint64_t NU7:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCSCSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC_CADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV3:3;
      uint64_t NU11:5;
      uint64_t CLKDIV2:3;
      uint64_t NU10:5;
      uint64_t CLKDIV1:3;
      uint64_t NU9:5;
      uint64_t CLKDIV0:3;
      uint64_t NU8:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC_CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGID_PLOAD:2;
      uint64_t NU12:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STC_SEGPLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEG_START_ADDR:20;
      uint64_t NU13:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEG0_START_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEG_START_ADDR:20;
      uint64_t NU14:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEG1_START_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEG_START_ADDR:20;
      uint64_t NU15:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEG2_START_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEG_START_ADDR:20;
      uint64_t NU16:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEG3_START_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR8:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR9:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR11:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR12:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR13:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR14:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR15:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR16:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR17:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR18:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR19:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR20:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR21:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR22:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR23:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR24:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR25:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR26:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1MISR27:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_CURMISR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR8:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR9:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR11:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR12:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR13:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR14:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR15:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR16:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR17:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR18:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR19:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR20:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR21:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR22:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR23:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR24:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR25:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR26:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2MISR27:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_CURMISR_27;

};

#define MSS_R5SS_STC (*(volatile struct MSS_R5SS_STC_tag *) 0x2f79800)

struct MSS_DCCA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCENA:4;
      uint64_t ERRENA:4;
      uint64_t SINGLESHOT:4;
      uint64_t DONENA:4;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:5;
      uint64_t CUSTOM:1;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t NU1:2;
      uint64_t SCHEME:3;
      uint64_t NU2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED0:20;
      uint64_t NU3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDSEED0:16;
      uint64_t NU4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALIDSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED1:20;
      uint64_t NU5:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t DONE:1;
      uint64_t NU6:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT0:20;
      uint64_t NU7:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID0:16;
      uint64_t NU8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT1:20;
      uint64_t NU9:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC1:4;
      uint64_t NU10:8;
      uint64_t KEY_B4:4;
      uint64_t NU11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC0:4;
      uint64_t NU12:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC0;

};

#define MSS_DCCA (*(volatile struct MSS_DCCA_tag *) 0x2f79c00)

struct MSS_DCCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCENA:4;
      uint64_t ERRENA:4;
      uint64_t SINGLESHOT:4;
      uint64_t DONENA:4;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:5;
      uint64_t CUSTOM:1;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t NU1:2;
      uint64_t SCHEME:3;
      uint64_t NU2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED0:20;
      uint64_t NU3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDSEED0:16;
      uint64_t NU4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALIDSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED1:20;
      uint64_t NU5:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t DONE:1;
      uint64_t NU6:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT0:20;
      uint64_t NU7:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID0:16;
      uint64_t NU8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT1:20;
      uint64_t NU9:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC1:4;
      uint64_t NU10:8;
      uint64_t KEY_B4:4;
      uint64_t NU11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC0:4;
      uint64_t NU12:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC0;

};

#define MSS_DCCB (*(volatile struct MSS_DCCB_tag *) 0x2f79d00)

struct MSS_DCCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCENA:4;
      uint64_t ERRENA:4;
      uint64_t SINGLESHOT:4;
      uint64_t DONENA:4;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:5;
      uint64_t CUSTOM:1;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t NU1:2;
      uint64_t SCHEME:3;
      uint64_t NU2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED0:20;
      uint64_t NU3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDSEED0:16;
      uint64_t NU4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALIDSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED1:20;
      uint64_t NU5:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t DONE:1;
      uint64_t NU6:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT0:20;
      uint64_t NU7:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID0:16;
      uint64_t NU8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT1:20;
      uint64_t NU9:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC1:4;
      uint64_t NU10:8;
      uint64_t KEY_B4:4;
      uint64_t NU11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC0:4;
      uint64_t NU12:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC0;

};

#define MSS_DCCC (*(volatile struct MSS_DCCC_tag *) 0x2f79e00)

struct MSS_DCCD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCENA:4;
      uint64_t ERRENA:4;
      uint64_t SINGLESHOT:4;
      uint64_t DONENA:4;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:5;
      uint64_t CUSTOM:1;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t NU1:2;
      uint64_t SCHEME:3;
      uint64_t NU2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED0:20;
      uint64_t NU3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDSEED0:16;
      uint64_t NU4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALIDSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED1:20;
      uint64_t NU5:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t DONE:1;
      uint64_t NU6:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT0:20;
      uint64_t NU7:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID0:16;
      uint64_t NU8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT1:20;
      uint64_t NU9:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC1:4;
      uint64_t NU10:8;
      uint64_t KEY_B4:4;
      uint64_t NU11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC0:4;
      uint64_t NU12:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC0;

};

#define MSS_DCCD (*(volatile struct MSS_DCCD_tag *) 0x2f79f00)

struct MSS_RTIA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT0EN:1;
      uint64_t CNT1EN:1;
      uint64_t RESERVED1:13;
      uint64_t COS:1;
      uint64_t NTUSEL:4;
      uint64_t RESERVED2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBEXT:1;
      uint64_t INC:1;
      uint64_t RESERVED3:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCNTR0:1;
      uint64_t CAPCNTR1:1;
      uint64_t RESERVED4:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0SEL:1;
      uint64_t RESERVED5:3;
      uint64_t COMP1SEL:1;
      uint64_t RESERVED6:3;
      uint64_t COMP2SEL:1;
      uint64_t RESERVED7:3;
      uint64_t COMP3SEL:1;
      uint64_t RESERVED8:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBLCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBLCOMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBHCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBHCOMP;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINT0:1;
      uint64_t SETINT1:1;
      uint64_t SETINT2:1;
      uint64_t SETINT3:1;
      uint64_t RESERVED9:4;
      uint64_t SETDMA0:1;
      uint64_t SETDMA1:1;
      uint64_t SETDMA2:1;
      uint64_t SETDMA3:1;
      uint64_t RESERVED10:4;
      uint64_t SETTBINT:1;
      uint64_t SETOVL0INT:1;
      uint64_t SETOVL1INT:1;
      uint64_t RESERVED11:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEARINT0:1;
      uint64_t CLEARINT1:1;
      uint64_t CLEARINT2:1;
      uint64_t CLEARINT3:1;
      uint64_t RESERVED12:4;
      uint64_t CLEARDMA0:1;
      uint64_t CLEARDMA1:1;
      uint64_t CLEARDMA2:1;
      uint64_t CLEARDMA3:1;
      uint64_t RESERVED13:4;
      uint64_t CLEARTBINT:1;
      uint64_t CLEAROVL0INT:1;
      uint64_t CLEAROVL1INT:1;
      uint64_t RESERVED14:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0:1;
      uint64_t INT1:1;
      uint64_t INT2:1;
      uint64_t INT3:1;
      uint64_t RESERVED15:12;
      uint64_t TBINT:1;
      uint64_t OVL0INT:1;
      uint64_t OVL1INT:1;
      uint64_t RESERVED16:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTFLAG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDPRLD:12;
      uint64_t RESERVED17:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDPRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDST:1;
      uint64_t DWDST:1;
      uint64_t KEYST:1;
      uint64_t STARTTIMEVIOL:1;
      uint64_t ENDTIMEVIOL:1;
      uint64_t DWWD_ST:1;
      uint64_t RESERVED18:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDKEY:16;
      uint64_t RESERVED19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCNTR:25;
      uint64_t RESERVED20:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDRXN:4;
      uint64_t RESERVED21:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDRXNCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDSIZECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLRENABLE0:4;
      uint64_t RESERVED22:4;
      uint64_t INTCLRENABLE1:4;
      uint64_t RESERVED23:4;
      uint64_t INTCLRENABLE2:4;
      uint64_t RESERVED24:4;
      uint64_t INTCLRENABLE3:4;
      uint64_t RESERVED25:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTCLRENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3CLR;

};

#define MSS_RTIA (*(volatile struct MSS_RTIA_tag *) 0x2f7a000)

struct MSS_RTIB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT0EN:1;
      uint64_t CNT1EN:1;
      uint64_t RESERVED1:13;
      uint64_t COS:1;
      uint64_t NTUSEL:4;
      uint64_t RESERVED2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBEXT:1;
      uint64_t INC:1;
      uint64_t RESERVED3:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCNTR0:1;
      uint64_t CAPCNTR1:1;
      uint64_t RESERVED4:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0SEL:1;
      uint64_t RESERVED5:3;
      uint64_t COMP1SEL:1;
      uint64_t RESERVED6:3;
      uint64_t COMP2SEL:1;
      uint64_t RESERVED7:3;
      uint64_t COMP3SEL:1;
      uint64_t RESERVED8:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBLCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBLCOMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBHCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBHCOMP;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINT0:1;
      uint64_t SETINT1:1;
      uint64_t SETINT2:1;
      uint64_t SETINT3:1;
      uint64_t RESERVED9:4;
      uint64_t SETDMA0:1;
      uint64_t SETDMA1:1;
      uint64_t SETDMA2:1;
      uint64_t SETDMA3:1;
      uint64_t RESERVED10:4;
      uint64_t SETTBINT:1;
      uint64_t SETOVL0INT:1;
      uint64_t SETOVL1INT:1;
      uint64_t RESERVED11:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEARINT0:1;
      uint64_t CLEARINT1:1;
      uint64_t CLEARINT2:1;
      uint64_t CLEARINT3:1;
      uint64_t RESERVED12:4;
      uint64_t CLEARDMA0:1;
      uint64_t CLEARDMA1:1;
      uint64_t CLEARDMA2:1;
      uint64_t CLEARDMA3:1;
      uint64_t RESERVED13:4;
      uint64_t CLEARTBINT:1;
      uint64_t CLEAROVL0INT:1;
      uint64_t CLEAROVL1INT:1;
      uint64_t RESERVED14:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0:1;
      uint64_t INT1:1;
      uint64_t INT2:1;
      uint64_t INT3:1;
      uint64_t RESERVED15:12;
      uint64_t TBINT:1;
      uint64_t OVL0INT:1;
      uint64_t OVL1INT:1;
      uint64_t RESERVED16:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTFLAG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDPRLD:12;
      uint64_t RESERVED17:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDPRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDST:1;
      uint64_t DWDST:1;
      uint64_t KEYST:1;
      uint64_t STARTTIMEVIOL:1;
      uint64_t ENDTIMEVIOL:1;
      uint64_t DWWD_ST:1;
      uint64_t RESERVED18:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDKEY:16;
      uint64_t RESERVED19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCNTR:25;
      uint64_t RESERVED20:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDRXN:4;
      uint64_t RESERVED21:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDRXNCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDSIZECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLRENABLE0:4;
      uint64_t RESERVED22:4;
      uint64_t INTCLRENABLE1:4;
      uint64_t RESERVED23:4;
      uint64_t INTCLRENABLE2:4;
      uint64_t RESERVED24:4;
      uint64_t INTCLRENABLE3:4;
      uint64_t RESERVED25:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTCLRENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3CLR;

};

#define MSS_RTIB (*(volatile struct MSS_RTIB_tag *) 0x2f7a100)

struct MSS_RTIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT0EN:1;
      uint64_t CNT1EN:1;
      uint64_t RESERVED1:13;
      uint64_t COS:1;
      uint64_t NTUSEL:4;
      uint64_t RESERVED2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBEXT:1;
      uint64_t INC:1;
      uint64_t RESERVED3:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCNTR0:1;
      uint64_t CAPCNTR1:1;
      uint64_t RESERVED4:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0SEL:1;
      uint64_t RESERVED5:3;
      uint64_t COMP1SEL:1;
      uint64_t RESERVED6:3;
      uint64_t COMP2SEL:1;
      uint64_t RESERVED7:3;
      uint64_t COMP3SEL:1;
      uint64_t RESERVED8:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBLCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBLCOMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBHCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBHCOMP;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINT0:1;
      uint64_t SETINT1:1;
      uint64_t SETINT2:1;
      uint64_t SETINT3:1;
      uint64_t RESERVED9:4;
      uint64_t SETDMA0:1;
      uint64_t SETDMA1:1;
      uint64_t SETDMA2:1;
      uint64_t SETDMA3:1;
      uint64_t RESERVED10:4;
      uint64_t SETTBINT:1;
      uint64_t SETOVL0INT:1;
      uint64_t SETOVL1INT:1;
      uint64_t RESERVED11:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEARINT0:1;
      uint64_t CLEARINT1:1;
      uint64_t CLEARINT2:1;
      uint64_t CLEARINT3:1;
      uint64_t RESERVED12:4;
      uint64_t CLEARDMA0:1;
      uint64_t CLEARDMA1:1;
      uint64_t CLEARDMA2:1;
      uint64_t CLEARDMA3:1;
      uint64_t RESERVED13:4;
      uint64_t CLEARTBINT:1;
      uint64_t CLEAROVL0INT:1;
      uint64_t CLEAROVL1INT:1;
      uint64_t RESERVED14:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0:1;
      uint64_t INT1:1;
      uint64_t INT2:1;
      uint64_t INT3:1;
      uint64_t RESERVED15:12;
      uint64_t TBINT:1;
      uint64_t OVL0INT:1;
      uint64_t OVL1INT:1;
      uint64_t RESERVED16:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTFLAG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDPRLD:12;
      uint64_t RESERVED17:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDPRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDST:1;
      uint64_t DWDST:1;
      uint64_t KEYST:1;
      uint64_t STARTTIMEVIOL:1;
      uint64_t ENDTIMEVIOL:1;
      uint64_t DWWD_ST:1;
      uint64_t RESERVED18:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDKEY:16;
      uint64_t RESERVED19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCNTR:25;
      uint64_t RESERVED20:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDRXN:4;
      uint64_t RESERVED21:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDRXNCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDSIZECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLRENABLE0:4;
      uint64_t RESERVED22:4;
      uint64_t INTCLRENABLE1:4;
      uint64_t RESERVED23:4;
      uint64_t INTCLRENABLE2:4;
      uint64_t RESERVED24:4;
      uint64_t INTCLRENABLE3:4;
      uint64_t RESERVED25:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTCLRENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3CLR;

};

#define MSS_RTIC (*(volatile struct MSS_RTIC_tag *) 0x2f7a200)

struct MSS_WDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT0EN:1;
      uint64_t CNT1EN:1;
      uint64_t RESERVED1:13;
      uint64_t COS:1;
      uint64_t NTUSEL:4;
      uint64_t RESERVED2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBEXT:1;
      uint64_t INC:1;
      uint64_t RESERVED3:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCNTR0:1;
      uint64_t CAPCNTR1:1;
      uint64_t RESERVED4:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0SEL:1;
      uint64_t RESERVED5:3;
      uint64_t COMP1SEL:1;
      uint64_t RESERVED6:3;
      uint64_t COMP2SEL:1;
      uint64_t RESERVED7:3;
      uint64_t COMP3SEL:1;
      uint64_t RESERVED8:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBLCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBLCOMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBHCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBHCOMP;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINT0:1;
      uint64_t SETINT1:1;
      uint64_t SETINT2:1;
      uint64_t SETINT3:1;
      uint64_t RESERVED9:4;
      uint64_t SETDMA0:1;
      uint64_t SETDMA1:1;
      uint64_t SETDMA2:1;
      uint64_t SETDMA3:1;
      uint64_t RESERVED10:4;
      uint64_t SETTBINT:1;
      uint64_t SETOVL0INT:1;
      uint64_t SETOVL1INT:1;
      uint64_t RESERVED11:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEARINT0:1;
      uint64_t CLEARINT1:1;
      uint64_t CLEARINT2:1;
      uint64_t CLEARINT3:1;
      uint64_t RESERVED12:4;
      uint64_t CLEARDMA0:1;
      uint64_t CLEARDMA1:1;
      uint64_t CLEARDMA2:1;
      uint64_t CLEARDMA3:1;
      uint64_t RESERVED13:4;
      uint64_t CLEARTBINT:1;
      uint64_t CLEAROVL0INT:1;
      uint64_t CLEAROVL1INT:1;
      uint64_t RESERVED14:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0:1;
      uint64_t INT1:1;
      uint64_t INT2:1;
      uint64_t INT3:1;
      uint64_t RESERVED15:12;
      uint64_t TBINT:1;
      uint64_t OVL0INT:1;
      uint64_t OVL1INT:1;
      uint64_t RESERVED16:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTFLAG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDPRLD:12;
      uint64_t RESERVED17:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDPRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDST:1;
      uint64_t DWDST:1;
      uint64_t KEYST:1;
      uint64_t STARTTIMEVIOL:1;
      uint64_t ENDTIMEVIOL:1;
      uint64_t DWWD_ST:1;
      uint64_t RESERVED18:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDKEY:16;
      uint64_t RESERVED19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCNTR:25;
      uint64_t RESERVED20:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDRXN:4;
      uint64_t RESERVED21:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDRXNCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDSIZECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLRENABLE0:4;
      uint64_t RESERVED22:4;
      uint64_t INTCLRENABLE1:4;
      uint64_t RESERVED23:4;
      uint64_t INTCLRENABLE2:4;
      uint64_t RESERVED24:4;
      uint64_t INTCLRENABLE3:4;
      uint64_t RESERVED25:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTCLRENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3CLR;

};

#define MSS_WDT (*(volatile struct MSS_WDT_tag *) 0x2f7a300)

struct MSS_ESM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIESR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIECR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSF:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMEPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTOFFH:9;
      uint64_t RESERVED:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIOFFHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTOFFL:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIOFFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTCP:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMLTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTCP:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMLTCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EKEY:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMEKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIESR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIECR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR4;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIESR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIECR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR7;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPSR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIESR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIECR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILSR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR10;

};

#define MSS_ESM (*(volatile struct MSS_ESM_tag *) 0x2f7a400)

struct MSS_CCMR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STE1:1;
      uint64_t STET1:1;
      uint64_t NU0:6;
      uint64_t STC1:1;
      uint64_t NU1:7;
      uint64_t CMPE1:1;
      uint64_t NU2:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MKEY1:4;
      uint64_t NU3:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMKEYR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STE2:1;
      uint64_t STET2:1;
      uint64_t NU4:6;
      uint64_t STC2:1;
      uint64_t NU5:7;
      uint64_t CMPE2:1;
      uint64_t NU6:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MKEY2:4;
      uint64_t NU7:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMKEYR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STE3:1;
      uint64_t STET3:1;
      uint64_t NU8:6;
      uint64_t STC3:1;
      uint64_t NU9:7;
      uint64_t CMPE3:1;
      uint64_t NU10:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MKEY3:4;
      uint64_t NU11:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMKEYR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_INV:8;
      uint64_t NU12:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMPOLCNTRL;

};

#define MSS_CCMR (*(volatile struct MSS_CCMR_tag *) 0x2f7ac00)

struct MSS_I2C_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A9_A0:10;
      uint64_t NU:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AL:1;
      uint64_t NACK:1;
      uint64_t ARDY:1;
      uint64_t ICRRDY:1;
      uint64_t ICXRDY:1;
      uint64_t SCD:1;
      uint64_t AAS:1;
      uint64_t NU:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AL:1;
      uint64_t NACK:1;
      uint64_t ARDY:1;
      uint64_t ICRRDY:1;
      uint64_t ICXRDY:1;
      uint64_t SCD:1;
      uint64_t NU1:2;
      uint64_t AD0:1;
      uint64_t AAS:1;
      uint64_t XSMT:1;
      uint64_t RSFULL:1;
      uint64_t BB:1;
      uint64_t NACKSNT:1;
      uint64_t SDIR:1;
      uint64_t NU2:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICCL15_ICCL0:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICCLKL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICCH15_ICCLH0:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICCLKH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICDC15_ICDC0:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D7_D0:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A9_A0:10;
      uint64_t NU:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D7_D0:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDXR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BC2_BC1_BC0:3;
      uint64_t FDF:1;
      uint64_t STB:1;
      uint64_t IRS:1;
      uint64_t DLB:1;
      uint64_t RM:1;
      uint64_t XA:1;
      uint64_t TRX:1;
      uint64_t MST:1;
      uint64_t STP:1;
      uint64_t NU1:1;
      uint64_t STT:1;
      uint64_t FREE:1;
      uint64_t NACKMOD:1;
      uint64_t NU2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCODE:3;
      uint64_t NU1:5;
      uint64_t TESTMD:4;
      uint64_t NU2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCM:1;
      uint64_t IGNACK:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICEMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPSC7_IPSC0:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:8;
      uint64_t CLASS:8;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TYPE:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDMAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_RESERVED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_RESERVED2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFUNC0:1;
      uint64_t NU:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPFUNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIR0:1;
      uint64_t PDIR1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIN0:1;
      uint64_t PDIN1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDOUT0:1;
      uint64_t PDOUT1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDSET0:1;
      uint64_t PDSET1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDCLR0:1;
      uint64_t PDCLR1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDRV0:1;
      uint64_t PDRV1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDRV;

};

#define MSS_I2C (*(volatile struct MSS_I2C_tag *) 0x2f7b000)

struct MSS_GIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t NU0:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOGCR;

  union
  {
    uint64_t R:33;
    struct
    {
      uint64_t GIOPWDN:1;
      uint64_t NU:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(8))) GIOPWDN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOINTDET_0:8;
      uint64_t GIOINTDET_1:8;
      uint64_t GIOINTDET_2:8;
      uint64_t GIOINTDET_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOINTDET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPOL_0:8;
      uint64_t GIOPOL_1:8;
      uint64_t GIOPOL_2:8;
      uint64_t GIOPOL_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOENASET_0:8;
      uint64_t GIOENASET_1:8;
      uint64_t GIOENASET_2:8;
      uint64_t GIOENASET_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOENASET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOENACLR_0:8;
      uint64_t GIOENACLR_1:8;
      uint64_t GIOENACLR_2:8;
      uint64_t GIOENACLR_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOENACLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOLVLSET_0:8;
      uint64_t GIOLVLSET_1:8;
      uint64_t GIOLVLSET_2:8;
      uint64_t GIOLVLSET_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOLVLSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOLVLCLR_0:8;
      uint64_t GIOLVLCLR_1:8;
      uint64_t GIOLVLCLR_2:8;
      uint64_t GIOLVLCLR_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOLVLCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOFLG_0:8;
      uint64_t GIOFLG_1:8;
      uint64_t GIOFLG_2:8;
      uint64_t GIOFLG_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOOFFA:6;
      uint64_t NU1:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOOFFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOOFFB:6;
      uint64_t NU2:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOOFFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOEMUA:6;
      uint64_t NU3:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOEMUA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOEMUB:6;
      uint64_t NU4:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOEMUB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRA:8;
      uint64_t NU5:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODINA:8;
      uint64_t NU11:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODINA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTA:8;
      uint64_t NU17:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETA:8;
      uint64_t NU23:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSETA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRA:8;
      uint64_t NU29:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOCLRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRA:8;
      uint64_t NU35:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISA:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLA:8;
      uint64_t NU35:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRB:8;
      uint64_t NU6:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODINB:8;
      uint64_t NU12:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODINB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTB:8;
      uint64_t NU18:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETB:8;
      uint64_t NU24:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSETB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRB:8;
      uint64_t NU30:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOCLRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRB:8;
      uint64_t NU36:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISB:8;
      uint64_t NU36:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLB:8;
      uint64_t NU36:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRC:8;
      uint64_t NU7:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODINC:8;
      uint64_t NU13:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTC:8;
      uint64_t NU19:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETC:8;
      uint64_t NU25:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSETC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRC:8;
      uint64_t NU31:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOCLRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRC:8;
      uint64_t NU37:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISC:8;
      uint64_t NU37:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLC:8;
      uint64_t NU37:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRD:8;
      uint64_t NU8:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIND:8;
      uint64_t NU14:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTD:8;
      uint64_t NU20:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETD:8;
      uint64_t NU26:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSETD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRD:8;
      uint64_t NU32:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOCLRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRD:8;
      uint64_t NU38:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISD:8;
      uint64_t NU38:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLD:8;
      uint64_t NU38:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRE:8;
      uint64_t NU9:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODINE:8;
      uint64_t NU15:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTE:8;
      uint64_t NU21:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETE:8;
      uint64_t NU27:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSETE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRE:8;
      uint64_t NU33:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOCLRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRE:8;
      uint64_t NU39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISE:8;
      uint64_t NU39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLE:8;
      uint64_t NU39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRF:8;
      uint64_t NU10:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODINF:8;
      uint64_t NU16:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODINF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTF:8;
      uint64_t NU22:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETF:8;
      uint64_t NU28:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSETF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRF:8;
      uint64_t NU34:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOCLRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRF:8;
      uint64_t NU40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISF:8;
      uint64_t NU40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLF:8;
      uint64_t NU40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRG:8;
      uint64_t NU9:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODING:8;
      uint64_t NU15:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTG:8;
      uint64_t NU21:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETG:8;
      uint64_t NU27:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSETG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRG:8;
      uint64_t NU33:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOCLRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRG:8;
      uint64_t NU39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISG:8;
      uint64_t NU39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLG:8;
      uint64_t NU39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRH:8;
      uint64_t NU10:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODINH:8;
      uint64_t NU16:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODINH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTH:8;
      uint64_t NU22:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETH:8;
      uint64_t NU28:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSETH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRH:8;
      uint64_t NU34:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOCLRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRH:8;
      uint64_t NU40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISH:8;
      uint64_t NU40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLH:8;
      uint64_t NU40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOSRCA:8;
      uint64_t NU35:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSRCA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOSRCB:8;
      uint64_t NU36:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSRCB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOSRCC:8;
      uint64_t NU37:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSRCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOSRCD:8;
      uint64_t NU38:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSRCD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOSRCE:8;
      uint64_t NU39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSRCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOSRCF:8;
      uint64_t NU40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSRCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOSRCG:8;
      uint64_t NU39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSRCG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOSRCH:8;
      uint64_t NU40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOSRCH;

};

#define MSS_GIO (*(volatile struct MSS_GIO_tag *) 0x2f7b400)

struct MSS_ECC_AGG_R5A_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b27_16:12;
      uint64_t b29_28:2;
      uint64_t b31_30:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) rev;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b10_0:11;
      uint64_t reservedSpace0:4;
      uint64_t b15_15:1;
      uint64_t b23_16:8;
      uint64_t b24_24:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) vector;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b10_0:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) stat;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b27_16:12;
      uint64_t b29_28:2;
      uint64_t b31_30:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) wrap_rev;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ctrl;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_ctrl1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b15_0:16;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_ctrl2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
      uint64_t b4_4:1;
      uint64_t b6_5:2;
      uint64_t b7_7:1;
      uint64_t b9_8:2;
      uint64_t b11_10:2;
      uint64_t b12_12:1;
      uint64_t b14_13:2;
      uint64_t b15_15:1;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t reservedSpace0:7;
      uint64_t b9_9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_eoi_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_status_reg0;

  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_enable_set_reg0;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_enable_clr_reg0;

  uint8_t res4[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_eoi_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_status_reg0;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_enable_set_reg0;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_enable_clr_reg0;

  uint8_t res7[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_enable_set;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_enable_clr;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_status_set;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_status_clr;

};

#define MSS_ECC_AGG_R5A (*(volatile struct MSS_ECC_AGG_R5A_tag *) 0x2f7b800)

struct MSS_ECC_AGG_R5B_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b27_16:12;
      uint64_t b29_28:2;
      uint64_t b31_30:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) rev;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b10_0:11;
      uint64_t reservedSpace0:4;
      uint64_t b15_15:1;
      uint64_t b23_16:8;
      uint64_t b24_24:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) vector;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b10_0:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) stat;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b27_16:12;
      uint64_t b29_28:2;
      uint64_t b31_30:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) wrap_rev;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ctrl;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_ctrl1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b15_0:16;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_ctrl2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
      uint64_t b4_4:1;
      uint64_t b6_5:2;
      uint64_t b7_7:1;
      uint64_t b9_8:2;
      uint64_t b11_10:2;
      uint64_t b12_12:1;
      uint64_t b14_13:2;
      uint64_t b15_15:1;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t reservedSpace0:7;
      uint64_t b9_9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_eoi_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_status_reg0;

  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_enable_set_reg0;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_enable_clr_reg0;

  uint8_t res4[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_eoi_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_status_reg0;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_enable_set_reg0;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
      uint64_t b9_9:1;
      uint64_t b10_10:1;
      uint64_t b11_11:1;
      uint64_t b12_12:1;
      uint64_t b13_13:1;
      uint64_t b14_14:1;
      uint64_t b15_15:1;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
      uint64_t b18_18:1;
      uint64_t b19_19:1;
      uint64_t b20_20:1;
      uint64_t b21_21:1;
      uint64_t b22_22:1;
      uint64_t b23_23:1;
      uint64_t b24_24:1;
      uint64_t b25_25:1;
      uint64_t b26_26:1;
      uint64_t b27_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_enable_clr_reg0;

  uint8_t res7[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_enable_set;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_enable_clr;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_status_set;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_status_clr;

};

#define MSS_ECC_AGG_R5B (*(volatile struct MSS_ECC_AGG_R5B_tag *) 0x2f7bc00)

struct MSS_ECC_AGG_MSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b27_16:12;
      uint64_t b29_28:2;
      uint64_t b31_30:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) rev;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b10_0:11;
      uint64_t reservedSpace0:4;
      uint64_t b15_15:1;
      uint64_t b23_16:8;
      uint64_t b24_24:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) vector;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b10_0:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) stat;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b27_16:12;
      uint64_t b29_28:2;
      uint64_t b31_30:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) wrap_rev;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
      uint64_t b8_8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ctrl;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_ctrl1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b15_0:16;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_ctrl2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
      uint64_t b4_4:1;
      uint64_t b6_5:2;
      uint64_t b7_7:1;
      uint64_t b9_8:2;
      uint64_t b11_10:2;
      uint64_t b12_12:1;
      uint64_t b14_13:2;
      uint64_t b15_15:1;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t reservedSpace0:7;
      uint64_t b9_9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) err_stat3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_eoi_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_status_reg0;

  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_enable_set_reg0;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) sec_enable_clr_reg0;

  uint8_t res4[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_eoi_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_status_reg0;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_enable_set_reg0;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
      uint64_t b4_4:1;
      uint64_t b5_5:1;
      uint64_t b6_6:1;
      uint64_t b7_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ded_enable_clr_reg0;

  uint8_t res7[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_enable_set;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_enable_clr;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_status_set;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b1_0:2;
      uint64_t b3_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aggr_status_clr;

};

#define MSS_ECC_AGG_MSS (*(volatile struct MSS_ECC_AGG_MSS_tag *) 0x2f7c000)

struct MSS_SPIA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t nRESET:1;
      uint64_t NU:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t CLKMOD:1;
      uint64_t NU1:6;
      uint64_t POWERDOWN:1;
      uint64_t NU2:7;
      uint64_t LOOPBACK:1;
      uint64_t NU3:7;
      uint64_t SPIEN:1;
      uint64_t NU4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRENA:1;
      uint64_t TIMEOUTENA:1;
      uint64_t PARERRENA:1;
      uint64_t DESYNCENA:1;
      uint64_t BITERRENA:1;
      uint64_t NU1:1;
      uint64_t OVRNINTENA:1;
      uint64_t NU2:1;
      uint64_t RXINTENA:1;
      uint64_t TXINTENA:1;
      uint64_t NU3:6;
      uint64_t DMAREQEN:1;
      uint64_t NU4:7;
      uint64_t ENABLEHIGHZ:1;
      uint64_t NU5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRLVL:1;
      uint64_t TIMEOUTLVL:1;
      uint64_t PARERRLVL:1;
      uint64_t DESYNCLVL:1;
      uint64_t BITERRLVL:1;
      uint64_t NU1:1;
      uint64_t OVRNINTLVL:1;
      uint64_t NU2:1;
      uint64_t RXINTLVL:1;
      uint64_t TXINTLVL:1;
      uint64_t NU3:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPILVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRFLG:1;
      uint64_t TIMEOUTFLG:1;
      uint64_t PARERRFLG:1;
      uint64_t DESYNCFLG:1;
      uint64_t BITERRFLG:1;
      uint64_t NU1:1;
      uint64_t OVRNINTFLG:1;
      uint64_t NU2:1;
      uint64_t RXINTFLG:1;
      uint64_t TXINTFLG:1;
      uint64_t NU3:14;
      uint64_t BUFINITACTIVE:1;
      uint64_t NU4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSFUN:8;
      uint64_t ENAFUN:1;
      uint64_t CLKFUN:1;
      uint64_t SIMOFUN0:1;
      uint64_t SOMIFUN0:1;
      uint64_t NU:4;
      uint64_t SIMOFUN:8;
      uint64_t SOMIFUN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIR:8;
      uint64_t ENADIR:1;
      uint64_t CLKDIR:1;
      uint64_t SIMODIR0:1;
      uint64_t SOMIDIR0:1;
      uint64_t NU:4;
      uint64_t SIMODIR:8;
      uint64_t SOMIDIR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIN:8;
      uint64_t ENADIN:1;
      uint64_t CLKDIN:1;
      uint64_t SIMODIN0:1;
      uint64_t SOMIDIN0:1;
      uint64_t NU:4;
      uint64_t SIMODIN:8;
      uint64_t SOMIDIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDOUT:8;
      uint64_t ENADOUT:1;
      uint64_t CLKDOUT:1;
      uint64_t SIMODOUT0:1;
      uint64_t SOMIDOUT0:1;
      uint64_t NU:4;
      uint64_t SIMODOUT:8;
      uint64_t SOMIDOUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSSET:8;
      uint64_t ENASET:1;
      uint64_t CLKSET:1;
      uint64_t SIMOSET0:1;
      uint64_t SOMISET0:1;
      uint64_t NU:4;
      uint64_t SIMOSET:8;
      uint64_t SOMISET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSCLR:8;
      uint64_t ENACLR:1;
      uint64_t CLKCLR:1;
      uint64_t SIMOCLR0:1;
      uint64_t SOMICLR0:1;
      uint64_t NU:4;
      uint64_t SIMOCLR:8;
      uint64_t SOMICLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSPDR:8;
      uint64_t ENAPDR:1;
      uint64_t CLKPDR:1;
      uint64_t SIMOPDR0:1;
      uint64_t SOMIPDR0:1;
      uint64_t NU:4;
      uint64_t SIMOPDR:8;
      uint64_t SOMIPDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC6;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t NU1:1;
      uint64_t CSHOLD:1;
      uint64_t NU2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLENERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIBUF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLENERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIEMU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2EDELAY:8;
      uint64_t T2EDELAY:8;
      uint64_t T2CDELAY:8;
      uint64_t C2TDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDELAY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSDEF0:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t NU:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DISCSTIMERS:1;
      uint64_t HDUPLEX_ENA:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t NU:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DISCSTIMERS:1;
      uint64_t HDUPLEX_ENA:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t NU:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DISCSTIMERS:1;
      uint64_t HDUPLEX_ENA:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t NU:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DISCSTIMERS:1;
      uint64_t HDUPLEX_ENA:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND0:1;
      uint64_t INTVECT0:5;
      uint64_t NU:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND1:1;
      uint64_t INTVECT1:5;
      uint64_t NU:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTVECT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSSRS:8;
      uint64_t ENASRS:1;
      uint64_t CLKSRS:1;
      uint64_t SIMOSRS0:1;
      uint64_t SOMISRS0:1;
      uint64_t NU:4;
      uint64_t SIMOSRS7:8;
      uint64_t SOMISRS7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMODE0:2;
      uint64_t MMODE0:3;
      uint64_t MODCLKPOL0:1;
      uint64_t HSM_MODE0:1;
      uint64_t NU1:1;
      uint64_t PMODE1:2;
      uint64_t MMODE1:3;
      uint64_t MODCLKPOL1:1;
      uint64_t HSM_MODE1:1;
      uint64_t NU2:1;
      uint64_t PMODE2:2;
      uint64_t MMODE2:3;
      uint64_t MODCLKPOL2:1;
      uint64_t HSM_MODE2:1;
      uint64_t NU3:1;
      uint64_t PMODE3:2;
      uint64_t MMODE3:3;
      uint64_t MODCLKPOL3:1;
      uint64_t HSM_MODE3:1;
      uint64_t NU4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSPIENA:1;
      uint64_t NU1:7;
      uint64_t EXTENDED_BUF_ENA:4;
      uint64_t NU2:4;
      uint64_t RXRAMACCESS:1;
      uint64_t NU3:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIBSPIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINTENSUS:16;
      uint64_t SETINTENRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRINTENSUS:16;
      uint64_t CLRINTENRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINTLVLSUS:16;
      uint64_t SETINTLVLRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRINTLVLSUS:16;
      uint64_t CLRINTLVLRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLGSUS:16;
      uint64_t INTFLGRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTFLAG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TICKVALUE:16;
      uint64_t NU:12;
      uint64_t CLKCTRL:2;
      uint64_t RELOAD:1;
      uint64_t TICKENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TICKCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU1:8;
      uint64_t LPEND:8;
      uint64_t NU2:8;
      uint64_t TGINSERVICE:5;
      uint64_t NU3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTGPEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG7CTRL;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA4CTRL;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICOUNT2;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT4;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LARGE_COUNT:1;
      uint64_t NU:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACNTLEN;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDEN:4;
      uint64_t NU1:4;
      uint64_t PTESTEN:1;
      uint64_t NU2:7;
      uint64_t EDAC_MODE:4;
      uint64_t NU3:4;
      uint64_t SBE_EVT_EN:4;
      uint64_t NU4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR_ECC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UERR_FLG0:1;
      uint64_t UERR_FLG1:1;
      uint64_t NU1:6;
      uint64_t SBE_FLG0:1;
      uint64_t SBE_FLG1:1;
      uint64_t NU2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR_ECC_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UERRADDR1:11;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UERRADDR0:11;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOVRN_BUF_ADDR:11;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXOVRN_BUF_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPENA:1;
      uint64_t LPBKTYPE:1;
      uint64_t CTRLSCSPINERR:1;
      uint64_t ERRSCSPIN:3;
      uint64_t NU1:2;
      uint64_t IOLPBKTSTENA:4;
      uint64_t NU2:4;
      uint64_t CTRLDLENERR:1;
      uint64_t CTRLTIMEOUT:1;
      uint64_t CTRLPARERR:1;
      uint64_t CTRLDESYNC:1;
      uint64_t CTRLBITERR:1;
      uint64_t NU3:3;
      uint64_t SCSFAILFLG:1;
      uint64_t NU4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOLPBKTSTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPRESCLAE_FMT0:11;
      uint64_t NU1:5;
      uint64_t EPRESCLAE_FMT1:11;
      uint64_t NU2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTENDED_PRESCALE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPRESCLAE_FMT2:11;
      uint64_t NU3:5;
      uint64_t EPRESCLAE_FMT3:11;
      uint64_t NU4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTENDED_PRESCALE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIAG_EN:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCDIAG_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEFLG0:1;
      uint64_t SEFLG1:1;
      uint64_t NU1:14;
      uint64_t DEFLG0:1;
      uint64_t DEFLG1:1;
      uint64_t NU2:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCDIAG_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBERRADDR1:11;
      uint64_t NU1:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBERRADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBERRADDR0:11;
      uint64_t NU2:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBERRADDR0;

  uint8_t res7[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t NU:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIREV;

};

#define MSS_SPIA (*(volatile struct MSS_SPIA_tag *) 0x2f7e800)

struct MSS_SPIB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t nRESET:1;
      uint64_t NU:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t CLKMOD:1;
      uint64_t NU1:6;
      uint64_t POWERDOWN:1;
      uint64_t NU2:7;
      uint64_t LOOPBACK:1;
      uint64_t NU3:7;
      uint64_t SPIEN:1;
      uint64_t NU4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRENA:1;
      uint64_t TIMEOUTENA:1;
      uint64_t PARERRENA:1;
      uint64_t DESYNCENA:1;
      uint64_t BITERRENA:1;
      uint64_t NU1:1;
      uint64_t OVRNINTENA:1;
      uint64_t NU2:1;
      uint64_t RXINTENA:1;
      uint64_t TXINTENA:1;
      uint64_t NU3:6;
      uint64_t DMAREQEN:1;
      uint64_t NU4:7;
      uint64_t ENABLEHIGHZ:1;
      uint64_t NU5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRLVL:1;
      uint64_t TIMEOUTLVL:1;
      uint64_t PARERRLVL:1;
      uint64_t DESYNCLVL:1;
      uint64_t BITERRLVL:1;
      uint64_t NU1:1;
      uint64_t OVRNINTLVL:1;
      uint64_t NU2:1;
      uint64_t RXINTLVL:1;
      uint64_t TXINTLVL:1;
      uint64_t NU3:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPILVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRFLG:1;
      uint64_t TIMEOUTFLG:1;
      uint64_t PARERRFLG:1;
      uint64_t DESYNCFLG:1;
      uint64_t BITERRFLG:1;
      uint64_t NU1:1;
      uint64_t OVRNINTFLG:1;
      uint64_t NU2:1;
      uint64_t RXINTFLG:1;
      uint64_t TXINTFLG:1;
      uint64_t NU3:14;
      uint64_t BUFINITACTIVE:1;
      uint64_t NU4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSFUN:8;
      uint64_t ENAFUN:1;
      uint64_t CLKFUN:1;
      uint64_t SIMOFUN0:1;
      uint64_t SOMIFUN0:1;
      uint64_t NU:4;
      uint64_t SIMOFUN:8;
      uint64_t SOMIFUN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIR:8;
      uint64_t ENADIR:1;
      uint64_t CLKDIR:1;
      uint64_t SIMODIR0:1;
      uint64_t SOMIDIR0:1;
      uint64_t NU:4;
      uint64_t SIMODIR:8;
      uint64_t SOMIDIR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIN:8;
      uint64_t ENADIN:1;
      uint64_t CLKDIN:1;
      uint64_t SIMODIN0:1;
      uint64_t SOMIDIN0:1;
      uint64_t NU:4;
      uint64_t SIMODIN:8;
      uint64_t SOMIDIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDOUT:8;
      uint64_t ENADOUT:1;
      uint64_t CLKDOUT:1;
      uint64_t SIMODOUT0:1;
      uint64_t SOMIDOUT0:1;
      uint64_t NU:4;
      uint64_t SIMODOUT:8;
      uint64_t SOMIDOUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSSET:8;
      uint64_t ENASET:1;
      uint64_t CLKSET:1;
      uint64_t SIMOSET0:1;
      uint64_t SOMISET0:1;
      uint64_t NU:4;
      uint64_t SIMOSET:8;
      uint64_t SOMISET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSCLR:8;
      uint64_t ENACLR:1;
      uint64_t CLKCLR:1;
      uint64_t SIMOCLR0:1;
      uint64_t SOMICLR0:1;
      uint64_t NU:4;
      uint64_t SIMOCLR:8;
      uint64_t SOMICLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSPDR:8;
      uint64_t ENAPDR:1;
      uint64_t CLKPDR:1;
      uint64_t SIMOPDR0:1;
      uint64_t SOMIPDR0:1;
      uint64_t NU:4;
      uint64_t SIMOPDR:8;
      uint64_t SOMIPDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC6;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t NU1:1;
      uint64_t CSHOLD:1;
      uint64_t NU2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLENERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIBUF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLENERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIEMU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2EDELAY:8;
      uint64_t T2EDELAY:8;
      uint64_t T2CDELAY:8;
      uint64_t C2TDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDELAY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSDEF0:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t NU:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DISCSTIMERS:1;
      uint64_t HDUPLEX_ENA:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t NU:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DISCSTIMERS:1;
      uint64_t HDUPLEX_ENA:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t NU:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DISCSTIMERS:1;
      uint64_t HDUPLEX_ENA:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t NU:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DISCSTIMERS:1;
      uint64_t HDUPLEX_ENA:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND0:1;
      uint64_t INTVECT0:5;
      uint64_t NU:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND1:1;
      uint64_t INTVECT1:5;
      uint64_t NU:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTVECT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSSRS:8;
      uint64_t ENASRS:1;
      uint64_t CLKSRS:1;
      uint64_t SIMOSRS0:1;
      uint64_t SOMISRS0:1;
      uint64_t NU:4;
      uint64_t SIMOSRS7:8;
      uint64_t SOMISRS7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMODE0:2;
      uint64_t MMODE0:3;
      uint64_t MODCLKPOL0:1;
      uint64_t HSM_MODE0:1;
      uint64_t NU1:1;
      uint64_t PMODE1:2;
      uint64_t MMODE1:3;
      uint64_t MODCLKPOL1:1;
      uint64_t HSM_MODE1:1;
      uint64_t NU2:1;
      uint64_t PMODE2:2;
      uint64_t MMODE2:3;
      uint64_t MODCLKPOL2:1;
      uint64_t HSM_MODE2:1;
      uint64_t NU3:1;
      uint64_t PMODE3:2;
      uint64_t MMODE3:3;
      uint64_t MODCLKPOL3:1;
      uint64_t HSM_MODE3:1;
      uint64_t NU4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSPIENA:1;
      uint64_t NU1:7;
      uint64_t EXTENDED_BUF_ENA:4;
      uint64_t NU2:4;
      uint64_t RXRAMACCESS:1;
      uint64_t NU3:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIBSPIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINTENSUS:16;
      uint64_t SETINTENRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRINTENSUS:16;
      uint64_t CLRINTENRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINTLVLSUS:16;
      uint64_t SETINTLVLRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRINTLVLSUS:16;
      uint64_t CLRINTLVLRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLGSUS:16;
      uint64_t INTFLGRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTFLAG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TICKVALUE:16;
      uint64_t NU:12;
      uint64_t CLKCTRL:2;
      uint64_t RELOAD:1;
      uint64_t TICKENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TICKCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU1:8;
      uint64_t LPEND:8;
      uint64_t NU2:8;
      uint64_t TGINSERVICE:5;
      uint64_t NU3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTGPEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:8;
      uint64_t PSTART:8;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t NU:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG7CTRL;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:6;
      uint64_t COUNTBIT17:1;
      uint64_t BUFID7:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA4CTRL;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICOUNT2;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT4;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LARGE_COUNT:1;
      uint64_t NU:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACNTLEN;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDEN:4;
      uint64_t NU1:4;
      uint64_t PTESTEN:1;
      uint64_t NU2:7;
      uint64_t EDAC_MODE:4;
      uint64_t NU3:4;
      uint64_t SBE_EVT_EN:4;
      uint64_t NU4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR_ECC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UERR_FLG0:1;
      uint64_t UERR_FLG1:1;
      uint64_t NU1:6;
      uint64_t SBE_FLG0:1;
      uint64_t SBE_FLG1:1;
      uint64_t NU2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR_ECC_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UERRADDR1:11;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UERRADDR0:11;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOVRN_BUF_ADDR:11;
      uint64_t NU:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXOVRN_BUF_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPENA:1;
      uint64_t LPBKTYPE:1;
      uint64_t CTRLSCSPINERR:1;
      uint64_t ERRSCSPIN:3;
      uint64_t NU1:2;
      uint64_t IOLPBKTSTENA:4;
      uint64_t NU2:4;
      uint64_t CTRLDLENERR:1;
      uint64_t CTRLTIMEOUT:1;
      uint64_t CTRLPARERR:1;
      uint64_t CTRLDESYNC:1;
      uint64_t CTRLBITERR:1;
      uint64_t NU3:3;
      uint64_t SCSFAILFLG:1;
      uint64_t NU4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOLPBKTSTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPRESCLAE_FMT0:11;
      uint64_t NU1:5;
      uint64_t EPRESCLAE_FMT1:11;
      uint64_t NU2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTENDED_PRESCALE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPRESCLAE_FMT2:11;
      uint64_t NU3:5;
      uint64_t EPRESCLAE_FMT3:11;
      uint64_t NU4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTENDED_PRESCALE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIAG_EN:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCDIAG_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEFLG0:1;
      uint64_t SEFLG1:1;
      uint64_t NU1:14;
      uint64_t DEFLG0:1;
      uint64_t DEFLG1:1;
      uint64_t NU2:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCDIAG_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBERRADDR1:11;
      uint64_t NU1:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBERRADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBERRADDR0:11;
      uint64_t NU2:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBERRADDR0;

  uint8_t res7[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t NU:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIREV;

};

#define MSS_SPIB (*(volatile struct MSS_SPIB_tag *) 0x2f7ea00)

struct MSS_SCIA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMM_MODE:1;
      uint64_t TIMING_MODE:1;
      uint64_t PARITY_ENA:1;
      uint64_t PARITY:1;
      uint64_t STOP:1;
      uint64_t CLOCK:1;
      uint64_t RESERVED1:1;
      uint64_t SW_nRESET:1;
      uint64_t SLEEP:1;
      uint64_t POWERDOWN:1;
      uint64_t RESERVED2:6;
      uint64_t LOOP_BACK:1;
      uint64_t CONT:1;
      uint64_t RESERVED3:6;
      uint64_t RXENA:1;
      uint64_t TXENA:1;
      uint64_t RESERVED4:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_BRKDT_INT:1;
      uint64_t SET_WAKEUP_INT:1;
      uint64_t RESERVED1:6;
      uint64_t SET_TX_INT:1;
      uint64_t SET_RX_INT:1;
      uint64_t RESERVED2:6;
      uint64_t SET_TX_DMA:1;
      uint64_t SET_RX_DMA:1;
      uint64_t SET_RX_DMA_ALL:1;
      uint64_t RESERVED3:5;
      uint64_t SET_PE_INT:1;
      uint64_t SET_OE_INT:1;
      uint64_t SET_FE_INT:1;
      uint64_t RESERVED4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_BRKDT_INT:1;
      uint64_t CLR_WAKEUP_INT:1;
      uint64_t RESERVED1:6;
      uint64_t CLR_TX_INT:1;
      uint64_t CLR_RX_INT:1;
      uint64_t RESERVED2:6;
      uint64_t CLR_TX_DMA:1;
      uint64_t CLR_RX_DMA:1;
      uint64_t CLR_RX_DMA_ALL:1;
      uint64_t RESERVED3:5;
      uint64_t CLR_PE_INT:1;
      uint64_t CLR_OE_INT:1;
      uint64_t CLR_FE_INT:1;
      uint64_t RESERVED4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_BRKDT_INT_LVL:1;
      uint64_t SET_WAKEUP_INT_LVL:1;
      uint64_t RESERVED1:6;
      uint64_t SET_TX_INT_LVL:1;
      uint64_t SET_RX_INT_LVL:1;
      uint64_t RESERVED2:5;
      uint64_t SET_INC_BR_INT_LVL:1;
      uint64_t RESERVED3:2;
      uint64_t SET_RX_DMA_ALL_INT_LVL:1;
      uint64_t RESERVED4:5;
      uint64_t SET_PE_INT_LVL:1;
      uint64_t SET_OE_INT_LVL:1;
      uint64_t SET_FE_INT_LVL:1;
      uint64_t RESERVED5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_BRKDT_INT_LVL:1;
      uint64_t CLR_WAKEUP_INT_LVL:1;
      uint64_t RESERVED1:6;
      uint64_t CLR_TX_INT_LVL:1;
      uint64_t CLR_RX_INT_LVL:1;
      uint64_t RESERVED2:5;
      uint64_t CLR_INC_BR_INT_LVL:1;
      uint64_t RESERVED3:2;
      uint64_t CLR_RX_DMA_ALL_INT_LVL:1;
      uint64_t RESERVED4:5;
      uint64_t CLR_PE_INT_LVL:1;
      uint64_t CLR_OE_INT_LVL:1;
      uint64_t CLR_FE_INT_LVL:1;
      uint64_t RESERVED5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRKDT:1;
      uint64_t WAKEUP:1;
      uint64_t IDLE:1;
      uint64_t Bus_busy_flag:1;
      uint64_t RESERVED1:4;
      uint64_t TXRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXWAKE:1;
      uint64_t TX_EMPTY:1;
      uint64_t RXWAKE:1;
      uint64_t RESERVED2:11;
      uint64_t PE:1;
      uint64_t OE:1;
      uint64_t FE:1;
      uint64_t RESERVED3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT0:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIINTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT1:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIINTVECT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAR:3;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUD:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIBAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ED:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCITD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_FUNC:1;
      uint64_t RX_FUNC:1;
      uint64_t TX_FUNC:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DIR:1;
      uint64_t RX_DIR:1;
      uint64_t TX_DIR:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_IN:1;
      uint64_t RX_DATA_IN:1;
      uint64_t TX_DATA_IN:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_OUT:1;
      uint64_t RX_DATA_OUT:1;
      uint64_t TX_DATA_OUT:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_SET:1;
      uint64_t RX_DATA_SET:1;
      uint64_t TX_DATA_SET:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_CLR:1;
      uint64_t RX_DATA_CLR:1;
      uint64_t TX_DATA_CLR:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PDR:1;
      uint64_t RX_PDR:1;
      uint64_t TX_PDR:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PD:1;
      uint64_t RX_PD:1;
      uint64_t TX_PD:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PSL:1;
      uint64_t RX_PSL:1;
      uint64_t TX_PSL:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SL:1;
      uint64_t RX_SL:1;
      uint64_t TX_SL:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO9;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP_ENA:1;
      uint64_t LBP_ENA:1;
      uint64_t RESERVED1:6;
      uint64_t IODFTENA:4;
      uint64_t RESERVED2:4;
      uint64_t TX_SHIFT:3;
      uint64_t PIN_SAMPLE_MASK:2;
      uint64_t RESERVED3:3;
      uint64_t BRKDT_ENA:1;
      uint64_t PEN:1;
      uint64_t FEN:1;
      uint64_t RESERVED4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIIODCTRL;

};

#define MSS_SCIA (*(volatile struct MSS_SCIA_tag *) 0x2f7ec00)

struct MSS_SCIB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMM_MODE:1;
      uint64_t TIMING_MODE:1;
      uint64_t PARITY_ENA:1;
      uint64_t PARITY:1;
      uint64_t STOP:1;
      uint64_t CLOCK:1;
      uint64_t RESERVED1:1;
      uint64_t SW_nRESET:1;
      uint64_t SLEEP:1;
      uint64_t POWERDOWN:1;
      uint64_t RESERVED2:6;
      uint64_t LOOP_BACK:1;
      uint64_t CONT:1;
      uint64_t RESERVED3:6;
      uint64_t RXENA:1;
      uint64_t TXENA:1;
      uint64_t RESERVED4:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_BRKDT_INT:1;
      uint64_t SET_WAKEUP_INT:1;
      uint64_t RESERVED1:6;
      uint64_t SET_TX_INT:1;
      uint64_t SET_RX_INT:1;
      uint64_t RESERVED2:6;
      uint64_t SET_TX_DMA:1;
      uint64_t SET_RX_DMA:1;
      uint64_t SET_RX_DMA_ALL:1;
      uint64_t RESERVED3:5;
      uint64_t SET_PE_INT:1;
      uint64_t SET_OE_INT:1;
      uint64_t SET_FE_INT:1;
      uint64_t RESERVED4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_BRKDT_INT:1;
      uint64_t CLR_WAKEUP_INT:1;
      uint64_t RESERVED1:6;
      uint64_t CLR_TX_INT:1;
      uint64_t CLR_RX_INT:1;
      uint64_t RESERVED2:6;
      uint64_t CLR_TX_DMA:1;
      uint64_t CLR_RX_DMA:1;
      uint64_t CLR_RX_DMA_ALL:1;
      uint64_t RESERVED3:5;
      uint64_t CLR_PE_INT:1;
      uint64_t CLR_OE_INT:1;
      uint64_t CLR_FE_INT:1;
      uint64_t RESERVED4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_BRKDT_INT_LVL:1;
      uint64_t SET_WAKEUP_INT_LVL:1;
      uint64_t RESERVED1:6;
      uint64_t SET_TX_INT_LVL:1;
      uint64_t SET_RX_INT_LVL:1;
      uint64_t RESERVED2:5;
      uint64_t SET_INC_BR_INT_LVL:1;
      uint64_t RESERVED3:2;
      uint64_t SET_RX_DMA_ALL_INT_LVL:1;
      uint64_t RESERVED4:5;
      uint64_t SET_PE_INT_LVL:1;
      uint64_t SET_OE_INT_LVL:1;
      uint64_t SET_FE_INT_LVL:1;
      uint64_t RESERVED5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_BRKDT_INT_LVL:1;
      uint64_t CLR_WAKEUP_INT_LVL:1;
      uint64_t RESERVED1:6;
      uint64_t CLR_TX_INT_LVL:1;
      uint64_t CLR_RX_INT_LVL:1;
      uint64_t RESERVED2:5;
      uint64_t CLR_INC_BR_INT_LVL:1;
      uint64_t RESERVED3:2;
      uint64_t CLR_RX_DMA_ALL_INT_LVL:1;
      uint64_t RESERVED4:5;
      uint64_t CLR_PE_INT_LVL:1;
      uint64_t CLR_OE_INT_LVL:1;
      uint64_t CLR_FE_INT_LVL:1;
      uint64_t RESERVED5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRKDT:1;
      uint64_t WAKEUP:1;
      uint64_t IDLE:1;
      uint64_t Bus_busy_flag:1;
      uint64_t RESERVED1:4;
      uint64_t TXRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXWAKE:1;
      uint64_t TX_EMPTY:1;
      uint64_t RXWAKE:1;
      uint64_t RESERVED2:11;
      uint64_t PE:1;
      uint64_t OE:1;
      uint64_t FE:1;
      uint64_t RESERVED3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT0:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIINTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT1:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIINTVECT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAR:3;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUD:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIBAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ED:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCITD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_FUNC:1;
      uint64_t RX_FUNC:1;
      uint64_t TX_FUNC:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DIR:1;
      uint64_t RX_DIR:1;
      uint64_t TX_DIR:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_IN:1;
      uint64_t RX_DATA_IN:1;
      uint64_t TX_DATA_IN:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_OUT:1;
      uint64_t RX_DATA_OUT:1;
      uint64_t TX_DATA_OUT:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_SET:1;
      uint64_t RX_DATA_SET:1;
      uint64_t TX_DATA_SET:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_CLR:1;
      uint64_t RX_DATA_CLR:1;
      uint64_t TX_DATA_CLR:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PDR:1;
      uint64_t RX_PDR:1;
      uint64_t TX_PDR:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PD:1;
      uint64_t RX_PD:1;
      uint64_t TX_PD:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PSL:1;
      uint64_t RX_PSL:1;
      uint64_t TX_PSL:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SL:1;
      uint64_t RX_SL:1;
      uint64_t TX_SL:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO9;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP_ENA:1;
      uint64_t LBP_ENA:1;
      uint64_t RESERVED1:6;
      uint64_t IODFTENA:4;
      uint64_t RESERVED2:4;
      uint64_t TX_SHIFT:3;
      uint64_t PIN_SAMPLE_MASK:2;
      uint64_t RESERVED3:3;
      uint64_t BRKDT_ENA:1;
      uint64_t PEN:1;
      uint64_t FEN:1;
      uint64_t RESERVED4:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIIODCTRL;

};

#define MSS_SCIB (*(volatile struct MSS_SCIB_tag *) 0x2f7ed00)

struct MSS_MCANA_ECC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVMIN:6;
      uint64_t CUSTOM:2;
      uint64_t REVMAJ:3;
      uint64_t REVRTL:5;
      uint64_t MODULE_ID:12;
      uint64_t BU:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REV;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_VEC:11;
      uint64_t NU0:4;
      uint64_t RD_SVBUS:1;
      uint64_t RD_SVBUS_ADDR:8;
      uint64_t RD_SVBUS_DONE:1;
      uint64_t NU1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM_RAMS:11;
      uint64_t NU2:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_EN:1;
      uint64_t ECC_CHK:1;
      uint64_t EN_RMW:1;
      uint64_t FORCE_SEC:1;
      uint64_t FORCE_DED:1;
      uint64_t FORCE_N_ROW:1;
      uint64_t ERROR_ONCE:1;
      uint64_t CHECK_PARITY:1;
      uint64_t CHECK_TIMEOUT:1;
      uint64_t NU3:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_ROW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_BIT1:16;
      uint64_t ECC_BIT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_SEC:2;
      uint64_t ECC_DED:2;
      uint64_t ECC_OTHER:1;
      uint64_t ECC_PAR:2;
      uint64_t ECC_CTRL_REG:1;
      uint64_t CLR_ECC_SEC:2;
      uint64_t CLR_ECC_DED:2;
      uint64_t CLR_ECC_OTHER:1;
      uint64_t CLR_ECC_PAR:2;
      uint64_t CLR_ECC_CTRL_REG:1;
      uint64_t ECC_BIT1_STS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_ROW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_STAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU4:1;
      uint64_t TIMEOUT_PEND:1;
      uint64_t NU5:7;
      uint64_t CLR_TIMEOUT_PEND:1;
      uint64_t NU6:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_STAT3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_EOI_WR:1;
      uint64_t NU7:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC_EOI_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_PEND:1;
      uint64_t CTRL_EDC_VBUSS_PEND:1;
      uint64_t NU8:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC_STATUS_REG0;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_EN_SET:1;
      uint64_t CTRL_EDC_VBUSS_ENABLE_SET:1;
      uint64_t NU9:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC_ENABLE_SET_REG0;

  uint8_t res4[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_EN_CLR:1;
      uint64_t CTRL_EDC_VBUSS_ENABLE_CLR:1;
      uint64_t NU10:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC_ENABLE_CLR_REG0;

  uint8_t res5[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DED_EOI_WR:1;
      uint64_t NU11:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DED_EOI_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DED_PEND:1;
      uint64_t CTRL_EDC_VBUSS_PEND:1;
      uint64_t NU12:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DED_STATUS_REG0;

  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DED_EN_SET:1;
      uint64_t CTRL_EDC_VBUSS_ENABLE_SET:1;
      uint64_t NU13:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DED_ENABLE_SET_REG0;

  uint8_t res7[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DED_EN_CLR:1;
      uint64_t CTRL_EDC_VBUSS_ENABLE_CLR:1;
      uint64_t NU14:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DED_ENABLE_CLR_REG0;

  uint8_t res8[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY:1;
      uint64_t TIMEOUT:1;
      uint64_t NU15:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AGGR_ENABLE_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY:1;
      uint64_t TIMEOUT:1;
      uint64_t NU16:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AGGR_ENABLE_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY:2;
      uint64_t TIMEOUT:2;
      uint64_t NU17:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AGGR_STATUS_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY:2;
      uint64_t TIMEOUT:2;
      uint64_t NU18:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AGGR_STATUS_CLR;

};

#define MSS_MCANA_ECC (*(volatile struct MSS_MCANA_ECC_tag *) 0x2f7f800)

struct MSS_MCANA_CFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t MODULE_ID:12;
      uint64_t BU:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:3;
      uint64_t DBGSUSP_FREE:1;
      uint64_t WAKEUPREGEN:1;
      uint64_t AUTOWAKEUP:1;
      uint64_t EXT_TS_CNTR_EN:1;
      uint64_t NU0:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:1;
      uint64_t MMI_DONE:1;
      uint64_t EN_FDOE:1;
      uint64_t NU1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICS:1;
      uint64_t NU2:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_ICS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRS:1;
      uint64_t NU3:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_IRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IECS:1;
      uint64_t NU4:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_IECS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IE:1;
      uint64_t NU5:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IES:1;
      uint64_t NU6:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_IES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOI:8;
      uint64_t NU7:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_EOI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:24;
      uint64_t NU8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_EXT_TS_PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXT_TS_INTR_CNTR:5;
      uint64_t NU9:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SS_EXT_TS_USIC;

  uint8_t res0[468];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAY:8;
      uint64_t MON:8;
      uint64_t YEAR:4;
      uint64_t SUBSTEP:4;
      uint64_t STEP:4;
      uint64_t REL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENDN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CUST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSJW:4;
      uint64_t DTSEG2:4;
      uint64_t DTSEG1:5;
      uint64_t NU11:3;
      uint64_t DBRP:5;
      uint64_t NU12:2;
      uint64_t TDC:1;
      uint64_t NU13:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU14:4;
      uint64_t LBCK:1;
      uint64_t TX:2;
      uint64_t RX:1;
      uint64_t NU15:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDC:8;
      uint64_t WDV:8;
      uint64_t NU16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RWD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t CCE:1;
      uint64_t ASM:1;
      uint64_t CSA:1;
      uint64_t CSR:1;
      uint64_t MON:1;
      uint64_t DAR:1;
      uint64_t TEST:1;
      uint64_t FDOE:1;
      uint64_t BRSE:1;
      uint64_t NU17:2;
      uint64_t PXHD:1;
      uint64_t EFBI:1;
      uint64_t TXP:1;
      uint64_t NU18:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTSEG2:7;
      uint64_t NU19:1;
      uint64_t NTSEG1:8;
      uint64_t NBRP:9;
      uint64_t NSJW:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NBTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:2;
      uint64_t NU20:14;
      uint64_t TCP:4;
      uint64_t NU21:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSC:16;
      uint64_t NU22:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETOC:1;
      uint64_t TOS:2;
      uint64_t NU23:13;
      uint64_t TOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOC:16;
      uint64_t NU24:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES00:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES01:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES02:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES03:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
      uint64_t CEL:8;
      uint64_t NU25:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t ACT:2;
      uint64_t EP:1;
      uint64_t EW:1;
      uint64_t BO:1;
      uint64_t DLEC:3;
      uint64_t RESI:1;
      uint64_t RBRS:1;
      uint64_t RFDF:1;
      uint64_t PXE:1;
      uint64_t NU26:1;
      uint64_t TDCV:7;
      uint64_t NU27:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCF:7;
      uint64_t NU28:1;
      uint64_t TDCO:7;
      uint64_t NU29:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES04:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0N:1;
      uint64_t RF0W:1;
      uint64_t RF0F:1;
      uint64_t RF0L:1;
      uint64_t RF1N:1;
      uint64_t RF1W:1;
      uint64_t RF1F:1;
      uint64_t RF1L:1;
      uint64_t HPM:1;
      uint64_t TC:1;
      uint64_t TCF:1;
      uint64_t TFE:1;
      uint64_t TEFN:1;
      uint64_t TEFW:1;
      uint64_t TEFF:1;
      uint64_t TEFL:1;
      uint64_t TSW:1;
      uint64_t MRAF:1;
      uint64_t TOO:1;
      uint64_t DRX:1;
      uint64_t BEC:1;
      uint64_t BEU:1;
      uint64_t ELO:1;
      uint64_t EP:1;
      uint64_t EW:1;
      uint64_t BO:1;
      uint64_t WDI:1;
      uint64_t PEA:1;
      uint64_t PED:1;
      uint64_t ARA:1;
      uint64_t NU30:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0NE:1;
      uint64_t RF0WE:1;
      uint64_t RF0FE:1;
      uint64_t RF0LE:1;
      uint64_t RF1NE:1;
      uint64_t RF1WE:1;
      uint64_t RF1FE:1;
      uint64_t RF1LE:1;
      uint64_t HPME:1;
      uint64_t TCE:1;
      uint64_t TCFE:1;
      uint64_t TFEE:1;
      uint64_t TEFNE:1;
      uint64_t TEFWE:1;
      uint64_t TEFFE:1;
      uint64_t TEFLE:1;
      uint64_t TSWE:1;
      uint64_t MRAFE:1;
      uint64_t TOOE:1;
      uint64_t DRX:1;
      uint64_t BECE:1;
      uint64_t BEUE:1;
      uint64_t ELOE:1;
      uint64_t EPE:1;
      uint64_t EWE:1;
      uint64_t BOE:1;
      uint64_t WDIE:1;
      uint64_t PEAE:1;
      uint64_t PEDE:1;
      uint64_t ARAE:1;
      uint64_t NU31:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF0NL:1;
      uint64_t RF0WL:1;
      uint64_t RF0FL:1;
      uint64_t RF0LL:1;
      uint64_t RF1NL:1;
      uint64_t RF1WL:1;
      uint64_t RF1FL:1;
      uint64_t RF1LL:1;
      uint64_t HPML:1;
      uint64_t TCL:1;
      uint64_t TCFL:1;
      uint64_t TFEL:1;
      uint64_t TEFNL:1;
      uint64_t TEFWL:1;
      uint64_t TEFFL:1;
      uint64_t TEFLL:1;
      uint64_t TSWL:1;
      uint64_t MRAFL:1;
      uint64_t TOOL:1;
      uint64_t DRXL:1;
      uint64_t BECL:1;
      uint64_t BEUL:1;
      uint64_t ELOL:1;
      uint64_t EPL:1;
      uint64_t EWL:1;
      uint64_t BOL:1;
      uint64_t WDIL:1;
      uint64_t PEAL:1;
      uint64_t PEDL:1;
      uint64_t ARAL:1;
      uint64_t NU32:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT0:1;
      uint64_t EINT1:1;
      uint64_t NU33:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES05:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES06:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES07:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES08:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES09:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES11:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES12:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRFE:1;
      uint64_t RRFS:1;
      uint64_t ANFE:2;
      uint64_t ANFS:2;
      uint64_t NU34:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU35:2;
      uint64_t FLSSA_S:14;
      uint64_t LSS_S:8;
      uint64_t NU36:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIDFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU37:2;
      uint64_t FLSSA_X:14;
      uint64_t LSS_X:8;
      uint64_t NU38:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XIDFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES13:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIDM:29;
      uint64_t NU39:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XIDAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIDX:6;
      uint64_t MSI:2;
      uint64_t FIDX:7;
      uint64_t FLST:1;
      uint64_t NU40:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NDAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU41:2;
      uint64_t F0SA:13;
      uint64_t NU42:1;
      uint64_t F0S:7;
      uint64_t NU42_1:1;
      uint64_t F0WM:7;
      uint64_t F0OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF0C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0FL:7;
      uint64_t NU43:1;
      uint64_t F0GI:6;
      uint64_t NU44:2;
      uint64_t F0PI:6;
      uint64_t NU45:2;
      uint64_t F0F:1;
      uint64_t RF0L:1;
      uint64_t NU46:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF0S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0AI:6;
      uint64_t NU47:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF0A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU48:2;
      uint64_t RBSA:14;
      uint64_t NU49:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU499:2;
      uint64_t F1SA:13;
      uint64_t NU50:1;
      uint64_t F1S:7;
      uint64_t NU50_1:1;
      uint64_t F1WM:7;
      uint64_t F1OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1FL:7;
      uint64_t NU51:1;
      uint64_t F1GI:6;
      uint64_t NU52:2;
      uint64_t F1PI:6;
      uint64_t NU53:2;
      uint64_t F1F:1;
      uint64_t RF1L:1;
      uint64_t NU54:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1AI:6;
      uint64_t NU55:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0DS:3;
      uint64_t NU56:1;
      uint64_t F1DS:3;
      uint64_t NU57:1;
      uint64_t RBDS:3;
      uint64_t NU58:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU59:2;
      uint64_t TBSA:14;
      uint64_t NDTB:6;
      uint64_t NU60:2;
      uint64_t TFQS:6;
      uint64_t TFQM:1;
      uint64_t NU61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFFL:6;
      uint64_t NU62:2;
      uint64_t TFGI:5;
      uint64_t NU63:3;
      uint64_t TFQPI:5;
      uint64_t TFQF:1;
      uint64_t NU64:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXFQS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBDS:3;
      uint64_t NU65:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBTIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBCIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES14:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES15:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU66:2;
      uint64_t EFSA:14;
      uint64_t EFS:6;
      uint64_t NU67:2;
      uint64_t EFWM:6;
      uint64_t NU68:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFFL:6;
      uint64_t NU69:2;
      uint64_t EFGI:5;
      uint64_t NU70:3;
      uint64_t EFPI:5;
      uint64_t NU71:3;
      uint64_t EFF:1;
      uint64_t TEFL:1;
      uint64_t NU72:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFAI:5;
      uint64_t NU73:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXEFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES16:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES16;

};

#define MSS_MCANA_CFG (*(volatile struct MSS_MCANA_CFG_tag *) 0x2f7fc00)

struct TOP_AURORA_TX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t PROTOCOL_SEL:1;
      uint64_t STRICT_ALIGN:1;
      uint64_t reservedSpace0:13;
      uint64_t NUM_LANES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LANE0_MAP:4;
      uint64_t LANE1_MAP:4;
      uint64_t LANE2_MAP:4;
      uint64_t LANE3_MAP:4;
      uint64_t LANE4_MAP:4;
      uint64_t LANE5_MAP:4;
      uint64_t LANE6_MAP:4;
      uint64_t LANE7_MAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_LANE_MAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACK_MODE_SEL:2;
      uint64_t reservedSpace0:2;
      uint64_t TWP_IDLE_FILTER_EN:1;
      uint64_t CRC_EN:1;
      uint64_t TWP_SYNC_COMPRESSION_EN:1;
      uint64_t TEST_PATTERN_EN:1;
      uint64_t BYPASS_EN:1;
      uint64_t reservedSpace1:7;
      uint64_t FRAME_HEADER_EN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UDP_FRAME_HEADER15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UFC_MSG_SENT_STS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UFC_MSG_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UFC_MESSAGE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UFC_MESSAGE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC_CNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_TWP_SYNC_CNT;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TX_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INITIALIZE_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEND_MSG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_UFC_MSG_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_FLUSH_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_EOP_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DATA_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_DATA_START_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DATA_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_DATA_STOP_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_PATTERN_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_TESTPATTERN_START_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_PATTERN_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_TESTPATTERN_STOP_REQ;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_STATE_OVR_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t TX_STATE_OVR_VAL:4;
      uint64_t SYM_OVR_EN:1;
      uint64_t I0_OVR_TYP:1;
      uint64_t I1_OVR_TYP:1;
      uint64_t I2_OVR_TYP:1;
      uint64_t UFC_SUF_OVR_TYP:1;
      uint64_t INIT_SP0_OVR_TYP:1;
      uint64_t INIT_SP1_OVR_TYP:1;
      uint64_t INIT_SP2_OVR_TYP:1;
      uint64_t INIT_SP3_OVR_TYP:1;
      uint64_t INIT_V0_OVR_TYP:1;
      uint64_t INIT_V1_OVR_TYP:1;
      uint64_t INIT_V2_OVR_TYP:1;
      uint64_t INIT_V3_OVR_TYP:1;
      uint64_t CC0_OVR_TYP:1;
      uint64_t CC1_OVR_TYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_OVERRIDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:8;
      uint64_t I1:8;
      uint64_t I2:8;
      uint64_t UFC_SUF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_8B10B_OVERRIDE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP0:8;
      uint64_t SP1:8;
      uint64_t SP2:8;
      uint64_t SP3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_8B10B_OVERRIDE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V0:8;
      uint64_t V1:8;
      uint64_t V2:8;
      uint64_t V3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_8B10B_OVERRIDE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0:8;
      uint64_t CC1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_8B10B_OVERRIDE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDLE_BTF:8;
      uint64_t IDLE_BITS:8;
      uint64_t CB_BTF:8;
      uint64_t CB_BITS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_64B66B_OVERRIDE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UFC_BTF:8;
      uint64_t CC_BTF:8;
      uint64_t CC_BITS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_64B66B_OVERRIDE2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEP_BTF:8;
      uint64_t SEP7_BTF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_64B66B_OVERRIDE2_1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LRC_N:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INIT_CNT_LRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALIGN_LEN:13;
      uint64_t reservedSpace0:3;
      uint64_t ALIGN_MUL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INIT_CNT_ALIGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOND_LEN:9;
      uint64_t reservedSpace0:7;
      uint64_t BOND_MUL:4;
      uint64_t rw:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INIT_CNT_BONDING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERIFY_LEN:9;
      uint64_t reservedSpace0:7;
      uint64_t VERIFY_MUL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INIT_CNT_VERIFY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_ALIGNED:1;
      uint64_t TX_BONDED:1;
      uint64_t TX_VERIFIED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INIT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SEED:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_IDLE_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEND_IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_IDLE_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SEND_CC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_CC_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC_COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_CC_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CB_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_CB_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SEND_CB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_CB_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CB_COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_CB_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_RESET_REQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_SERIALIZER_OVERRIDE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_SERIALIZER_OVERRIDE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t byte_reverse_en:1;
      uint64_t crc_byte_reverse_en:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_DATA_BYTE_REVERSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_64B66B_SCRAMBLER_INIT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:26;
      uint64_t reservedSpace0:5;
      uint64_t load:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_64B66B_SCRAMBLER_INIT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ramp_en:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_TESTPATTERN_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t count_8b10b:4;
      uint64_t reservedSpace0:12;
      uint64_t count_64b66b:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_CC_SEQ_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t delay:16;
      uint64_t enable:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_EOP_DELAY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t delay:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_FLUSH_DELAY;

  uint8_t res4[132];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_STATE:4;
      uint64_t reservedSpace0:12;
      uint64_t DATAFRAMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_RESET0:1;
      uint64_t TX_RESET1:1;
      uint64_t TX_INIT0:1;
      uint64_t TX_TXCB0:1;
      uint64_t TX_CH_RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INIT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_CC_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDLE_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_IDLE_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t int0:1;
      uint64_t int1:1;
      uint64_t int2:1;
      uint64_t int3:1;
      uint64_t int4:1;
      uint64_t int5:1;
      uint64_t int6:1;
      uint64_t int7:1;
      uint64_t int8:1;
      uint64_t int9:1;
      uint64_t int10:1;
      uint64_t int11:1;
      uint64_t int12:1;
      uint64_t int13:1;
      uint64_t int14:1;
      uint64_t int15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INTAGG_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t int0:1;
      uint64_t int1:1;
      uint64_t int2:1;
      uint64_t int3:1;
      uint64_t int4:1;
      uint64_t int5:1;
      uint64_t int6:1;
      uint64_t int7:1;
      uint64_t int8:1;
      uint64_t int9:1;
      uint64_t int10:1;
      uint64_t int11:1;
      uint64_t int12:1;
      uint64_t int13:1;
      uint64_t int14:1;
      uint64_t int15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INTAGG_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t int0:1;
      uint64_t int1:1;
      uint64_t int2:1;
      uint64_t int3:1;
      uint64_t int4:1;
      uint64_t int5:1;
      uint64_t int6:1;
      uint64_t int7:1;
      uint64_t int8:1;
      uint64_t int9:1;
      uint64_t int10:1;
      uint64_t int11:1;
      uint64_t int12:1;
      uint64_t int13:1;
      uint64_t int14:1;
      uint64_t int15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_INTAGG_STATUS_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t err0:1;
      uint64_t err1:1;
      uint64_t err2:1;
      uint64_t err3:1;
      uint64_t err4:1;
      uint64_t err5:1;
      uint64_t err6:1;
      uint64_t err7:1;
      uint64_t err8:1;
      uint64_t err9:1;
      uint64_t err10:1;
      uint64_t err11:1;
      uint64_t err12:1;
      uint64_t err13:1;
      uint64_t err14:1;
      uint64_t err15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_ERRAGG_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t err0:1;
      uint64_t err1:1;
      uint64_t err2:1;
      uint64_t err3:1;
      uint64_t err4:1;
      uint64_t err5:1;
      uint64_t err6:1;
      uint64_t err7:1;
      uint64_t err8:1;
      uint64_t err9:1;
      uint64_t err10:1;
      uint64_t err11:1;
      uint64_t err12:1;
      uint64_t err13:1;
      uint64_t err14:1;
      uint64_t err15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_ERRAGG_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t err0:1;
      uint64_t err1:1;
      uint64_t err2:1;
      uint64_t err3:1;
      uint64_t err4:1;
      uint64_t err5:1;
      uint64_t err6:1;
      uint64_t err7:1;
      uint64_t err8:1;
      uint64_t err9:1;
      uint64_t err10:1;
      uint64_t err11:1;
      uint64_t err12:1;
      uint64_t err13:1;
      uint64_t err14:1;
      uint64_t err15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_ERRAGG_STATUS_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t status:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_SERIALIZER_STATUS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t status:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_SERIALIZER_STATUS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t bytes_packed:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AURORA_TX_TPIU_DATA_PACKED;

  uint8_t res5[3484];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_wph:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_WPH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rec0:1;
      uint64_t hw_spare_rec1:1;
      uint64_t hw_spare_rec2:1;
      uint64_t hw_spare_rec3:1;
      uint64_t hw_spare_rec4:1;
      uint64_t hw_spare_rec5:1;
      uint64_t hw_spare_rec6:1;
      uint64_t hw_spare_rec7:1;
      uint64_t hw_spare_rec8:1;
      uint64_t hw_spare_rec9:1;
      uint64_t hw_spare_rec10:1;
      uint64_t hw_spare_rec11:1;
      uint64_t hw_spare_rec12:1;
      uint64_t hw_spare_rec13:1;
      uint64_t hw_spare_rec14:1;
      uint64_t hw_spare_rec15:1;
      uint64_t hw_spare_rec16:1;
      uint64_t hw_spare_rec17:1;
      uint64_t hw_spare_rec18:1;
      uint64_t hw_spare_rec19:1;
      uint64_t hw_spare_rec20:1;
      uint64_t hw_spare_rec21:1;
      uint64_t hw_spare_rec22:1;
      uint64_t hw_spare_rec23:1;
      uint64_t hw_spare_rec24:1;
      uint64_t hw_spare_rec25:1;
      uint64_t hw_spare_rec26:1;
      uint64_t hw_spare_rec27:1;
      uint64_t hw_spare_rec28:1;
      uint64_t hw_spare_rec29:1;
      uint64_t hw_spare_rec30:1;
      uint64_t hw_spare_rec31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REC;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_raw_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enabled_status_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eoi;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_address;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b6_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_type_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
      uint64_t b19_8:12;
      uint64_t b31_20:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_attr_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_clear;

};

#define TOP_AURORA_TX (*(volatile struct TOP_AURORA_TX_tag *) 0x3060000)

struct TOP_MDO_INFRA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hwreg:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:1;
      uint64_t snif_mode:1;
      uint64_t crop_en:1;
      uint64_t reservedSpace0:5;
      uint64_t hw_marker_en:4;
      uint64_t hw_flush_en:4;
      uint64_t range_en:4;
      uint64_t gen_marker_on_flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_RANGE_START0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_RANGE_END0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_RANGE_START1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_RANGE_END1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_RANGE_START2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_RANGE_END2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_RANGE_START3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_RANGE_END3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t marker:1;
      uint64_t reservedSpace0:3;
      uint64_t flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_SW_TRIGGER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t threshold:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t write_mode:1;
      uint64_t reservedSpace0:3;
      uint64_t burst_num:8;
      uint64_t reservedSpace1:4;
      uint64_t burst_size:5;
      uint64_t reservedSpace2:7;
      uint64_t priority:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_BW_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_CHANNEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_GUARANTEED:1;
      uint64_t DATA_MARKED:1;
      uint64_t DATA_TIMESTAMPED:1;
      uint64_t NONDATA_GUARANTEED:1;
      uint64_t NONDATA_TIMESTAMPED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_CHANNEL_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:1;
      uint64_t snif_mode:1;
      uint64_t crop_en:1;
      uint64_t reservedSpace0:5;
      uint64_t hw_marker_en:4;
      uint64_t hw_flush_en:4;
      uint64_t range_en:4;
      uint64_t gen_marker_on_flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_RANGE_START0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_RANGE_END0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_RANGE_START1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_RANGE_END1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_RANGE_START2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_RANGE_END2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_RANGE_START3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_RANGE_END3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t marker:1;
      uint64_t reservedSpace0:3;
      uint64_t flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_SW_TRIGGER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t threshold:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t write_mode:1;
      uint64_t reservedSpace0:3;
      uint64_t burst_num:8;
      uint64_t reservedSpace1:4;
      uint64_t burst_size:5;
      uint64_t reservedSpace2:7;
      uint64_t priority:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_BW_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_CHANNEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_GUARANTEED:1;
      uint64_t DATA_MARKED:1;
      uint64_t DATA_TIMESTAMPED:1;
      uint64_t NONDATA_GUARANTEED:1;
      uint64_t NONDATA_TIMESTAMPED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_CHANNEL_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:1;
      uint64_t snif_mode:1;
      uint64_t crop_en:1;
      uint64_t reservedSpace0:5;
      uint64_t hw_marker_en:4;
      uint64_t hw_flush_en:4;
      uint64_t range_en:4;
      uint64_t gen_marker_on_flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_RANGE_START0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_RANGE_END0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_RANGE_START1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_RANGE_END1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_RANGE_START2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_RANGE_END2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_RANGE_START3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_RANGE_END3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t marker:1;
      uint64_t reservedSpace0:3;
      uint64_t flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_SW_TRIGGER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t threshold:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t write_mode:1;
      uint64_t reservedSpace0:3;
      uint64_t burst_num:8;
      uint64_t reservedSpace1:4;
      uint64_t burst_size:5;
      uint64_t reservedSpace2:7;
      uint64_t priority:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_BW_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_CHANNEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_GUARANTEED:1;
      uint64_t DATA_MARKED:1;
      uint64_t DATA_TIMESTAMPED:1;
      uint64_t NONDATA_GUARANTEED:1;
      uint64_t NONDATA_TIMESTAMPED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_CHANNEL_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:1;
      uint64_t snif_mode:1;
      uint64_t crop_en:1;
      uint64_t reservedSpace0:5;
      uint64_t hw_marker_en:4;
      uint64_t hw_flush_en:4;
      uint64_t range_en:4;
      uint64_t gen_marker_on_flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_RANGE_START0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_RANGE_END0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_RANGE_START1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_RANGE_END1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_RANGE_START2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_RANGE_END2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_RANGE_START3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_RANGE_END3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t marker:1;
      uint64_t reservedSpace0:3;
      uint64_t flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_SW_TRIGGER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t threshold:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t write_mode:1;
      uint64_t reservedSpace0:3;
      uint64_t burst_num:8;
      uint64_t reservedSpace1:4;
      uint64_t burst_size:5;
      uint64_t reservedSpace2:7;
      uint64_t priority:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_BW_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_CHANNEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_GUARANTEED:1;
      uint64_t DATA_MARKED:1;
      uint64_t DATA_TIMESTAMPED:1;
      uint64_t NONDATA_GUARANTEED:1;
      uint64_t NONDATA_TIMESTAMPED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_CHANNEL_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:1;
      uint64_t snif_mode:1;
      uint64_t crop_en:1;
      uint64_t reservedSpace0:1;
      uint64_t port_sel:1;
      uint64_t reservedSpace1:3;
      uint64_t hw_marker_en:4;
      uint64_t hw_flush_en:4;
      uint64_t range_en:4;
      uint64_t gen_marker_on_flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_RANGE_START0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_RANGE_END0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_RANGE_START1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_RANGE_END1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_RANGE_START2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_RANGE_END2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_RANGE_START3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_RANGE_END3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t marker:1;
      uint64_t reservedSpace0:3;
      uint64_t flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_SW_TRIGGER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t threshold:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t write_mode:1;
      uint64_t reservedSpace0:3;
      uint64_t burst_num:8;
      uint64_t reservedSpace1:4;
      uint64_t burst_size:5;
      uint64_t reservedSpace2:7;
      uint64_t priority:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_BW_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_CHANNEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_GUARANTEED:1;
      uint64_t DATA_MARKED:1;
      uint64_t DATA_TIMESTAMPED:1;
      uint64_t NONDATA_GUARANTEED:1;
      uint64_t NONDATA_TIMESTAMPED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_CHANNEL_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t enable:1;
      uint64_t snif_mode:1;
      uint64_t crop_en:1;
      uint64_t reservedSpace0:5;
      uint64_t hw_marker_en:4;
      uint64_t hw_flush_en:4;
      uint64_t range_en:4;
      uint64_t gen_marker_on_flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_RANGE_START0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_RANGE_END0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_RANGE_START1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_RANGE_END1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_RANGE_START2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_RANGE_END2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t start:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_RANGE_START3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t end:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_RANGE_END3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t marker:1;
      uint64_t reservedSpace0:3;
      uint64_t flush:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_SW_TRIGGER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t threshold:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t write_mode:1;
      uint64_t reservedSpace0:3;
      uint64_t burst_num:8;
      uint64_t reservedSpace1:4;
      uint64_t burst_size:5;
      uint64_t reservedSpace2:7;
      uint64_t priority:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_BW_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t addr:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_CHANNEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_GUARANTEED:1;
      uint64_t DATA_MARKED:1;
      uint64_t DATA_TIMESTAMPED:1;
      uint64_t NONDATA_GUARANTEED:1;
      uint64_t NONDATA_TIMESTAMPED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_CHANNEL_CFG;

  uint8_t res0[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t flush_done:1;
      uint64_t data_miss:1;
      uint64_t flush_err:1;
      uint64_t overflow_err:1;
      uint64_t reservedSpace0:12;
      uint64_t status:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC0_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t flush_done:1;
      uint64_t data_miss:1;
      uint64_t flush_err:1;
      uint64_t overflow_err:1;
      uint64_t reservedSpace0:12;
      uint64_t status:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t flush_done:1;
      uint64_t data_miss:1;
      uint64_t flush_err:1;
      uint64_t overflow_err:1;
      uint64_t reservedSpace0:12;
      uint64_t status:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC2_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t flush_done:1;
      uint64_t data_miss:1;
      uint64_t flush_err:1;
      uint64_t overflow_err:1;
      uint64_t reservedSpace0:12;
      uint64_t status:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC3_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t flush_done:1;
      uint64_t data_miss:1;
      uint64_t flush_err:1;
      uint64_t overflow_err:1;
      uint64_t reservedSpace0:12;
      uint64_t status:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC4_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t flush_done:1;
      uint64_t data_miss:1;
      uint64_t flush_err:1;
      uint64_t overflow_err:1;
      uint64_t reservedSpace0:12;
      uint64_t status:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC5_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mask:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTERRUPT_MASK;

  uint8_t res1[3552];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_wph:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_WPH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rec0:1;
      uint64_t hw_spare_rec1:1;
      uint64_t hw_spare_rec2:1;
      uint64_t hw_spare_rec3:1;
      uint64_t hw_spare_rec4:1;
      uint64_t hw_spare_rec5:1;
      uint64_t hw_spare_rec6:1;
      uint64_t hw_spare_rec7:1;
      uint64_t hw_spare_rec8:1;
      uint64_t hw_spare_rec9:1;
      uint64_t hw_spare_rec10:1;
      uint64_t hw_spare_rec11:1;
      uint64_t hw_spare_rec12:1;
      uint64_t hw_spare_rec13:1;
      uint64_t hw_spare_rec14:1;
      uint64_t hw_spare_rec15:1;
      uint64_t hw_spare_rec16:1;
      uint64_t hw_spare_rec17:1;
      uint64_t hw_spare_rec18:1;
      uint64_t hw_spare_rec19:1;
      uint64_t hw_spare_rec20:1;
      uint64_t hw_spare_rec21:1;
      uint64_t hw_spare_rec22:1;
      uint64_t hw_spare_rec23:1;
      uint64_t hw_spare_rec24:1;
      uint64_t hw_spare_rec25:1;
      uint64_t hw_spare_rec26:1;
      uint64_t hw_spare_rec27:1;
      uint64_t hw_spare_rec28:1;
      uint64_t hw_spare_rec29:1;
      uint64_t hw_spare_rec30:1;
      uint64_t hw_spare_rec31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REC;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_raw_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enabled_status_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eoi;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_address;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b6_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_type_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
      uint64_t b19_8:12;
      uint64_t b31_20:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_attr_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_clear;

};

#define TOP_MDO_INFRA (*(volatile struct TOP_MDO_INFRA_tag *) 0x3080000)

struct MSS_GPADC_PKT_RAM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST3_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST4_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST5_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST5_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST6_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST6_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST7_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST7_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST8_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST8_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST9_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST9_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST10_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST10_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST11_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST11_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST12_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST12_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST13_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST13_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST14_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST14_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST15_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST15_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST16_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST16_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST17_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST17_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST18_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST18_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST19_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST19_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST20_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST20_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST21_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST21_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST22_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST22_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST23_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST23_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST24_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST24_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST25_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST25_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST26_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST26_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST27_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST27_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST28_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST28_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST29_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST29_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST30_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST30_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST31_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST31_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST32_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST32_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST33_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST33_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST34_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST34_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST35_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST35_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST36_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST36_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST37_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST37_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST38_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST38_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST39_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST39_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST40_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST40_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST41_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST41_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST42_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST42_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST43_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST43_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST44_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST44_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST45_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST45_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST46_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST46_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST47_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST47_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST48_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST48_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST49_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST49_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST50_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST50_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST51_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST51_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST52_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST52_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST53_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST53_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST54_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST54_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST55_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST55_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST56_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST56_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST57_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST57_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST58_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST58_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST59_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST59_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST60_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST60_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST61_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST61_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST62_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST62_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST63_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST63_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST64_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST64_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST65_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST65_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST66_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST66_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST67_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST67_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST68_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST68_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST69_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST69_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST70_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST70_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST71_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST71_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST72_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST72_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST73_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST73_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST74_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST74_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST75_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST75_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST76_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST76_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST77_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST77_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST78_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST78_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST79_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST79_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST80_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST80_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST81_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST81_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST82_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST82_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST83_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST83_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST84_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST84_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST85_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST85_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST86_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST86_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST87_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST87_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST88_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST88_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST89_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST89_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST90_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST90_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST91_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST91_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST92_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST92_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST93_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST93_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST94_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST94_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST95_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST95_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST96_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST96_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST97_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST97_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST98_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST98_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST99_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST99_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST100_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST100_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST101_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST101_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST102_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST102_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST103_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST103_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST104_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST104_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST105_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST105_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST106_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST106_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST107_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST107_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST108_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST108_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST109_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST109_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST110_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST110_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST111_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST111_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST112_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST112_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST113_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST113_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST114_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST114_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST115_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST115_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST116_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST116_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST117_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST117_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST118_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST118_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST119_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST119_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST120_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST120_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST121_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST121_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST122_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST122_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST123_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST123_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST124_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST124_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST125_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST125_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST126_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST126_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST127_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST127_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST128_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST128_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST129_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST129_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST130_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST130_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST131_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST131_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST132_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST132_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST133_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST133_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST134_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST134_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST135_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST135_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST136_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST136_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST137_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST137_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST138_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST138_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST139_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST139_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST140_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST140_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST141_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST141_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST142_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST142_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST143_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST143_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST144_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST144_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST145_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST145_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST146_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST146_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST147_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST147_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST148_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST148_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST149_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST149_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST150_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST150_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST151_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST151_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST152_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST152_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST153_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST153_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST154_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST154_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST155_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST155_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST156_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST156_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST157_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST157_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST158_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST158_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST159_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST159_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST160_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST160_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST161_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST161_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST162_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST162_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST163_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST163_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST164_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST164_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST165_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST165_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST166_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST166_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST167_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST167_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST168_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST168_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST169_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST169_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST170_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST170_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST171_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST171_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST172_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST172_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST173_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST173_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST174_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST174_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST175_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST175_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST176_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST176_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST177_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST177_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST178_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST178_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST179_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST179_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST180_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST180_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST181_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST181_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST182_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST182_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST183_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST183_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST184_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST184_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST185_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST185_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST186_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST186_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST187_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST187_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST188_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST188_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST189_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST189_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST190_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST190_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST191_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST191_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST192_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST192_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST193_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST193_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST194_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST194_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST195_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST195_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST196_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST196_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST197_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST197_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST198_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST198_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST199_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST199_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST200_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST200_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST201_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST201_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST202_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST202_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST203_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST203_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST204_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST204_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST205_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST205_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST206_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST206_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST207_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST207_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST208_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST208_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST209_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST209_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST210_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST210_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST211_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST211_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST212_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST212_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST213_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST213_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST214_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST214_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST215_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST215_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST216_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST216_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST217_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST217_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST218_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST218_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST219_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST219_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST220_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST220_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST221_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST221_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST222_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST222_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST223_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST223_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST224_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST224_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST225_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST225_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST226_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST226_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST227_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST227_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST228_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST228_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST229_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST229_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST230_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST230_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST231_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST231_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST232_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST232_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST233_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST233_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST234_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST234_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST235_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST235_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST236_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST236_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST237_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST237_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST238_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST238_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST239_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST239_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST240_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST240_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST241_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST241_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST242_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST242_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST243_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST243_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST244_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST244_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST245_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST245_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST246_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST246_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST247_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST247_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST248_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST248_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST249_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST249_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST250_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST250_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST251_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST251_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST252_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST252_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST253_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST253_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST254_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST254_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST255_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM:8;
      uint64_t COLLECT_SAMPLES:8;
      uint64_t SKIP_SAMPLES:7;
      uint64_t CHIRP_BRK:1;
      uint64_t NU1:1;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INST255_1;

};

#define MSS_GPADC_PKT_RAM (*(volatile struct MSS_GPADC_PKT_RAM_tag *) 0x30c0000)

struct TOP_CTRL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b31_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AURORATX_SRC_SELECT:1;
      uint64_t reservedSpace0:3;
      uint64_t SRC_SELECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t sel:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROBE_BUS_SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t sel:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROBE_BUS_SEL1;

  uint8_t res0[496];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_DIEID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_DIEID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_DIEID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_DIEID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_UID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_UID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_UID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_UID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_DEVICE_TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_FROM0_CHECKSUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t val:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_ROM_SEQ_UPDATE8;

  uint8_t res1[436];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE0_ROW_61:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE0_ROW_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE0_ROW_62:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE0_ROW_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE0_ROW_63:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE0_ROW_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_5:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_6:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_7:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_8:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_9:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_10:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_11:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_12:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_13:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_14:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_15:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_16:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_17:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_18:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_19:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_20:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_21:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_22:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_23:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_24:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_25:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_26:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_27:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_28:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_29:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_30:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_31:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_32:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_33:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_34:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_35:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_36:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_37:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_38:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_39:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_40:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_41:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_42:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE1_ROW_43:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE1_ROW_43;

  uint8_t res2[856];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
      uint64_t reservedSpace0:1;
      uint64_t override_val:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_HSM_HALT_ON_ROM_ECC_ERR_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t glg_margin_override:3;
      uint64_t reservedSpace0:1;
      uint64_t glg_margin:2;
      uint64_t reservedSpace1:2;
      uint64_t gwg_margin_override:3;
      uint64_t reservedSpace2:1;
      uint64_t gwg_margin:4;
      uint64_t byg_margin_override:3;
      uint64_t reservedSpace3:1;
      uint64_t byg_margin:2;
      uint64_t reservedSpace4:2;
      uint64_t brg_margin_override:3;
      uint64_t reservedSpace5:1;
      uint64_t brg_margin:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_MEM_MARGINCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
      uint64_t reservedSpace0:1;
      uint64_t override_val:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_LVDS_BGAP_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_XTAL_STABLIZATION_WAIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_SLICER_BIAS_RTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_XO_OUTPUT_DRIVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_RCOSC_TRIM_CODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_IP1_BG1_RTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_IP1_BG1_SLOPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_IP1_BG1_MAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
      uint64_t reservedSpace0:1;
      uint64_t override_val:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_RS232_CLKMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_VMON_VDD_OV_UV_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_VMON_VDDS_3P3_UV_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_VMON_VDDA_OSC_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_VDD_VT_DET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_MASK_CPU_CLK_OUT_CTRL_LOWV_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_MASK_CPU_CLK_OUT_CTRL_LOWV_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_EN_VOL_MON_FUNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t override:3;
      uint64_t reservedSpace0:1;
      uint64_t override_val:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE_OVERRIDE_BYPASS_HOLDBUFFER_ENABLE;

  uint8_t res3[1924];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rw3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RW3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_ro3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_RO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_wph:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_WPH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t hw_spare_rec0:1;
      uint64_t hw_spare_rec1:1;
      uint64_t hw_spare_rec2:1;
      uint64_t hw_spare_rec3:1;
      uint64_t hw_spare_rec4:1;
      uint64_t hw_spare_rec5:1;
      uint64_t hw_spare_rec6:1;
      uint64_t hw_spare_rec7:1;
      uint64_t hw_spare_rec8:1;
      uint64_t hw_spare_rec9:1;
      uint64_t hw_spare_rec10:1;
      uint64_t hw_spare_rec11:1;
      uint64_t hw_spare_rec12:1;
      uint64_t hw_spare_rec13:1;
      uint64_t hw_spare_rec14:1;
      uint64_t hw_spare_rec15:1;
      uint64_t hw_spare_rec16:1;
      uint64_t hw_spare_rec17:1;
      uint64_t hw_spare_rec18:1;
      uint64_t hw_spare_rec19:1;
      uint64_t hw_spare_rec20:1;
      uint64_t hw_spare_rec21:1;
      uint64_t hw_spare_rec22:1;
      uint64_t hw_spare_rec23:1;
      uint64_t hw_spare_rec24:1;
      uint64_t hw_spare_rec25:1;
      uint64_t hw_spare_rec26:1;
      uint64_t hw_spare_rec27:1;
      uint64_t hw_spare_rec28:1;
      uint64_t hw_spare_rec29:1;
      uint64_t hw_spare_rec30:1;
      uint64_t hw_spare_rec31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_SPARE_REC;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_KICK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_raw_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enabled_status_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) intr_enable_clear;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) eoi;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_address;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b6_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_type_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b7_0:8;
      uint64_t b19_8:12;
      uint64_t b31_20:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_attr_status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) fault_clear;

};

#define TOP_CTRL (*(volatile struct TOP_CTRL_tag *) 0x30e0000)

struct MSS_TPCC_A_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t RES1:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUMDMACH:3;
      uint64_t RES8:1;
      uint64_t NUMQDMACH:3;
      uint64_t RES7:1;
      uint64_t NUMINTCH:3;
      uint64_t RES6:1;
      uint64_t NUMPAENTRY:3;
      uint64_t RES5:1;
      uint64_t NUMTC:3;
      uint64_t RES4:1;
      uint64_t NUMREGN:2;
      uint64_t RES3:2;
      uint64_t CHMAPEXIST:1;
      uint64_t MPEXIST:1;
      uint64_t RES2:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCFG;

  uint8_t res0[504];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TRWORD:3;
      uint64_t PAENTRY:9;
      uint64_t RES10:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QCHMAPN;

  uint8_t res1[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:3;
      uint64_t RES18:1;
      uint64_t E1:3;
      uint64_t RES17:1;
      uint64_t E2:3;
      uint64_t RES16:1;
      uint64_t E3:3;
      uint64_t RES15:1;
      uint64_t E4:3;
      uint64_t RES14:1;
      uint64_t E5:3;
      uint64_t RES13:1;
      uint64_t E6:3;
      uint64_t RES12:1;
      uint64_t E7:3;
      uint64_t RES11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAQNUMN;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:3;
      uint64_t RES26:1;
      uint64_t E1:3;
      uint64_t RES25:1;
      uint64_t E2:3;
      uint64_t RES24:1;
      uint64_t E3:3;
      uint64_t RES23:1;
      uint64_t E4:3;
      uint64_t RES22:1;
      uint64_t E5:3;
      uint64_t RES21:1;
      uint64_t E6:3;
      uint64_t RES20:1;
      uint64_t E7:3;
      uint64_t RES19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDMAQNUM;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCNUMQ0:3;
      uint64_t RES28:1;
      uint64_t TCNUMQ1:3;
      uint64_t RES27:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QUETCMAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIQ0:3;
      uint64_t RES30:1;
      uint64_t PRIQ1:3;
      uint64_t RES29:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QUEPRI;

  uint8_t res4[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES31:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES32:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QTHRXCD0:1;
      uint64_t QTHRXCD1:1;
      uint64_t QTHRXCD2:1;
      uint64_t QTHRXCD3:1;
      uint64_t QTHRXCD4:1;
      uint64_t QTHRXCD5:1;
      uint64_t QTHRXCD6:1;
      uint64_t QTHRXCD7:1;
      uint64_t RES34:8;
      uint64_t TCERR:1;
      uint64_t RES33:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QTHRXCD0:1;
      uint64_t QTHRXCD1:1;
      uint64_t QTHRXCD2:1;
      uint64_t QTHRXCD3:1;
      uint64_t QTHRXCD4:1;
      uint64_t QTHRXCD5:1;
      uint64_t QTHRXCD6:1;
      uint64_t QTHRXCD7:1;
      uint64_t RES36:8;
      uint64_t TCERR:1;
      uint64_t RES35:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES37:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEVAL;

  uint8_t res5[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRAEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRAEHM;

  uint8_t res6[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES38:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QRAEN;

  uint8_t res7[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES41:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES42:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES43:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES44:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES45:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES46:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES47:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES48:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES49:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES50:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES51:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES52:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES53:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES54:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE15;

  uint8_t res8[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTPTR:4;
      uint64_t RES58:4;
      uint64_t NUMVAL:5;
      uint64_t RES57:3;
      uint64_t WM:5;
      uint64_t RES56:3;
      uint64_t THRXCD:1;
      uint64_t RES55:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSTATN;

  uint8_t res9[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Q0:5;
      uint64_t RES60:3;
      uint64_t Q1:5;
      uint64_t RES59:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QWMTHRA;

  uint8_t res10[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTACTV:1;
      uint64_t QEVTACTV:1;
      uint64_t TRACTV:1;
      uint64_t RES64:1;
      uint64_t ACTV:1;
      uint64_t RES63:3;
      uint64_t COMPACTV:6;
      uint64_t RES62:2;
      uint64_t QUEACTV0:1;
      uint64_t QUEACTV1:1;
      uint64_t QUEACTV2:1;
      uint64_t QUEACTV3:1;
      uint64_t QUEACTV4:1;
      uint64_t QUEACTV5:1;
      uint64_t QUEACTV6:1;
      uint64_t QUEACTV7:1;
      uint64_t RES61:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCSTAT;

  uint8_t res11[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTEVT:6;
      uint64_t TYPE:1;
      uint64_t RES66:1;
      uint64_t ENDINT:6;
      uint64_t RES65:17;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AETCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
      uint64_t RES67:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AETSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t RES68:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AETCMD;

  uint8_t res12[2292];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EESRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECRH;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IESRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES69:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEVAL;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES70:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES71:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES72:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES73:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES74:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES75:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSECR;

  uint8_t res15[3944];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EESR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EESRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECRH_RN;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IESR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IESRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES76:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEVAL_RN;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES77:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES78:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES79:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES80:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEESR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES81:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES82:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSECR_RN;

};

#define MSS_TPCC_A (*(volatile struct MSS_TPCC_A_tag *) 0x3100000)

struct MSS_TPCC_B_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t RES1:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUMDMACH:3;
      uint64_t RES8:1;
      uint64_t NUMQDMACH:3;
      uint64_t RES7:1;
      uint64_t NUMINTCH:3;
      uint64_t RES6:1;
      uint64_t NUMPAENTRY:3;
      uint64_t RES5:1;
      uint64_t NUMTC:3;
      uint64_t RES4:1;
      uint64_t NUMREGN:2;
      uint64_t RES3:2;
      uint64_t CHMAPEXIST:1;
      uint64_t MPEXIST:1;
      uint64_t RES2:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCFG;

  uint8_t res0[504];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TRWORD:3;
      uint64_t PAENTRY:9;
      uint64_t RES10:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QCHMAPN;

  uint8_t res1[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:3;
      uint64_t RES18:1;
      uint64_t E1:3;
      uint64_t RES17:1;
      uint64_t E2:3;
      uint64_t RES16:1;
      uint64_t E3:3;
      uint64_t RES15:1;
      uint64_t E4:3;
      uint64_t RES14:1;
      uint64_t E5:3;
      uint64_t RES13:1;
      uint64_t E6:3;
      uint64_t RES12:1;
      uint64_t E7:3;
      uint64_t RES11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAQNUMN;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:3;
      uint64_t RES26:1;
      uint64_t E1:3;
      uint64_t RES25:1;
      uint64_t E2:3;
      uint64_t RES24:1;
      uint64_t E3:3;
      uint64_t RES23:1;
      uint64_t E4:3;
      uint64_t RES22:1;
      uint64_t E5:3;
      uint64_t RES21:1;
      uint64_t E6:3;
      uint64_t RES20:1;
      uint64_t E7:3;
      uint64_t RES19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDMAQNUM;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCNUMQ0:3;
      uint64_t RES28:1;
      uint64_t TCNUMQ1:3;
      uint64_t RES27:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QUETCMAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIQ0:3;
      uint64_t RES30:1;
      uint64_t PRIQ1:3;
      uint64_t RES29:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QUEPRI;

  uint8_t res4[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES31:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES32:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QTHRXCD0:1;
      uint64_t QTHRXCD1:1;
      uint64_t QTHRXCD2:1;
      uint64_t QTHRXCD3:1;
      uint64_t QTHRXCD4:1;
      uint64_t QTHRXCD5:1;
      uint64_t QTHRXCD6:1;
      uint64_t QTHRXCD7:1;
      uint64_t RES34:8;
      uint64_t TCERR:1;
      uint64_t RES33:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QTHRXCD0:1;
      uint64_t QTHRXCD1:1;
      uint64_t QTHRXCD2:1;
      uint64_t QTHRXCD3:1;
      uint64_t QTHRXCD4:1;
      uint64_t QTHRXCD5:1;
      uint64_t QTHRXCD6:1;
      uint64_t QTHRXCD7:1;
      uint64_t RES36:8;
      uint64_t TCERR:1;
      uint64_t RES35:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES37:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEVAL;

  uint8_t res5[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRAEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRAEHM;

  uint8_t res6[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES38:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QRAEN;

  uint8_t res7[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES39:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES40:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES41:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES42:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES43:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES44:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES45:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES46:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES47:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES48:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES49:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES50:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES51:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES52:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES53:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENUM:6;
      uint64_t ETYPE:2;
      uint64_t RES54:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QNE15;

  uint8_t res8[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTPTR:4;
      uint64_t RES58:4;
      uint64_t NUMVAL:5;
      uint64_t RES57:3;
      uint64_t WM:5;
      uint64_t RES56:3;
      uint64_t THRXCD:1;
      uint64_t RES55:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSTATN;

  uint8_t res9[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Q0:5;
      uint64_t RES60:3;
      uint64_t Q1:5;
      uint64_t RES59:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QWMTHRA;

  uint8_t res10[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTACTV:1;
      uint64_t QEVTACTV:1;
      uint64_t TRACTV:1;
      uint64_t RES64:1;
      uint64_t ACTV:1;
      uint64_t RES63:3;
      uint64_t COMPACTV:6;
      uint64_t RES62:2;
      uint64_t QUEACTV0:1;
      uint64_t QUEACTV1:1;
      uint64_t QUEACTV2:1;
      uint64_t QUEACTV3:1;
      uint64_t QUEACTV4:1;
      uint64_t QUEACTV5:1;
      uint64_t QUEACTV6:1;
      uint64_t QUEACTV7:1;
      uint64_t RES61:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCSTAT;

  uint8_t res11[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRTEVT:6;
      uint64_t TYPE:1;
      uint64_t RES66:1;
      uint64_t ENDINT:6;
      uint64_t RES65:17;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AETCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
      uint64_t RES67:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AETSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t RES68:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AETCMD;

  uint8_t res12[2292];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EESRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECRH;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IERH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IESRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES69:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEVAL;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES70:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES71:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES72:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES73:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES74:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES75:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSECR;

  uint8_t res15[3944];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EECRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EESR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EESRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t E8:1;
      uint64_t E9:1;
      uint64_t E10:1;
      uint64_t E11:1;
      uint64_t E12:1;
      uint64_t E13:1;
      uint64_t E14:1;
      uint64_t E15:1;
      uint64_t E16:1;
      uint64_t E17:1;
      uint64_t E18:1;
      uint64_t E19:1;
      uint64_t E20:1;
      uint64_t E21:1;
      uint64_t E22:1;
      uint64_t E23:1;
      uint64_t E24:1;
      uint64_t E25:1;
      uint64_t E26:1;
      uint64_t E27:1;
      uint64_t E28:1;
      uint64_t E29:1;
      uint64_t E30:1;
      uint64_t E31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E32:1;
      uint64_t E33:1;
      uint64_t E34:1;
      uint64_t E35:1;
      uint64_t E36:1;
      uint64_t E37:1;
      uint64_t E38:1;
      uint64_t E39:1;
      uint64_t E40:1;
      uint64_t E41:1;
      uint64_t E42:1;
      uint64_t E43:1;
      uint64_t E44:1;
      uint64_t E45:1;
      uint64_t E46:1;
      uint64_t E47:1;
      uint64_t E48:1;
      uint64_t E49:1;
      uint64_t E50:1;
      uint64_t E51:1;
      uint64_t E52:1;
      uint64_t E53:1;
      uint64_t E54:1;
      uint64_t E55:1;
      uint64_t E56:1;
      uint64_t E57:1;
      uint64_t E58:1;
      uint64_t E59:1;
      uint64_t E60:1;
      uint64_t E61:1;
      uint64_t E62:1;
      uint64_t E63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECRH_RN;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IERH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IECRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IESR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IESRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I0:1;
      uint64_t I1:1;
      uint64_t I2:1;
      uint64_t I3:1;
      uint64_t I4:1;
      uint64_t I5:1;
      uint64_t I6:1;
      uint64_t I7:1;
      uint64_t I8:1;
      uint64_t I9:1;
      uint64_t I10:1;
      uint64_t I11:1;
      uint64_t I12:1;
      uint64_t I13:1;
      uint64_t I14:1;
      uint64_t I15:1;
      uint64_t I16:1;
      uint64_t I17:1;
      uint64_t I18:1;
      uint64_t I19:1;
      uint64_t I20:1;
      uint64_t I21:1;
      uint64_t I22:1;
      uint64_t I23:1;
      uint64_t I24:1;
      uint64_t I25:1;
      uint64_t I26:1;
      uint64_t I27:1;
      uint64_t I28:1;
      uint64_t I29:1;
      uint64_t I30:1;
      uint64_t I31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I32:1;
      uint64_t I33:1;
      uint64_t I34:1;
      uint64_t I35:1;
      uint64_t I36:1;
      uint64_t I37:1;
      uint64_t I38:1;
      uint64_t I39:1;
      uint64_t I40:1;
      uint64_t I41:1;
      uint64_t I42:1;
      uint64_t I43:1;
      uint64_t I44:1;
      uint64_t I45:1;
      uint64_t I46:1;
      uint64_t I47:1;
      uint64_t I48:1;
      uint64_t I49:1;
      uint64_t I50:1;
      uint64_t I51:1;
      uint64_t I52:1;
      uint64_t I53:1;
      uint64_t I54:1;
      uint64_t I55:1;
      uint64_t I56:1;
      uint64_t I57:1;
      uint64_t I58:1;
      uint64_t I59:1;
      uint64_t I60:1;
      uint64_t I61:1;
      uint64_t I62:1;
      uint64_t I63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICRH_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES76:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEVAL_RN;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES77:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES78:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES79:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEECR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES80:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QEESR_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES81:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSER_RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E0:1;
      uint64_t E1:1;
      uint64_t E2:1;
      uint64_t E3:1;
      uint64_t E4:1;
      uint64_t E5:1;
      uint64_t E6:1;
      uint64_t E7:1;
      uint64_t RES82:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSECR_RN;

};

#define MSS_TPCC_B (*(volatile struct MSS_TPCC_B_tag *) 0x3120000)

struct MSS_TPTC_A0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t b5_0:6;
      uint64_t b7_6:2;
      uint64_t b10_8:3;
      uint64_t b15_11:5;
      uint64_t b27_16:12;
      uint64_t reservedSpace0:2;
      uint64_t b31_30:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b2_0:3;
      uint64_t reservedSpace0:1;
      uint64_t b5_4:2;
      uint64_t reservedSpace1:2;
      uint64_t b9_8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCFG;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
      uint64_t b2_2:1;
      uint64_t reservedSpace0:1;
      uint64_t b6_4:3;
      uint64_t reservedSpace1:1;
      uint64_t b8_8:1;
      uint64_t reservedSpace2:3;
      uint64_t b13_12:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCMD;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t reservedSpace0:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t reservedSpace0:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t reservedSpace0:1;
      uint64_t b2_2:1;
      uint64_t b3_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b3_0:4;
      uint64_t reservedSpace0:4;
      uint64_t b13_8:6;
      uint64_t reservedSpace1:2;
      uint64_t b16_16:1;
      uint64_t b17_17:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRDET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t b0_0:1;
      uint64_t b1_1:1;
    } __attribute__((packed)) B;


  union
