#include <stdint.h>

struct SPR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRMC:2;
      uint64_t FOVFE:1;
      uint64_t FUNFE:1;
      uint64_t FDBZE:1;
      uint64_t FINVE:1;
      uint64_t FINXE:1;
      uint64_t reservedSpace0:1;
      uint64_t FOVF:1;
      uint64_t FUNF:1;
      uint64_t FDBZ:1;
      uint64_t FINV:1;
      uint64_t FX:1;
      uint64_t FG:1;
      uint64_t OV:1;
      uint64_t SOV:1;
      uint64_t MODE:1;
      uint64_t FOVFS:1;
      uint64_t FUNFS:1;
      uint64_t FDBZS:1;
      uint64_t FINVS:1;
      uint64_t FINXS:1;
      uint64_t reservedSpace1:2;
      uint64_t FOVFH:1;
      uint64_t FUNFH:1;
      uint64_t FDBZH:1;
      uint64_t FINVH:1;
      uint64_t FXH:1;
      uint64_t FGH:1;
      uint64_t OVH:1;
      uint64_t SOVH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPEFSCR;

};

#define SPR_0 (*(volatile struct SPR_0_tag *) 0x200)

struct ADC_ADC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t REFSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORT_CHAIN:1;
      uint64_t ADCLKSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t STCL:1;
      uint64_t CTU_MODE:1;
      uint64_t CTUEN:1;
      uint64_t reservedSpace2:2;
      uint64_t JSTART:1;
      uint64_t reservedSpace3:3;
      uint64_t NSTART:1;
      uint64_t reservedSpace4:1;
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
      uint64_t CTUSTART:1;
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
      uint64_t EOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH0:1;
      uint64_t EOCCH1:1;
      uint64_t EOCCH2:1;
      uint64_t EOCCH3:1;
      uint64_t EOCCH4:1;
      uint64_t EOCCH5:1;
      uint64_t EOCCH6:1;
      uint64_t EOCCH7:1;
      uint64_t EOCCH8:1;
      uint64_t EOCCH9:1;
      uint64_t EOCCH10:1;
      uint64_t EOCCH11:1;
      uint64_t EOCCH12:1;
      uint64_t EOCCH13:1;
      uint64_t EOCCH14:1;
      uint64_t EOCCH15:1;
      uint64_t EOCCH16:1;
      uint64_t EOCCH17:1;
      uint64_t EOCCH18:1;
      uint64_t EOCCH19:1;
      uint64_t EOCCH20:1;
      uint64_t EOCCH21:1;
      uint64_t EOCCH22:1;
      uint64_t EOCCH23:1;
      uint64_t EOCCH24:1;
      uint64_t EOCCH25:1;
      uint64_t EOCCH26:1;
      uint64_t EOCCH27:1;
      uint64_t EOCCH28:1;
      uint64_t EOCCH29:1;
      uint64_t EOCCH30:1;
      uint64_t EOCCH31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH32:1;
      uint64_t EOCCH33:1;
      uint64_t EOCCH34:1;
      uint64_t EOCCH35:1;
      uint64_t EOCCH36:1;
      uint64_t EOCCH37:1;
      uint64_t EOCCH38:1;
      uint64_t EOCCH39:1;
      uint64_t EOCCH40:1;
      uint64_t EOCCH41:1;
      uint64_t EOCCH42:1;
      uint64_t EOCCH43:1;
      uint64_t EOCCH44:1;
      uint64_t EOCCH45:1;
      uint64_t EOCCH46:1;
      uint64_t EOCCH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH64:1;
      uint64_t EOCCH65:1;
      uint64_t EOCCH66:1;
      uint64_t EOCCH67:1;
      uint64_t EOCCH68:1;
      uint64_t EOCCH69:1;
      uint64_t EOCCH70:1;
      uint64_t EOCCH71:1;
      uint64_t EOCCH72:1;
      uint64_t EOCCH73:1;
      uint64_t EOCCH74:1;
      uint64_t EOCCH75:1;
      uint64_t EOCCH76:1;
      uint64_t EOCCH77:1;
      uint64_t EOCCH78:1;
      uint64_t EOCCH79:1;
      uint64_t EOCCH80:1;
      uint64_t EOCCH81:1;
      uint64_t EOCCH82:1;
      uint64_t EOCCH83:1;
      uint64_t EOCCH84:1;
      uint64_t EOCCH85:1;
      uint64_t EOCCH86:1;
      uint64_t EOCCH87:1;
      uint64_t EOCCH88:1;
      uint64_t EOCCH89:1;
      uint64_t EOCCH90:1;
      uint64_t EOCCH91:1;
      uint64_t EOCCH92:1;
      uint64_t EOCCH93:1;
      uint64_t EOCCH94:1;
      uint64_t EOCCH95:1;
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
      uint64_t MSKEOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM0:1;
      uint64_t CIM1:1;
      uint64_t CIM2:1;
      uint64_t CIM3:1;
      uint64_t CIM4:1;
      uint64_t CIM5:1;
      uint64_t CIM6:1;
      uint64_t CIM7:1;
      uint64_t CIM8:1;
      uint64_t CIM9:1;
      uint64_t CIM10:1;
      uint64_t CIM11:1;
      uint64_t CIM12:1;
      uint64_t CIM13:1;
      uint64_t CIM14:1;
      uint64_t CIM15:1;
      uint64_t CIM16:1;
      uint64_t CIM17:1;
      uint64_t CIM18:1;
      uint64_t CIM19:1;
      uint64_t CIM20:1;
      uint64_t CIM21:1;
      uint64_t CIM22:1;
      uint64_t CIM23:1;
      uint64_t CIM24:1;
      uint64_t CIM25:1;
      uint64_t CIM26:1;
      uint64_t CIM27:1;
      uint64_t CIM28:1;
      uint64_t CIM29:1;
      uint64_t CIM30:1;
      uint64_t CIM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM32:1;
      uint64_t CIM33:1;
      uint64_t CIM34:1;
      uint64_t CIM35:1;
      uint64_t CIM36:1;
      uint64_t CIM37:1;
      uint64_t CIM38:1;
      uint64_t CIM39:1;
      uint64_t CIM40:1;
      uint64_t CIM41:1;
      uint64_t CIM42:1;
      uint64_t CIM43:1;
      uint64_t CIM44:1;
      uint64_t CIM45:1;
      uint64_t CIM46:1;
      uint64_t CIM47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM64:1;
      uint64_t CIM65:1;
      uint64_t CIM66:1;
      uint64_t CIM67:1;
      uint64_t CIM68:1;
      uint64_t CIM69:1;
      uint64_t CIM70:1;
      uint64_t CIM71:1;
      uint64_t CIM72:1;
      uint64_t CIM73:1;
      uint64_t CIM74:1;
      uint64_t CIM75:1;
      uint64_t CIM76:1;
      uint64_t CIM77:1;
      uint64_t CIM78:1;
      uint64_t CIM79:1;
      uint64_t CIM80:1;
      uint64_t CIM81:1;
      uint64_t CIM82:1;
      uint64_t CIM83:1;
      uint64_t CIM84:1;
      uint64_t CIM85:1;
      uint64_t CIM86:1;
      uint64_t CIM87:1;
      uint64_t CIM88:1;
      uint64_t CIM89:1;
      uint64_t CIM90:1;
      uint64_t CIM91:1;
      uint64_t CIM92:1;
      uint64_t CIM93:1;
      uint64_t CIM94:1;
      uint64_t CIM95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1L:1;
      uint64_t WDG1H:1;
      uint64_t WDG2L:1;
      uint64_t WDG2H:1;
      uint64_t WDG3L:1;
      uint64_t WDG3H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKWDG0L:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG1L:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG2L:1;
      uint64_t MSKWDG2H:1;
      uint64_t MSKWDG3L:1;
      uint64_t MSKWDG3H:1;
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
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DMA8:1;
      uint64_t DMA9:1;
      uint64_t DMA10:1;
      uint64_t DMA11:1;
      uint64_t DMA12:1;
      uint64_t DMA13:1;
      uint64_t DMA14:1;
      uint64_t DMA15:1;
      uint64_t DMA16:1;
      uint64_t DMA17:1;
      uint64_t DMA18:1;
      uint64_t DMA19:1;
      uint64_t DMA20:1;
      uint64_t DMA21:1;
      uint64_t DMA22:1;
      uint64_t DMA23:1;
      uint64_t DMA24:1;
      uint64_t DMA25:1;
      uint64_t DMA26:1;
      uint64_t DMA27:1;
      uint64_t DMA28:1;
      uint64_t DMA29:1;
      uint64_t DMA30:1;
      uint64_t DMA31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA32:1;
      uint64_t DMA33:1;
      uint64_t DMA34:1;
      uint64_t DMA35:1;
      uint64_t DMA36:1;
      uint64_t DMA37:1;
      uint64_t DMA38:1;
      uint64_t DMA39:1;
      uint64_t DMA40:1;
      uint64_t DMA41:1;
      uint64_t DMA42:1;
      uint64_t DMA43:1;
      uint64_t DMA44:1;
      uint64_t DMA45:1;
      uint64_t DMA46:1;
      uint64_t DMA47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA64:1;
      uint64_t DMA65:1;
      uint64_t DMA66:1;
      uint64_t DMA67:1;
      uint64_t DMA68:1;
      uint64_t DMA69:1;
      uint64_t DMA70:1;
      uint64_t DMA71:1;
      uint64_t DMA72:1;
      uint64_t DMA73:1;
      uint64_t DMA74:1;
      uint64_t DMA75:1;
      uint64_t DMA76:1;
      uint64_t DMA77:1;
      uint64_t DMA78:1;
      uint64_t DMA79:1;
      uint64_t DMA80:1;
      uint64_t DMA81:1;
      uint64_t DMA82:1;
      uint64_t DMA83:1;
      uint64_t DMA84:1;
      uint64_t DMA85:1;
      uint64_t DMA86:1;
      uint64_t DMA87:1;
      uint64_t DMA88:1;
      uint64_t DMA89:1;
      uint64_t DMA90:1;
      uint64_t DMA91:1;
      uint64_t DMA92:1;
      uint64_t DMA93:1;
      uint64_t DMA94:1;
      uint64_t DMA95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR2;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:2;
      uint64_t PREVAL1:2;
      uint64_t PREVAL2:2;
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
  } __attribute__((aligned(4))) PSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES32:1;
      uint64_t PRES33:1;
      uint64_t PRES34:1;
      uint64_t PRES35:1;
      uint64_t PRES36:1;
      uint64_t PRES37:1;
      uint64_t PRES38:1;
      uint64_t PRES39:1;
      uint64_t PRES40:1;
      uint64_t PRES41:1;
      uint64_t PRES42:1;
      uint64_t PRES43:1;
      uint64_t PRES44:1;
      uint64_t PRES45:1;
      uint64_t PRES46:1;
      uint64_t PRES47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES64:1;
      uint64_t PRES65:1;
      uint64_t PRES66:1;
      uint64_t PRES67:1;
      uint64_t PRES68:1;
      uint64_t PRES69:1;
      uint64_t PRES70:1;
      uint64_t PRES71:1;
      uint64_t PRES72:1;
      uint64_t PRES73:1;
      uint64_t PRES74:1;
      uint64_t PRES75:1;
      uint64_t PRES76:1;
      uint64_t PRES77:1;
      uint64_t PRES78:1;
      uint64_t PRES79:1;
      uint64_t PRES80:1;
      uint64_t PRES81:1;
      uint64_t PRES82:1;
      uint64_t PRES83:1;
      uint64_t PRES84:1;
      uint64_t PRES85:1;
      uint64_t PRES86:1;
      uint64_t PRES87:1;
      uint64_t PRES88:1;
      uint64_t PRES89:1;
      uint64_t PRES90:1;
      uint64_t PRES91:1;
      uint64_t PRES92:1;
      uint64_t PRES93:1;
      uint64_t PRES94:1;
      uint64_t PRES95:1;
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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t CH16:1;
      uint64_t CH17:1;
      uint64_t CH18:1;
      uint64_t CH19:1;
      uint64_t CH20:1;
      uint64_t CH21:1;
      uint64_t CH22:1;
      uint64_t CH23:1;
      uint64_t CH24:1;
      uint64_t CH25:1;
      uint64_t CH26:1;
      uint64_t CH27:1;
      uint64_t CH28:1;
      uint64_t CH29:1;
      uint64_t CH30:1;
      uint64_t CH31:1;
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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t CH16:1;
      uint64_t CH17:1;
      uint64_t CH18:1;
      uint64_t CH19:1;
      uint64_t CH20:1;
      uint64_t CH21:1;
      uint64_t CH22:1;
      uint64_t CH23:1;
      uint64_t CH24:1;
      uint64_t CH25:1;
      uint64_t CH26:1;
      uint64_t CH27:1;
      uint64_t CH28:1;
      uint64_t CH29:1;
      uint64_t CH30:1;
      uint64_t CH31:1;
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
  } __attribute__((aligned(4))) CDR0;

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
  } __attribute__((aligned(4))) CDR1;

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
  } __attribute__((aligned(4))) CDR2;

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
  } __attribute__((aligned(4))) CDR3;

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
  } __attribute__((aligned(4))) CDR4;

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
  } __attribute__((aligned(4))) CDR5;

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
  } __attribute__((aligned(4))) CDR6;

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
  } __attribute__((aligned(4))) CDR7;

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
  } __attribute__((aligned(4))) CDR8;

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
  } __attribute__((aligned(4))) CDR9;

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
  } __attribute__((aligned(4))) CDR10;

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
  } __attribute__((aligned(4))) CDR11;

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
  } __attribute__((aligned(4))) CDR12;

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
  } __attribute__((aligned(4))) CDR13;

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
  } __attribute__((aligned(4))) CDR14;

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
  } __attribute__((aligned(4))) CDR15;

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
  } __attribute__((aligned(4))) CDR16;

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
  } __attribute__((aligned(4))) CDR17;

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
  } __attribute__((aligned(4))) CDR18;

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
  } __attribute__((aligned(4))) CDR19;

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
  } __attribute__((aligned(4))) CDR20;

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
  } __attribute__((aligned(4))) CDR21;

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
  } __attribute__((aligned(4))) CDR22;

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
  } __attribute__((aligned(4))) CDR23;

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
  } __attribute__((aligned(4))) CDR24;

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
  } __attribute__((aligned(4))) CDR25;

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
  } __attribute__((aligned(4))) CDR26;

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
  } __attribute__((aligned(4))) CDR27;

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
  } __attribute__((aligned(4))) CDR28;

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
  } __attribute__((aligned(4))) CDR29;

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
  } __attribute__((aligned(4))) CDR30;

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
  } __attribute__((aligned(4))) CDR31;

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
  } __attribute__((aligned(4))) CDR32;

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
  } __attribute__((aligned(4))) CDR33;

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
  } __attribute__((aligned(4))) CDR34;

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
  } __attribute__((aligned(4))) CDR35;

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
  } __attribute__((aligned(4))) CDR36;

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
  } __attribute__((aligned(4))) CDR37;

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
  } __attribute__((aligned(4))) CDR38;

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
  } __attribute__((aligned(4))) CDR39;

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
  } __attribute__((aligned(4))) CDR40;

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
  } __attribute__((aligned(4))) CDR41;

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
  } __attribute__((aligned(4))) CDR42;

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
  } __attribute__((aligned(4))) CDR43;

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
  } __attribute__((aligned(4))) CDR44;

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
  } __attribute__((aligned(4))) CDR45;

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
  } __attribute__((aligned(4))) CDR46;

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
  } __attribute__((aligned(4))) CDR47;

  uint8_t res9[64];

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
  } __attribute__((aligned(4))) CDR64;

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
  } __attribute__((aligned(4))) CDR65;

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
  } __attribute__((aligned(4))) CDR66;

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
  } __attribute__((aligned(4))) CDR67;

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
  } __attribute__((aligned(4))) CDR68;

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
  } __attribute__((aligned(4))) CDR69;

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
  } __attribute__((aligned(4))) CDR70;

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
  } __attribute__((aligned(4))) CDR71;

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
  } __attribute__((aligned(4))) CDR72;

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
  } __attribute__((aligned(4))) CDR73;

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
  } __attribute__((aligned(4))) CDR74;

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
  } __attribute__((aligned(4))) CDR75;

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
  } __attribute__((aligned(4))) CDR76;

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
  } __attribute__((aligned(4))) CDR77;

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
  } __attribute__((aligned(4))) CDR78;

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
  } __attribute__((aligned(4))) CDR79;

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
  } __attribute__((aligned(4))) CDR80;

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
  } __attribute__((aligned(4))) CDR81;

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
  } __attribute__((aligned(4))) CDR82;

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
  } __attribute__((aligned(4))) CDR83;

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
  } __attribute__((aligned(4))) CDR84;

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
  } __attribute__((aligned(4))) CDR85;

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
  } __attribute__((aligned(4))) CDR86;

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
  } __attribute__((aligned(4))) CDR87;

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
  } __attribute__((aligned(4))) CDR88;

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
  } __attribute__((aligned(4))) CDR89;

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
  } __attribute__((aligned(4))) CDR90;

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
  } __attribute__((aligned(4))) CDR91;

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
  } __attribute__((aligned(4))) CDR92;

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
  } __attribute__((aligned(4))) CDR93;

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
  } __attribute__((aligned(4))) CDR94;

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
  } __attribute__((aligned(4))) CDR95;

  uint8_t res10[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH8:4;
      uint64_t WSEL_CH9:4;
      uint64_t WSEL_CH10:4;
      uint64_t WSEL_CH11:4;
      uint64_t WSEL_CH12:4;
      uint64_t WSEL_CH13:4;
      uint64_t WSEL_CH14:4;
      uint64_t WSEL_CH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH16:4;
      uint64_t WSEL_CH17:4;
      uint64_t WSEL_CH18:4;
      uint64_t WSEL_CH19:4;
      uint64_t WSEL_CH20:4;
      uint64_t WSEL_CH21:4;
      uint64_t WSEL_CH22:4;
      uint64_t WSEL_CH23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH24:4;
      uint64_t WSEL_CH25:4;
      uint64_t WSEL_CH26:4;
      uint64_t WSEL_CH27:4;
      uint64_t WSEL_CH28:4;
      uint64_t WSEL_CH29:4;
      uint64_t WSEL_CH30:4;
      uint64_t WSEL_CH31:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH32:4;
      uint64_t WSEL_CH33:4;
      uint64_t WSEL_CH34:4;
      uint64_t WSEL_CH35:4;
      uint64_t WSEL_CH36:4;
      uint64_t WSEL_CH37:4;
      uint64_t WSEL_CH38:4;
      uint64_t WSEL_CH39:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR4;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH64:4;
      uint64_t WSEL_CH65:4;
      uint64_t WSEL_CH66:4;
      uint64_t WSEL_CH67:4;
      uint64_t WSEL_CH68:4;
      uint64_t WSEL_CH69:4;
      uint64_t WSEL_CH70:4;
      uint64_t WSEL_CH71:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH72:4;
      uint64_t WSEL_CH73:4;
      uint64_t WSEL_CH74:4;
      uint64_t WSEL_CH75:4;
      uint64_t WSEL_CH76:4;
      uint64_t WSEL_CH77:4;
      uint64_t WSEL_CH78:4;
      uint64_t WSEL_CH79:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH80:4;
      uint64_t WSEL_CH81:4;
      uint64_t WSEL_CH82:4;
      uint64_t WSEL_CH83:4;
      uint64_t WSEL_CH84:4;
      uint64_t WSEL_CH85:4;
      uint64_t WSEL_CH86:4;
      uint64_t WSEL_CH87:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH88:4;
      uint64_t WSEL_CH89:4;
      uint64_t WSEL_CH90:4;
      uint64_t WSEL_CH91:4;
      uint64_t WSEL_CH92:4;
      uint64_t WSEL_CH93:4;
      uint64_t WSEL_CH94:4;
      uint64_t WSEL_CH95:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR11;

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
      uint64_t CWEN8:1;
      uint64_t CWEN9:1;
      uint64_t CWEN10:1;
      uint64_t CWEN11:1;
      uint64_t CWEN12:1;
      uint64_t CWEN13:1;
      uint64_t CWEN14:1;
      uint64_t CWEN15:1;
      uint64_t CWEN16:1;
      uint64_t CWEN17:1;
      uint64_t CWEN18:1;
      uint64_t CWEN19:1;
      uint64_t CWEN20:1;
      uint64_t CWEN21:1;
      uint64_t CWEN22:1;
      uint64_t CWEN23:1;
      uint64_t CWEN24:1;
      uint64_t CWEN25:1;
      uint64_t CWEN26:1;
      uint64_t CWEN27:1;
      uint64_t CWEN28:1;
      uint64_t CWEN29:1;
      uint64_t CWEN30:1;
      uint64_t CWEN31:1;
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

  uint8_t res12[4];

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
  } __attribute__((aligned(4))) AWORR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH32:1;
      uint64_t AWOR_CH33:1;
      uint64_t AWOR_CH34:1;
      uint64_t AWOR_CH35:1;
      uint64_t AWOR_CH36:1;
      uint64_t AWOR_CH37:1;
      uint64_t AWOR_CH38:1;
      uint64_t AWOR_CH39:1;
      uint64_t AWOR_CH40:1;
      uint64_t AWOR_CH41:1;
      uint64_t AWOR_CH42:1;
      uint64_t AWOR_CH43:1;
      uint64_t AWOR_CH44:1;
      uint64_t AWOR_CH45:1;
      uint64_t AWOR_CH46:1;
      uint64_t AWOR_CH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH64:1;
      uint64_t AWOR_CH65:1;
      uint64_t AWOR_CH66:1;
      uint64_t AWOR_CH67:1;
      uint64_t AWOR_CH68:1;
      uint64_t AWOR_CH69:1;
      uint64_t AWOR_CH70:1;
      uint64_t AWOR_CH71:1;
      uint64_t AWOR_CH72:1;
      uint64_t AWOR_CH73:1;
      uint64_t AWOR_CH74:1;
      uint64_t AWOR_CH75:1;
      uint64_t AWOR_CH76:1;
      uint64_t AWOR_CH77:1;
      uint64_t AWOR_CH78:1;
      uint64_t AWOR_CH79:1;
      uint64_t AWOR_CH80:1;
      uint64_t AWOR_CH81:1;
      uint64_t AWOR_CH82:1;
      uint64_t AWOR_CH83:1;
      uint64_t AWOR_CH84:1;
      uint64_t AWOR_CH85:1;
      uint64_t AWOR_CH86:1;
      uint64_t AWOR_CH87:1;
      uint64_t AWOR_CH88:1;
      uint64_t AWOR_CH89:1;
      uint64_t AWOR_CH90:1;
      uint64_t AWOR_CH91:1;
      uint64_t AWOR_CH92:1;
      uint64_t AWOR_CH93:1;
      uint64_t AWOR_CH94:1;
      uint64_t AWOR_CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR2;

  uint8_t res13[68];

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
      uint64_t reservedSpace2:4;
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
      uint64_t reservedSpace1:2;
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
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
      uint64_t reservedSpace1:3;
      uint64_t OVFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res14[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
      uint64_t FDATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR2;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:3;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:19;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  uint8_t res17[4];

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
      uint64_t reservedSpace1:8;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res18[4];

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

};

#define ADC_ADC_0 (*(volatile struct ADC_ADC_0_tag *) 0xffee0000)

struct ADC_ADC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t REFSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORT_CHAIN:1;
      uint64_t ADCLKSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t STCL:1;
      uint64_t CTU_MODE:1;
      uint64_t CTUEN:1;
      uint64_t reservedSpace2:2;
      uint64_t JSTART:1;
      uint64_t reservedSpace3:3;
      uint64_t NSTART:1;
      uint64_t reservedSpace4:1;
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
      uint64_t CTUSTART:1;
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
      uint64_t EOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH0:1;
      uint64_t EOCCH1:1;
      uint64_t EOCCH2:1;
      uint64_t EOCCH3:1;
      uint64_t EOCCH4:1;
      uint64_t EOCCH5:1;
      uint64_t EOCCH6:1;
      uint64_t EOCCH7:1;
      uint64_t EOCCH8:1;
      uint64_t EOCCH9:1;
      uint64_t EOCCH10:1;
      uint64_t EOCCH11:1;
      uint64_t EOCCH12:1;
      uint64_t EOCCH13:1;
      uint64_t EOCCH14:1;
      uint64_t EOCCH15:1;
      uint64_t EOCCH16:1;
      uint64_t EOCCH17:1;
      uint64_t EOCCH18:1;
      uint64_t EOCCH19:1;
      uint64_t EOCCH20:1;
      uint64_t EOCCH21:1;
      uint64_t EOCCH22:1;
      uint64_t EOCCH23:1;
      uint64_t EOCCH24:1;
      uint64_t EOCCH25:1;
      uint64_t EOCCH26:1;
      uint64_t EOCCH27:1;
      uint64_t EOCCH28:1;
      uint64_t EOCCH29:1;
      uint64_t EOCCH30:1;
      uint64_t EOCCH31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH32:1;
      uint64_t EOCCH33:1;
      uint64_t EOCCH34:1;
      uint64_t EOCCH35:1;
      uint64_t EOCCH36:1;
      uint64_t EOCCH37:1;
      uint64_t EOCCH38:1;
      uint64_t EOCCH39:1;
      uint64_t EOCCH40:1;
      uint64_t EOCCH41:1;
      uint64_t EOCCH42:1;
      uint64_t EOCCH43:1;
      uint64_t EOCCH44:1;
      uint64_t EOCCH45:1;
      uint64_t EOCCH46:1;
      uint64_t EOCCH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH64:1;
      uint64_t EOCCH65:1;
      uint64_t EOCCH66:1;
      uint64_t EOCCH67:1;
      uint64_t EOCCH68:1;
      uint64_t EOCCH69:1;
      uint64_t EOCCH70:1;
      uint64_t EOCCH71:1;
      uint64_t EOCCH72:1;
      uint64_t EOCCH73:1;
      uint64_t EOCCH74:1;
      uint64_t EOCCH75:1;
      uint64_t EOCCH76:1;
      uint64_t EOCCH77:1;
      uint64_t EOCCH78:1;
      uint64_t EOCCH79:1;
      uint64_t EOCCH80:1;
      uint64_t EOCCH81:1;
      uint64_t EOCCH82:1;
      uint64_t EOCCH83:1;
      uint64_t EOCCH84:1;
      uint64_t EOCCH85:1;
      uint64_t EOCCH86:1;
      uint64_t EOCCH87:1;
      uint64_t EOCCH88:1;
      uint64_t EOCCH89:1;
      uint64_t EOCCH90:1;
      uint64_t EOCCH91:1;
      uint64_t EOCCH92:1;
      uint64_t EOCCH93:1;
      uint64_t EOCCH94:1;
      uint64_t EOCCH95:1;
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
      uint64_t MSKEOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM0:1;
      uint64_t CIM1:1;
      uint64_t CIM2:1;
      uint64_t CIM3:1;
      uint64_t CIM4:1;
      uint64_t CIM5:1;
      uint64_t CIM6:1;
      uint64_t CIM7:1;
      uint64_t CIM8:1;
      uint64_t CIM9:1;
      uint64_t CIM10:1;
      uint64_t CIM11:1;
      uint64_t CIM12:1;
      uint64_t CIM13:1;
      uint64_t CIM14:1;
      uint64_t CIM15:1;
      uint64_t CIM16:1;
      uint64_t CIM17:1;
      uint64_t CIM18:1;
      uint64_t CIM19:1;
      uint64_t CIM20:1;
      uint64_t CIM21:1;
      uint64_t CIM22:1;
      uint64_t CIM23:1;
      uint64_t CIM24:1;
      uint64_t CIM25:1;
      uint64_t CIM26:1;
      uint64_t CIM27:1;
      uint64_t CIM28:1;
      uint64_t CIM29:1;
      uint64_t CIM30:1;
      uint64_t CIM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM32:1;
      uint64_t CIM33:1;
      uint64_t CIM34:1;
      uint64_t CIM35:1;
      uint64_t CIM36:1;
      uint64_t CIM37:1;
      uint64_t CIM38:1;
      uint64_t CIM39:1;
      uint64_t CIM40:1;
      uint64_t CIM41:1;
      uint64_t CIM42:1;
      uint64_t CIM43:1;
      uint64_t CIM44:1;
      uint64_t CIM45:1;
      uint64_t CIM46:1;
      uint64_t CIM47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM64:1;
      uint64_t CIM65:1;
      uint64_t CIM66:1;
      uint64_t CIM67:1;
      uint64_t CIM68:1;
      uint64_t CIM69:1;
      uint64_t CIM70:1;
      uint64_t CIM71:1;
      uint64_t CIM72:1;
      uint64_t CIM73:1;
      uint64_t CIM74:1;
      uint64_t CIM75:1;
      uint64_t CIM76:1;
      uint64_t CIM77:1;
      uint64_t CIM78:1;
      uint64_t CIM79:1;
      uint64_t CIM80:1;
      uint64_t CIM81:1;
      uint64_t CIM82:1;
      uint64_t CIM83:1;
      uint64_t CIM84:1;
      uint64_t CIM85:1;
      uint64_t CIM86:1;
      uint64_t CIM87:1;
      uint64_t CIM88:1;
      uint64_t CIM89:1;
      uint64_t CIM90:1;
      uint64_t CIM91:1;
      uint64_t CIM92:1;
      uint64_t CIM93:1;
      uint64_t CIM94:1;
      uint64_t CIM95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1L:1;
      uint64_t WDG1H:1;
      uint64_t WDG2L:1;
      uint64_t WDG2H:1;
      uint64_t WDG3L:1;
      uint64_t WDG3H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKWDG0L:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG1L:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG2L:1;
      uint64_t MSKWDG2H:1;
      uint64_t MSKWDG3L:1;
      uint64_t MSKWDG3H:1;
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
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DMA8:1;
      uint64_t DMA9:1;
      uint64_t DMA10:1;
      uint64_t DMA11:1;
      uint64_t DMA12:1;
      uint64_t DMA13:1;
      uint64_t DMA14:1;
      uint64_t DMA15:1;
      uint64_t DMA16:1;
      uint64_t DMA17:1;
      uint64_t DMA18:1;
      uint64_t DMA19:1;
      uint64_t DMA20:1;
      uint64_t DMA21:1;
      uint64_t DMA22:1;
      uint64_t DMA23:1;
      uint64_t DMA24:1;
      uint64_t DMA25:1;
      uint64_t DMA26:1;
      uint64_t DMA27:1;
      uint64_t DMA28:1;
      uint64_t DMA29:1;
      uint64_t DMA30:1;
      uint64_t DMA31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA32:1;
      uint64_t DMA33:1;
      uint64_t DMA34:1;
      uint64_t DMA35:1;
      uint64_t DMA36:1;
      uint64_t DMA37:1;
      uint64_t DMA38:1;
      uint64_t DMA39:1;
      uint64_t DMA40:1;
      uint64_t DMA41:1;
      uint64_t DMA42:1;
      uint64_t DMA43:1;
      uint64_t DMA44:1;
      uint64_t DMA45:1;
      uint64_t DMA46:1;
      uint64_t DMA47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA64:1;
      uint64_t DMA65:1;
      uint64_t DMA66:1;
      uint64_t DMA67:1;
      uint64_t DMA68:1;
      uint64_t DMA69:1;
      uint64_t DMA70:1;
      uint64_t DMA71:1;
      uint64_t DMA72:1;
      uint64_t DMA73:1;
      uint64_t DMA74:1;
      uint64_t DMA75:1;
      uint64_t DMA76:1;
      uint64_t DMA77:1;
      uint64_t DMA78:1;
      uint64_t DMA79:1;
      uint64_t DMA80:1;
      uint64_t DMA81:1;
      uint64_t DMA82:1;
      uint64_t DMA83:1;
      uint64_t DMA84:1;
      uint64_t DMA85:1;
      uint64_t DMA86:1;
      uint64_t DMA87:1;
      uint64_t DMA88:1;
      uint64_t DMA89:1;
      uint64_t DMA90:1;
      uint64_t DMA91:1;
      uint64_t DMA92:1;
      uint64_t DMA93:1;
      uint64_t DMA94:1;
      uint64_t DMA95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR2;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:2;
      uint64_t PREVAL1:2;
      uint64_t PREVAL2:2;
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
  } __attribute__((aligned(4))) PSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES32:1;
      uint64_t PRES33:1;
      uint64_t PRES34:1;
      uint64_t PRES35:1;
      uint64_t PRES36:1;
      uint64_t PRES37:1;
      uint64_t PRES38:1;
      uint64_t PRES39:1;
      uint64_t PRES40:1;
      uint64_t PRES41:1;
      uint64_t PRES42:1;
      uint64_t PRES43:1;
      uint64_t PRES44:1;
      uint64_t PRES45:1;
      uint64_t PRES46:1;
      uint64_t PRES47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES64:1;
      uint64_t PRES65:1;
      uint64_t PRES66:1;
      uint64_t PRES67:1;
      uint64_t PRES68:1;
      uint64_t PRES69:1;
      uint64_t PRES70:1;
      uint64_t PRES71:1;
      uint64_t PRES72:1;
      uint64_t PRES73:1;
      uint64_t PRES74:1;
      uint64_t PRES75:1;
      uint64_t PRES76:1;
      uint64_t PRES77:1;
      uint64_t PRES78:1;
      uint64_t PRES79:1;
      uint64_t PRES80:1;
      uint64_t PRES81:1;
      uint64_t PRES82:1;
      uint64_t PRES83:1;
      uint64_t PRES84:1;
      uint64_t PRES85:1;
      uint64_t PRES86:1;
      uint64_t PRES87:1;
      uint64_t PRES88:1;
      uint64_t PRES89:1;
      uint64_t PRES90:1;
      uint64_t PRES91:1;
      uint64_t PRES92:1;
      uint64_t PRES93:1;
      uint64_t PRES94:1;
      uint64_t PRES95:1;
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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t CH16:1;
      uint64_t CH17:1;
      uint64_t CH18:1;
      uint64_t CH19:1;
      uint64_t CH20:1;
      uint64_t CH21:1;
      uint64_t CH22:1;
      uint64_t CH23:1;
      uint64_t CH24:1;
      uint64_t CH25:1;
      uint64_t CH26:1;
      uint64_t CH27:1;
      uint64_t CH28:1;
      uint64_t CH29:1;
      uint64_t CH30:1;
      uint64_t CH31:1;
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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t CH16:1;
      uint64_t CH17:1;
      uint64_t CH18:1;
      uint64_t CH19:1;
      uint64_t CH20:1;
      uint64_t CH21:1;
      uint64_t CH22:1;
      uint64_t CH23:1;
      uint64_t CH24:1;
      uint64_t CH25:1;
      uint64_t CH26:1;
      uint64_t CH27:1;
      uint64_t CH28:1;
      uint64_t CH29:1;
      uint64_t CH30:1;
      uint64_t CH31:1;
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
  } __attribute__((aligned(4))) CDR0;

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
  } __attribute__((aligned(4))) CDR1;

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
  } __attribute__((aligned(4))) CDR2;

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
  } __attribute__((aligned(4))) CDR3;

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
  } __attribute__((aligned(4))) CDR4;

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
  } __attribute__((aligned(4))) CDR5;

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
  } __attribute__((aligned(4))) CDR6;

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
  } __attribute__((aligned(4))) CDR7;

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
  } __attribute__((aligned(4))) CDR8;

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
  } __attribute__((aligned(4))) CDR9;

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
  } __attribute__((aligned(4))) CDR10;

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
  } __attribute__((aligned(4))) CDR11;

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
  } __attribute__((aligned(4))) CDR12;

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
  } __attribute__((aligned(4))) CDR13;

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
  } __attribute__((aligned(4))) CDR14;

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
  } __attribute__((aligned(4))) CDR15;

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
  } __attribute__((aligned(4))) CDR16;

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
  } __attribute__((aligned(4))) CDR17;

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
  } __attribute__((aligned(4))) CDR18;

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
  } __attribute__((aligned(4))) CDR19;

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
  } __attribute__((aligned(4))) CDR20;

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
  } __attribute__((aligned(4))) CDR21;

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
  } __attribute__((aligned(4))) CDR22;

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
  } __attribute__((aligned(4))) CDR23;

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
  } __attribute__((aligned(4))) CDR24;

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
  } __attribute__((aligned(4))) CDR25;

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
  } __attribute__((aligned(4))) CDR26;

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
  } __attribute__((aligned(4))) CDR27;

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
  } __attribute__((aligned(4))) CDR28;

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
  } __attribute__((aligned(4))) CDR29;

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
  } __attribute__((aligned(4))) CDR30;

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
  } __attribute__((aligned(4))) CDR31;

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
  } __attribute__((aligned(4))) CDR32;

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
  } __attribute__((aligned(4))) CDR33;

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
  } __attribute__((aligned(4))) CDR34;

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
  } __attribute__((aligned(4))) CDR35;

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
  } __attribute__((aligned(4))) CDR36;

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
  } __attribute__((aligned(4))) CDR37;

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
  } __attribute__((aligned(4))) CDR38;

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
  } __attribute__((aligned(4))) CDR39;

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
  } __attribute__((aligned(4))) CDR40;

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
  } __attribute__((aligned(4))) CDR41;

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
  } __attribute__((aligned(4))) CDR42;

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
  } __attribute__((aligned(4))) CDR43;

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
  } __attribute__((aligned(4))) CDR44;

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
  } __attribute__((aligned(4))) CDR45;

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
  } __attribute__((aligned(4))) CDR46;

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
  } __attribute__((aligned(4))) CDR47;

  uint8_t res9[64];

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
  } __attribute__((aligned(4))) CDR64;

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
  } __attribute__((aligned(4))) CDR65;

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
  } __attribute__((aligned(4))) CDR66;

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
  } __attribute__((aligned(4))) CDR67;

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
  } __attribute__((aligned(4))) CDR68;

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
  } __attribute__((aligned(4))) CDR69;

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
  } __attribute__((aligned(4))) CDR70;

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
  } __attribute__((aligned(4))) CDR71;

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
  } __attribute__((aligned(4))) CDR72;

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
  } __attribute__((aligned(4))) CDR73;

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
  } __attribute__((aligned(4))) CDR74;

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
  } __attribute__((aligned(4))) CDR75;

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
  } __attribute__((aligned(4))) CDR76;

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
  } __attribute__((aligned(4))) CDR77;

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
  } __attribute__((aligned(4))) CDR78;

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
  } __attribute__((aligned(4))) CDR79;

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
  } __attribute__((aligned(4))) CDR80;

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
  } __attribute__((aligned(4))) CDR81;

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
  } __attribute__((aligned(4))) CDR82;

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
  } __attribute__((aligned(4))) CDR83;

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
  } __attribute__((aligned(4))) CDR84;

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
  } __attribute__((aligned(4))) CDR85;

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
  } __attribute__((aligned(4))) CDR86;

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
  } __attribute__((aligned(4))) CDR87;

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
  } __attribute__((aligned(4))) CDR88;

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
  } __attribute__((aligned(4))) CDR89;

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
  } __attribute__((aligned(4))) CDR90;

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
  } __attribute__((aligned(4))) CDR91;

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
  } __attribute__((aligned(4))) CDR92;

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
  } __attribute__((aligned(4))) CDR93;

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
  } __attribute__((aligned(4))) CDR94;

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
  } __attribute__((aligned(4))) CDR95;

  uint8_t res10[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH8:4;
      uint64_t WSEL_CH9:4;
      uint64_t WSEL_CH10:4;
      uint64_t WSEL_CH11:4;
      uint64_t WSEL_CH12:4;
      uint64_t WSEL_CH13:4;
      uint64_t WSEL_CH14:4;
      uint64_t WSEL_CH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH16:4;
      uint64_t WSEL_CH17:4;
      uint64_t WSEL_CH18:4;
      uint64_t WSEL_CH19:4;
      uint64_t WSEL_CH20:4;
      uint64_t WSEL_CH21:4;
      uint64_t WSEL_CH22:4;
      uint64_t WSEL_CH23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH24:4;
      uint64_t WSEL_CH25:4;
      uint64_t WSEL_CH26:4;
      uint64_t WSEL_CH27:4;
      uint64_t WSEL_CH28:4;
      uint64_t WSEL_CH29:4;
      uint64_t WSEL_CH30:4;
      uint64_t WSEL_CH31:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH32:4;
      uint64_t WSEL_CH33:4;
      uint64_t WSEL_CH34:4;
      uint64_t WSEL_CH35:4;
      uint64_t WSEL_CH36:4;
      uint64_t WSEL_CH37:4;
      uint64_t WSEL_CH38:4;
      uint64_t WSEL_CH39:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR4;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH64:4;
      uint64_t WSEL_CH65:4;
      uint64_t WSEL_CH66:4;
      uint64_t WSEL_CH67:4;
      uint64_t WSEL_CH68:4;
      uint64_t WSEL_CH69:4;
      uint64_t WSEL_CH70:4;
      uint64_t WSEL_CH71:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH72:4;
      uint64_t WSEL_CH73:4;
      uint64_t WSEL_CH74:4;
      uint64_t WSEL_CH75:4;
      uint64_t WSEL_CH76:4;
      uint64_t WSEL_CH77:4;
      uint64_t WSEL_CH78:4;
      uint64_t WSEL_CH79:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH80:4;
      uint64_t WSEL_CH81:4;
      uint64_t WSEL_CH82:4;
      uint64_t WSEL_CH83:4;
      uint64_t WSEL_CH84:4;
      uint64_t WSEL_CH85:4;
      uint64_t WSEL_CH86:4;
      uint64_t WSEL_CH87:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH88:4;
      uint64_t WSEL_CH89:4;
      uint64_t WSEL_CH90:4;
      uint64_t WSEL_CH91:4;
      uint64_t WSEL_CH92:4;
      uint64_t WSEL_CH93:4;
      uint64_t WSEL_CH94:4;
      uint64_t WSEL_CH95:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR11;

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
      uint64_t CWEN8:1;
      uint64_t CWEN9:1;
      uint64_t CWEN10:1;
      uint64_t CWEN11:1;
      uint64_t CWEN12:1;
      uint64_t CWEN13:1;
      uint64_t CWEN14:1;
      uint64_t CWEN15:1;
      uint64_t CWEN16:1;
      uint64_t CWEN17:1;
      uint64_t CWEN18:1;
      uint64_t CWEN19:1;
      uint64_t CWEN20:1;
      uint64_t CWEN21:1;
      uint64_t CWEN22:1;
      uint64_t CWEN23:1;
      uint64_t CWEN24:1;
      uint64_t CWEN25:1;
      uint64_t CWEN26:1;
      uint64_t CWEN27:1;
      uint64_t CWEN28:1;
      uint64_t CWEN29:1;
      uint64_t CWEN30:1;
      uint64_t CWEN31:1;
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

  uint8_t res12[4];

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
  } __attribute__((aligned(4))) AWORR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH32:1;
      uint64_t AWOR_CH33:1;
      uint64_t AWOR_CH34:1;
      uint64_t AWOR_CH35:1;
      uint64_t AWOR_CH36:1;
      uint64_t AWOR_CH37:1;
      uint64_t AWOR_CH38:1;
      uint64_t AWOR_CH39:1;
      uint64_t AWOR_CH40:1;
      uint64_t AWOR_CH41:1;
      uint64_t AWOR_CH42:1;
      uint64_t AWOR_CH43:1;
      uint64_t AWOR_CH44:1;
      uint64_t AWOR_CH45:1;
      uint64_t AWOR_CH46:1;
      uint64_t AWOR_CH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH64:1;
      uint64_t AWOR_CH65:1;
      uint64_t AWOR_CH66:1;
      uint64_t AWOR_CH67:1;
      uint64_t AWOR_CH68:1;
      uint64_t AWOR_CH69:1;
      uint64_t AWOR_CH70:1;
      uint64_t AWOR_CH71:1;
      uint64_t AWOR_CH72:1;
      uint64_t AWOR_CH73:1;
      uint64_t AWOR_CH74:1;
      uint64_t AWOR_CH75:1;
      uint64_t AWOR_CH76:1;
      uint64_t AWOR_CH77:1;
      uint64_t AWOR_CH78:1;
      uint64_t AWOR_CH79:1;
      uint64_t AWOR_CH80:1;
      uint64_t AWOR_CH81:1;
      uint64_t AWOR_CH82:1;
      uint64_t AWOR_CH83:1;
      uint64_t AWOR_CH84:1;
      uint64_t AWOR_CH85:1;
      uint64_t AWOR_CH86:1;
      uint64_t AWOR_CH87:1;
      uint64_t AWOR_CH88:1;
      uint64_t AWOR_CH89:1;
      uint64_t AWOR_CH90:1;
      uint64_t AWOR_CH91:1;
      uint64_t AWOR_CH92:1;
      uint64_t AWOR_CH93:1;
      uint64_t AWOR_CH94:1;
      uint64_t AWOR_CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR2;

  uint8_t res13[68];

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
      uint64_t reservedSpace2:4;
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
      uint64_t reservedSpace1:2;
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
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
      uint64_t reservedSpace1:3;
      uint64_t OVFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res14[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
      uint64_t FDATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR2;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:3;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:19;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  uint8_t res17[4];

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
      uint64_t reservedSpace1:8;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res18[4];

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

};

#define ADC_ADC_1 (*(volatile struct ADC_ADC_1_tag *) 0xfbee4000)

struct ADC_ADC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t REFSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORT_CHAIN:1;
      uint64_t ADCLKSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t STCL:1;
      uint64_t CTU_MODE:1;
      uint64_t CTUEN:1;
      uint64_t reservedSpace2:2;
      uint64_t JSTART:1;
      uint64_t reservedSpace3:3;
      uint64_t NSTART:1;
      uint64_t reservedSpace4:1;
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
      uint64_t CTUSTART:1;
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
      uint64_t EOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH0:1;
      uint64_t EOCCH1:1;
      uint64_t EOCCH2:1;
      uint64_t EOCCH3:1;
      uint64_t EOCCH4:1;
      uint64_t EOCCH5:1;
      uint64_t EOCCH6:1;
      uint64_t EOCCH7:1;
      uint64_t EOCCH8:1;
      uint64_t EOCCH9:1;
      uint64_t EOCCH10:1;
      uint64_t EOCCH11:1;
      uint64_t EOCCH12:1;
      uint64_t EOCCH13:1;
      uint64_t EOCCH14:1;
      uint64_t EOCCH15:1;
      uint64_t EOCCH16:1;
      uint64_t EOCCH17:1;
      uint64_t EOCCH18:1;
      uint64_t EOCCH19:1;
      uint64_t EOCCH20:1;
      uint64_t EOCCH21:1;
      uint64_t EOCCH22:1;
      uint64_t EOCCH23:1;
      uint64_t EOCCH24:1;
      uint64_t EOCCH25:1;
      uint64_t EOCCH26:1;
      uint64_t EOCCH27:1;
      uint64_t EOCCH28:1;
      uint64_t EOCCH29:1;
      uint64_t EOCCH30:1;
      uint64_t EOCCH31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH32:1;
      uint64_t EOCCH33:1;
      uint64_t EOCCH34:1;
      uint64_t EOCCH35:1;
      uint64_t EOCCH36:1;
      uint64_t EOCCH37:1;
      uint64_t EOCCH38:1;
      uint64_t EOCCH39:1;
      uint64_t EOCCH40:1;
      uint64_t EOCCH41:1;
      uint64_t EOCCH42:1;
      uint64_t EOCCH43:1;
      uint64_t EOCCH44:1;
      uint64_t EOCCH45:1;
      uint64_t EOCCH46:1;
      uint64_t EOCCH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH64:1;
      uint64_t EOCCH65:1;
      uint64_t EOCCH66:1;
      uint64_t EOCCH67:1;
      uint64_t EOCCH68:1;
      uint64_t EOCCH69:1;
      uint64_t EOCCH70:1;
      uint64_t EOCCH71:1;
      uint64_t EOCCH72:1;
      uint64_t EOCCH73:1;
      uint64_t EOCCH74:1;
      uint64_t EOCCH75:1;
      uint64_t EOCCH76:1;
      uint64_t EOCCH77:1;
      uint64_t EOCCH78:1;
      uint64_t EOCCH79:1;
      uint64_t EOCCH80:1;
      uint64_t EOCCH81:1;
      uint64_t EOCCH82:1;
      uint64_t EOCCH83:1;
      uint64_t EOCCH84:1;
      uint64_t EOCCH85:1;
      uint64_t EOCCH86:1;
      uint64_t EOCCH87:1;
      uint64_t EOCCH88:1;
      uint64_t EOCCH89:1;
      uint64_t EOCCH90:1;
      uint64_t EOCCH91:1;
      uint64_t EOCCH92:1;
      uint64_t EOCCH93:1;
      uint64_t EOCCH94:1;
      uint64_t EOCCH95:1;
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
      uint64_t MSKEOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM0:1;
      uint64_t CIM1:1;
      uint64_t CIM2:1;
      uint64_t CIM3:1;
      uint64_t CIM4:1;
      uint64_t CIM5:1;
      uint64_t CIM6:1;
      uint64_t CIM7:1;
      uint64_t CIM8:1;
      uint64_t CIM9:1;
      uint64_t CIM10:1;
      uint64_t CIM11:1;
      uint64_t CIM12:1;
      uint64_t CIM13:1;
      uint64_t CIM14:1;
      uint64_t CIM15:1;
      uint64_t CIM16:1;
      uint64_t CIM17:1;
      uint64_t CIM18:1;
      uint64_t CIM19:1;
      uint64_t CIM20:1;
      uint64_t CIM21:1;
      uint64_t CIM22:1;
      uint64_t CIM23:1;
      uint64_t CIM24:1;
      uint64_t CIM25:1;
      uint64_t CIM26:1;
      uint64_t CIM27:1;
      uint64_t CIM28:1;
      uint64_t CIM29:1;
      uint64_t CIM30:1;
      uint64_t CIM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM32:1;
      uint64_t CIM33:1;
      uint64_t CIM34:1;
      uint64_t CIM35:1;
      uint64_t CIM36:1;
      uint64_t CIM37:1;
      uint64_t CIM38:1;
      uint64_t CIM39:1;
      uint64_t CIM40:1;
      uint64_t CIM41:1;
      uint64_t CIM42:1;
      uint64_t CIM43:1;
      uint64_t CIM44:1;
      uint64_t CIM45:1;
      uint64_t CIM46:1;
      uint64_t CIM47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM64:1;
      uint64_t CIM65:1;
      uint64_t CIM66:1;
      uint64_t CIM67:1;
      uint64_t CIM68:1;
      uint64_t CIM69:1;
      uint64_t CIM70:1;
      uint64_t CIM71:1;
      uint64_t CIM72:1;
      uint64_t CIM73:1;
      uint64_t CIM74:1;
      uint64_t CIM75:1;
      uint64_t CIM76:1;
      uint64_t CIM77:1;
      uint64_t CIM78:1;
      uint64_t CIM79:1;
      uint64_t CIM80:1;
      uint64_t CIM81:1;
      uint64_t CIM82:1;
      uint64_t CIM83:1;
      uint64_t CIM84:1;
      uint64_t CIM85:1;
      uint64_t CIM86:1;
      uint64_t CIM87:1;
      uint64_t CIM88:1;
      uint64_t CIM89:1;
      uint64_t CIM90:1;
      uint64_t CIM91:1;
      uint64_t CIM92:1;
      uint64_t CIM93:1;
      uint64_t CIM94:1;
      uint64_t CIM95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1L:1;
      uint64_t WDG1H:1;
      uint64_t WDG2L:1;
      uint64_t WDG2H:1;
      uint64_t WDG3L:1;
      uint64_t WDG3H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKWDG0L:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG1L:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG2L:1;
      uint64_t MSKWDG2H:1;
      uint64_t MSKWDG3L:1;
      uint64_t MSKWDG3H:1;
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
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DMA8:1;
      uint64_t DMA9:1;
      uint64_t DMA10:1;
      uint64_t DMA11:1;
      uint64_t DMA12:1;
      uint64_t DMA13:1;
      uint64_t DMA14:1;
      uint64_t DMA15:1;
      uint64_t DMA16:1;
      uint64_t DMA17:1;
      uint64_t DMA18:1;
      uint64_t DMA19:1;
      uint64_t DMA20:1;
      uint64_t DMA21:1;
      uint64_t DMA22:1;
      uint64_t DMA23:1;
      uint64_t DMA24:1;
      uint64_t DMA25:1;
      uint64_t DMA26:1;
      uint64_t DMA27:1;
      uint64_t DMA28:1;
      uint64_t DMA29:1;
      uint64_t DMA30:1;
      uint64_t DMA31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA32:1;
      uint64_t DMA33:1;
      uint64_t DMA34:1;
      uint64_t DMA35:1;
      uint64_t DMA36:1;
      uint64_t DMA37:1;
      uint64_t DMA38:1;
      uint64_t DMA39:1;
      uint64_t DMA40:1;
      uint64_t DMA41:1;
      uint64_t DMA42:1;
      uint64_t DMA43:1;
      uint64_t DMA44:1;
      uint64_t DMA45:1;
      uint64_t DMA46:1;
      uint64_t DMA47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA64:1;
      uint64_t DMA65:1;
      uint64_t DMA66:1;
      uint64_t DMA67:1;
      uint64_t DMA68:1;
      uint64_t DMA69:1;
      uint64_t DMA70:1;
      uint64_t DMA71:1;
      uint64_t DMA72:1;
      uint64_t DMA73:1;
      uint64_t DMA74:1;
      uint64_t DMA75:1;
      uint64_t DMA76:1;
      uint64_t DMA77:1;
      uint64_t DMA78:1;
      uint64_t DMA79:1;
      uint64_t DMA80:1;
      uint64_t DMA81:1;
      uint64_t DMA82:1;
      uint64_t DMA83:1;
      uint64_t DMA84:1;
      uint64_t DMA85:1;
      uint64_t DMA86:1;
      uint64_t DMA87:1;
      uint64_t DMA88:1;
      uint64_t DMA89:1;
      uint64_t DMA90:1;
      uint64_t DMA91:1;
      uint64_t DMA92:1;
      uint64_t DMA93:1;
      uint64_t DMA94:1;
      uint64_t DMA95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR2;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:2;
      uint64_t PREVAL1:2;
      uint64_t PREVAL2:2;
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
  } __attribute__((aligned(4))) PSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES32:1;
      uint64_t PRES33:1;
      uint64_t PRES34:1;
      uint64_t PRES35:1;
      uint64_t PRES36:1;
      uint64_t PRES37:1;
      uint64_t PRES38:1;
      uint64_t PRES39:1;
      uint64_t PRES40:1;
      uint64_t PRES41:1;
      uint64_t PRES42:1;
      uint64_t PRES43:1;
      uint64_t PRES44:1;
      uint64_t PRES45:1;
      uint64_t PRES46:1;
      uint64_t PRES47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES64:1;
      uint64_t PRES65:1;
      uint64_t PRES66:1;
      uint64_t PRES67:1;
      uint64_t PRES68:1;
      uint64_t PRES69:1;
      uint64_t PRES70:1;
      uint64_t PRES71:1;
      uint64_t PRES72:1;
      uint64_t PRES73:1;
      uint64_t PRES74:1;
      uint64_t PRES75:1;
      uint64_t PRES76:1;
      uint64_t PRES77:1;
      uint64_t PRES78:1;
      uint64_t PRES79:1;
      uint64_t PRES80:1;
      uint64_t PRES81:1;
      uint64_t PRES82:1;
      uint64_t PRES83:1;
      uint64_t PRES84:1;
      uint64_t PRES85:1;
      uint64_t PRES86:1;
      uint64_t PRES87:1;
      uint64_t PRES88:1;
      uint64_t PRES89:1;
      uint64_t PRES90:1;
      uint64_t PRES91:1;
      uint64_t PRES92:1;
      uint64_t PRES93:1;
      uint64_t PRES94:1;
      uint64_t PRES95:1;
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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t CH16:1;
      uint64_t CH17:1;
      uint64_t CH18:1;
      uint64_t CH19:1;
      uint64_t CH20:1;
      uint64_t CH21:1;
      uint64_t CH22:1;
      uint64_t CH23:1;
      uint64_t CH24:1;
      uint64_t CH25:1;
      uint64_t CH26:1;
      uint64_t CH27:1;
      uint64_t CH28:1;
      uint64_t CH29:1;
      uint64_t CH30:1;
      uint64_t CH31:1;
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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t CH16:1;
      uint64_t CH17:1;
      uint64_t CH18:1;
      uint64_t CH19:1;
      uint64_t CH20:1;
      uint64_t CH21:1;
      uint64_t CH22:1;
      uint64_t CH23:1;
      uint64_t CH24:1;
      uint64_t CH25:1;
      uint64_t CH26:1;
      uint64_t CH27:1;
      uint64_t CH28:1;
      uint64_t CH29:1;
      uint64_t CH30:1;
      uint64_t CH31:1;
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
  } __attribute__((aligned(4))) CDR0;

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
  } __attribute__((aligned(4))) CDR1;

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
  } __attribute__((aligned(4))) CDR2;

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
  } __attribute__((aligned(4))) CDR3;

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
  } __attribute__((aligned(4))) CDR4;

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
  } __attribute__((aligned(4))) CDR5;

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
  } __attribute__((aligned(4))) CDR6;

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
  } __attribute__((aligned(4))) CDR7;

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
  } __attribute__((aligned(4))) CDR8;

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
  } __attribute__((aligned(4))) CDR9;

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
  } __attribute__((aligned(4))) CDR10;

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
  } __attribute__((aligned(4))) CDR11;

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
  } __attribute__((aligned(4))) CDR12;

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
  } __attribute__((aligned(4))) CDR13;

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
  } __attribute__((aligned(4))) CDR14;

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
  } __attribute__((aligned(4))) CDR15;

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
  } __attribute__((aligned(4))) CDR16;

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
  } __attribute__((aligned(4))) CDR17;

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
  } __attribute__((aligned(4))) CDR18;

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
  } __attribute__((aligned(4))) CDR19;

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
  } __attribute__((aligned(4))) CDR20;

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
  } __attribute__((aligned(4))) CDR21;

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
  } __attribute__((aligned(4))) CDR22;

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
  } __attribute__((aligned(4))) CDR23;

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
  } __attribute__((aligned(4))) CDR24;

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
  } __attribute__((aligned(4))) CDR25;

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
  } __attribute__((aligned(4))) CDR26;

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
  } __attribute__((aligned(4))) CDR27;

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
  } __attribute__((aligned(4))) CDR28;

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
  } __attribute__((aligned(4))) CDR29;

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
  } __attribute__((aligned(4))) CDR30;

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
  } __attribute__((aligned(4))) CDR31;

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
  } __attribute__((aligned(4))) CDR32;

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
  } __attribute__((aligned(4))) CDR33;

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
  } __attribute__((aligned(4))) CDR34;

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
  } __attribute__((aligned(4))) CDR35;

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
  } __attribute__((aligned(4))) CDR36;

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
  } __attribute__((aligned(4))) CDR37;

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
  } __attribute__((aligned(4))) CDR38;

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
  } __attribute__((aligned(4))) CDR39;

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
  } __attribute__((aligned(4))) CDR40;

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
  } __attribute__((aligned(4))) CDR41;

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
  } __attribute__((aligned(4))) CDR42;

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
  } __attribute__((aligned(4))) CDR43;

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
  } __attribute__((aligned(4))) CDR44;

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
  } __attribute__((aligned(4))) CDR45;

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
  } __attribute__((aligned(4))) CDR46;

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
  } __attribute__((aligned(4))) CDR47;

  uint8_t res9[64];

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
  } __attribute__((aligned(4))) CDR64;

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
  } __attribute__((aligned(4))) CDR65;

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
  } __attribute__((aligned(4))) CDR66;

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
  } __attribute__((aligned(4))) CDR67;

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
  } __attribute__((aligned(4))) CDR68;

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
  } __attribute__((aligned(4))) CDR69;

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
  } __attribute__((aligned(4))) CDR70;

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
  } __attribute__((aligned(4))) CDR71;

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
  } __attribute__((aligned(4))) CDR72;

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
  } __attribute__((aligned(4))) CDR73;

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
  } __attribute__((aligned(4))) CDR74;

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
  } __attribute__((aligned(4))) CDR75;

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
  } __attribute__((aligned(4))) CDR76;

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
  } __attribute__((aligned(4))) CDR77;

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
  } __attribute__((aligned(4))) CDR78;

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
  } __attribute__((aligned(4))) CDR79;

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
  } __attribute__((aligned(4))) CDR80;

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
  } __attribute__((aligned(4))) CDR81;

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
  } __attribute__((aligned(4))) CDR82;

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
  } __attribute__((aligned(4))) CDR83;

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
  } __attribute__((aligned(4))) CDR84;

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
  } __attribute__((aligned(4))) CDR85;

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
  } __attribute__((aligned(4))) CDR86;

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
  } __attribute__((aligned(4))) CDR87;

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
  } __attribute__((aligned(4))) CDR88;

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
  } __attribute__((aligned(4))) CDR89;

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
  } __attribute__((aligned(4))) CDR90;

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
  } __attribute__((aligned(4))) CDR91;

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
  } __attribute__((aligned(4))) CDR92;

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
  } __attribute__((aligned(4))) CDR93;

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
  } __attribute__((aligned(4))) CDR94;

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
  } __attribute__((aligned(4))) CDR95;

  uint8_t res10[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH8:4;
      uint64_t WSEL_CH9:4;
      uint64_t WSEL_CH10:4;
      uint64_t WSEL_CH11:4;
      uint64_t WSEL_CH12:4;
      uint64_t WSEL_CH13:4;
      uint64_t WSEL_CH14:4;
      uint64_t WSEL_CH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH16:4;
      uint64_t WSEL_CH17:4;
      uint64_t WSEL_CH18:4;
      uint64_t WSEL_CH19:4;
      uint64_t WSEL_CH20:4;
      uint64_t WSEL_CH21:4;
      uint64_t WSEL_CH22:4;
      uint64_t WSEL_CH23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH24:4;
      uint64_t WSEL_CH25:4;
      uint64_t WSEL_CH26:4;
      uint64_t WSEL_CH27:4;
      uint64_t WSEL_CH28:4;
      uint64_t WSEL_CH29:4;
      uint64_t WSEL_CH30:4;
      uint64_t WSEL_CH31:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH32:4;
      uint64_t WSEL_CH33:4;
      uint64_t WSEL_CH34:4;
      uint64_t WSEL_CH35:4;
      uint64_t WSEL_CH36:4;
      uint64_t WSEL_CH37:4;
      uint64_t WSEL_CH38:4;
      uint64_t WSEL_CH39:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR4;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH64:4;
      uint64_t WSEL_CH65:4;
      uint64_t WSEL_CH66:4;
      uint64_t WSEL_CH67:4;
      uint64_t WSEL_CH68:4;
      uint64_t WSEL_CH69:4;
      uint64_t WSEL_CH70:4;
      uint64_t WSEL_CH71:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH72:4;
      uint64_t WSEL_CH73:4;
      uint64_t WSEL_CH74:4;
      uint64_t WSEL_CH75:4;
      uint64_t WSEL_CH76:4;
      uint64_t WSEL_CH77:4;
      uint64_t WSEL_CH78:4;
      uint64_t WSEL_CH79:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH80:4;
      uint64_t WSEL_CH81:4;
      uint64_t WSEL_CH82:4;
      uint64_t WSEL_CH83:4;
      uint64_t WSEL_CH84:4;
      uint64_t WSEL_CH85:4;
      uint64_t WSEL_CH86:4;
      uint64_t WSEL_CH87:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH88:4;
      uint64_t WSEL_CH89:4;
      uint64_t WSEL_CH90:4;
      uint64_t WSEL_CH91:4;
      uint64_t WSEL_CH92:4;
      uint64_t WSEL_CH93:4;
      uint64_t WSEL_CH94:4;
      uint64_t WSEL_CH95:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR11;

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
      uint64_t CWEN8:1;
      uint64_t CWEN9:1;
      uint64_t CWEN10:1;
      uint64_t CWEN11:1;
      uint64_t CWEN12:1;
      uint64_t CWEN13:1;
      uint64_t CWEN14:1;
      uint64_t CWEN15:1;
      uint64_t CWEN16:1;
      uint64_t CWEN17:1;
      uint64_t CWEN18:1;
      uint64_t CWEN19:1;
      uint64_t CWEN20:1;
      uint64_t CWEN21:1;
      uint64_t CWEN22:1;
      uint64_t CWEN23:1;
      uint64_t CWEN24:1;
      uint64_t CWEN25:1;
      uint64_t CWEN26:1;
      uint64_t CWEN27:1;
      uint64_t CWEN28:1;
      uint64_t CWEN29:1;
      uint64_t CWEN30:1;
      uint64_t CWEN31:1;
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

  uint8_t res12[4];

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
  } __attribute__((aligned(4))) AWORR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH32:1;
      uint64_t AWOR_CH33:1;
      uint64_t AWOR_CH34:1;
      uint64_t AWOR_CH35:1;
      uint64_t AWOR_CH36:1;
      uint64_t AWOR_CH37:1;
      uint64_t AWOR_CH38:1;
      uint64_t AWOR_CH39:1;
      uint64_t AWOR_CH40:1;
      uint64_t AWOR_CH41:1;
      uint64_t AWOR_CH42:1;
      uint64_t AWOR_CH43:1;
      uint64_t AWOR_CH44:1;
      uint64_t AWOR_CH45:1;
      uint64_t AWOR_CH46:1;
      uint64_t AWOR_CH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH64:1;
      uint64_t AWOR_CH65:1;
      uint64_t AWOR_CH66:1;
      uint64_t AWOR_CH67:1;
      uint64_t AWOR_CH68:1;
      uint64_t AWOR_CH69:1;
      uint64_t AWOR_CH70:1;
      uint64_t AWOR_CH71:1;
      uint64_t AWOR_CH72:1;
      uint64_t AWOR_CH73:1;
      uint64_t AWOR_CH74:1;
      uint64_t AWOR_CH75:1;
      uint64_t AWOR_CH76:1;
      uint64_t AWOR_CH77:1;
      uint64_t AWOR_CH78:1;
      uint64_t AWOR_CH79:1;
      uint64_t AWOR_CH80:1;
      uint64_t AWOR_CH81:1;
      uint64_t AWOR_CH82:1;
      uint64_t AWOR_CH83:1;
      uint64_t AWOR_CH84:1;
      uint64_t AWOR_CH85:1;
      uint64_t AWOR_CH86:1;
      uint64_t AWOR_CH87:1;
      uint64_t AWOR_CH88:1;
      uint64_t AWOR_CH89:1;
      uint64_t AWOR_CH90:1;
      uint64_t AWOR_CH91:1;
      uint64_t AWOR_CH92:1;
      uint64_t AWOR_CH93:1;
      uint64_t AWOR_CH94:1;
      uint64_t AWOR_CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR2;

  uint8_t res13[68];

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
      uint64_t reservedSpace2:4;
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
      uint64_t reservedSpace1:2;
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
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
      uint64_t reservedSpace1:3;
      uint64_t OVFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res14[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
      uint64_t FDATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR2;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:3;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:19;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  uint8_t res17[4];

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
      uint64_t reservedSpace1:8;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res18[4];

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

};

#define ADC_ADC_2 (*(volatile struct ADC_ADC_2_tag *) 0xffee8000)

struct ADC_ADC_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t REFSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORT_CHAIN:1;
      uint64_t ADCLKSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t STCL:1;
      uint64_t CTU_MODE:1;
      uint64_t CTUEN:1;
      uint64_t reservedSpace2:2;
      uint64_t JSTART:1;
      uint64_t reservedSpace3:3;
      uint64_t NSTART:1;
      uint64_t reservedSpace4:1;
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
      uint64_t CTUSTART:1;
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
      uint64_t EOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH0:1;
      uint64_t EOCCH1:1;
      uint64_t EOCCH2:1;
      uint64_t EOCCH3:1;
      uint64_t EOCCH4:1;
      uint64_t EOCCH5:1;
      uint64_t EOCCH6:1;
      uint64_t EOCCH7:1;
      uint64_t EOCCH8:1;
      uint64_t EOCCH9:1;
      uint64_t EOCCH10:1;
      uint64_t EOCCH11:1;
      uint64_t EOCCH12:1;
      uint64_t EOCCH13:1;
      uint64_t EOCCH14:1;
      uint64_t EOCCH15:1;
      uint64_t EOCCH16:1;
      uint64_t EOCCH17:1;
      uint64_t EOCCH18:1;
      uint64_t EOCCH19:1;
      uint64_t EOCCH20:1;
      uint64_t EOCCH21:1;
      uint64_t EOCCH22:1;
      uint64_t EOCCH23:1;
      uint64_t EOCCH24:1;
      uint64_t EOCCH25:1;
      uint64_t EOCCH26:1;
      uint64_t EOCCH27:1;
      uint64_t EOCCH28:1;
      uint64_t EOCCH29:1;
      uint64_t EOCCH30:1;
      uint64_t EOCCH31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH32:1;
      uint64_t EOCCH33:1;
      uint64_t EOCCH34:1;
      uint64_t EOCCH35:1;
      uint64_t EOCCH36:1;
      uint64_t EOCCH37:1;
      uint64_t EOCCH38:1;
      uint64_t EOCCH39:1;
      uint64_t EOCCH40:1;
      uint64_t EOCCH41:1;
      uint64_t EOCCH42:1;
      uint64_t EOCCH43:1;
      uint64_t EOCCH44:1;
      uint64_t EOCCH45:1;
      uint64_t EOCCH46:1;
      uint64_t EOCCH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH64:1;
      uint64_t EOCCH65:1;
      uint64_t EOCCH66:1;
      uint64_t EOCCH67:1;
      uint64_t EOCCH68:1;
      uint64_t EOCCH69:1;
      uint64_t EOCCH70:1;
      uint64_t EOCCH71:1;
      uint64_t EOCCH72:1;
      uint64_t EOCCH73:1;
      uint64_t EOCCH74:1;
      uint64_t EOCCH75:1;
      uint64_t EOCCH76:1;
      uint64_t EOCCH77:1;
      uint64_t EOCCH78:1;
      uint64_t EOCCH79:1;
      uint64_t EOCCH80:1;
      uint64_t EOCCH81:1;
      uint64_t EOCCH82:1;
      uint64_t EOCCH83:1;
      uint64_t EOCCH84:1;
      uint64_t EOCCH85:1;
      uint64_t EOCCH86:1;
      uint64_t EOCCH87:1;
      uint64_t EOCCH88:1;
      uint64_t EOCCH89:1;
      uint64_t EOCCH90:1;
      uint64_t EOCCH91:1;
      uint64_t EOCCH92:1;
      uint64_t EOCCH93:1;
      uint64_t EOCCH94:1;
      uint64_t EOCCH95:1;
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
      uint64_t MSKEOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM0:1;
      uint64_t CIM1:1;
      uint64_t CIM2:1;
      uint64_t CIM3:1;
      uint64_t CIM4:1;
      uint64_t CIM5:1;
      uint64_t CIM6:1;
      uint64_t CIM7:1;
      uint64_t CIM8:1;
      uint64_t CIM9:1;
      uint64_t CIM10:1;
      uint64_t CIM11:1;
      uint64_t CIM12:1;
      uint64_t CIM13:1;
      uint64_t CIM14:1;
      uint64_t CIM15:1;
      uint64_t CIM16:1;
      uint64_t CIM17:1;
      uint64_t CIM18:1;
      uint64_t CIM19:1;
      uint64_t CIM20:1;
      uint64_t CIM21:1;
      uint64_t CIM22:1;
      uint64_t CIM23:1;
      uint64_t CIM24:1;
      uint64_t CIM25:1;
      uint64_t CIM26:1;
      uint64_t CIM27:1;
      uint64_t CIM28:1;
      uint64_t CIM29:1;
      uint64_t CIM30:1;
      uint64_t CIM31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM32:1;
      uint64_t CIM33:1;
      uint64_t CIM34:1;
      uint64_t CIM35:1;
      uint64_t CIM36:1;
      uint64_t CIM37:1;
      uint64_t CIM38:1;
      uint64_t CIM39:1;
      uint64_t CIM40:1;
      uint64_t CIM41:1;
      uint64_t CIM42:1;
      uint64_t CIM43:1;
      uint64_t CIM44:1;
      uint64_t CIM45:1;
      uint64_t CIM46:1;
      uint64_t CIM47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM64:1;
      uint64_t CIM65:1;
      uint64_t CIM66:1;
      uint64_t CIM67:1;
      uint64_t CIM68:1;
      uint64_t CIM69:1;
      uint64_t CIM70:1;
      uint64_t CIM71:1;
      uint64_t CIM72:1;
      uint64_t CIM73:1;
      uint64_t CIM74:1;
      uint64_t CIM75:1;
      uint64_t CIM76:1;
      uint64_t CIM77:1;
      uint64_t CIM78:1;
      uint64_t CIM79:1;
      uint64_t CIM80:1;
      uint64_t CIM81:1;
      uint64_t CIM82:1;
      uint64_t CIM83:1;
      uint64_t CIM84:1;
      uint64_t CIM85:1;
      uint64_t CIM86:1;
      uint64_t CIM87:1;
      uint64_t CIM88:1;
      uint64_t CIM89:1;
      uint64_t CIM90:1;
      uint64_t CIM91:1;
      uint64_t CIM92:1;
      uint64_t CIM93:1;
      uint64_t CIM94:1;
      uint64_t CIM95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1L:1;
      uint64_t WDG1H:1;
      uint64_t WDG2L:1;
      uint64_t WDG2H:1;
      uint64_t WDG3L:1;
      uint64_t WDG3H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKWDG0L:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG1L:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG2L:1;
      uint64_t MSKWDG2H:1;
      uint64_t MSKWDG3L:1;
      uint64_t MSKWDG3H:1;
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
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DMA8:1;
      uint64_t DMA9:1;
      uint64_t DMA10:1;
      uint64_t DMA11:1;
      uint64_t DMA12:1;
      uint64_t DMA13:1;
      uint64_t DMA14:1;
      uint64_t DMA15:1;
      uint64_t DMA16:1;
      uint64_t DMA17:1;
      uint64_t DMA18:1;
      uint64_t DMA19:1;
      uint64_t DMA20:1;
      uint64_t DMA21:1;
      uint64_t DMA22:1;
      uint64_t DMA23:1;
      uint64_t DMA24:1;
      uint64_t DMA25:1;
      uint64_t DMA26:1;
      uint64_t DMA27:1;
      uint64_t DMA28:1;
      uint64_t DMA29:1;
      uint64_t DMA30:1;
      uint64_t DMA31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA32:1;
      uint64_t DMA33:1;
      uint64_t DMA34:1;
      uint64_t DMA35:1;
      uint64_t DMA36:1;
      uint64_t DMA37:1;
      uint64_t DMA38:1;
      uint64_t DMA39:1;
      uint64_t DMA40:1;
      uint64_t DMA41:1;
      uint64_t DMA42:1;
      uint64_t DMA43:1;
      uint64_t DMA44:1;
      uint64_t DMA45:1;
      uint64_t DMA46:1;
      uint64_t DMA47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA64:1;
      uint64_t DMA65:1;
      uint64_t DMA66:1;
      uint64_t DMA67:1;
      uint64_t DMA68:1;
      uint64_t DMA69:1;
      uint64_t DMA70:1;
      uint64_t DMA71:1;
      uint64_t DMA72:1;
      uint64_t DMA73:1;
      uint64_t DMA74:1;
      uint64_t DMA75:1;
      uint64_t DMA76:1;
      uint64_t DMA77:1;
      uint64_t DMA78:1;
      uint64_t DMA79:1;
      uint64_t DMA80:1;
      uint64_t DMA81:1;
      uint64_t DMA82:1;
      uint64_t DMA83:1;
      uint64_t DMA84:1;
      uint64_t DMA85:1;
      uint64_t DMA86:1;
      uint64_t DMA87:1;
      uint64_t DMA88:1;
      uint64_t DMA89:1;
      uint64_t DMA90:1;
      uint64_t DMA91:1;
      uint64_t DMA92:1;
      uint64_t DMA93:1;
      uint64_t DMA94:1;
      uint64_t DMA95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR2;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:2;
      uint64_t PREVAL1:2;
      uint64_t PREVAL2:2;
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
  } __attribute__((aligned(4))) PSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES32:1;
      uint64_t PRES33:1;
      uint64_t PRES34:1;
      uint64_t PRES35:1;
      uint64_t PRES36:1;
      uint64_t PRES37:1;
      uint64_t PRES38:1;
      uint64_t PRES39:1;
      uint64_t PRES40:1;
      uint64_t PRES41:1;
      uint64_t PRES42:1;
      uint64_t PRES43:1;
      uint64_t PRES44:1;
      uint64_t PRES45:1;
      uint64_t PRES46:1;
      uint64_t PRES47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES64:1;
      uint64_t PRES65:1;
      uint64_t PRES66:1;
      uint64_t PRES67:1;
      uint64_t PRES68:1;
      uint64_t PRES69:1;
      uint64_t PRES70:1;
      uint64_t PRES71:1;
      uint64_t PRES72:1;
      uint64_t PRES73:1;
      uint64_t PRES74:1;
      uint64_t PRES75:1;
      uint64_t PRES76:1;
      uint64_t PRES77:1;
      uint64_t PRES78:1;
      uint64_t PRES79:1;
      uint64_t PRES80:1;
      uint64_t PRES81:1;
      uint64_t PRES82:1;
      uint64_t PRES83:1;
      uint64_t PRES84:1;
      uint64_t PRES85:1;
      uint64_t PRES86:1;
      uint64_t PRES87:1;
      uint64_t PRES88:1;
      uint64_t PRES89:1;
      uint64_t PRES90:1;
      uint64_t PRES91:1;
      uint64_t PRES92:1;
      uint64_t PRES93:1;
      uint64_t PRES94:1;
      uint64_t PRES95:1;
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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t CH16:1;
      uint64_t CH17:1;
      uint64_t CH18:1;
      uint64_t CH19:1;
      uint64_t CH20:1;
      uint64_t CH21:1;
      uint64_t CH22:1;
      uint64_t CH23:1;
      uint64_t CH24:1;
      uint64_t CH25:1;
      uint64_t CH26:1;
      uint64_t CH27:1;
      uint64_t CH28:1;
      uint64_t CH29:1;
      uint64_t CH30:1;
      uint64_t CH31:1;
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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t CH16:1;
      uint64_t CH17:1;
      uint64_t CH18:1;
      uint64_t CH19:1;
      uint64_t CH20:1;
      uint64_t CH21:1;
      uint64_t CH22:1;
      uint64_t CH23:1;
      uint64_t CH24:1;
      uint64_t CH25:1;
      uint64_t CH26:1;
      uint64_t CH27:1;
      uint64_t CH28:1;
      uint64_t CH29:1;
      uint64_t CH30:1;
      uint64_t CH31:1;
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
  } __attribute__((aligned(4))) CDR0;

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
  } __attribute__((aligned(4))) CDR1;

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
  } __attribute__((aligned(4))) CDR2;

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
  } __attribute__((aligned(4))) CDR3;

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
  } __attribute__((aligned(4))) CDR4;

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
  } __attribute__((aligned(4))) CDR5;

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
  } __attribute__((aligned(4))) CDR6;

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
  } __attribute__((aligned(4))) CDR7;

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
  } __attribute__((aligned(4))) CDR8;

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
  } __attribute__((aligned(4))) CDR9;

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
  } __attribute__((aligned(4))) CDR10;

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
  } __attribute__((aligned(4))) CDR11;

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
  } __attribute__((aligned(4))) CDR12;

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
  } __attribute__((aligned(4))) CDR13;

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
  } __attribute__((aligned(4))) CDR14;

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
  } __attribute__((aligned(4))) CDR15;

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
  } __attribute__((aligned(4))) CDR16;

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
  } __attribute__((aligned(4))) CDR17;

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
  } __attribute__((aligned(4))) CDR18;

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
  } __attribute__((aligned(4))) CDR19;

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
  } __attribute__((aligned(4))) CDR20;

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
  } __attribute__((aligned(4))) CDR21;

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
  } __attribute__((aligned(4))) CDR22;

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
  } __attribute__((aligned(4))) CDR23;

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
  } __attribute__((aligned(4))) CDR24;

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
  } __attribute__((aligned(4))) CDR25;

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
  } __attribute__((aligned(4))) CDR26;

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
  } __attribute__((aligned(4))) CDR27;

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
  } __attribute__((aligned(4))) CDR28;

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
  } __attribute__((aligned(4))) CDR29;

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
  } __attribute__((aligned(4))) CDR30;

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
  } __attribute__((aligned(4))) CDR31;

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
  } __attribute__((aligned(4))) CDR32;

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
  } __attribute__((aligned(4))) CDR33;

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
  } __attribute__((aligned(4))) CDR34;

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
  } __attribute__((aligned(4))) CDR35;

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
  } __attribute__((aligned(4))) CDR36;

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
  } __attribute__((aligned(4))) CDR37;

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
  } __attribute__((aligned(4))) CDR38;

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
  } __attribute__((aligned(4))) CDR39;

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
  } __attribute__((aligned(4))) CDR40;

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
  } __attribute__((aligned(4))) CDR41;

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
  } __attribute__((aligned(4))) CDR42;

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
  } __attribute__((aligned(4))) CDR43;

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
  } __attribute__((aligned(4))) CDR44;

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
  } __attribute__((aligned(4))) CDR45;

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
  } __attribute__((aligned(4))) CDR46;

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
  } __attribute__((aligned(4))) CDR47;

  uint8_t res9[64];

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
  } __attribute__((aligned(4))) CDR64;

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
  } __attribute__((aligned(4))) CDR65;

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
  } __attribute__((aligned(4))) CDR66;

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
  } __attribute__((aligned(4))) CDR67;

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
  } __attribute__((aligned(4))) CDR68;

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
  } __attribute__((aligned(4))) CDR69;

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
  } __attribute__((aligned(4))) CDR70;

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
  } __attribute__((aligned(4))) CDR71;

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
  } __attribute__((aligned(4))) CDR72;

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
  } __attribute__((aligned(4))) CDR73;

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
  } __attribute__((aligned(4))) CDR74;

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
  } __attribute__((aligned(4))) CDR75;

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
  } __attribute__((aligned(4))) CDR76;

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
  } __attribute__((aligned(4))) CDR77;

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
  } __attribute__((aligned(4))) CDR78;

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
  } __attribute__((aligned(4))) CDR79;

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
  } __attribute__((aligned(4))) CDR80;

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
  } __attribute__((aligned(4))) CDR81;

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
  } __attribute__((aligned(4))) CDR82;

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
  } __attribute__((aligned(4))) CDR83;

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
  } __attribute__((aligned(4))) CDR84;

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
  } __attribute__((aligned(4))) CDR85;

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
  } __attribute__((aligned(4))) CDR86;

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
  } __attribute__((aligned(4))) CDR87;

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
  } __attribute__((aligned(4))) CDR88;

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
  } __attribute__((aligned(4))) CDR89;

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
  } __attribute__((aligned(4))) CDR90;

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
  } __attribute__((aligned(4))) CDR91;

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
  } __attribute__((aligned(4))) CDR92;

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
  } __attribute__((aligned(4))) CDR93;

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
  } __attribute__((aligned(4))) CDR94;

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
  } __attribute__((aligned(4))) CDR95;

  uint8_t res10[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH8:4;
      uint64_t WSEL_CH9:4;
      uint64_t WSEL_CH10:4;
      uint64_t WSEL_CH11:4;
      uint64_t WSEL_CH12:4;
      uint64_t WSEL_CH13:4;
      uint64_t WSEL_CH14:4;
      uint64_t WSEL_CH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH16:4;
      uint64_t WSEL_CH17:4;
      uint64_t WSEL_CH18:4;
      uint64_t WSEL_CH19:4;
      uint64_t WSEL_CH20:4;
      uint64_t WSEL_CH21:4;
      uint64_t WSEL_CH22:4;
      uint64_t WSEL_CH23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH24:4;
      uint64_t WSEL_CH25:4;
      uint64_t WSEL_CH26:4;
      uint64_t WSEL_CH27:4;
      uint64_t WSEL_CH28:4;
      uint64_t WSEL_CH29:4;
      uint64_t WSEL_CH30:4;
      uint64_t WSEL_CH31:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH32:4;
      uint64_t WSEL_CH33:4;
      uint64_t WSEL_CH34:4;
      uint64_t WSEL_CH35:4;
      uint64_t WSEL_CH36:4;
      uint64_t WSEL_CH37:4;
      uint64_t WSEL_CH38:4;
      uint64_t WSEL_CH39:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR4;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH64:4;
      uint64_t WSEL_CH65:4;
      uint64_t WSEL_CH66:4;
      uint64_t WSEL_CH67:4;
      uint64_t WSEL_CH68:4;
      uint64_t WSEL_CH69:4;
      uint64_t WSEL_CH70:4;
      uint64_t WSEL_CH71:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH72:4;
      uint64_t WSEL_CH73:4;
      uint64_t WSEL_CH74:4;
      uint64_t WSEL_CH75:4;
      uint64_t WSEL_CH76:4;
      uint64_t WSEL_CH77:4;
      uint64_t WSEL_CH78:4;
      uint64_t WSEL_CH79:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH80:4;
      uint64_t WSEL_CH81:4;
      uint64_t WSEL_CH82:4;
      uint64_t WSEL_CH83:4;
      uint64_t WSEL_CH84:4;
      uint64_t WSEL_CH85:4;
      uint64_t WSEL_CH86:4;
      uint64_t WSEL_CH87:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH88:4;
      uint64_t WSEL_CH89:4;
      uint64_t WSEL_CH90:4;
      uint64_t WSEL_CH91:4;
      uint64_t WSEL_CH92:4;
      uint64_t WSEL_CH93:4;
      uint64_t WSEL_CH94:4;
      uint64_t WSEL_CH95:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR11;

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
      uint64_t CWEN8:1;
      uint64_t CWEN9:1;
      uint64_t CWEN10:1;
      uint64_t CWEN11:1;
      uint64_t CWEN12:1;
      uint64_t CWEN13:1;
      uint64_t CWEN14:1;
      uint64_t CWEN15:1;
      uint64_t CWEN16:1;
      uint64_t CWEN17:1;
      uint64_t CWEN18:1;
      uint64_t CWEN19:1;
      uint64_t CWEN20:1;
      uint64_t CWEN21:1;
      uint64_t CWEN22:1;
      uint64_t CWEN23:1;
      uint64_t CWEN24:1;
      uint64_t CWEN25:1;
      uint64_t CWEN26:1;
      uint64_t CWEN27:1;
      uint64_t CWEN28:1;
      uint64_t CWEN29:1;
      uint64_t CWEN30:1;
      uint64_t CWEN31:1;
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

  uint8_t res12[4];

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
  } __attribute__((aligned(4))) AWORR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH32:1;
      uint64_t AWOR_CH33:1;
      uint64_t AWOR_CH34:1;
      uint64_t AWOR_CH35:1;
      uint64_t AWOR_CH36:1;
      uint64_t AWOR_CH37:1;
      uint64_t AWOR_CH38:1;
      uint64_t AWOR_CH39:1;
      uint64_t AWOR_CH40:1;
      uint64_t AWOR_CH41:1;
      uint64_t AWOR_CH42:1;
      uint64_t AWOR_CH43:1;
      uint64_t AWOR_CH44:1;
      uint64_t AWOR_CH45:1;
      uint64_t AWOR_CH46:1;
      uint64_t AWOR_CH47:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH64:1;
      uint64_t AWOR_CH65:1;
      uint64_t AWOR_CH66:1;
      uint64_t AWOR_CH67:1;
      uint64_t AWOR_CH68:1;
      uint64_t AWOR_CH69:1;
      uint64_t AWOR_CH70:1;
      uint64_t AWOR_CH71:1;
      uint64_t AWOR_CH72:1;
      uint64_t AWOR_CH73:1;
      uint64_t AWOR_CH74:1;
      uint64_t AWOR_CH75:1;
      uint64_t AWOR_CH76:1;
      uint64_t AWOR_CH77:1;
      uint64_t AWOR_CH78:1;
      uint64_t AWOR_CH79:1;
      uint64_t AWOR_CH80:1;
      uint64_t AWOR_CH81:1;
      uint64_t AWOR_CH82:1;
      uint64_t AWOR_CH83:1;
      uint64_t AWOR_CH84:1;
      uint64_t AWOR_CH85:1;
      uint64_t AWOR_CH86:1;
      uint64_t AWOR_CH87:1;
      uint64_t AWOR_CH88:1;
      uint64_t AWOR_CH89:1;
      uint64_t AWOR_CH90:1;
      uint64_t AWOR_CH91:1;
      uint64_t AWOR_CH92:1;
      uint64_t AWOR_CH93:1;
      uint64_t AWOR_CH94:1;
      uint64_t AWOR_CH95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR2;

  uint8_t res13[68];

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
      uint64_t reservedSpace2:4;
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
      uint64_t reservedSpace1:2;
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
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
      uint64_t reservedSpace1:3;
      uint64_t OVFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res14[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
      uint64_t FDATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR2;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:3;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:19;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  uint8_t res17[4];

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
      uint64_t reservedSpace1:8;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res18[4];

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

};

#define ADC_ADC_3 (*(volatile struct ADC_ADC_3_tag *) 0xfbeec000)

struct AIPS_AIPS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL7:1;
      uint64_t MTW7:1;
      uint64_t MTR7:1;
      uint64_t reservedSpace0:9;
      uint64_t MPL4:1;
      uint64_t MTW4:1;
      uint64_t MTR4:1;
      uint64_t reservedSpace1:1;
      uint64_t MPL3:1;
      uint64_t MTW3:1;
      uint64_t MTR3:1;
      uint64_t reservedSpace2:5;
      uint64_t MPL1:1;
      uint64_t MTW1:1;
      uint64_t MTR1:1;
      uint64_t reservedSpace3:1;
      uint64_t MPL0:1;
      uint64_t MTW0:1;
      uint64_t MTR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPRA;

  uint8_t res0[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACR_Reserved_Peripheral_Access_Control_Register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRH;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAF;

};

#define AIPS_AIPS_0 (*(volatile struct AIPS_AIPS_0_tag *) 0xfc000000)

struct AIPS_AIPS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL7:1;
      uint64_t MTW7:1;
      uint64_t MTR7:1;
      uint64_t reservedSpace0:9;
      uint64_t MPL4:1;
      uint64_t MTW4:1;
      uint64_t MTR4:1;
      uint64_t reservedSpace1:1;
      uint64_t MPL3:1;
      uint64_t MTW3:1;
      uint64_t MTR3:1;
      uint64_t reservedSpace2:5;
      uint64_t MPL1:1;
      uint64_t MTW1:1;
      uint64_t MTR1:1;
      uint64_t reservedSpace3:1;
      uint64_t MPL0:1;
      uint64_t MTW0:1;
      uint64_t MTR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPRA;

  uint8_t res0[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACR_Reserved_Peripheral_Access_Control_Register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRH;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAF;

};

#define AIPS_AIPS_1 (*(volatile struct AIPS_AIPS_1_tag *) 0xf8000000)

struct BCTU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEN0:1;
      uint64_t IEN1:1;
      uint64_t IEN2:1;
      uint64_t IEN3:1;
      uint64_t reservedSpace0:1;
      uint64_t LIST_IEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TRGEN:1;
      uint64_t reservedSpace2:8;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t reservedSpace3:6;
      uint64_t GTRGEN:1;
      uint64_t reservedSpace4:2;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
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
      uint64_t NDATA3:1;
      uint64_t DATAOVR0:1;
      uint64_t DATAOVR1:1;
      uint64_t DATAOVR2:1;
      uint64_t DATAOVR3:1;
      uint64_t LIST0_Last:1;
      uint64_t LIST1_Last:1;
      uint64_t LIST2_Last:1;
      uint64_t LIST3_Last:1;
      uint64_t reservedSpace0:3;
      uint64_t TRGF:1;
      uint64_t NDATA0_CLR:1;
      uint64_t NDATA1_CLR:1;
      uint64_t NDATA2_CLR:1;
      uint64_t NDATA3_CLR:1;
      uint64_t DATAOVR0_CLR:1;
      uint64_t DATAOVR1_CLR:1;
      uint64_t DATAOVR2_CLR:1;
      uint64_t DATAOVR3_CLR:1;
      uint64_t LIST0_Last_CLR:1;
      uint64_t LIST1_Last_CLR:1;
      uint64_t LIST2_Last_CLR:1;
      uint64_t LIST3_Last_CLR:1;
      uint64_t reservedSpace1:3;
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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_0;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_1;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_2;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_3;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_4;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_5;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_6;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_7;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_8;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_9;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_10;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_11;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_12;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_13;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_14;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_15;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_16;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_17;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_18;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_19;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_20;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_21;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_22;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_23;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_24;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_25;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_26;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_27;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_28;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_29;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_30;

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
      uint64_t ADC_SEL3:1;
      uint64_t reservedSpace1:1;
      uint64_t TRS:1;
      uint64_t TRG_FLAG:1;
      uint64_t TRIGEN:1;
      uint64_t CCP:4;
      uint64_t reservedSpace2:11;
      uint64_t LOOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGCFG_31;

  uint8_t res2[400];

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

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:12;
      uint64_t reservedSpace0:2;
      uint64_t LAST:1;
      uint64_t LIST:1;
      uint64_t CH:8;
      uint64_t TRG_SRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC0DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:12;
      uint64_t reservedSpace0:2;
      uint64_t LAST:1;
      uint64_t LIST:1;
      uint64_t CH:8;
      uint64_t TRG_SRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:12;
      uint64_t reservedSpace0:2;
      uint64_t LAST:1;
      uint64_t LIST:1;
      uint64_t CH:8;
      uint64_t TRG_SRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC2DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_DATA:12;
      uint64_t reservedSpace0:2;
      uint64_t LAST:1;
      uint64_t LIST:1;
      uint64_t CH:8;
      uint64_t TRG_SRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC3DR;

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
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_CHL_y_plus_1:7;
      uint64_t reservedSpace0:1;
      uint64_t TAG_y_plus_1:4;
      uint64_t reservedSpace1:3;
      uint64_t LAST_y_plus_1:1;
      uint64_t ADC_CH_y:7;
      uint64_t reservedSpace2:1;
      uint64_t TAG_y:4;
      uint64_t reservedSpace3:3;
      uint64_t LAST_y:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LISTCHR_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAG:4;
      uint64_t reservedSpace0:4;
      uint64_t DEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_10;

};

#define BCTU_0 (*(volatile struct BCTU_0_tag *) 0xffc10000)

struct C55FMC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EHV:1;
      uint64_t ESUS:1;
      uint64_t ERS:1;
      uint64_t PSUS:1;
      uint64_t PGM:1;
      uint64_t reservedSpace0:3;
      uint64_t PECIE:1;
      uint64_t PEG:1;
      uint64_t DONE:1;
      uint64_t PEAS:1;
      uint64_t reservedSpace1:1;
      uint64_t SBC:1;
      uint64_t RWE:1;
      uint64_t EER:1;
      uint64_t reservedSpace2:12;
      uint64_t EEE:1;
      uint64_t AEE:1;
      uint64_t RRE:1;
      uint64_t RVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t n16Kl:3;
      uint64_t n32Kl:2;
      uint64_t n64Kl:3;
      uint64_t n16Km:3;
      uint64_t n32Km:2;
      uint64_t n64Km:3;
      uint64_t n16Kh:3;
      uint64_t n32Kh:2;
      uint64_t n64Kh:3;
      uint64_t n256K:5;
      uint64_t reservedSpace0:2;
      uint64_t HT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCRE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDLOCK:16;
      uint64_t LOWLOCK:14;
      uint64_t reservedSpace0:1;
      uint64_t TSLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK3;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDSEL:16;
      uint64_t LOWSEL:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHSEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KSEL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KSEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL3;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDR:21;
      uint64_t a16k:1;
      uint64_t a32k:1;
      uint64_t a64k:1;
      uint64_t a256k:1;
      uint64_t aL:1;
      uint64_t aM:1;
      uint64_t aH:1;
      uint64_t SAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AID:1;
      uint64_t AIE:1;
      uint64_t AIS:1;
      uint64_t reservedSpace0:1;
      uint64_t MRV:1;
      uint64_t MRE:1;
      uint64_t AISUS:1;
      uint64_t reservedSpace1:1;
      uint64_t AIBPE:1;
      uint64_t NAIBP:1;
      uint64_t reservedSpace2:6;
      uint64_t CPE:1;
      uint64_t CPA:1;
      uint64_t CPR:1;
      uint64_t reservedSpace3:11;
      uint64_t SBCE:1;
      uint64_t UTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDOPP:16;
      uint64_t LOWOPP:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHOPP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KOPP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KOPP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMD;

};

#define C55FMC_0 (*(volatile struct C55FMC_0_tag *) 0xfffe0000)

struct CAN_CAN_0_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:2;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace3:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace5:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t reservedSpace1:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t BOFFDONEINT:1;
      uint64_t reservedSpace1:1;
      uint64_t ERROVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t WRMFRZ:1;
      uint64_t ECRWRE:1;
      uint64_t BOFFDONEMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:4;
      uint64_t reservedSpace0:1;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG3;

  uint8_t res4[2056];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR95;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t NCEFAFRZ:1;
      uint64_t ECCDIS:1;
      uint64_t RERRDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t EXTERRIE:1;
      uint64_t FAERRIE:1;
      uint64_t HAERRIE:1;
      uint64_t reservedSpace2:15;
      uint64_t ECRWRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INJADDR_L:2;
      uint64_t INJADDR_H:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFLIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIDPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFLIP0:5;
      uint64_t reservedSpace0:3;
      uint64_t PFLIP1:5;
      uint64_t reservedSpace1:3;
      uint64_t PFLIP2:5;
      uint64_t reservedSpace2:3;
      uint64_t PFLIP3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRADDR:14;
      uint64_t reservedSpace0:2;
      uint64_t SAID:3;
      uint64_t reservedSpace1:5;
      uint64_t NCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND0:5;
      uint64_t reservedSpace0:2;
      uint64_t BE0:1;
      uint64_t SYND1:5;
      uint64_t reservedSpace1:2;
      uint64_t BE1:1;
      uint64_t SYND2:5;
      uint64_t reservedSpace2:2;
      uint64_t BE2:1;
      uint64_t SYND3:5;
      uint64_t reservedSpace3:2;
      uint64_t BE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRSYNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEIOF:1;
      uint64_t reservedSpace0:1;
      uint64_t FANCEIOF:1;
      uint64_t HANCEIOF:1;
      uint64_t reservedSpace1:12;
      uint64_t CEIF:1;
      uint64_t reservedSpace2:1;
      uint64_t FANCEIF:1;
      uint64_t HANCEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSR;

};

#define CAN_CAN_0_0 (*(volatile struct CAN_CAN_0_0_tag *) 0xffeb0000)

struct CAN_CAN_1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:2;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace3:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace5:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t reservedSpace1:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t BOFFDONEINT:1;
      uint64_t reservedSpace1:1;
      uint64_t ERROVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t WRMFRZ:1;
      uint64_t ECRWRE:1;
      uint64_t BOFFDONEMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:4;
      uint64_t reservedSpace0:1;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG3;

  uint8_t res4[2056];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR95;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t NCEFAFRZ:1;
      uint64_t ECCDIS:1;
      uint64_t RERRDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t EXTERRIE:1;
      uint64_t FAERRIE:1;
      uint64_t HAERRIE:1;
      uint64_t reservedSpace2:15;
      uint64_t ECRWRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INJADDR_L:2;
      uint64_t INJADDR_H:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFLIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIDPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFLIP0:5;
      uint64_t reservedSpace0:3;
      uint64_t PFLIP1:5;
      uint64_t reservedSpace1:3;
      uint64_t PFLIP2:5;
      uint64_t reservedSpace2:3;
      uint64_t PFLIP3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRADDR:14;
      uint64_t reservedSpace0:2;
      uint64_t SAID:3;
      uint64_t reservedSpace1:5;
      uint64_t NCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND0:5;
      uint64_t reservedSpace0:2;
      uint64_t BE0:1;
      uint64_t SYND1:5;
      uint64_t reservedSpace1:2;
      uint64_t BE1:1;
      uint64_t SYND2:5;
      uint64_t reservedSpace2:2;
      uint64_t BE2:1;
      uint64_t SYND3:5;
      uint64_t reservedSpace3:2;
      uint64_t BE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRSYNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEIOF:1;
      uint64_t reservedSpace0:1;
      uint64_t FANCEIOF:1;
      uint64_t HANCEIOF:1;
      uint64_t reservedSpace1:12;
      uint64_t CEIF:1;
      uint64_t reservedSpace2:1;
      uint64_t FANCEIF:1;
      uint64_t HANCEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSR;

};

#define CAN_CAN_1_0 (*(volatile struct CAN_CAN_1_0_tag *) 0xfbeb4000)

struct CAN_CAN_2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:2;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace3:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace5:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t reservedSpace1:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t BOFFDONEINT:1;
      uint64_t reservedSpace1:1;
      uint64_t ERROVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t WRMFRZ:1;
      uint64_t ECRWRE:1;
      uint64_t BOFFDONEMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:4;
      uint64_t reservedSpace0:1;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG3;

  uint8_t res4[2056];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR95;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t NCEFAFRZ:1;
      uint64_t ECCDIS:1;
      uint64_t RERRDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t EXTERRIE:1;
      uint64_t FAERRIE:1;
      uint64_t HAERRIE:1;
      uint64_t reservedSpace2:15;
      uint64_t ECRWRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INJADDR_L:2;
      uint64_t INJADDR_H:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFLIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIDPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFLIP0:5;
      uint64_t reservedSpace0:3;
      uint64_t PFLIP1:5;
      uint64_t reservedSpace1:3;
      uint64_t PFLIP2:5;
      uint64_t reservedSpace2:3;
      uint64_t PFLIP3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRADDR:14;
      uint64_t reservedSpace0:2;
      uint64_t SAID:3;
      uint64_t reservedSpace1:5;
      uint64_t NCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND0:5;
      uint64_t reservedSpace0:2;
      uint64_t BE0:1;
      uint64_t SYND1:5;
      uint64_t reservedSpace1:2;
      uint64_t BE1:1;
      uint64_t SYND2:5;
      uint64_t reservedSpace2:2;
      uint64_t BE2:1;
      uint64_t SYND3:5;
      uint64_t reservedSpace3:2;
      uint64_t BE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRSYNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEIOF:1;
      uint64_t reservedSpace0:1;
      uint64_t FANCEIOF:1;
      uint64_t HANCEIOF:1;
      uint64_t reservedSpace1:12;
      uint64_t CEIF:1;
      uint64_t reservedSpace2:1;
      uint64_t FANCEIF:1;
      uint64_t HANCEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSR;

};

#define CAN_CAN_2_0 (*(volatile struct CAN_CAN_2_0_tag *) 0xffeb8000)

struct CAN_CAN_3_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:2;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t reservedSpace2:1;
      uint64_t DMA:1;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace3:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace5:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t reservedSpace1:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t BOFFDONEINT:1;
      uint64_t reservedSpace1:1;
      uint64_t ERROVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t WRMFRZ:1;
      uint64_t ECRWRE:1;
      uint64_t BOFFDONEMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:4;
      uint64_t reservedSpace0:1;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG3;

  uint8_t res4[2056];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR95;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t NCEFAFRZ:1;
      uint64_t ECCDIS:1;
      uint64_t RERRDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t EXTERRIE:1;
      uint64_t FAERRIE:1;
      uint64_t HAERRIE:1;
      uint64_t reservedSpace2:15;
      uint64_t ECRWRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INJADDR_L:2;
      uint64_t INJADDR_H:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFLIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIDPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFLIP0:5;
      uint64_t reservedSpace0:3;
      uint64_t PFLIP1:5;
      uint64_t reservedSpace1:3;
      uint64_t PFLIP2:5;
      uint64_t reservedSpace2:3;
      uint64_t PFLIP3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRADDR:14;
      uint64_t reservedSpace0:2;
      uint64_t SAID:3;
      uint64_t reservedSpace1:5;
      uint64_t NCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND0:5;
      uint64_t reservedSpace0:2;
      uint64_t BE0:1;
      uint64_t SYND1:5;
      uint64_t reservedSpace1:2;
      uint64_t BE1:1;
      uint64_t SYND2:5;
      uint64_t reservedSpace2:2;
      uint64_t BE2:1;
      uint64_t SYND3:5;
      uint64_t reservedSpace3:2;
      uint64_t BE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRSYNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEIOF:1;
      uint64_t reservedSpace0:1;
      uint64_t FANCEIOF:1;
      uint64_t HANCEIOF:1;
      uint64_t reservedSpace1:12;
      uint64_t CEIF:1;
      uint64_t reservedSpace2:1;
      uint64_t FANCEIF:1;
      uint64_t HANCEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSR;

};

#define CAN_CAN_3_0 (*(volatile struct CAN_CAN_3_0_tag *) 0xfbebc000)

struct CMU_CMU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_0 (*(volatile struct CMU_CMU_0_tag *) 0xfbfb0300)

struct CMU_CMU_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_1 (*(volatile struct CMU_CMU_1_tag *) 0xfbfb0280)

struct CMU_CMU_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_2 (*(volatile struct CMU_CMU_2_tag *) 0xfbfb04c0)

struct CMU_CMU_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_3 (*(volatile struct CMU_CMU_3_tag *) 0xfbfb0400)

struct CMU_CMU_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_4 (*(volatile struct CMU_CMU_4_tag *) 0xfbfb0440)

struct CMU_CMU_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_5 (*(volatile struct CMU_CMU_5_tag *) 0xfbfb0200)

struct CMU_CMU_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_6 (*(volatile struct CMU_CMU_6_tag *) 0xfbfb02c0)

struct CMU_CMU_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_7 (*(volatile struct CMU_CMU_7_tag *) 0xfbfb0500)

struct CMU_CMU_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_8 (*(volatile struct CMU_CMU_8_tag *) 0xfbfb0340)

struct CMU_CMU_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_9 (*(volatile struct CMU_CMU_9_tag *) 0xfbfb0380)

struct CMU_CMU_10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_10 (*(volatile struct CMU_CMU_10_tag *) 0xfbfb0240)

struct CRC_CRC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP;

};

#define CRC_CRC_0 (*(volatile struct CRC_CRC_0_tag *) 0xfff64000)

struct CRC_CRC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP;

};

#define CRC_CRC_1 (*(volatile struct CRC_CRC_1_tag *) 0xfbf64000)

struct DECFILTER_DECFILTER_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t OBIE:1;
      uint64_t IBIE:1;
      uint64_t DSEL:1;
      uint64_t SDIE:1;
      uint64_t DEC_RATE:4;
      uint64_t reservedSpace1:1;
      uint64_t ISEL:1;
      uint64_t SAT:1;
      uint64_t IDIS:1;
      uint64_t SCAL:2;
      uint64_t reservedSpace2:1;
      uint64_t FTYPE:2;
      uint64_t reservedSpace3:1;
      uint64_t ERREN:1;
      uint64_t ODEN:1;
      uint64_t IDEN:1;
      uint64_t CASCD:2;
      uint64_t SRES:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace4:1;
      uint64_t FREN:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVR:1;
      uint64_t OVR:1;
      uint64_t OVF:1;
      uint64_t reservedSpace0:2;
      uint64_t OBIF:1;
      uint64_t IBIF:1;
      uint64_t reservedSpace1:1;
      uint64_t ODF:1;
      uint64_t IDF:1;
      uint64_t reservedSpace2:6;
      uint64_t IVRC:1;
      uint64_t OVRC:1;
      uint64_t OVFC:1;
      uint64_t reservedSpace3:2;
      uint64_t OBIC:1;
      uint64_t IBIC:1;
      uint64_t reservedSpace4:1;
      uint64_t ODFC:1;
      uint64_t IDFC:1;
      uint64_t DEC_COUNTER:4;
      uint64_t reservedSpace5:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SENSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t SRQSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t SHLTSEL:2;
      uint64_t reservedSpace2:2;
      uint64_t SZROSEL:2;
      uint64_t reservedSpace3:1;
      uint64_t SISEL:1;
      uint64_t SZRO:1;
      uint64_t SRQ:1;
      uint64_t reservedSpace4:10;
      uint64_t SCSAT:1;
      uint64_t SSAT:1;
      uint64_t SSIG:1;
      uint64_t SDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MXCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SVR:1;
      uint64_t SCOVF:1;
      uint64_t SSOVF:1;
      uint64_t reservedSpace0:1;
      uint64_t SCE:1;
      uint64_t SSE:1;
      uint64_t reservedSpace1:2;
      uint64_t SDF:1;
      uint64_t reservedSpace2:7;
      uint64_t SVRC:1;
      uint64_t SCOVFC:1;
      uint64_t SSOVFC:1;
      uint64_t reservedSpace3:1;
      uint64_t SCEC:1;
      uint64_t SSEC:1;
      uint64_t reservedSpace4:2;
      uint64_t SDFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MXSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPBUF:16;
      uint64_t FLUSH:1;
      uint64_t PREFILL:1;
      uint64_t reservedSpace0:6;
      uint64_t INTAG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTBUF:16;
      uint64_t OUTTAG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OB;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF8;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP7;

  uint8_t res2[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUM_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FINTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FINTCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUM_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CINTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CINTCNT;

};

#define DECFILTER_DECFILTER_0 (*(volatile struct DECFILTER_DECFILTER_0_tag *) 0xfff88000)

struct DECFILTER_DECFILTER_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t OBIE:1;
      uint64_t IBIE:1;
      uint64_t DSEL:1;
      uint64_t SDIE:1;
      uint64_t DEC_RATE:4;
      uint64_t reservedSpace1:1;
      uint64_t ISEL:1;
      uint64_t SAT:1;
      uint64_t IDIS:1;
      uint64_t SCAL:2;
      uint64_t reservedSpace2:1;
      uint64_t FTYPE:2;
      uint64_t reservedSpace3:1;
      uint64_t ERREN:1;
      uint64_t ODEN:1;
      uint64_t IDEN:1;
      uint64_t CASCD:2;
      uint64_t SRES:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace4:1;
      uint64_t FREN:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IVR:1;
      uint64_t OVR:1;
      uint64_t OVF:1;
      uint64_t reservedSpace0:2;
      uint64_t OBIF:1;
      uint64_t IBIF:1;
      uint64_t reservedSpace1:1;
      uint64_t ODF:1;
      uint64_t IDF:1;
      uint64_t reservedSpace2:6;
      uint64_t IVRC:1;
      uint64_t OVRC:1;
      uint64_t OVFC:1;
      uint64_t reservedSpace3:2;
      uint64_t OBIC:1;
      uint64_t IBIC:1;
      uint64_t reservedSpace4:1;
      uint64_t ODFC:1;
      uint64_t IDFC:1;
      uint64_t DEC_COUNTER:4;
      uint64_t reservedSpace5:1;
      uint64_t BSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SENSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t SRQSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t SHLTSEL:2;
      uint64_t reservedSpace2:2;
      uint64_t SZROSEL:2;
      uint64_t reservedSpace3:1;
      uint64_t SISEL:1;
      uint64_t SZRO:1;
      uint64_t SRQ:1;
      uint64_t reservedSpace4:10;
      uint64_t SCSAT:1;
      uint64_t SSAT:1;
      uint64_t SSIG:1;
      uint64_t SDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MXCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SVR:1;
      uint64_t SCOVF:1;
      uint64_t SSOVF:1;
      uint64_t reservedSpace0:1;
      uint64_t SCE:1;
      uint64_t SSE:1;
      uint64_t reservedSpace1:2;
      uint64_t SDF:1;
      uint64_t reservedSpace2:7;
      uint64_t SVRC:1;
      uint64_t SCOVFC:1;
      uint64_t SSOVFC:1;
      uint64_t reservedSpace3:1;
      uint64_t SCEC:1;
      uint64_t SSEC:1;
      uint64_t reservedSpace4:2;
      uint64_t SDFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MXSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPBUF:16;
      uint64_t FLUSH:1;
      uint64_t PREFILL:1;
      uint64_t reservedSpace0:6;
      uint64_t INTAG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTBUF:16;
      uint64_t OUTTAG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OB;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEFn:24;
      uint64_t COEFnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF8;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPn:24;
      uint64_t TAPnSIGNR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP7;

  uint8_t res2[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUM_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FINTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FINTCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUM_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CINTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CINTCNT;

};

#define DECFILTER_DECFILTER_1 (*(volatile struct DECFILTER_DECFILTER_1_tag *) 0xfff8c000)

struct DMAMUX_DMAMUX_0_tag
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
  } __attribute__((aligned(1))) CHCFG12;

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
  } __attribute__((aligned(1))) CHCFG15;

};

#define DMAMUX_DMAMUX_0 (*(volatile struct DMAMUX_DMAMUX_0_tag *) 0xfff6c000)

struct DMAMUX_DMAMUX_1_tag
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
  } __attribute__((aligned(1))) CHCFG12;

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
  } __attribute__((aligned(1))) CHCFG15;

};

#define DMAMUX_DMAMUX_1 (*(volatile struct DMAMUX_DMAMUX_1_tag *) 0xfff6c200)

struct DMAMUX_DMAMUX_2_tag
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
  } __attribute__((aligned(1))) CHCFG12;

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
  } __attribute__((aligned(1))) CHCFG15;

};

#define DMAMUX_DMAMUX_2 (*(volatile struct DMAMUX_DMAMUX_2_tag *) 0xfff6c400)

struct DMAMUX_DMAMUX_3_tag
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
  } __attribute__((aligned(1))) CHCFG12;

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
  } __attribute__((aligned(1))) CHCFG15;

};

#define DMAMUX_DMAMUX_3 (*(volatile struct DMAMUX_DMAMUX_3_tag *) 0xfbfc0000)

struct DTS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS_EN:1;
      uint64_t DTS_EN_B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEMAPHORE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST_B:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEMAPHORE_B;

};

#define DTS_0 (*(volatile struct DTS_0_tag *) 0xfff38000)

struct EIM_0_tag
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
      uint64_t reservedSpace0:31;
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
  } __attribute__((aligned(4))) EICHD_WORD00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD_WORD10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD_WORD20;

};

#define EIM_0 (*(volatile struct EIM_0_tag *) 0xfc07c000)

struct eMIOS_eMIOS0_eMIOS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t GPRE:8;
      uint64_t SRV:4;
      uint64_t reservedSpace1:6;
      uint64_t GPREN:1;
      uint64_t ETB:1;
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
      uint64_t F23_F0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OU23_OU0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS23_CHDIS0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCDIS;

};

#define eMIOS_eMIOS0_eMIOS_0 (*(volatile struct eMIOS_eMIOS0_eMIOS_0_tag *) 0xffe64000)

struct eMIOS_eMIOS0_eMIOS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C28;

};

#define eMIOS_eMIOS0_eMIOS_1 (*(volatile struct eMIOS_eMIOS0_eMIOS_1_tag *) 0xffe64140)

struct eMIOS_eMIOS0_eMIOS_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT9;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C29;

};

#define eMIOS_eMIOS0_eMIOS_2 (*(volatile struct eMIOS_eMIOS0_eMIOS_2_tag *) 0xffe64160)

struct eMIOS_eMIOS0_eMIOS_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C20;

};

#define eMIOS_eMIOS0_eMIOS_3 (*(volatile struct eMIOS_eMIOS0_eMIOS_3_tag *) 0xffe64180)

struct eMIOS_eMIOS0_eMIOS_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT11;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C211;

};

#define eMIOS_eMIOS0_eMIOS_4 (*(volatile struct eMIOS_eMIOS0_eMIOS_4_tag *) 0xffe641a0)

struct eMIOS_eMIOS0_eMIOS_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT12;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C212;

};

#define eMIOS_eMIOS0_eMIOS_5 (*(volatile struct eMIOS_eMIOS0_eMIOS_5_tag *) 0xffe641c0)

struct eMIOS_eMIOS0_eMIOS_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT13;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C213;

};

#define eMIOS_eMIOS0_eMIOS_6 (*(volatile struct eMIOS_eMIOS0_eMIOS_6_tag *) 0xffe641e0)

struct eMIOS_eMIOS0_eMIOS_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT14;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C214;

};

#define eMIOS_eMIOS0_eMIOS_7 (*(volatile struct eMIOS_eMIOS0_eMIOS_7_tag *) 0xffe64200)

struct eMIOS_eMIOS0_eMIOS_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT15;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C215;

};

#define eMIOS_eMIOS0_eMIOS_8 (*(volatile struct eMIOS_eMIOS0_eMIOS_8_tag *) 0xffe64220)

struct eMIOS_eMIOS0_eMIOS_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C216;

};

#define eMIOS_eMIOS0_eMIOS_9 (*(volatile struct eMIOS_eMIOS0_eMIOS_9_tag *) 0xffe64240)

struct eMIOS_eMIOS0_eMIOS_10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT17;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C217;

};

#define eMIOS_eMIOS0_eMIOS_10 (*(volatile struct eMIOS_eMIOS0_eMIOS_10_tag *) 0xffe64260)

struct eMIOS_eMIOS0_eMIOS_11_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT18;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C218;

};

#define eMIOS_eMIOS0_eMIOS_11 (*(volatile struct eMIOS_eMIOS0_eMIOS_11_tag *) 0xffe64280)

struct eMIOS_eMIOS0_eMIOS_12_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT19;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C219;

};

#define eMIOS_eMIOS0_eMIOS_12 (*(volatile struct eMIOS_eMIOS0_eMIOS_12_tag *) 0xffe642a0)

struct eMIOS_eMIOS0_eMIOS_13_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT20;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C220;

};

#define eMIOS_eMIOS0_eMIOS_13 (*(volatile struct eMIOS_eMIOS0_eMIOS_13_tag *) 0xffe642c0)

struct eMIOS_eMIOS0_eMIOS_14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT21;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C221;

};

#define eMIOS_eMIOS0_eMIOS_14 (*(volatile struct eMIOS_eMIOS0_eMIOS_14_tag *) 0xffe642e0)

struct eMIOS_eMIOS0_eMIOS_15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C222;

};

#define eMIOS_eMIOS0_eMIOS_15 (*(volatile struct eMIOS_eMIOS0_eMIOS_15_tag *) 0xffe64300)

struct eMIOS_eMIOS0_eMIOS_16_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C223;

};

#define eMIOS_eMIOS0_eMIOS_16 (*(volatile struct eMIOS_eMIOS0_eMIOS_16_tag *) 0xffe64320)

struct eMIOS_eMIOS1_eMIOS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t GPRE:8;
      uint64_t SRV:4;
      uint64_t reservedSpace1:6;
      uint64_t GPREN:1;
      uint64_t ETB:1;
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
      uint64_t F23_F0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OU23_OU0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDIS23_CHDIS0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCDIS;

};

#define eMIOS_eMIOS1_eMIOS_0 (*(volatile struct eMIOS_eMIOS1_eMIOS_0_tag *) 0xfbe64000)

struct eMIOS_eMIOS1_eMIOS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C28;

};

#define eMIOS_eMIOS1_eMIOS_1 (*(volatile struct eMIOS_eMIOS1_eMIOS_1_tag *) 0xfbe64140)

struct eMIOS_eMIOS1_eMIOS_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT9;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C29;

};

#define eMIOS_eMIOS1_eMIOS_2 (*(volatile struct eMIOS_eMIOS1_eMIOS_2_tag *) 0xfbe64160)

struct eMIOS_eMIOS1_eMIOS_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT10;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C210;

};

#define eMIOS_eMIOS1_eMIOS_3 (*(volatile struct eMIOS_eMIOS1_eMIOS_3_tag *) 0xfbe64180)

struct eMIOS_eMIOS1_eMIOS_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT11;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C211;

};

#define eMIOS_eMIOS1_eMIOS_4 (*(volatile struct eMIOS_eMIOS1_eMIOS_4_tag *) 0xfbe641a0)

struct eMIOS_eMIOS1_eMIOS_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT12;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C212;

};

#define eMIOS_eMIOS1_eMIOS_5 (*(volatile struct eMIOS_eMIOS1_eMIOS_5_tag *) 0xfbe641c0)

struct eMIOS_eMIOS1_eMIOS_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT13;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C213;

};

#define eMIOS_eMIOS1_eMIOS_6 (*(volatile struct eMIOS_eMIOS1_eMIOS_6_tag *) 0xfbe641e0)

struct eMIOS_eMIOS1_eMIOS_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT14;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C214;

};

#define eMIOS_eMIOS1_eMIOS_7 (*(volatile struct eMIOS_eMIOS1_eMIOS_7_tag *) 0xfbe64200)

struct eMIOS_eMIOS1_eMIOS_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT15;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C215;

};

#define eMIOS_eMIOS1_eMIOS_8 (*(volatile struct eMIOS_eMIOS1_eMIOS_8_tag *) 0xfbe64220)

struct eMIOS_eMIOS1_eMIOS_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C216;

};

#define eMIOS_eMIOS1_eMIOS_9 (*(volatile struct eMIOS_eMIOS1_eMIOS_9_tag *) 0xfbe64240)

struct eMIOS_eMIOS1_eMIOS_10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT17;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C217;

};

#define eMIOS_eMIOS1_eMIOS_10 (*(volatile struct eMIOS_eMIOS1_eMIOS_10_tag *) 0xfbe64260)

struct eMIOS_eMIOS1_eMIOS_11_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT18;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C218;

};

#define eMIOS_eMIOS1_eMIOS_11 (*(volatile struct eMIOS_eMIOS1_eMIOS_11_tag *) 0xfbe64280)

struct eMIOS_eMIOS1_eMIOS_12_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT19;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C219;

};

#define eMIOS_eMIOS1_eMIOS_12 (*(volatile struct eMIOS_eMIOS1_eMIOS_12_tag *) 0xfbe642a0)

struct eMIOS_eMIOS1_eMIOS_13_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT20;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C220;

};

#define eMIOS_eMIOS1_eMIOS_13 (*(volatile struct eMIOS_eMIOS1_eMIOS_13_tag *) 0xfbe642c0)

struct eMIOS_eMIOS1_eMIOS_14_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT21;

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
      uint64_t reservedSpace0:12;
      uint64_t OVFL:1;
      uint64_t reservedSpace1:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C221;

};

#define eMIOS_eMIOS1_eMIOS_14 (*(volatile struct eMIOS_eMIOS1_eMIOS_14_tag *) 0xfbe642e0)

struct eMIOS_eMIOS1_eMIOS_15_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C222;

};

#define eMIOS_eMIOS1_eMIOS_15 (*(volatile struct eMIOS_eMIOS1_eMIOS_15_tag *) 0xfbe64300)

struct eMIOS_eMIOS1_eMIOS_16_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C:24;
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
      uint64_t ALTA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTA23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t UCPRECLK:1;
      uint64_t reservedSpace1:1;
      uint64_t UCEXTPRE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C223;

};

#define eMIOS_eMIOS1_eMIOS_16 (*(volatile struct eMIOS_eMIOS1_eMIOS_16_tag *) 0xfbe64320)

struct eTPU_eTPU_CCCR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG10;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG11;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG12;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG13;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG14;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG15;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG16;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG17;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG18;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG19;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG110;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG111;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG112;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG113;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG114;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG115;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG116;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG117;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG118;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG119;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG120;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG121;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG122;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG123;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG124;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG125;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG126;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG127;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG128;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG129;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG130;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG131;

  uint8_t res31[516];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG20;

  uint8_t res32[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG21;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG22;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG23;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG24;

  uint8_t res36[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG25;

  uint8_t res37[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG26;

  uint8_t res38[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG27;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG28;

  uint8_t res40[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG29;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG210;

  uint8_t res42[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG211;

  uint8_t res43[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG212;

  uint8_t res44[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG213;

  uint8_t res45[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG214;

  uint8_t res46[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG215;

  uint8_t res47[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG216;

  uint8_t res48[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG217;

  uint8_t res49[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG218;

  uint8_t res50[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG219;

  uint8_t res51[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG220;

  uint8_t res52[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG221;

  uint8_t res53[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG222;

  uint8_t res54[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG223;

  uint8_t res55[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG224;

  uint8_t res56[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG225;

  uint8_t res57[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG226;

  uint8_t res58[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG227;

  uint8_t res59[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG228;

  uint8_t res60[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG229;

  uint8_t res61[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG230;

  uint8_t res62[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPBA:11;
      uint64_t reservedSpace0:3;
      uint64_t OPOL:1;
      uint64_t ODIS:1;
      uint64_t CFS:5;
      uint64_t reservedSpace1:3;
      uint64_t ETCS:1;
      uint64_t ETPD:1;
      uint64_t SSMAE:1;
      uint64_t T4DIS:1;
      uint64_t CPR:2;
      uint64_t DTRE:1;
      uint64_t CIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR_ENG231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FM:2;
      uint64_t reservedSpace0:12;
      uint64_t OPS:1;
      uint64_t IPS:1;
      uint64_t reservedSpace1:6;
      uint64_t DTROS:1;
      uint64_t DTRS:1;
      uint64_t reservedSpace2:6;
      uint64_t CIOS:1;
      uint64_t CIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR_ENG231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSRR_ENG231;

};

#define eTPU_eTPU_CCCR_0 (*(volatile struct eTPU_eTPU_CCCR_0_tag *) 0xffcc0800)

struct eTPU_eTPU_ER_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDCNT:16;
      uint64_t reservedSpace0:12;
      uint64_t WMO:1;
      uint64_t reservedSpace1:1;
      uint64_t WDM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDTR_ENG1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICLR:1;
      uint64_t IDLE_CNT:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDLER_ENG1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDCNT:16;
      uint64_t reservedSpace0:12;
      uint64_t WMO:1;
      uint64_t reservedSpace1:1;
      uint64_t WDM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDTR_ENG2;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICLR:1;
      uint64_t IDLE_CNT:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDLER_ENG2;

};

#define eTPU_eTPU_ER_0 (*(volatile struct eTPU_eTPU_ER_0_tag *) 0xffcc00c0)

struct eTPU_eTPU_GCR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CISn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CISR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CISn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CISR_ENG2;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDTRSR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTRSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDTRSR_ENG2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIOSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIOSR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIOSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIOSR_ENG2;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTROSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDTROSR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTROSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDTROSR_ENG2;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIER_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIEn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIER_ENG2;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTREn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDTRER_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTREn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDTRER_ENG2;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDSR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDSR_ENG2;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSSR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSSR_ENG2;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSn:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSSR_ENG2;

};

#define eTPU_eTPU_GCR_0 (*(volatile struct eTPU_eTPU_GCR_0_tag *) 0xffcc0400)

struct eTPU_eTPU_LMR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG15;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXLAT:16;
      uint64_t MONCHAN:5;
      uint64_t reservedSpace0:3;
      uint64_t SRSEL:3;
      uint64_t reservedSpace1:3;
      uint64_t LMM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMCR_ENG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:1;
      uint64_t LATENCY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMMR_ENG25;

};

#define eTPU_eTPU_LMR_0 (*(volatile struct eTPU_eTPU_LMR_0_tag *) 0xffcc0100)

struct eTPU_eTPU_MESR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEDD:1;
      uint64_t CRDIS:1;
      uint64_t CTEND:1;
      uint64_t reservedSpace0:4;
      uint64_t CEIE:1;
      uint64_t DEDD:1;
      uint64_t DRDIS:1;
      uint64_t DTEND:1;
      uint64_t reservedSpace1:3;
      uint64_t MDEIE:1;
      uint64_t HDEIE:1;
      uint64_t MECIE:1;
      uint64_t reservedSpace2:14;
      uint64_t FME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INJ_ADDR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFLIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEIDPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFLIP_4_0:5;
      uint64_t reservedSpace0:3;
      uint64_t PFLIP_9_5:5;
      uint64_t reservedSpace1:3;
      uint64_t PFLIP_14_10:5;
      uint64_t reservedSpace2:3;
      uint64_t PFLIP_19_15:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEIPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ERR_ADDR:12;
      uint64_t reservedSpace1:10;
      uint64_t ERR_CHANNEL:5;
      uint64_t reservedSpace2:1;
      uint64_t ERR_ACC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND0:5;
      uint64_t reservedSpace0:2;
      uint64_t BE0:1;
      uint64_t SYND1:5;
      uint64_t reservedSpace1:2;
      uint64_t BE1:1;
      uint64_t SYND2:5;
      uint64_t reservedSpace2:2;
      uint64_t BE2:1;
      uint64_t SYND3:5;
      uint64_t reservedSpace3:2;
      uint64_t BE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNCOVR:1;
      uint64_t reservedSpace0:6;
      uint64_t CNCERR:1;
      uint64_t DNCOVR:1;
      uint64_t reservedSpace1:6;
      uint64_t DNCERR:1;
      uint64_t CCOVR:1;
      uint64_t reservedSpace2:6;
      uint64_t CCERR:1;
      uint64_t DCOVR:1;
      uint64_t reservedSpace3:6;
      uint64_t DCERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INJ_ADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFLIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEIDPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFLIP:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEIPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ERR_ADDR:14;
      uint64_t reservedSpace1:8;
      uint64_t ERR_CHANNEL:5;
      uint64_t reservedSpace2:1;
      uint64_t ERR_ACC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CERAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CERDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CERSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CFIX_ADDR:14;
      uint64_t reservedSpace1:14;
      uint64_t CFIXM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEFR;

};

#define eTPU_eTPU_MESR_0 (*(volatile struct eTPU_eTPU_MESR_0_tag *) 0xffcc0200)

struct eTPU_eTPU_SCR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GTBE:1;
      uint64_t reservedSpace0:5;
      uint64_t VIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SCMERR:1;
      uint64_t SCMMISEN:1;
      uint64_t SCMMISF:1;
      uint64_t SCMMISC:1;
      uint64_t reservedSpace2:2;
      uint64_t LTO2:1;
      uint64_t LTO1:1;
      uint64_t SCMSIZE:5;
      uint64_t reservedSpace3:3;
      uint64_t ILF2:1;
      uint64_t ILF1:1;
      uint64_t MGE2:1;
      uint64_t MGE1:1;
      uint64_t WDTO2:1;
      uint64_t WDTO1:1;
      uint64_t SDMERR:1;
      uint64_t GEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARM1:7;
      uint64_t WR:1;
      uint64_t PARM0:7;
      uint64_t PWIDTH:1;
      uint64_t PBBASE:10;
      uint64_t CTBASE:5;
      uint64_t STS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETPUMISCCMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISCCMPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETPUSCMOFFDATAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCMOFFDATAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETB:5;
      uint64_t reservedSpace0:2;
      uint64_t SPPDIS:1;
      uint64_t ERBA:5;
      uint64_t reservedSpace1:1;
      uint64_t CDFC:2;
      uint64_t FPSCK:3;
      uint64_t FCSS:1;
      uint64_t reservedSpace2:3;
      uint64_t HLTF:1;
      uint64_t reservedSpace3:4;
      uint64_t STF:1;
      uint64_t reservedSpace4:1;
      uint64_t MDIS:1;
      uint64_t FEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETB:5;
      uint64_t reservedSpace0:2;
      uint64_t SPPDIS:1;
      uint64_t ERBA:5;
      uint64_t reservedSpace1:1;
      uint64_t CDFC:2;
      uint64_t FPSCK:3;
      uint64_t FCSS:1;
      uint64_t reservedSpace2:3;
      uint64_t HLTF:1;
      uint64_t reservedSpace3:4;
      uint64_t STF:1;
      uint64_t reservedSpace4:1;
      uint64_t MDIS:1;
      uint64_t FEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR_ENG2;

};

#define eTPU_eTPU_SCR_0 (*(volatile struct eTPU_eTPU_SCR_0_tag *) 0xffcc0000)

struct eTPU_eTPU_SSIR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCHAN:5;
      uint64_t reservedSpace0:1;
      uint64_t LENG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPUSSSIR9;

};

#define eTPU_eTPU_SSIR_0 (*(volatile struct eTPU_eTPU_SSIR_0_tag *) 0xffcc1800)

struct eTPU_eTPU_TBR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR1P:8;
      uint64_t reservedSpace0:5;
      uint64_t TCR1CS:1;
      uint64_t TCR1CTL:2;
      uint64_t TCR2P:6;
      uint64_t reservedSpace1:2;
      uint64_t ATGC:1;
      uint64_t AM:2;
      uint64_t TCRCF:2;
      uint64_t TCR2CTL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCR_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TB1R_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR2:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TB2R_ENG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRV2:4;
      uint64_t reservedSpace0:4;
      uint64_t SERVER_ID2:4;
      uint64_t reservedSpace1:2;
      uint64_t RSC2:1;
      uint64_t REN2:1;
      uint64_t SRV1:4;
      uint64_t reservedSpace2:4;
      uint64_t SERVER_ID1:4;
      uint64_t reservedSpace3:2;
      uint64_t RSC1:1;
      uint64_t REN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAC_ENG1;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR1P:8;
      uint64_t reservedSpace0:5;
      uint64_t TCR1CS:1;
      uint64_t TCR1CTL:2;
      uint64_t TCR2P:6;
      uint64_t reservedSpace1:2;
      uint64_t ATGC:1;
      uint64_t AM:2;
      uint64_t TCRCF:2;
      uint64_t TCR2CTL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCR_ENG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TB1R_ENG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR2:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TB2R_ENG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRV2:4;
      uint64_t reservedSpace0:4;
      uint64_t SERVER_ID2:4;
      uint64_t reservedSpace1:2;
      uint64_t RSC2:1;
      uint64_t REN2:1;
      uint64_t SRV1:4;
      uint64_t reservedSpace2:4;
      uint64_t SERVER_ID1:4;
      uint64_t reservedSpace3:2;
      uint64_t RSC1:1;
      uint64_t REN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAC_ENG2;

};

#define eTPU_eTPU_TBR_0 (*(volatile struct eTPU_eTPU_TBR_0_tag *) 0xffcc0040)

struct FCCU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPR:5;
      uint64_t reservedSpace0:1;
      uint64_t OPS:2;
      uint64_t reservedSpace1:1;
      uint64_t DEBUG:1;
      uint64_t reservedSpace2:19;
      uint64_t FILTER_WIDTH:2;
      uint64_t FILTER_BYPASS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRLK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FOP:6;
      uint64_t FOM:3;
      uint64_t PS:1;
      uint64_t SM:1;
      uint64_t reservedSpace0:4;
      uint64_t FOPE:1;
      uint64_t reservedSpace1:4;
      uint64_t RCCE0:1;
      uint64_t RCCE1:1;
      uint64_t FCCU_SET_CLEAR:2;
      uint64_t FCCU_SET_AFTER_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res0[16];

  uint32_t NCF_CFG0;
  uint32_t NCF_CFG1;
  uint32_t NCF_CFG2;
  uint8_t res1[36];

  uint32_t NCFS_CFG0;
  uint32_t NCFS_CFG1;
  uint32_t NCFS_CFG2;
  uint32_t NCFS_CFG3;
  uint32_t NCFS_CFG4;
  uint32_t NCFS_CFG5;
  uint8_t res2[28];

  uint32_t NCF_S0;
  uint32_t NCF_S1;
  uint32_t NCF_S2;
  uint8_t res3[8];

  uint32_t NCF_E0;
  uint32_t NCF_E1;
  uint32_t NCF_E2;
  uint8_t res4[4];

  uint32_t NCF_TOE0;
  uint32_t NCF_TOE1;
  uint32_t NCF_TOE2;
  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUT0:1;
      uint64_t EOUT1:1;
      uint64_t reservedSpace0:2;
      uint64_t EIN0:1;
      uint64_t EIN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EINOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:3;
      uint64_t ESTAT:1;
      uint64_t PhysicErrorPin:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NAFS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) N2AF_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFFS:8;
      uint64_t AF_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A2FF_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFFS:8;
      uint64_t NF_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) N2FF_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAFS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2A_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCCS0:1;
      uint64_t RCCS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFS;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_TO_STAT:1;
      uint64_t ALRM_STAT:1;
      uint64_t NMI_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_TO_IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XTMR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XTMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCS0:4;
      uint64_t reservedSpace0:2;
      uint64_t FS0:1;
      uint64_t VL0:1;
      uint64_t MCS1:4;
      uint64_t reservedSpace1:2;
      uint64_t FS1:1;
      uint64_t VL1:1;
      uint64_t MCS2:4;
      uint64_t reservedSpace2:2;
      uint64_t FS2:1;
      uint64_t VL2:1;
      uint64_t MCS3:4;
      uint64_t reservedSpace3:2;
      uint64_t FS3:1;
      uint64_t VL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSKEY:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRANS_LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERMNTKEY:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERMNT_LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELTA_T:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DELTA_T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ALARM_EN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ALARM_EN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ALARM_EN2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI_EN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI_EN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI_EN2;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUTENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOUT_SIG_EN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUTENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOUT_SIG_EN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUTENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOUT_SIG_EN2;

};

#define FCCU_0 (*(volatile struct FCCU_0_tag *) 0xfbf58000)

struct FEC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:19;
      uint64_t UN:1;
      uint64_t RL:1;
      uint64_t LC:1;
      uint64_t EBERR:1;
      uint64_t MII:1;
      uint64_t RXB:1;
      uint64_t RXF:1;
      uint64_t TXB:1;
      uint64_t TXF:1;
      uint64_t GRA:1;
      uint64_t BABT:1;
      uint64_t BABR:1;
      uint64_t HBERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:19;
      uint64_t UN:1;
      uint64_t RL:1;
      uint64_t LC:1;
      uint64_t EBERR:1;
      uint64_t MII:1;
      uint64_t RXB:1;
      uint64_t RXF:1;
      uint64_t TXB:1;
      uint64_t TXF:1;
      uint64_t GRA:1;
      uint64_t BABT:1;
      uint64_t BABR:1;
      uint64_t HBERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIMR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t RDAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t TDAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t ETHER_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t TA:2;
      uint64_t RA:5;
      uint64_t PA:5;
      uint64_t OP:2;
      uint64_t ST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MII_SPEED:6;
      uint64_t DIS_PRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t MIB_IDLE:1;
      uint64_t MIB_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIBC;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOP:1;
      uint64_t DRT:1;
      uint64_t MII_MODE:1;
      uint64_t PROM:1;
      uint64_t BC_REJ:1;
      uint64_t FCE:1;
      uint64_t reservedSpace0:2;
      uint64_t RMII_MODE:1;
      uint64_t RMII_10T:1;
      uint64_t RMII_LOOP:1;
      uint64_t RMII_ECHO:1;
      uint64_t reservedSpace1:4;
      uint64_t MAX_FL:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GTS:1;
      uint64_t HBC:1;
      uint64_t FDEN:1;
      uint64_t TFC_PAUSE:1;
      uint64_t RFC_PAUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TYPE:16;
      uint64_t PADDR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAUSE_DUR:16;
      uint64_t OPCODE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPD;

  uint8_t res7[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADDR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IAUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADDR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GADDR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GADDR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GALR;

  uint8_t res8[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFWR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFWR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t R_BOUND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t R_FSTART:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRSR;

  uint8_t res10[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t R_DES_START:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t X_DES_START:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t R_BUF_SIZE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMRBR;

  uint8_t res11[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_DROP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_DROP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_PACKETS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_PACKETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_BC_PKT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_BC_PKT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_MC_PKT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_MC_PKT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_CRC_ALIGN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_CRC_ALIGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_UNDERSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_UNDERSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_OVERSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_OVERSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_FRAG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_FRAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_JAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_JAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_COL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_COL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_P64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_P65TO127:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P65TO127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_P128TO255:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P128TO255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_P256TO511:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P256TO511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_P512TO1023:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P512TO1023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_P1024TO2047:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P1024TO2047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_P_GTE2048:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P_GTE2048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_T_OCTETS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_DROP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_DROP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_FRAME_OK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_FRAME_OK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_1COL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_1COL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_MCOL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_MCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_DEF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_DEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_LCOL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_LCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_EXCOL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_EXCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_MACERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_MACERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_CSERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_CSERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_SQE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_SQE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_FDXFC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_FDXFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_T_OCTETS_OK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_OCTETS_OK;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_DROP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_DROP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_PACKETS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_PACKETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_BC_PKT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_BC_PKT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_MC_PKT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_MC_PKT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_CRC_ALIGN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_CRC_ALIGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_UNDERSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_UNDERSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_OVERSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_OVERSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_FRAG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_FRAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_JAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_JAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_RESVD_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_RESVD_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_P64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_P65TO127:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P65TO127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_P128TO255:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P128TO255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_P256TO511:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P256TO511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_P512TO1023:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P512TO1023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_P1024TO2047:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P1024TO2047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_P_GTE2048:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P_GTE2048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMON_R_OCTETS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_R_DROP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_DROP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_R_FRAME_OK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_FRAME_OK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_R_CRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_CRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_R_ALIGN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_ALIGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_R_MACERR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_MACERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_R_FDXFC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_FDXFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEEE_R_OCTETS_OK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_OCTETS_OK;

};

#define FEC_0 (*(volatile struct FEC_0_tag *) 0xfc0b0004)

struct IGF_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR0;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPRE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESR0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR0;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR1;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR1;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR2;

  uint8_t res5[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR2;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR3;

  uint8_t res7[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR3;

  uint8_t res8[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR4;

  uint8_t res9[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR4;

  uint8_t res10[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR5;

  uint8_t res11[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR5;

  uint8_t res12[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR6;

  uint8_t res13[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR6;

  uint8_t res14[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR7;

  uint8_t res15[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR7;

  uint8_t res16[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR8;

  uint8_t res17[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR8;

  uint8_t res18[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR9;

  uint8_t res19[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR9;

  uint8_t res20[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR10;

  uint8_t res21[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR10;

  uint8_t res22[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR11;

  uint8_t res23[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR11;

  uint8_t res24[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR12;

  uint8_t res25[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR12;

  uint8_t res26[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR13;

  uint8_t res27[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR13;

  uint8_t res28[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR14;

  uint8_t res29[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR14;

  uint8_t res30[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR15;

  uint8_t res31[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR15;

  uint8_t res32[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR16;

  uint8_t res33[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR16;

  uint8_t res34[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR17;

  uint8_t res35[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR17;

  uint8_t res36[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR18;

  uint8_t res37[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR18;

  uint8_t res38[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR19;

  uint8_t res39[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR19;

  uint8_t res40[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR20;

  uint8_t res41[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR20;

  uint8_t res42[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR21;

  uint8_t res43[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR21;

  uint8_t res44[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR22;

  uint8_t res45[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR22;

  uint8_t res46[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR23;

  uint8_t res47[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR23;

  uint8_t res48[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR24;

  uint8_t res49[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR24;

  uint8_t res50[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR25;

  uint8_t res51[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR25;

  uint8_t res52[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR26;

  uint8_t res53[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR26;

  uint8_t res54[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR27;

  uint8_t res55[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR27;

  uint8_t res56[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR28;

  uint8_t res57[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR28;

  uint8_t res58[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR29;

  uint8_t res59[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR29;

  uint8_t res60[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR30;

  uint8_t res61[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR30;

  uint8_t res62[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFM:2;
      uint64_t reservedSpace0:1;
      uint64_t FFM:2;
      uint64_t reservedSpace1:1;
      uint64_t FGEN:1;
      uint64_t POL:1;
      uint64_t PSSEL:1;
      uint64_t IMM:1;
      uint64_t reservedSpace2:16;
      uint64_t FOL:1;
      uint64_t FOH:1;
      uint64_t FBP:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLO:1;
      uint64_t FLI:1;
      uint64_t FNDET:1;
      uint64_t RNDET:1;
      uint64_t FEDGE:1;
      uint64_t WEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR31;

  uint8_t res63[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTHR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTH:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTHR31;

};

#define IGF_0 (*(volatile struct IGF_0_tag *) 0xffce8000)

struct INTC_INTC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HVEN0:1;
      uint64_t reservedSpace0:3;
      uint64_t HVEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPROT:1;
      uint64_t reservedSpace0:3;
      uint64_t ID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPROT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INTVEC:10;
      uint64_t VTBA:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IACKR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INTVEC:10;
      uint64_t VTBA:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IACKR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOIR1;

  uint8_t res3[8];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR39;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR40;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR41;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR42;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR43;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR44;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR45;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR46;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR47;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR48;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR49;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR50;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR51;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR52;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR53;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR54;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR55;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR56;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR57;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR58;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR59;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR60;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR61;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR62;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR63;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR64;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR65;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR66;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR67;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR68;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR69;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR70;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR71;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR72;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR73;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR74;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR75;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR76;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR77;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR78;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR79;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR80;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR81;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR82;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR83;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR84;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR85;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR86;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR87;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR88;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR89;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR90;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR91;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR92;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR93;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR94;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR95;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR96;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR97;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR98;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR99;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR100;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR101;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR102;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR103;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR104;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR105;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR106;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR107;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR108;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR109;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR110;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR111;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR112;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR113;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR114;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR115;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR116;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR117;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR118;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR119;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR120;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR121;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR122;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR123;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR124;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR125;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR126;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR127;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR128;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR129;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR130;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR131;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR132;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR133;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR134;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR135;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR136;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR137;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR138;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR139;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR140;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR141;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR142;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR143;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR144;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR145;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR146;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR147;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR148;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR149;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR150;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR151;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR152;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR153;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR154;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR155;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR156;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR157;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR158;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR159;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR160;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR161;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR162;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR163;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR164;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR165;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR166;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR167;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR168;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR169;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR170;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR171;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR172;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR173;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR174;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR175;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR176;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR177;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR178;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR179;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR180;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR181;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR182;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR183;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR184;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR185;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR186;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR187;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR188;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR189;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR190;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR191;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR192;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR193;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR194;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR195;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR196;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR197;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR198;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR199;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR200;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR201;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR202;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR203;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR204;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR205;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR206;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR207;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR208;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR209;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR210;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR211;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR212;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR213;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR214;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR215;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR216;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR217;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR218;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR219;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR220;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR221;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR222;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR223;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR224;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR225;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR226;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR227;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR228;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR229;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR230;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR231;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR232;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR233;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR234;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR235;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR236;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR237;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR238;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR239;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR240;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR241;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR242;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR243;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR244;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR245;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR246;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR247;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR248;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR249;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR250;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR251;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR252;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR253;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR254;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR255;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR256;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR257;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR258;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR259;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR260;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR261;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR262;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR263;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR264;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR265;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR266;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR267;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR268;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR269;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR270;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR271;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR272;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR273;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR274;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR275;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR276;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR277;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR278;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR279;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR280;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR281;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR282;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR283;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR284;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR285;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR286;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR287;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR288;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR289;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR290;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR291;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR292;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR293;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR294;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR295;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR296;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR297;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR298;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR299;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR300;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR301;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR302;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR303;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR304;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR305;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR306;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR307;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR308;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR309;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR310;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR311;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR312;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR313;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR314;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR315;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR316;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR317;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR318;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR319;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR320;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR321;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR322;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR323;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR324;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR325;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR326;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR327;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR328;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR329;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR330;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR331;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR332;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR333;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR334;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR335;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR336;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR337;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR338;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR339;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR340;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR341;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR342;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR343;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR344;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR345;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR346;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR347;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR348;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR349;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR350;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR351;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR352;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR353;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR354;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR355;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR356;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR357;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR358;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR359;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR360;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR361;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR362;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR363;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR364;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR365;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR366;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR367;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR368;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR369;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR370;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR371;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR372;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR373;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR374;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR375;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR376;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR377;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR378;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR379;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR380;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR381;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR382;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR383;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR384;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR385;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR386;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR387;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR388;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR389;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR390;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR391;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR392;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR393;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR394;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR395;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR396;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR397;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR398;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR399;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR400;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR401;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR402;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR403;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR404;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR405;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR406;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR407;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR408;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR409;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR410;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR411;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR412;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR413;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR414;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR415;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR416;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR417;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR418;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR419;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR420;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR421;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR422;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR423;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR424;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR425;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR426;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR427;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR428;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR429;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR430;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR431;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR432;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR433;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR434;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR435;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR436;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR437;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR438;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR439;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR440;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR441;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR442;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR443;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR444;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR445;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR446;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR447;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR448;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR449;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR450;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR451;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR452;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR453;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR454;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR455;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR456;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR457;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR458;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR459;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR460;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR461;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR462;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR463;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR464;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR465;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR466;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR467;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR468;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR469;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR470;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR471;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR472;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR473;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR474;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR475;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR476;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR477;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR478;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR479;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR480;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR481;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR482;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR483;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR484;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR485;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR486;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR487;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR488;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR489;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR490;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR491;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR492;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR493;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR494;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR495;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR496;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR497;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR498;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR499;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR500;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR501;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR502;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR503;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR504;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR505;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR506;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR507;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR508;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR509;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR510;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR511;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR512;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR513;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR514;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR515;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR516;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR517;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR518;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR519;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR520;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR521;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR522;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR523;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR524;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR525;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR526;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR527;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR528;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR529;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR530;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR531;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR532;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR533;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR534;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR535;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR536;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR537;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR538;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR539;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR540;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR541;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR542;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR543;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR544;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR545;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR546;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR547;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR548;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR549;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR550;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR551;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR552;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR553;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR554;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR555;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR556;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR557;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR558;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR559;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR560;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR561;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR562;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR563;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR564;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR565;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR566;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR567;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR568;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR569;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR570;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR571;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR572;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR573;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR574;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR575;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR576;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR577;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR578;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR579;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR580;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR581;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR582;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR583;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR584;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR585;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR586;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR587;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR588;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR589;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR590;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR591;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR592;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR593;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR594;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR595;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR596;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR597;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR598;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR599;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR600;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR601;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR602;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR603;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR604;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR605;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR606;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR607;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR608;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR609;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR610;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR611;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR612;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR613;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR614;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR615;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR616;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR617;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR618;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR619;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR620;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR621;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR622;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR623;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR624;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR625;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR626;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR627;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR628;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR629;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR630;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR631;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR632;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR633;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR634;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR635;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR636;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR637;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR638;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR639;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR640;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR641;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR642;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR643;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR644;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR645;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR646;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR647;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR648;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR649;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR650;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR651;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR652;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR653;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR654;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR655;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR656;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR657;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR658;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR659;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR660;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR661;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR662;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR663;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR664;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR665;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR666;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR667;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR668;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR669;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR670;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR671;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR672;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR673;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR674;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR675;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR676;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR677;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR678;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR679;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR680;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR681;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR682;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR683;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR684;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR685;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR686;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR687;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR688;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR689;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR690;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR691;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR692;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR693;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR694;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR695;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR696;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR697;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR698;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR699;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR700;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR701;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR702;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR703;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR704;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR705;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR706;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR707;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR708;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR709;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR710;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR711;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR712;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR713;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR714;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR715;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR716;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR717;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR718;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR719;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR720;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR721;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR722;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR723;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR724;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR725;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR726;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR727;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR728;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR729;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR730;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR731;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR732;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR733;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR734;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR735;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR736;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR737;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR738;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR739;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR740;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR741;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR742;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR743;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR744;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR745;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR746;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR747;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR748;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR749;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR750;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR751;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR752;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR753;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR754;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR755;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR756;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR757;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR758;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR759;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR760;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR761;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR762;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR763;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR764;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR765;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR766;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR767;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR768;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR769;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR770;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR771;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR772;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR773;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR774;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR775;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR776;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR777;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR778;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR779;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR780;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR781;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR782;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR783;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR784;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR785;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR786;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR787;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR788;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR789;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR790;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR791;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR792;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR793;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR794;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR795;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR796;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR797;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR798;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR799;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR800;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR801;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR802;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR803;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR804;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR805;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR806;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR807;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR808;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR809;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR810;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR811;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR812;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR813;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR814;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR815;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR816;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR817;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR818;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR819;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR820;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR821;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR822;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR823;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR824;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR825;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR826;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR827;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR828;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR829;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR830;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR831;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR832;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR833;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR834;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR835;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR836;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR837;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR838;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR839;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR840;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR841;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR842;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR843;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR844;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR845;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR846;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR847;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR848;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR849;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR850;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR851;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR852;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR853;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR854;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR855;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR856;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR857;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR858;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR859;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR860;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR861;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR862;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR863;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR864;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR865;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR866;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR867;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR868;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR869;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR870;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR871;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR872;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR873;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR874;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR875;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR876;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR877;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR878;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR879;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR880;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR881;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR882;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR883;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR884;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR885;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR886;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR887;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR888;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR889;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR890;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR891;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR892;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR893;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR894;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR895;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR896;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR897;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR898;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR899;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR900;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR901;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR902;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR903;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR904;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR905;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR906;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR907;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR908;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR909;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR910;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR911;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR912;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR913;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR914;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR915;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR916;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR917;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR918;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR919;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR920;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR921;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR922;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR923;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR924;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR925;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR926;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR927;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR928;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR929;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR930;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR931;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR932;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR933;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR934;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR935;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR936;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR937;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR938;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR939;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR940;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR941;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR942;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR943;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR944;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR945;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR946;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR947;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR948;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR949;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR950;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR951;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR952;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR953;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR954;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR955;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR956;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR957;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR958;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR959;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR960;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR961;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR962;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR963;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR964;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR965;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR966;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR967;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR968;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR969;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR970;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR971;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR972;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR973;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR974;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR975;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR976;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR977;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR978;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR979;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR980;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR981;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR982;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR983;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR984;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR985;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR986;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR987;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR988;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR989;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR990;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR991;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR992;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR993;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR994;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR995;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR996;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR997;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR998;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR999;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1000;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1001;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1002;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1003;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1004;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1005;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1006;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1007;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1008;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1009;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1010;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1011;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1012;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1013;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1014;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1015;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1016;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1017;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1018;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1019;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1020;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1021;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1022;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:6;
      uint64_t reservedSpace0:2;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:5;
      uint64_t PRC_SELN1:1;
      uint64_t PRC_SELN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1023;

  uint8_t res4[1952];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC13;

};

#define INTC_INTC_0 (*(volatile struct INTC_INTC_0_tag *) 0xfc040000)

struct IRCOSC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t USER_TRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

};

#define IRCOSC_0 (*(volatile struct IRCOSC_0_tag *) 0xfffb0000)

struct JDC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOUT_IEN:1;
      uint64_t reservedSpace0:15;
      uint64_t JIN_IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOUT_INT:1;
      uint64_t reservedSpace0:1;
      uint64_t JOUT_RDY:1;
      uint64_t reservedSpace1:13;
      uint64_t JIN_INT:1;
      uint64_t reservedSpace2:1;
      uint64_t JIN_RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOUT_IPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JIN_IPS;

};

#define JDC_0 (*(volatile struct JDC_0_tag *) 0xfff3c000)

struct JTAGM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTM:1;
      uint64_t jtagm_JCOMP:1;
      uint64_t TCKSEL:3;
      uint64_t IIE:1;
      uint64_t SIE:1;
      uint64_t reservedSpace0:1;
      uint64_t inter_jtag_frame_timer:6;
      uint64_t reservedSpace1:17;
      uint64_t SWRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t NR:1;
      uint64_t Idle:1;
      uint64_t Nexus_err:1;
      uint64_t reservedSpace1:1;
      uint64_t SPU_INT:1;
      uint64_t SPU_INT_CLR:1;
      uint64_t reservedSpace2:2;
      uint64_t TOOL:1;
      uint64_t reservedSpace3:2;
      uint64_t JTAGSAFE:1;
      uint64_t reservedSpace4:1;
      uint64_t JTAGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMS_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TMS_LOW:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDI_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEND:1;
      uint64_t reservedSpace0:3;
      uint64_t TDI_LOW:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR3;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDO_LOW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TDO_HIGH:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR1;

};

#define JTAGM_0 (*(volatile struct JTAGM_0_tag *) 0xfff48000)

struct LFAST_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAEN:1;
      uint64_t DRFRST:1;
      uint64_t reservedSpace0:1;
      uint64_t CTSEN:1;
      uint64_t TXARBD:1;
      uint64_t reservedSpace1:8;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
      uint64_t DRFEN:1;
      uint64_t LSSEL:1;
      uint64_t reservedSpace2:7;
      uint64_t IPGDBG:1;
      uint64_t reservedSpace3:6;
      uint64_t MSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:1;
      uint64_t reservedSpace0:7;
      uint64_t RDR:1;
      uint64_t reservedSpace1:7;
      uint64_t DRMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHSSEL:1;
      uint64_t CORRTH:3;
      uint64_t reservedSpace0:20;
      uint64_t SMPSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPFRMTH:16;
      uint64_t LPMOD:3;
      uint64_t reservedSpace0:5;
      uint64_t LPON:1;
      uint64_t CLKTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPFMCNT:16;
      uint64_t LPCNTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LWKCNT:4;
      uint64_t reservedSpace0:4;
      uint64_t HWKCNT:8;
      uint64_t LSCNT:4;
      uint64_t reservedSpace1:4;
      uint64_t HSCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICLCPLD:8;
      uint64_t reservedSpace0:8;
      uint64_t SNDICLC:1;
      uint64_t ICLCSEQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PNGPYLD:8;
      uint64_t reservedSpace0:7;
      uint64_t PNGAUTO:1;
      uint64_t PNGREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PICR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCTSMN:6;
      uint64_t reservedSpace0:10;
      uint64_t RCTSMX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDTIE:1;
      uint64_t TXICLCIE:1;
      uint64_t TXUNSIE:1;
      uint64_t reservedSpace0:1;
      uint64_t TXPNGIE:1;
      uint64_t reservedSpace1:11;
      uint64_t TXOVIE:1;
      uint64_t TXIIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXUNSIE:1;
      uint64_t RXDIE:1;
      uint64_t RXCTSIE:1;
      uint64_t reservedSpace1:12;
      uint64_t RXLCEIE:1;
      uint64_t RXICIE:1;
      uint64_t RXSZIE:1;
      uint64_t RXOFIE:1;
      uint64_t RXUFIE:1;
      uint64_t RXMXIE:1;
      uint64_t RXMNIE:1;
      uint64_t RXUOIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICPONIE:1;
      uint64_t ICPOFIE:1;
      uint64_t ICTSIE:1;
      uint64_t ICTFIE:1;
      uint64_t ICRSIE:1;
      uint64_t ICRFIE:1;
      uint64_t ICTEIE:1;
      uint64_t ICTDIE:1;
      uint64_t ICCTIE:1;
      uint64_t ICLPIE:1;
      uint64_t ICTOIE:1;
      uint64_t ICPRIE:1;
      uint64_t ICPSIE:1;
      uint64_t ICPFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV:2;
      uint64_t FBDIV:6;
      uint64_t FDIVEN:1;
      uint64_t PLCKCW:2;
      uint64_t reservedSpace0:4;
      uint64_t REFINV:1;
      uint64_t SWPON:1;
      uint64_t SWPOFF:1;
      uint64_t reservedSpace1:11;
      uint64_t IPTMOD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVCKP:1;
      uint64_t LVCKSS:1;
      uint64_t LVTXOP:1;
      uint64_t LVRXOP_BR:1;
      uint64_t reservedSpace0:1;
      uint64_t LVRXOP_TR:1;
      uint64_t reservedSpace1:5;
      uint64_t LVLPEN:1;
      uint64_t LVRFEN:1;
      uint64_t TXCMUX:1;
      uint64_t LVTXOE:1;
      uint64_t LVRXOFF:1;
      uint64_t SWONLR:1;
      uint64_t SWOFFLR:1;
      uint64_t SWONLD:1;
      uint64_t SWOFFLD:1;
      uint64_t SWSLPLR:1;
      uint64_t SWWKLR:1;
      uint64_t SWSLPLD:1;
      uint64_t SWWKLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNSHDR:7;
      uint64_t reservedSpace0:9;
      uint64_t USNDRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNTXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSTDR8;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPCSDV:1;
      uint64_t LPCHDV:1;
      uint64_t LPCPDV:1;
      uint64_t LPFPDV:1;
      uint64_t LPTXDN:1;
      uint64_t reservedSpace0:11;
      uint64_t DRSM:1;
      uint64_t LDSM:1;
      uint64_t LRMD:1;
      uint64_t reservedSpace1:12;
      uint64_t DUALMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPNGD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PISR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t TXDCNT:6;
      uint64_t reservedSpace1:2;
      uint64_t RXFCNT:3;
      uint64_t reservedSpace2:5;
      uint64_t RXDCNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDTF:1;
      uint64_t TXICLCF:1;
      uint64_t TXUNSF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXPNGF:1;
      uint64_t reservedSpace1:11;
      uint64_t TXOVF:1;
      uint64_t TXIEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXUNSF:1;
      uint64_t RXDF:1;
      uint64_t RXCTSF:1;
      uint64_t reservedSpace1:12;
      uint64_t RXLCEF:1;
      uint64_t RXICF:1;
      uint64_t RXSZF:1;
      uint64_t RXOFF:1;
      uint64_t RXUFF:1;
      uint64_t RXMXF:1;
      uint64_t RXMNF:1;
      uint64_t RXUOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICPONF:1;
      uint64_t ICPOFF:1;
      uint64_t ICTSF:1;
      uint64_t ICTFF:1;
      uint64_t ICRSF:1;
      uint64_t ICRFF:1;
      uint64_t ICTEF:1;
      uint64_t ICTDF:1;
      uint64_t ICCTF:1;
      uint64_t ICLPF:1;
      uint64_t ICTOF:1;
      uint64_t ICPRF:1;
      uint64_t ICPSF:1;
      uint64_t ICPFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LRPDS:1;
      uint64_t LDPDS:1;
      uint64_t LDSLPS:1;
      uint64_t LRSLPS:1;
      uint64_t reservedSpace0:12;
      uint64_t PLDCR:1;
      uint64_t PLLDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URPCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t URXDV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNRXD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNSRDR8;

};

#define LFAST_0 (*(volatile struct LFAST_0_tag *) 0xfffd8000)

struct LINFlexD_LINFlexD_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SSBL:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t reservedSpace0:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AUTOWU:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIETOIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t RXbusy:1;
      uint64_t DRBNE:1;
      uint64_t RMB:1;
      uint64_t reservedSpace0:2;
      uint64_t LINS:4;
      uint64_t RDC:3;
      uint64_t AUTOSYNC_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t SDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL0:1;
      uint64_t PCE:1;
      uint64_t PC0:1;
      uint64_t TxEn:1;
      uint64_t RxEn:1;
      uint64_t PC1:1;
      uint64_t WL1:1;
      uint64_t TFBM:1;
      uint64_t RFBM:1;
      uint64_t RDFL_RFC:3;
      uint64_t TDFL_TFC:3;
      uint64_t WLS:1;
      uint64_t SBUR:2;
      uint64_t DTU_PCETX:1;
      uint64_t NEF:3;
      uint64_t ROSE:1;
      uint64_t OSR:4;
      uint64_t CSP:3;
      uint64_t MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTFTFF:1;
      uint64_t DRFRFE:1;
      uint64_t TO:1;
      uint64_t RFNE:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
      uint64_t TBDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t STOP:1;
      uint64_t RDLIS:1;
      uint64_t TDLIS:1;
      uint64_t RDFBM:1;
      uint64_t TDFBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTPTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMATXE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMARXE;

};

#define LINFlexD_LINFlexD_0 (*(volatile struct LINFlexD_LINFlexD_0_tag *) 0xffe8c000)

struct LINFlexD_LINFlexD_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SSBL:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t reservedSpace0:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AUTOWU:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIETOIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t RXbusy:1;
      uint64_t DRBNE:1;
      uint64_t RMB:1;
      uint64_t reservedSpace0:2;
      uint64_t LINS:4;
      uint64_t RDC:3;
      uint64_t AUTOSYNC_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t SDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL0:1;
      uint64_t PCE:1;
      uint64_t PC0:1;
      uint64_t TxEn:1;
      uint64_t RxEn:1;
      uint64_t PC1:1;
      uint64_t WL1:1;
      uint64_t TFBM:1;
      uint64_t RFBM:1;
      uint64_t RDFL_RFC:3;
      uint64_t TDFL_TFC:3;
      uint64_t WLS:1;
      uint64_t SBUR:2;
      uint64_t DTU_PCETX:1;
      uint64_t NEF:3;
      uint64_t ROSE:1;
      uint64_t OSR:4;
      uint64_t CSP:3;
      uint64_t MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTFTFF:1;
      uint64_t DRFRFE:1;
      uint64_t TO:1;
      uint64_t RFNE:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
      uint64_t TBDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t STOP:1;
      uint64_t RDLIS:1;
      uint64_t TDLIS:1;
      uint64_t RDFBM:1;
      uint64_t TDFBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTPTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMATXE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMARXE;

};

#define LINFlexD_LINFlexD_1 (*(volatile struct LINFlexD_LINFlexD_1_tag *) 0xfbe8c000)

struct LINFlexD_LINFlexD_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SSBL:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t reservedSpace0:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AUTOWU:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIETOIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t RXbusy:1;
      uint64_t DRBNE:1;
      uint64_t RMB:1;
      uint64_t reservedSpace0:2;
      uint64_t LINS:4;
      uint64_t RDC:3;
      uint64_t AUTOSYNC_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t SDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL0:1;
      uint64_t PCE:1;
      uint64_t PC0:1;
      uint64_t TxEn:1;
      uint64_t RxEn:1;
      uint64_t PC1:1;
      uint64_t WL1:1;
      uint64_t TFBM:1;
      uint64_t RFBM:1;
      uint64_t RDFL_RFC:3;
      uint64_t TDFL_TFC:3;
      uint64_t WLS:1;
      uint64_t SBUR:2;
      uint64_t DTU_PCETX:1;
      uint64_t NEF:3;
      uint64_t ROSE:1;
      uint64_t OSR:4;
      uint64_t CSP:3;
      uint64_t MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTFTFF:1;
      uint64_t DRFRFE:1;
      uint64_t TO:1;
      uint64_t RFNE:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
      uint64_t TBDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t STOP:1;
      uint64_t RDLIS:1;
      uint64_t TDLIS:1;
      uint64_t RDFBM:1;
      uint64_t TDFBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTPTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMATXE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMARXE;

};

#define LINFlexD_LINFlexD_2 (*(volatile struct LINFlexD_LINFlexD_2_tag *) 0xffe90000)

struct LINFlexD_LINFlexD_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SSBL:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t reservedSpace0:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AUTOWU:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIETOIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t RXbusy:1;
      uint64_t DRBNE:1;
      uint64_t RMB:1;
      uint64_t reservedSpace0:2;
      uint64_t LINS:4;
      uint64_t RDC:3;
      uint64_t AUTOSYNC_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t SDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL0:1;
      uint64_t PCE:1;
      uint64_t PC0:1;
      uint64_t TxEn:1;
      uint64_t RxEn:1;
      uint64_t PC1:1;
      uint64_t WL1:1;
      uint64_t TFBM:1;
      uint64_t RFBM:1;
      uint64_t RDFL_RFC:3;
      uint64_t TDFL_TFC:3;
      uint64_t WLS:1;
      uint64_t SBUR:2;
      uint64_t DTU_PCETX:1;
      uint64_t NEF:3;
      uint64_t ROSE:1;
      uint64_t OSR:4;
      uint64_t CSP:3;
      uint64_t MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTFTFF:1;
      uint64_t DRFRFE:1;
      uint64_t TO:1;
      uint64_t RFNE:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
      uint64_t TBDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t STOP:1;
      uint64_t RDLIS:1;
      uint64_t TDLIS:1;
      uint64_t RDFBM:1;
      uint64_t TDFBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTPTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMATXE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMARXE;

};

#define LINFlexD_LINFlexD_3 (*(volatile struct LINFlexD_LINFlexD_3_tag *) 0xfbe90000)

struct LINFlexD_LINFlexD_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SSBL:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t reservedSpace0:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AUTOWU:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t DBEIETOIE:1;
      uint64_t DBFIE:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t DBEF:1;
      uint64_t DBFF:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t RXbusy:1;
      uint64_t DRBNE:1;
      uint64_t RMB:1;
      uint64_t reservedSpace0:2;
      uint64_t LINS:4;
      uint64_t RDC:3;
      uint64_t AUTOSYNC_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t SDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL0:1;
      uint64_t PCE:1;
      uint64_t PC0:1;
      uint64_t TxEn:1;
      uint64_t RxEn:1;
      uint64_t PC1:1;
      uint64_t WL1:1;
      uint64_t TFBM:1;
      uint64_t RFBM:1;
      uint64_t RDFL_RFC:3;
      uint64_t TDFL_TFC:3;
      uint64_t WLS:1;
      uint64_t SBUR:2;
      uint64_t DTU_PCETX:1;
      uint64_t NEF:3;
      uint64_t ROSE:1;
      uint64_t OSR:4;
      uint64_t CSP:3;
      uint64_t MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTFTFF:1;
      uint64_t DRFRFE:1;
      uint64_t TO:1;
      uint64_t RFNE:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
      uint64_t TBDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;