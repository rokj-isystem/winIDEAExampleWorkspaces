#include <stdint.h>

struct FLASHIF_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RWT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FRWTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
      uint64_t CERS:1;
      uint64_t ESPS:1;
      uint64_t SERS:1;
      uint64_t PGMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSTR;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSYNDN;

  uint8_t res2[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYIE:1;
      uint64_t HANGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FICR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYIF:1;
      uint64_t HANGIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FISR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYC:1;
      uint64_t HANGC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FICLR;

  uint8_t res5[215];

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

#define FLASHIF_0 (*(volatile struct FLASHIF_0_tag *) 0x40000004)

struct UID_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t UID_bitfield:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID_bitfield:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR1;

};

#define UID_0 (*(volatile struct UID_0_tag *) 0x40000200)

struct CLOCK_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HCRE:1;
      uint64_t MOSCE:1;
      uint64_t reservedSpace0:1;
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
      uint64_t HCRDY:1;
      uint64_t MORDY:1;
      uint64_t reservedSpace0:1;
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
      uint64_t STM_bitfield:2;
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

  uint8_t res5[7];

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

  uint8_t res6[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MOWT:4;
      uint64_t SOWT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSW_TMR;

  uint8_t res7[3];

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

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLM:4;
      uint64_t PLLK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL1;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL2;

  uint8_t res10[3];

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

  uint8_t res11[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCMF:1;
      uint64_t SCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSV_STR;

  uint8_t res12[3];

  uint16_t FCSWH_CTL;
  uint8_t res13[2];

  uint16_t FCSWL_CTL;
  uint8_t res14[2];

  uint16_t FCSWD_CTL;
  uint8_t res15[2];

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

  uint8_t res16[11];

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

  uint8_t res17[3];

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

  uint8_t res18[3];

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

#define CLOCK_0 (*(volatile struct CLOCK_0_tag *) 0x40010000)

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
      uint64_t TGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGSPMC;

  uint8_t res2[3047];

  uint32_t WDOGLOCK;
};

#define SWWDT_0 (*(volatile struct SWWDT_0_tag *) 0x40012000)

struct DTIM_0_tag
{
  uint32_t TIMER1LOAD;
  uint32_t TIMER1VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ONESHOT:1;
      uint64_t TIMERSIZE:1;
      uint64_t TIMERPRE:2;
      uint64_t reservedSpace0:1;
      uint64_t INTENABLE:1;
      uint64_t TIMERMODE:1;
      uint64_t TIMEREN:1;
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
      uint64_t ONESHOT:1;
      uint64_t TIMERSIZE:1;
      uint64_t TIMERPRE:2;
      uint64_t reservedSpace0:1;
      uint64_t INTENABLE:1;
      uint64_t TIMERMODE:1;
      uint64_t TIMEREN:1;
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
    uint8_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QCRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QCRH;

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

struct QPRC0_NF_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLA;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLB;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLZ;

};

#define QPRC0_NF_0 (*(volatile struct QPRC0_NF_0_tag *) 0x40026100)

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
    uint32_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCMRCIF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCMRCOT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCODC:3;
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

  uint8_t res13[2];

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
    uint16_t R;
    struct
    {
      uint64_t NR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NMIRR;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NMICL;

};

#define EXTI_0 (*(volatile struct EXTI_0_tag *) 0x40030000)

struct INTREQ_A_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
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
  } __attribute__((aligned(4))) IRQ00MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWWDTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ01MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ02MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVE0INT0:1;
      uint64_t WAVE0INT1:1;
      uint64_t WAVE0INT2:1;
      uint64_t WAVE0INT3:1;
      uint64_t WAVE1INT0:1;
      uint64_t WAVE1INT1:1;
      uint64_t WAVE1INT2:1;
      uint64_t WAVE1INT3:1;
      uint64_t WAVE2INT0:1;
      uint64_t WAVE2INT1:1;
      uint64_t WAVE2INT2:1;
      uint64_t WAVE2INT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ03MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
      uint64_t EXTINT4:1;
      uint64_t EXTINT5:1;
      uint64_t EXTINT6:1;
      uint64_t EXTINT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ04MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT8:1;
      uint64_t EXTINT9:1;
      uint64_t EXTINT10:1;
      uint64_t EXTINT11:1;
      uint64_t EXTINT12:1;
      uint64_t EXTINT13:1;
      uint64_t EXTINT14:1;
      uint64_t EXTINT15:1;
      uint64_t EXTINT16:1;
      uint64_t EXTINT17:1;
      uint64_t EXTINT18:1;
      uint64_t EXTINT19:1;
      uint64_t EXTINT20:1;
      uint64_t EXTINT21:1;
      uint64_t EXTINT22:1;
      uint64_t EXTINT23:1;
      uint64_t EXTINT24:1;
      uint64_t EXTINT25:1;
      uint64_t EXTINT26:1;
      uint64_t EXTINT27:1;
      uint64_t EXTINT28:1;
      uint64_t EXTINT29:1;
      uint64_t EXTINT30:1;
      uint64_t EXTINT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ05MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMINT0:1;
      uint64_t TIMINT1:1;
      uint64_t QUD0INT0:1;
      uint64_t QUD0INT1:1;
      uint64_t QUD0INT2:1;
      uint64_t QUD0INT3:1;
      uint64_t QUD0INT4:1;
      uint64_t QUD0INT5:1;
      uint64_t QUD1INT0:1;
      uint64_t QUD1INT1:1;
      uint64_t QUD1INT2:1;
      uint64_t QUD1INT3:1;
      uint64_t QUD1INT4:1;
      uint64_t QUD1INT5:1;
      uint64_t QUD2INT0:1;
      uint64_t QUD2INT1:1;
      uint64_t QUD2INT2:1;
      uint64_t QUD2INT3:1;
      uint64_t QUD2INT4:1;
      uint64_t QUD2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ06MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ07MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ08MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ09MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ10MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ11MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ12MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ13MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ14MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ15MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ16MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ17MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ18MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t reservedSpace0:2;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ19MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ20MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t reservedSpace0:2;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ21MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ22MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
      uint64_t PPGINT3:1;
      uint64_t PPGINT4:1;
      uint64_t PPGINT5:1;
      uint64_t PPGINT6:1;
      uint64_t PPGINT7:1;
      uint64_t PPGINT8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ23MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCINT:1;
      uint64_t SOSCINT:1;
      uint64_t MPLLINT:1;
      uint64_t reservedSpace0:1;
      uint64_t WCINT:1;
      uint64_t RTCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ24MON;

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
  } __attribute__((aligned(4))) IRQ25MON;

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
  } __attribute__((aligned(4))) IRQ26MON;

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
      uint64_t LCDCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ27MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT0INT0:1;
      uint64_t FRT0INT1:1;
      uint64_t FRT0INT2:1;
      uint64_t FRT0INT3:1;
      uint64_t FRT0INT4:1;
      uint64_t FRT0INT5:1;
      uint64_t FRT1INT0:1;
      uint64_t FRT1INT1:1;
      uint64_t FRT1INT2:1;
      uint64_t FRT1INT3:1;
      uint64_t FRT1INT4:1;
      uint64_t FRT1INT5:1;
      uint64_t FRT2INT0:1;
      uint64_t FRT2INT1:1;
      uint64_t FRT2INT2:1;
      uint64_t FRT2INT3:1;
      uint64_t FRT2INT4:1;
      uint64_t FRT2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ28MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICU0INT0:1;
      uint64_t ICU0INT1:1;
      uint64_t ICU0INT2:1;
      uint64_t ICU0INT3:1;
      uint64_t ICU1INT0:1;
      uint64_t ICU1INT1:1;
      uint64_t ICU1INT2:1;
      uint64_t ICU1INT3:1;
      uint64_t ICU2INT0:1;
      uint64_t ICU2INT1:1;
      uint64_t ICU2INT2:1;
      uint64_t ICU2INT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ29MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCU0INT0:1;
      uint64_t OCU0INT1:1;
      uint64_t OCU0INT2:1;
      uint64_t OCU0INT3:1;
      uint64_t OCU0INT4:1;
      uint64_t OCU0INT5:1;
      uint64_t OCU1INT0:1;
      uint64_t OCU1INT1:1;
      uint64_t OCU1INT2:1;
      uint64_t OCU1INT3:1;
      uint64_t OCU1INT4:1;
      uint64_t OCU1INT5:1;
      uint64_t OCU2INT0:1;
      uint64_t OCU2INT1:1;
      uint64_t OCU2INT2:1;
      uint64_t OCU2INT3:1;
      uint64_t OCU2INT4:1;
      uint64_t OCU2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ30MON;

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
      uint64_t BTINT8:1;
      uint64_t BTINT9:1;
      uint64_t BTINT10:1;
      uint64_t BTINT11:1;
      uint64_t BTINT12:1;
      uint64_t BTINT13:1;
      uint64_t BTINT14:1;
      uint64_t BTINT15:1;
      uint64_t reservedSpace0:11;
      uint64_t FLASHINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ31MON;

};

#define INTREQ_A_0 (*(volatile struct INTREQ_A_0_tag *) 0x40031000)

struct GPIO_0_tag
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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR6;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR8;

  uint8_t res1[20];

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

  uint8_t res2[196];

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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

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
  } __attribute__((aligned(4))) PCRE;

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
      uint64_t reservedSpace0:10;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR6;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR8;

  uint8_t res7[20];

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

  uint8_t res8[196];

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
      uint64_t reservedSpace0:10;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR6;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR8;

  uint8_t res10[20];

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

  uint8_t res11[196];

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
      uint64_t reservedSpace0:10;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR6;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR8;

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
  } __attribute__((aligned(4))) PDORE;

  uint8_t res14[196];

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

  uint8_t res15[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBXC:2;
      uint64_t MAINXC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPSR;

  uint8_t res16[124];

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
      uint64_t reservedSpace1:8;
      uint64_t SWDEN:1;
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
      uint64_t IGTRG0:1;
      uint64_t reservedSpace0:2;
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

  uint8_t res17[8];

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
      uint64_t TIOB12S:3;
      uint64_t reservedSpace1:1;
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
      uint64_t reservedSpace0:4;
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
      uint64_t CECR0B:2;
      uint64_t CECR1B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR18;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN0S:1;
      uint64_t QBIN0S:1;
      uint64_t QZIN0S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SCS10B:2;
      uint64_t SCS11E:2;
      uint64_t reservedSpace1:4;
      uint64_t SCS30B:2;
      uint64_t SCS31E:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR22;

  uint8_t res19[164];

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
      uint64_t reservedSpace0:10;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR6;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR8;

  uint8_t res21[20];

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

  uint8_t res22[452];

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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER0;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER6;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER8;

  uint8_t res24[20];

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
  } __attribute__((aligned(4))) FPOERE;

};

#define GPIO_0 (*(volatile struct GPIO_0_tag *) 0x40033000)

struct LVD_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SVHI:5;
      uint64_t LVDIE:1;
      uint64_t reservedSpace1:2;
      uint64_t SVHR:5;
      uint64_t LVDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) LVD_CTL;

  uint8_t res0[2];

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
      uint64_t reservedSpace0:6;
      uint64_t LVDRRDY:1;
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
      uint64_t reservedSpace0:1;
      uint64_t ISUBSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) REG_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCCKE:1;
      uint64_t CECCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCK_CTL;

  uint8_t res1[1787];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMD_CTL;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WINITX:1;
      uint64_t WLVDH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WRFSR;

  uint8_t res3[3];

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
      uint64_t WCEC0I:1;
      uint64_t WCEC1I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIFSR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WRTCE:1;
      uint64_t WLVDE:1;
      uint64_t reservedSpace0:1;
      uint64_t WUE1:1;
      uint64_t WUE2:1;
      uint64_t WUE3:1;
      uint64_t WUE4:1;
      uint64_t WUE5:1;
      uint64_t WCEC0E:1;
      uint64_t WCEC1E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIER;

  uint8_t res5[2];

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

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SRAMR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSRAMR;

  uint8_t res7[235];

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

#define DS_0 (*(volatile struct DS_0_tag *) 0x40035100)

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
    uint32_t R;
    struct
    {
      uint64_t ST:1;
      uint64_t reservedSpace0:1;
      uint64_t RUN:1;
      uint64_t SRST:1;
      uint64_t SCST:1;
      uint64_t SCRST:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t MIEN:1;
      uint64_t HEN:1;
      uint64_t DEN:1;
      uint64_t MOEN:1;
      uint64_t YEN:1;
      uint64_t reservedSpace2:3;
      uint64_t INTSSI:1;
      uint64_t INTSI:1;
      uint64_t INTMI:1;
      uint64_t INTHI:1;
      uint64_t INTTMI:1;
      uint64_t INTALI:1;
      uint64_t INTERI:1;
      uint64_t INTCRI:1;
      uint64_t INTSSIE:1;
      uint64_t INTSIE:1;
      uint64_t INTMIE:1;
      uint64_t INTHIE:1;
      uint64_t INTTMIE:1;
      uint64_t INTALIE:1;
      uint64_t INTERIE:1;
      uint64_t INTCRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CREAD:1;
      uint64_t reservedSpace0:7;
      uint64_t TMST:1;
      uint64_t TMEN:1;
      uint64_t TMRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
      uint64_t BR16:1;
      uint64_t BR17:1;
      uint64_t BR18:1;
      uint64_t BR19:1;
      uint64_t BR20:1;
      uint64_t BR21:1;
      uint64_t BR22:1;
      uint64_t BR23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTBR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S:4;
      uint64_t TS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MI:4;
      uint64_t TMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t H:4;
      uint64_t TH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTHR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D:4;
      uint64_t TD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDW;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MO:4;
      uint64_t TMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMOR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t Y:4;
      uint64_t TY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTYR;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMI:4;
      uint64_t TAMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AH:4;
      uint64_t TAH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALHR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AD:4;
      uint64_t TAD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALDR;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMO:4;
      uint64_t TAMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMOR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AY:4;
      uint64_t TAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALYR;

  uint8_t res2[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TM:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTTR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCLKS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCLKS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCLKM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCLKM;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WTCAL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WTCAL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALEN;

  uint8_t res4[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIV;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIVEN:1;
      uint64_t WTDIVRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIVEN;

  uint8_t res5[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALPRD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALPRD;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCOSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCOSEL;

};

#define RTC_0 (*(volatile struct RTC_0_tag *) 0x4003b000)

struct LSCRP_0_tag
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

#define LSCRP_0 (*(volatile struct LSCRP_0_tag *) 0x4003c000)

struct PCG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSCK:16;
      uint64_t ADCCK:4;
      uint64_t reservedSpace0:4;
      uint64_t DMACK:1;
      uint64_t reservedSpace1:3;
      uint64_t GIOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRST:16;
      uint64_t ADCRST:4;
      uint64_t reservedSpace0:4;
      uint64_t DMARST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST0;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMCK:4;
      uint64_t reservedSpace0:4;
      uint64_t MFTCK:4;
      uint64_t reservedSpace1:4;
      uint64_t QDUCK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMRST:4;
      uint64_t reservedSpace0:4;
      uint64_t MFTRST:4;
      uint64_t reservedSpace1:4;
      uint64_t QDURST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CANCK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CANRST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST2;

};

#define PCG_0 (*(volatile struct PCG_0_tag *) 0x4003c100)

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

struct MTB_DWT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCMP_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_ADDR_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCMP_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_DATA_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_MASK_START;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCMP_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_ADDR_STOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCMP_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_DATA_STOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_MASK_STOP;

  uint8_t res1[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STAEN:2;
      uint64_t STPEN:2;
      uint64_t DSTA:2;
      uint64_t DSTP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCT;

  uint8_t res2[4015];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID3;

};

#define MTB_DWT_0 (*(volatile struct MTB_DWT_0_tag *) 0xf0001000)

struct FASTIO_0_tag
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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR0;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR6;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR8;

  uint8_t res1[20];

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
  } __attribute__((aligned(4))) FPDIRE;

  uint8_t res2[4];

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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR0;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR6;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR8;

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
  } __attribute__((aligned(4))) FPDORE;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P15:1;
      uint64_t P14:1;
      uint64_t P13:1;
      uint64_t P12:1;
      uint64_t P11:1;
      uint64_t P10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P47:1;
      uint64_t P46:1;
      uint64_t P3F:1;
      uint64_t P3E:1;
      uint64_t P3D:1;
      uint64_t P3C:1;
      uint64_t P3B:1;
      uint64_t P3A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDIR1;

  uint8_t res6[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P15:1;
      uint64_t P14:1;
      uint64_t P13:1;
      uint64_t P12:1;
      uint64_t P11:1;
      uint64_t P10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDOR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P47:1;
      uint64_t P46:1;
      uint64_t P3F:1;
      uint64_t P3E:1;
      uint64_t P3D:1;
      uint64_t P3C:1;
      uint64_t P3B:1;
      uint64_t P3A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDOR1;

};

#define FASTIO_0 (*(volatile struct FASTIO_0_tag *) 0xf8000000)

struct FLASHIF_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RWT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FRWTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
      uint64_t CERS:1;
      uint64_t ESPS:1;
      uint64_t SERS:1;
      uint64_t PGMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSTR;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSYNDN;

  uint8_t res2[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYIE:1;
      uint64_t HANGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FICR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYIF:1;
      uint64_t HANGIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FISR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDYC:1;
      uint64_t HANGC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FICLR;

  uint8_t res5[215];

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

#define FLASHIF_1 (*(volatile struct FLASHIF_1_tag *) 0x40000004)

struct UID_1_tag
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

#define UID_1 (*(volatile struct UID_1_tag *) 0x40000200)

struct CLOCK_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HCRE:1;
      uint64_t MOSCE:1;
      uint64_t reservedSpace0:1;
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
      uint64_t HCRDY:1;
      uint64_t MORDY:1;
      uint64_t reservedSpace0:1;
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
      uint64_t STM_bitfield:2;
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

  uint8_t res5[7];

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

  uint8_t res6[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MOWT:4;
      uint64_t SOWT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSW_TMR;

  uint8_t res7[3];

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

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLM:4;
      uint64_t PLLK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL1;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL2;

  uint8_t res10[3];

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

  uint8_t res11[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCMF:1;
      uint64_t SCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSV_STR;

  uint8_t res12[3];

  uint16_t FCSWH_CTL;
  uint8_t res13[2];

  uint16_t FCSWL_CTL;
  uint8_t res14[2];

  uint16_t FCSWD_CTL;
  uint8_t res15[2];

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

  uint8_t res16[11];

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

  uint8_t res17[3];

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

  uint8_t res18[3];

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

#define CLOCK_1 (*(volatile struct CLOCK_1_tag *) 0x40010000)

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
      uint64_t TGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGSPMC;

  uint8_t res2[3047];

  uint32_t WDOGLOCK;
};

#define SWWDT_1 (*(volatile struct SWWDT_1_tag *) 0x40012000)

struct DTIM_1_tag
{
  uint32_t TIMER1LOAD;
  uint32_t TIMER1VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ONESHOT:1;
      uint64_t TIMERSIZE:1;
      uint64_t TIMERPRE:2;
      uint64_t reservedSpace0:1;
      uint64_t INTENABLE:1;
      uint64_t TIMERMODE:1;
      uint64_t TIMEREN:1;
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
      uint64_t ONESHOT:1;
      uint64_t TIMERSIZE:1;
      uint64_t TIMERPRE:2;
      uint64_t reservedSpace0:1;
      uint64_t INTENABLE:1;
      uint64_t TIMERMODE:1;
      uint64_t TIMEREN:1;
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
    uint8_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QCRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QCRH;

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

struct QPRC0_NF_1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLA;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLB;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NFCTLZ;

};

#define QPRC0_NF_1 (*(volatile struct QPRC0_NF_1_tag *) 0x40026100)

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
    uint32_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCMRCIF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCMRCOT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCODC:3;
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

  uint8_t res13[2];

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
    uint16_t R;
    struct
    {
      uint64_t NR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NMIRR;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NMICL;

};

#define EXTI_1 (*(volatile struct EXTI_1_tag *) 0x40030000)

struct INTREQ_A_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
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
  } __attribute__((aligned(4))) IRQ00MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWWDTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ01MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ02MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVE0INT0:1;
      uint64_t WAVE0INT1:1;
      uint64_t WAVE0INT2:1;
      uint64_t WAVE0INT3:1;
      uint64_t WAVE1INT0:1;
      uint64_t WAVE1INT1:1;
      uint64_t WAVE1INT2:1;
      uint64_t WAVE1INT3:1;
      uint64_t WAVE2INT0:1;
      uint64_t WAVE2INT1:1;
      uint64_t WAVE2INT2:1;
      uint64_t WAVE2INT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ03MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
      uint64_t EXTINT4:1;
      uint64_t EXTINT5:1;
      uint64_t EXTINT6:1;
      uint64_t EXTINT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ04MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT8:1;
      uint64_t EXTINT9:1;
      uint64_t EXTINT10:1;
      uint64_t EXTINT11:1;
      uint64_t EXTINT12:1;
      uint64_t EXTINT13:1;
      uint64_t EXTINT14:1;
      uint64_t EXTINT15:1;
      uint64_t EXTINT16:1;
      uint64_t EXTINT17:1;
      uint64_t EXTINT18:1;
      uint64_t EXTINT19:1;
      uint64_t EXTINT20:1;
      uint64_t EXTINT21:1;
      uint64_t EXTINT22:1;
      uint64_t EXTINT23:1;
      uint64_t EXTINT24:1;
      uint64_t EXTINT25:1;
      uint64_t EXTINT26:1;
      uint64_t EXTINT27:1;
      uint64_t EXTINT28:1;
      uint64_t EXTINT29:1;
      uint64_t EXTINT30:1;
      uint64_t EXTINT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ05MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMINT0:1;
      uint64_t TIMINT1:1;
      uint64_t QUD0INT0:1;
      uint64_t QUD0INT1:1;
      uint64_t QUD0INT2:1;
      uint64_t QUD0INT3:1;
      uint64_t QUD0INT4:1;
      uint64_t QUD0INT5:1;
      uint64_t QUD1INT0:1;
      uint64_t QUD1INT1:1;
      uint64_t QUD1INT2:1;
      uint64_t QUD1INT3:1;
      uint64_t QUD1INT4:1;
      uint64_t QUD1INT5:1;
      uint64_t QUD2INT0:1;
      uint64_t QUD2INT1:1;
      uint64_t QUD2INT2:1;
      uint64_t QUD2INT3:1;
      uint64_t QUD2INT4:1;
      uint64_t QUD2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ06MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ07MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ08MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ09MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ10MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ11MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ12MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ13MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ14MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ15MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ16MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ17MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ18MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t reservedSpace0:2;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ19MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ20MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t reservedSpace0:2;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ21MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
      uint64_t MFSINT2:1;
      uint64_t MFSINT3:1;
      uint64_t DMAINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ22MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
      uint64_t PPGINT3:1;
      uint64_t PPGINT4:1;
      uint64_t PPGINT5:1;
      uint64_t PPGINT6:1;
      uint64_t PPGINT7:1;
      uint64_t PPGINT8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ23MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCINT:1;
      uint64_t SOSCINT:1;
      uint64_t MPLLINT:1;
      uint64_t reservedSpace0:1;
      uint64_t WCINT:1;
      uint64_t RTCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ24MON;

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
  } __attribute__((aligned(4))) IRQ25MON;

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
  } __attribute__((aligned(4))) IRQ26MON;

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
      uint64_t LCDCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ27MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT0INT0:1;
      uint64_t FRT0INT1:1;
      uint64_t FRT0INT2:1;
      uint64_t FRT0INT3:1;
      uint64_t FRT0INT4:1;
      uint64_t FRT0INT5:1;
      uint64_t FRT1INT0:1;
      uint64_t FRT1INT1:1;
      uint64_t FRT1INT2:1;
      uint64_t FRT1INT3:1;
      uint64_t FRT1INT4:1;
      uint64_t FRT1INT5:1;
      uint64_t FRT2INT0:1;
      uint64_t FRT2INT1:1;
      uint64_t FRT2INT2:1;
      uint64_t FRT2INT3:1;
      uint64_t FRT2INT4:1;
      uint64_t FRT2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ28MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICU0INT0:1;
      uint64_t ICU0INT1:1;
      uint64_t ICU0INT2:1;
      uint64_t ICU0INT3:1;
      uint64_t ICU1INT0:1;
      uint64_t ICU1INT1:1;
      uint64_t ICU1INT2:1;
      uint64_t ICU1INT3:1;
      uint64_t ICU2INT0:1;
      uint64_t ICU2INT1:1;
      uint64_t ICU2INT2:1;
      uint64_t ICU2INT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ29MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCU0INT0:1;
      uint64_t OCU0INT1:1;
      uint64_t OCU0INT2:1;
      uint64_t OCU0INT3:1;
      uint64_t OCU0INT4:1;
      uint64_t OCU0INT5:1;
      uint64_t OCU1INT0:1;
      uint64_t OCU1INT1:1;
      uint64_t OCU1INT2:1;
      uint64_t OCU1INT3:1;
      uint64_t OCU1INT4:1;
      uint64_t OCU1INT5:1;
      uint64_t OCU2INT0:1;
      uint64_t OCU2INT1:1;
      uint64_t OCU2INT2:1;
      uint64_t OCU2INT3:1;
      uint64_t OCU2INT4:1;
      uint64_t OCU2INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ30MON;

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
      uint64_t BTINT8:1;
      uint64_t BTINT9:1;
      uint64_t BTINT10:1;
      uint64_t BTINT11:1;
      uint64_t BTINT12:1;
      uint64_t BTINT13:1;
      uint64_t BTINT14:1;
      uint64_t BTINT15:1;
      uint64_t reservedSpace0:11;
      uint64_t FLASHINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ31MON;

};

#define INTREQ_A_1 (*(volatile struct INTREQ_A_1_tag *) 0x40031000)

struct GPIO_1_tag
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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR6;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR8;

  uint8_t res1[20];

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

  uint8_t res2[196];

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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

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
  } __attribute__((aligned(4))) PCRE;

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
      uint64_t reservedSpace0:10;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR6;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR8;

  uint8_t res7[20];

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

  uint8_t res8[196];

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
      uint64_t reservedSpace0:10;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR6;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR8;

  uint8_t res10[20];

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

  uint8_t res11[196];

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
      uint64_t reservedSpace0:10;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR6;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR8;

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
  } __attribute__((aligned(4))) PDORE;

  uint8_t res14[196];

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

  uint8_t res15[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBXC:2;
      uint64_t MAINXC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPSR;

  uint8_t res16[124];

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
      uint64_t reservedSpace1:8;
      uint64_t SWDEN:1;
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
      uint64_t IGTRG0:1;
      uint64_t reservedSpace0:2;
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

  uint8_t res17[8];

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
      uint64_t TIOB12S:3;
      uint64_t reservedSpace1:1;
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
      uint64_t reservedSpace0:4;
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
      uint64_t CECR0B:2;
      uint64_t CECR1B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR18;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN0S:1;
      uint64_t QBIN0S:1;
      uint64_t QZIN0S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SCS10B:2;
      uint64_t SCS11E:2;
      uint64_t reservedSpace1:4;
      uint64_t SCS30B:2;
      uint64_t SCS31E:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR22;

  uint8_t res19[164];

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
      uint64_t reservedSpace0:10;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
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
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR6;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR8;

  uint8_t res21[20];

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

  uint8_t res22[452];

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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER0;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER6;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPOER8;

  uint8_t res24[20];

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
  } __attribute__((aligned(4))) FPOERE;

};

#define GPIO_1 (*(volatile struct GPIO_1_tag *) 0x40033000)

struct LVD_1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SVHI:5;
      uint64_t LVDIE:1;
      uint64_t reservedSpace1:2;
      uint64_t SVHR:5;
      uint64_t LVDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) LVD_CTL;

  uint8_t res0[2];

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
      uint64_t reservedSpace0:6;
      uint64_t LVDRRDY:1;
      uint64_t LVDIRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_STR2;

};

#define LVD_1 (*(volatile struct LVD_1_tag *) 0x40035000)

struct DS_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ISUBSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) REG_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCCKE:1;
      uint64_t CECCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCK_CTL;

  uint8_t res1[1787];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMD_CTL;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WINITX:1;
      uint64_t WLVDH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WRFSR;

  uint8_t res3[3];

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
      uint64_t WCEC0I:1;
      uint64_t WCEC1I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIFSR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WRTCE:1;
      uint64_t WLVDE:1;
      uint64_t reservedSpace0:1;
      uint64_t WUE1:1;
      uint64_t WUE2:1;
      uint64_t WUE3:1;
      uint64_t WUE4:1;
      uint64_t WUE5:1;
      uint64_t WCEC0E:1;
      uint64_t WCEC1E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIER;

  uint8_t res5[2];

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

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SRAMR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSRAMR;

  uint8_t res7[235];

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

#define DS_1 (*(volatile struct DS_1_tag *) 0x40035100)

struct CRC_1_tag
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

#define CRC_1 (*(volatile struct CRC_1_tag *) 0x40039000)

struct WC_1_tag
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

#define WC_1 (*(volatile struct WC_1_tag *) 0x4003a000)

struct RTC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST:1;
      uint64_t reservedSpace0:1;
      uint64_t RUN:1;
      uint64_t SRST:1;
      uint64_t SCST:1;
      uint64_t SCRST:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t MIEN:1;
      uint64_t HEN:1;
      uint64_t DEN:1;
      uint64_t MOEN:1;
      uint64_t YEN:1;
      uint64_t reservedSpace2:3;
      uint64_t INTSSI:1;
      uint64_t INTSI:1;
      uint64_t INTMI:1;
      uint64_t INTHI:1;
      uint64_t INTTMI:1;
      uint64_t INTALI:1;
      uint64_t INTERI:1;
      uint64_t INTCRI:1;
      uint64_t INTSSIE:1;
      uint64_t INTSIE:1;
      uint64_t INTMIE:1;
      uint64_t INTHIE:1;
      uint64_t INTTMIE:1;
      uint64_t INTALIE:1;
      uint64_t INTERIE:1;
      uint64_t INTCRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CREAD:1;
      uint64_t reservedSpace0:7;
      uint64_t TMST:1;
      uint64_t TMEN:1;
      uint64_t TMRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
      uint64_t BR16:1;
      uint64_t BR17:1;
      uint64_t BR18:1;
      uint64_t BR19:1;
      uint64_t BR20:1;
      uint64_t BR21:1;
      uint64_t BR22:1;
      uint64_t BR23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTBR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S:4;
      uint64_t TS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MI:4;
      uint64_t TMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t H:4;
      uint64_t TH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTHR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D:4;
      uint64_t TD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDW;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MO:4;
      uint64_t TMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMOR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t Y:4;
      uint64_t TY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTYR;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMI:4;
      uint64_t TAMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AH:4;
      uint64_t TAH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALHR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AD:4;
      uint64_t TAD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALDR;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMO:4;
      uint64_t TAMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMOR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AY:4;
      uint64_t TAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALYR;

  uint8_t res2[1];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TM:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTTR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCLKS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCLKS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCLKM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCLKM;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WTCAL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WTCAL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALEN;

  uint8_t res4[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIV;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIVEN:1;
      uint64_t WTDIVRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIVEN;

  uint8_t res5[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALPRD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALPRD;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCOSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCOSEL;

};

#define RTC_1 (*(volatile struct RTC_1_tag *) 0x4003b000)

struct LSCRP_1_tag
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

#define LSCRP_1 (*(volatile struct LSCRP_1_tag *) 0x4003c000)

struct PCG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSCK:16;
      uint64_t ADCCK:4;
      uint64_t reservedSpace0:4;
      uint64_t DMACK:1;
      uint64_t reservedSpace1:3;
      uint64_t GIOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRST:16;
      uint64_t ADCRST:4;
      uint64_t reservedSpace0:4;
      uint64_t DMARST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST0;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMCK:4;
      uint64_t reservedSpace0:4;
      uint64_t MFTCK:4;
      uint64_t reservedSpace1:4;
      uint64_t QDUCK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMRST:4;
      uint64_t reservedSpace0:4;
      uint64_t MFTRST:4;
      uint64_t reservedSpace1:4;
      uint64_t QDURST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CANCK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CANRST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST2;

};

#define PCG_1 (*(volatile struct PCG_1_tag *) 0x4003c100)

struct DMAC_1_tag
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
      uint64_t DS:1;
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

#define DMAC_1 (*(volatile struct DMAC_1_tag *) 0x40060000)

struct MTB_DWT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCMP_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_ADDR_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCMP_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_DATA_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK_STA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_MASK_START;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCMP_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_ADDR_STOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCMP_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_DATA_STOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSK_STO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP_MASK_STOP;

  uint8_t res1[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STAEN:2;
      uint64_t STPEN:2;
      uint64_t DSTA:2;
      uint64_t DSTP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCT;

  uint8_t res2[4015];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPNTID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CID3;

};

#define MTB_DWT_1 (*(volatile struct MTB_DWT_1_tag *) 0xf0001000)

struct FASTIO_1_tag
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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR0;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR6;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDIR8;

  uint8_t res1[20];

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
  } __attribute__((aligned(4))) FPDIRE;

  uint8_t res2[4];

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
      uint64_t reservedSpace0:10;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR0;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t reservedSpace1:1;
      uint64_t P49:1;
      uint64_t P4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR6;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
      uint64_t P82:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDOR8;

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
  } __attribute__((aligned(4))) FPDORE;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P15:1;
      uint64_t P14:1;
      uint64_t P13:1;
      uint64_t P12:1;
      uint64_t P11:1;
      uint64_t P10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P47:1;
      uint64_t P46:1;
      uint64_t P3F:1;
      uint64_t P3E:1;
      uint64_t P3D:1;
      uint64_t P3C:1;
      uint64_t P3B:1;
      uint64_t P3A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDIR1;

  uint8_t res6[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P15:1;
      uint64_t P14:1;
      uint64_t P13:1;
      uint64_t P12:1;
      uint64_t P11:1;
      uint64_t P10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDOR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P47:1;
      uint64_t P46:1;
      uint64_t P3F:1;
      uint64_t P3E:1;
      uint64_t P3D:1;
      uint64_t P3C:1;
      uint64_t P3B:1;
      uint64_t P3A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M_FPDOR1;

};

#define FASTIO_1 (*(volatile struct FASTIO_1_tag *) 0xf8000000)

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
      uint64_t CPU1:4;
      uint64_t CPU2:4;
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
      uint64_t ETH_bitfield:4;
      uint64_t HSSL_bitfield:4;
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
      uint64_t ONE0:1;
      uint64_t ETH_bitfield:1;
      uint64_t HSSL_bitfield:1;
      uint64_t ONE1:1;
      uint64_t DMAM:1;
      uint64_t ONE2:1;
      uint64_t CPU0:1;
      uint64_t CPU1:1;
      uint64_t CPU2:1;
      uint64_t ONE3:2;
      uint64_t HSMRMI:1;
      uint64_t HSMCMI:1;
      uint64_t ONE4:1;
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
      uint64_t ONE0:1;
      uint64_t ETH_bitfield:1;
      uint64_t HSSL_bitfield:1;
      uint64_t ONE1:1;
      uint64_t DMAM:1;
      uint64_t ONE2:1;
      uint64_t CPU0:1;
      uint64_t CPU1:1;
      uint64_t CPU2:1;
      uint64_t ONE3:2;
      uint64_t HSMRMI:1;
      uint64_t HSMCMI:1;
      uint64_t ONE4:1;
      uint64_t DMAL:1;
      uint64_t DMACHNR:8;
      uint64_t ONE5:8;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER8:3;
      uint64_t reservedSpace0:1;
      uint64_t MASTER9:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER10:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER11:3;
      uint64_t reservedSpace3:1;
      uint64_t MASTER12:3;
      uint64_t reservedSpace4:1;
      uint64_t MASTER13:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOHD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:3;
      uint64_t reservedSpace0:13;
      uint64_t MASTER4:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER5:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER6:3;
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
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS:30;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER8:3;
      uint64_t reservedSpace0:1;
      uint64_t MASTER9:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER10:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER11:3;
      uint64_t reservedSpace3:1;
      uint64_t MASTER12:3;
      uint64_t reservedSpace4:1;
      uint64_t MASTER13:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:3;
      uint64_t reservedSpace0:13;
      uint64_t MASTER4:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER5:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER6:3;
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

  uint8_t res6[32];

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
  } __attribute__((aligned(4))) XBAR_ARBCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER8:3;
      uint64_t reservedSpace0:1;
      uint64_t MASTER9:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER10:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER11:3;
      uint64_t reservedSpace3:1;
      uint64_t MASTER12:3;
      uint64_t reservedSpace4:1;
      uint64_t MASTER13:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:3;
      uint64_t reservedSpace0:13;
      uint64_t MASTER4:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER5:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER6:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRADDR1;

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
  } __attribute__((aligned(4))) XBAR_ERR1;

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
  } __attribute__((aligned(4))) XBAR_DBCON1;

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
      uint64_t ADDRESS_2:2;
      uint64_t ONE:2;
      uint64_t ADDRESS_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADD1;

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
      uint64_t ADDRESS_2:2;
      uint64_t ONE_2:2;
      uint64_t ADDRESS_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD1;

  uint8_t res7[32];

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
  } __attribute__((aligned(4))) XBAR_ARBCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER8:3;
      uint64_t reservedSpace0:1;
      uint64_t MASTER9:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER10:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER11:3;
      uint64_t reservedSpace3:1;
      uint64_t MASTER12:3;
      uint64_t reservedSpace4:1;
      uint64_t MASTER13:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:3;
      uint64_t reservedSpace0:13;
      uint64_t MASTER4:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER5:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER6:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRADDR2;

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
  } __attribute__((aligned(4))) XBAR_ERR2;

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
  } __attribute__((aligned(4))) XBAR_DBCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS0:19;
      uint64_t reservedSpace1:2;
      uint64_t ADDRESS1:1;
      uint64_t reservedSpace2:3;
      uint64_t ADDRESS2:1;
      uint64_t ONE0:1;
      uint64_t ADDRESS3:1;
      uint64_t ONE1:1;
      uint64_t ADDRESS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS0:19;
      uint64_t ONE0:2;
      uint64_t ADDRESS1:1;
      uint64_t ONE1:3;
      uint64_t ADDRESS2:1;
      uint64_t ONE2:1;
      uint64_t ADDRESS3:1;
      uint64_t ONE3:1;
      uint64_t ADDRESS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD2;

  uint8_t res8[96];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER8:3;
      uint64_t reservedSpace0:1;
      uint64_t MASTER9:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER10:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER11:3;
      uint64_t reservedSpace3:1;
      uint64_t MASTER12:3;
      uint64_t reservedSpace4:1;
      uint64_t MASTER13:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:3;
      uint64_t reservedSpace0:13;
      uint64_t MASTER4:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER5:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER6:3;
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

  uint8_t res9[96];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER8:3;
      uint64_t reservedSpace0:1;
      uint64_t MASTER9:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER10:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER11:3;
      uint64_t reservedSpace3:1;
      uint64_t MASTER12:3;
      uint64_t reservedSpace4:1;
      uint64_t MASTER13:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:3;
      uint64_t reservedSpace0:13;
      uint64_t MASTER4:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER5:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER6:3;
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
      uint64_t ADDRESS0:25;
      uint64_t ONE0:1;
      uint64_t ADDRESS1:3;
      uint64_t ONE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS0:25;
      uint64_t ONE0:1;
      uint64_t ADDRESS1:3;
      uint64_t ONE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD6;

  uint8_t res10[32];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER8:3;
      uint64_t reservedSpace0:1;
      uint64_t MASTER9:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER10:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER11:3;
      uint64_t reservedSpace3:1;
      uint64_t MASTER12:3;
      uint64_t reservedSpace4:1;
      uint64_t MASTER13:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:3;
      uint64_t reservedSpace0:13;
      uint64_t MASTER4:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER5:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER6:3;
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
      uint64_t ADDRESS0:19;
      uint64_t reservedSpace1:8;
      uint64_t ADDRESS1:1;
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
      uint64_t ADDRESS0:19;
      uint64_t ONE0:8;
      uint64_t ADDRESS1:1;
      uint64_t ONE1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD7;

  uint8_t res11[32];

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
  } __attribute__((aligned(4))) XBAR_ARBCON8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER8:3;
      uint64_t reservedSpace0:1;
      uint64_t MASTER9:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER10:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER11:3;
      uint64_t reservedSpace3:1;
      uint64_t MASTER12:3;
      uint64_t reservedSpace4:1;
      uint64_t MASTER13:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOH8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER0:3;
      uint64_t reservedSpace0:13;
      uint64_t MASTER4:3;
      uint64_t reservedSpace1:1;
      uint64_t MASTER5:3;
      uint64_t reservedSpace2:1;
      uint64_t MASTER6:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_PRIOL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_ERRADDR8;

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
  } __attribute__((aligned(4))) XBAR_ERR8;

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
  } __attribute__((aligned(4))) XBAR_DBCON8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS0:19;
      uint64_t ONE0:1;
      uint64_t reservedSpace1:7;
      uint64_t ADDRESS1:1;
      uint64_t reservedSpace2:1;
      uint64_t ONE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBADD8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDRESS0:19;
      uint64_t ONE0:8;
      uint64_t ADDRESS1:1;
      uint64_t ONE1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBMADD8;

  uint8_t res12[420];

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
      uint64_t SCI1:1;
      uint64_t SCI2:1;
      uint64_t reservedSpace0:1;
      uint64_t SCI4:1;
      uint64_t reservedSpace1:1;
      uint64_t SCI6:1;
      uint64_t SCI7:1;
      uint64_t SCI8:1;
      uint64_t reservedSpace2:6;
      uint64_t SCID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_DBSAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSCI0:1;
      uint64_t SCSCI1:1;
      uint64_t SCSCI2:1;
      uint64_t reservedSpace0:1;
      uint64_t SCSCI4:1;
      uint64_t reservedSpace1:1;
      uint64_t SCSCI6:1;
      uint64_t SCSCI7:1;
      uint64_t SCSCI8:1;
      uint64_t reservedSpace2:6;
      uint64_t SCSCID:1;
      uint64_t PRSCI0:1;
      uint64_t PRSCI1:1;
      uint64_t PRSCI2:1;
      uint64_t reservedSpace3:1;
      uint64_t PRSCI4:1;
      uint64_t reservedSpace4:1;
      uint64_t PRSCI6:1;
      uint64_t PRSCI7:1;
      uint64_t PRSCI8:1;
      uint64_t reservedSpace5:6;
      uint64_t PRSCID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_INTSAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDCSCI0:1;
      uint64_t IDCSCI1:1;
      uint64_t IDCSCI2:1;
      uint64_t reservedSpace0:1;
      uint64_t IDCSCI4:1;
      uint64_t reservedSpace1:1;
      uint64_t IDSCI6:1;
      uint64_t IDSCI7:1;
      uint64_t IDSCI8:1;
      uint64_t reservedSpace2:6;
      uint64_t IDSCID:1;
      uint64_t IDMCI0:1;
      uint64_t reservedSpace3:3;
      uint64_t IDMCI4:1;
      uint64_t IDMCI5:1;
      uint64_t IDMCI6:1;
      uint64_t reservedSpace4:1;
      uint64_t IDMCI8:1;
      uint64_t IDMCI9:1;
      uint64_t IDMCI10:1;
      uint64_t IDMCI11:1;
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
      uint64_t ENSCI1:1;
      uint64_t ENSCI2:1;
      uint64_t reservedSpace0:1;
      uint64_t ENSCI4:1;
      uint64_t reservedSpace1:1;
      uint64_t ENSCI6:1;
      uint64_t ENSCI7:1;
      uint64_t ENSCI8:1;
      uint64_t reservedSpace2:6;
      uint64_t ENSCID:1;
      uint64_t ENMCI0:1;
      uint64_t reservedSpace3:3;
      uint64_t ENMCI4:1;
      uint64_t ENMCI5:1;
      uint64_t ENMCI6:1;
      uint64_t reservedSpace4:1;
      uint64_t ENMCI8:1;
      uint64_t ENMCI9:1;
      uint64_t ENMCI10:1;
      uint64_t ENMCI11:1;
      uint64_t ENMCI12:1;
      uint64_t ENMCI13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XBAR_IDINTEN;

  uint8_t res13[220];

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
      uint64_t RES_0:11;
      uint64_t U1_IED:1;
      uint64_t U1_IOS:1;
      uint64_t RES_1:14;
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

  uint8_t res26[69744];

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
  } __attribute__((aligned(4))) CPU1_SEGEN;

  uint8_t res27[28624];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASI:5;
      uint64_t RES:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TASK_ASI;

  uint8_t res28[248];

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
  } __attribute__((aligned(4))) CPU1_PMA0;

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
  } __attribute__((aligned(4))) CPU1_PMA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSI:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_PMA2;

  uint8_t res29[3828];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCACHE_SZE:16;
      uint64_t DSCRATCH_SZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DCON2;

  uint8_t res30[8];

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
  } __attribute__((aligned(4))) CPU1_SMACON;

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
  } __attribute__((aligned(4))) CPU1_DSTR;

  uint8_t res31[4];

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
  } __attribute__((aligned(4))) CPU1_DATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERROR_ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DEADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DIEAR;

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
  } __attribute__((aligned(4))) CPU1_DIETR;

  uint8_t res32[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:1;
      uint64_t DCBYP:1;
      uint64_t RES_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DCON0;

  uint8_t res33[444];

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
  } __attribute__((aligned(4))) CPU1_PSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCINV:1;
      uint64_t PBINV:1;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_PCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCACHE_SZE:16;
      uint64_t PSCRATCH_SZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_PCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:1;
      uint64_t PCBYP:1;
      uint64_t RES_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_PCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_PIEAR;

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
  } __attribute__((aligned(4))) CPU1_PIETR;

  uint8_t res34[488];

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
  } __attribute__((aligned(4))) CPU1_COMPAT;

  uint8_t res35[3068];

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
  } __attribute__((aligned(4))) CPU1_FPU_TRAP_CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_FPU_TRAP_PC;

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
  } __attribute__((aligned(4))) CPU1_FPU_TRAP_OPC;

  uint8_t res36[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_FPU_TRAP_SRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_FPU_TRAP_SRC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_FPU_TRAP_SRC3;

  uint8_t res37[8164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR0_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR0_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR1_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR1_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR2_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR2_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR3_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR3_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR4_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR4_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR5_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR5_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR6_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR6_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR7_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR7_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR8_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR8_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR9_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR9_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR10_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR10_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR11_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR11_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR12_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR12_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR13_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR13_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR14_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR14_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR15_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPR15_U;

  uint8_t res38[3968];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR0_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR0_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR1_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR1_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR2_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR2_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR3_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR3_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR4_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR4_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR5_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR5_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR6_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR6_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR7_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPR7_U;

  uint8_t res39[4032];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPXE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPXE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPXE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPXE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPRE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPRE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPRE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPRE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPWE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPWE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPWE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DPWE_3;

  uint8_t res40[976];

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
  } __attribute__((aligned(4))) CPU1_TPS_CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TPS_TIMER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TPS_TIMER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TPS_TIMER2;

  uint8_t res41[3056];

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
  } __attribute__((aligned(4))) CPU1_TR0EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TR0ADR;

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
  } __attribute__((aligned(4))) CPU1_TR1EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TR1ADR;

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
  } __attribute__((aligned(4))) CPU1_TR2EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TR2ADR;

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
  } __attribute__((aligned(4))) CPU1_TR3EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TR3ADR;

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
  } __attribute__((aligned(4))) CPU1_TR4EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TR4ADR;

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
  } __attribute__((aligned(4))) CPU1_TR5EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TR5ADR;

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
  } __attribute__((aligned(4))) CPU1_TR6EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TR6ADR;

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
  } __attribute__((aligned(4))) CPU1_TR7EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_TR7ADR;

  uint8_t res42[3008];

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
  } __attribute__((aligned(4))) CPU1_CCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_ICNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_M1CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_M2CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_M3CNT;

  uint8_t res43[232];

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
  } __attribute__((aligned(4))) CPU1_DBGSR;

  uint8_t res44[4];

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
  } __attribute__((aligned(4))) CPU1_EXEVT;

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
  } __attribute__((aligned(4))) CPU1_CREVT;

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
  } __attribute__((aligned(4))) CPU1_SWEVT;

  uint8_t res45[28];

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
  } __attribute__((aligned(4))) CPU1_TRIG_ACC;

  uint8_t res46[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t DMSValue:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:6;
      uint64_t DCXValue:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DCX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTA:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_DBGTCR;

  uint8_t res47[180];

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
  } __attribute__((aligned(4))) CPU1_PCXI;

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
  } __attribute__((aligned(4))) CPU1_PSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t PC:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_PC;

  uint8_t res48[8];

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
      uint64_t RES_0:11;
      uint64_t U1_IED:1;
      uint64_t U1_IOS:1;
      uint64_t RES_1:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SYSCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_32B:8;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CPU_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORE_ID:3;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CORE_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSS:1;
      uint64_t BIV:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_BIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t BTV:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_BTV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_ISP;

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
  } __attribute__((aligned(4))) CPU1_ICR;

  uint8_t res49[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCXO:16;
      uint64_t FCXS:4;
      uint64_t RES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_FCX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCXO:16;
      uint64_t LCXS:4;
      uint64_t RES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_LCX;

  uint8_t res50[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CID:3;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_CUS_ID;

  uint8_t res51[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_D15;

  uint8_t res52[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_A15;

  uint8_t res53[69744];

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
  } __attribute__((aligned(4))) CPU2_SEGEN;

  uint8_t res54[28624];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASI:5;
      uint64_t RES:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TASK_ASI;

  uint8_t res55[248];

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
  } __attribute__((aligned(4))) CPU2_PMA0;

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
  } __attribute__((aligned(4))) CPU2_PMA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSI:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_PMA2;

  uint8_t res56[3828];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCACHE_SZE:16;
      uint64_t DSCRATCH_SZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DCON2;

  uint8_t res57[8];

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
  } __attribute__((aligned(4))) CPU2_SMACON;

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
  } __attribute__((aligned(4))) CPU2_DSTR;

  uint8_t res58[4];

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
  } __attribute__((aligned(4))) CPU2_DATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERROR_ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DEADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DIEAR;

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
  } __attribute__((aligned(4))) CPU2_DIETR;

  uint8_t res59[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:1;
      uint64_t DCBYP:1;
      uint64_t RES_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DCON0;

  uint8_t res60[444];

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
  } __attribute__((aligned(4))) CPU2_PSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCINV:1;
      uint64_t PBINV:1;
      uint64_t RES:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_PCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCACHE_SZE:16;
      uint64_t PSCRATCH_SZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_PCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:1;
      uint64_t PCBYP:1;
      uint64_t RES_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_PCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_PIEAR;

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
  } __attribute__((aligned(4))) CPU2_PIETR;

  uint8_t res61[488];

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
  } __attribute__((aligned(4))) CPU2_COMPAT;

  uint8_t res62[3068];

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
  } __attribute__((aligned(4))) CPU2_FPU_TRAP_CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_FPU_TRAP_PC;

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
  } __attribute__((aligned(4))) CPU2_FPU_TRAP_OPC;

  uint8_t res63[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_FPU_TRAP_SRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_FPU_TRAP_SRC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_FPU_TRAP_SRC3;

  uint8_t res64[8164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR0_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR0_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR1_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR1_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR2_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR2_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR3_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR3_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR4_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR4_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR5_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR5_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR6_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR6_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR7_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR7_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR8_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR8_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR9_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR9_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR10_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR10_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR11_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR11_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR12_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR12_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR13_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR13_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR14_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR14_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR15_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPR15_U;

  uint8_t res65[3968];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR0_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR0_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR1_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR1_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR2_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR2_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR3_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR3_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR4_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR4_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR5_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR5_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR6_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR6_U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t LOWBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR7_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:3;
      uint64_t UPPBND:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPR7_U;

  uint8_t res66[4032];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPXE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPXE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPXE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XE_n:8;
      uint64_t RES:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPXE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPRE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPRE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPRE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPRE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPWE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPWE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPWE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WE_n:16;
      uint64_t RES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DPWE_3;

  uint8_t res67[976];

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
  } __attribute__((aligned(4))) CPU2_TPS_CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TPS_TIMER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TPS_TIMER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Timer:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TPS_TIMER2;

  uint8_t res68[3056];

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
  } __attribute__((aligned(4))) CPU2_TR0EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TR0ADR;

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
  } __attribute__((aligned(4))) CPU2_TR1EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TR1ADR;

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
  } __attribute__((aligned(4))) CPU2_TR2EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TR2ADR;

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
  } __attribute__((aligned(4))) CPU2_TR3EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TR3ADR;

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
  } __attribute__((aligned(4))) CPU2_TR4EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TR4ADR;

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
  } __attribute__((aligned(4))) CPU2_TR5EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TR5ADR;

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
  } __attribute__((aligned(4))) CPU2_TR6EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TR6ADR;

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
  } __attribute__((aligned(4))) CPU2_TR7EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_TR7ADR;

  uint8_t res69[3008];

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
  } __attribute__((aligned(4))) CPU2_CCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_ICNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_M1CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_M2CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CountValue:31;
      uint64_t SOvf:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_M3CNT;

  uint8_t res70[232];

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
  } __attribute__((aligned(4))) CPU2_DBGSR;

  uint8_t res71[4];

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
  } __attribute__((aligned(4))) CPU2_EXEVT;

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
  } __attribute__((aligned(4))) CPU2_CREVT;

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
  } __attribute__((aligned(4))) CPU2_SWEVT;

  uint8_t res72[28];

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
  } __attribute__((aligned(4))) CPU2_TRIG_ACC;

  uint8_t res73[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t DMSValue:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:6;
      uint64_t DCXValue:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DCX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTA:1;
      uint64_t RES:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_DBGTCR;

  uint8_t res74[180];

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
  } __attribute__((aligned(4))) CPU2_PCXI;

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
  } __attribute__((aligned(4))) CPU2_PSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t PC:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_PC;

  uint8_t res75[8];

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
      uint64_t RES_0:11;
      uint64_t U1_IED:1;
      uint64_t U1_IOS:1;
      uint64_t RES_1:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SYSCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_REV:8;
      uint64_t MOD_32B:8;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CPU_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORE_ID:3;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CORE_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSS:1;
      uint64_t BIV:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_BIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:1;
      uint64_t BTV:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_BTV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_ISP;

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
  } __attribute__((aligned(4))) CPU2_ICR;

  uint8_t res76[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCXO:16;
      uint64_t FCXS:4;
      uint64_t RES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_FCX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCXO:16;
      uint64_t LCXS:4;
      uint64_t RES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_LCX;

  uint8_t res77[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CID:3;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_CUS_ID;

  uint8_t res78[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_D15;

  uint8_t res79[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_A15;

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

  uint8_t res1[130808];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNLA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNUA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNLA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNUA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNLA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNUA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNLA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNUA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNLA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNUA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNLA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNUA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNLA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNUA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENB6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNLA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNUA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_RGNACCENB7;

  uint8_t res2[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_ACCENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU1_SPROT_ACCENB;

  uint8_t res3[130808];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNLA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNUA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNLA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNUA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNLA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNUA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNLA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNUA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNLA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNUA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNLA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNUA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNLA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNUA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENB6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNLA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:5;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNUA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_RGNACCENB7;

  uint8_t res4[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_ACCENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPU2_SPROT_ACCENB;

};

#define SPROT (*(volatile struct SPROT_tag *) 0xf880e000)

struct SCU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODREV:8;
      uint64_t MODTYPE:8;
      uint64_t MODNUMBER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_ID;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PLLLV:1;
      uint64_t OSCRES:1;
      uint64_t GAINSEL:2;
      uint64_t MODE:2;
      uint64_t SHBY:1;
      uint64_t PLLHV:1;
      uint64_t reservedSpace1:1;
      uint64_t X1D:1;
      uint64_t X1DEN:1;
      uint64_t reservedSpace2:4;
      uint64_t OSCVAL:5;
      uint64_t reservedSpace3:2;
      uint64_t APREN:1;
      uint64_t CAP0EN:1;
      uint64_t CAP1EN:1;
      uint64_t CAP2EN:1;
      uint64_t CAP3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_OSCCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCOBYST:1;
      uint64_t reservedSpace0:1;
      uint64_t VCOLOCK:1;
      uint64_t FINDIS:1;
      uint64_t K1RDY:1;
      uint64_t K2RDY:1;
      uint64_t reservedSpace1:1;
      uint64_t MODRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PLLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCOBYP:1;
      uint64_t VCOPWD:1;
      uint64_t MODEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SETFINDIS:1;
      uint64_t CLRFINDIS:1;
      uint64_t OSCDISCDIS:1;
      uint64_t reservedSpace1:2;
      uint64_t NDIV:7;
      uint64_t PLLPWD:1;
      uint64_t reservedSpace2:1;
      uint64_t RESLD:1;
      uint64_t reservedSpace3:5;
      uint64_t PDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PLLCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t K2DIV:7;
      uint64_t reservedSpace0:1;
      uint64_t K3DIV:7;
      uint64_t reservedSpace1:1;
      uint64_t K1DIV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PLLCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODCFG:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PLLCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCOBYST:1;
      uint64_t PWDSTAT:1;
      uint64_t VCOLOCK:1;
      uint64_t FINDIS:1;
      uint64_t K1RDY:1;
      uint64_t K2RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PLLERAYSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCOBYP:1;
      uint64_t VCOPWD:1;
      uint64_t reservedSpace0:2;
      uint64_t SETFINDIS:1;
      uint64_t CLRFINDIS:1;
      uint64_t OSCDISCDIS:1;
      uint64_t reservedSpace1:2;
      uint64_t NDIV:5;
      uint64_t reservedSpace2:2;
      uint64_t PLLPWD:1;
      uint64_t reservedSpace3:1;
      uint64_t RESLD:1;
      uint64_t reservedSpace4:5;
      uint64_t PDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PLLERAYCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t K2DIV:7;
      uint64_t reservedSpace0:1;
      uint64_t K3DIV:4;
      uint64_t reservedSpace1:4;
      uint64_t K1DIV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PLLERAYCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUD1DIV:4;
      uint64_t BAUD2DIV:4;
      uint64_t SRIDIV:4;
      uint64_t LPDIV:4;
      uint64_t SPBDIV:4;
      uint64_t FSI2DIV:2;
      uint64_t reservedSpace0:2;
      uint64_t FSIDIV:2;
      uint64_t reservedSpace1:2;
      uint64_t CLKSEL:2;
      uint64_t UP:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANDIV:4;
      uint64_t ERAYDIV:4;
      uint64_t STMDIV:4;
      uint64_t GTMDIV:4;
      uint64_t ETHDIV:4;
      uint64_t ASCLINFDIV:4;
      uint64_t ASCLINSDIV:4;
      uint64_t INSEL:2;
      uint64_t UP:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEP:10;
      uint64_t reservedSpace0:4;
      uint64_t DM:2;
      uint64_t RESULT:10;
      uint64_t reservedSpace1:5;
      uint64_t DISCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN0:1;
      uint64_t reservedSpace0:1;
      uint64_t SEL0:4;
      uint64_t reservedSpace1:10;
      uint64_t EN1:1;
      uint64_t NSEL:1;
      uint64_t SEL1:4;
      uint64_t reservedSpace2:2;
      uint64_t DIV1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EXTCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBBDIV:4;
      uint64_t reservedSpace0:26;
      uint64_t UP:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLDIV:6;
      uint64_t PLLSEL:2;
      uint64_t PLLERAYDIV:6;
      uint64_t PLLERAYSEL:2;
      uint64_t SRIDIV:6;
      uint64_t SRISEL:2;
      uint64_t reservedSpace0:5;
      uint64_t SLCK:1;
      uint64_t UP:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPBDIV:6;
      uint64_t SPBSEL:2;
      uint64_t GTMDIV:6;
      uint64_t GTMSEL:2;
      uint64_t STMDIV:6;
      uint64_t STMSEL:2;
      uint64_t reservedSpace0:5;
      uint64_t SLCK:1;
      uint64_t UP:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXDIV:4;
      uint64_t reservedSpace0:26;
      uint64_t UP:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESR0:1;
      uint64_t ESR1:1;
      uint64_t reservedSpace0:1;
      uint64_t SMU_bitfield:1;
      uint64_t SW:1;
      uint64_t STM0:1;
      uint64_t STM1:1;
      uint64_t STM2:1;
      uint64_t reservedSpace1:8;
      uint64_t PORST:1;
      uint64_t reservedSpace2:1;
      uint64_t CB0:1;
      uint64_t CB1:1;
      uint64_t CB3:1;
      uint64_t reservedSpace3:2;
      uint64_t EVR13:1;
      uint64_t EVR33:1;
      uint64_t SWD:1;
      uint64_t reservedSpace4:2;
      uint64_t STBYR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_RSTSTAT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESR0:2;
      uint64_t ESR1:2;
      uint64_t reservedSpace0:2;
      uint64_t SMU_bitfield:2;
      uint64_t SW:2;
      uint64_t STM0:2;
      uint64_t STM1:2;
      uint64_t STM2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_RSTCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STM0DIS:1;
      uint64_t STM1DIS:1;
      uint64_t STM2DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_ARSTDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SWRSTREQ:1;
      uint64_t reservedSpace1:6;
      uint64_t RES:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_SWRSTCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CLRC:1;
      uint64_t Reserved_0:10;
      uint64_t CSS0:1;
      uint64_t CSS1:1;
      uint64_t CSS2:1;
      uint64_t Reserved_1:1;
      uint64_t USRINFO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_RSTCON2;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RST13TRIM:8;
      uint64_t RES:16;
      uint64_t RST13OFF:1;
      uint64_t BPRST13OFF:1;
      uint64_t RST33OFF:1;
      uint64_t BPRST33OFF:1;
      uint64_t RSTSWDOFF:1;
      uint64_t BPRSTSWDOFF:1;
      uint64_t SLCK:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRRSTCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t EDCON:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_ESRCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t EDCON:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_ESRCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARI:1;
      uint64_t ARC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_ESROCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCTRIG0:1;
      uint64_t reservedSpace0:1;
      uint64_t RAMINTM:2;
      uint64_t SETLUDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t DATM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_SYSCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU0DIV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU1DIV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU2DIV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CCUCON8;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD0:3;
      uint64_t PL0:1;
      uint64_t PD1:3;
      uint64_t PL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PC0:4;
      uint64_t reservedSpace1:4;
      uint64_t PC1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_IOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS0:1;
      uint64_t PS1:1;
      uint64_t reservedSpace0:14;
      uint64_t PCL0:1;
      uint64_t PCL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_OMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVR13:1;
      uint64_t OV13:1;
      uint64_t EVR33:1;
      uint64_t OV33:1;
      uint64_t OVSWD:1;
      uint64_t UV13:1;
      uint64_t UV33:1;
      uint64_t UVSWD:1;
      uint64_t EXTPASS13:1;
      uint64_t EXTPASS33:1;
      uint64_t BGPROK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVS13TRIM:8;
      uint64_t reservedSpace0:8;
      uint64_t DVS33TRIM:8;
      uint64_t reservedSpace1:7;
      uint64_t VAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRDVSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:28;
      uint64_t EVR13OFF:1;
      uint64_t BPEVR13OFF:1;
      uint64_t RES_1:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVR13CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RES_0:28;
      uint64_t EVR33OFF:1;
      uint64_t BPEVR33OFF:1;
      uint64_t RES_1:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVR33CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWCFG:8;
      uint64_t FTM:7;
      uint64_t MODE:1;
      uint64_t Res_0:1;
      uint64_t LUDIS:1;
      uint64_t Res_1:1;
      uint64_t TRSTL:1;
      uint64_t SPDEN:1;
      uint64_t Res_2:3;
      uint64_t RAMINT:1;
      uint64_t Res_3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_STSTAT;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ESR1WKEN:1;
      uint64_t PINAWKEN:1;
      uint64_t PINBWKEN:1;
      uint64_t ESR0DFEN:1;
      uint64_t ESR0EDCON:2;
      uint64_t ESR1DFEN:1;
      uint64_t ESR1EDCON:2;
      uint64_t PINADFEN:1;
      uint64_t PINAEDCON:2;
      uint64_t PINBDFEN:1;
      uint64_t PINBEDCON:2;
      uint64_t reservedSpace1:1;
      uint64_t STBYRAMSEL:2;
      uint64_t reservedSpace2:2;
      uint64_t TRISTEN:1;
      uint64_t TRISTREQ:1;
      uint64_t PORSTDF:1;
      uint64_t PWRWKEN:1;
      uint64_t DCDCSYNC:1;
      uint64_t BLNKFIL:3;
      uint64_t ESR0TRIST:1;
      uint64_t reservedSpace3:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PMSWCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ESR1WKP:1;
      uint64_t ESR1OVRUN:1;
      uint64_t PINAWKP:1;
      uint64_t PINAOVRUN:1;
      uint64_t PINBWKP:1;
      uint64_t PINBOVRUN:1;
      uint64_t PWRWKP:1;
      uint64_t PORSTDF:1;
      uint64_t HWCFGEVR:3;
      uint64_t STBYRAM:2;
      uint64_t TRIST:1;
      uint64_t reservedSpace1:4;
      uint64_t ESR1WKEN:1;
      uint64_t PINAWKEN:1;
      uint64_t PINBWKEN:1;
      uint64_t PWRWKEN:1;
      uint64_t BLNKFIL:3;
      uint64_t ESR0TRIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PMSWSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ESR1WKPCLR:1;
      uint64_t ESR1OVRUNCLR:1;
      uint64_t PINAWKPCLR:1;
      uint64_t PINAOVRUNCLR:1;
      uint64_t PINBWKPCLR:1;
      uint64_t PINBOVRUNCLR:1;
      uint64_t PWRWKPCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PMSWSTATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQSLP:2;
      uint64_t SMUSLP:1;
      uint64_t reservedSpace0:5;
      uint64_t PMST:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PMCSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQSLP:2;
      uint64_t SMUSLP:1;
      uint64_t reservedSpace0:5;
      uint64_t PMST:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PMCSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQSLP:2;
      uint64_t SMUSLP:1;
      uint64_t reservedSpace0:5;
      uint64_t PMST:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PMCSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:10;
      uint64_t reservedSpace0:4;
      uint64_t RDY:1;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_DTSSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWD:1;
      uint64_t START:1;
      uint64_t reservedSpace0:2;
      uint64_t CAL:22;
      uint64_t reservedSpace1:5;
      uint64_t SLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_DTSCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t CPUIDLSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t IRADIS:1;
      uint64_t reservedSpace2:11;
      uint64_t CPUSEL:3;
      uint64_t STBYEVEN:1;
      uint64_t STBYEV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PMSWCR1;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDINIT:1;
      uint64_t LCK:1;
      uint64_t PW:14;
      uint64_t REL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTSCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRIRF:1;
      uint64_t reservedSpace0:1;
      uint64_t IR0:1;
      uint64_t DR:1;
      uint64_t reservedSpace1:1;
      uint64_t IR1:1;
      uint64_t UR:1;
      uint64_t PAR:1;
      uint64_t TCR:1;
      uint64_t TCTR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTSCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AE:1;
      uint64_t OE:1;
      uint64_t IS0:1;
      uint64_t DS:1;
      uint64_t TO:1;
      uint64_t IS1:1;
      uint64_t US:1;
      uint64_t PAS:1;
      uint64_t TCS:1;
      uint64_t TCT:7;
      uint64_t TIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL:1;
      uint64_t MODE:1;
      uint64_t ENON:1;
      uint64_t PSEL:1;
      uint64_t reservedSpace0:12;
      uint64_t EMSF:1;
      uint64_t SEMSF:1;
      uint64_t reservedSpace1:6;
      uint64_t EMSFM:2;
      uint64_t SEMSFM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EMSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDINIT:1;
      uint64_t LCK:1;
      uint64_t PW:14;
      uint64_t REL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU0CON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t IR0:1;
      uint64_t DR:1;
      uint64_t reservedSpace1:1;
      uint64_t IR1:1;
      uint64_t UR:1;
      uint64_t PAR:1;
      uint64_t TCR:1;
      uint64_t TCTR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU0CON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AE:1;
      uint64_t OE:1;
      uint64_t IS0:1;
      uint64_t DS:1;
      uint64_t TO:1;
      uint64_t IS1:1;
      uint64_t US:1;
      uint64_t PAS:1;
      uint64_t TCS:1;
      uint64_t TCT:7;
      uint64_t TIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU0SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDINIT:1;
      uint64_t LCK:1;
      uint64_t PW:14;
      uint64_t REL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU1CON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t IR0:1;
      uint64_t DR:1;
      uint64_t reservedSpace1:1;
      uint64_t IR1:1;
      uint64_t UR:1;
      uint64_t PAR:1;
      uint64_t TCR:1;
      uint64_t TCTR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU1CON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AE:1;
      uint64_t OE:1;
      uint64_t IS0:1;
      uint64_t DS:1;
      uint64_t TO:1;
      uint64_t IS1:1;
      uint64_t US:1;
      uint64_t PAS:1;
      uint64_t TCS:1;
      uint64_t TCT:7;
      uint64_t TIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDINIT:1;
      uint64_t LCK:1;
      uint64_t PW:14;
      uint64_t REL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU2CON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t IR0:1;
      uint64_t DR:1;
      uint64_t reservedSpace1:1;
      uint64_t IR1:1;
      uint64_t UR:1;
      uint64_t PAR:1;
      uint64_t TCR:1;
      uint64_t TCTR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU2CON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AE:1;
      uint64_t OE:1;
      uint64_t IS0:1;
      uint64_t DS:1;
      uint64_t TO:1;
      uint64_t IS1:1;
      uint64_t US:1;
      uint64_t PAS:1;
      uint64_t TCS:1;
      uint64_t TCT:7;
      uint64_t TIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_WDTCPU2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESR0T:1;
      uint64_t ESR1T:1;
      uint64_t reservedSpace0:1;
      uint64_t SMUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_TRAPSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESR0T:1;
      uint64_t ESR1T:1;
      uint64_t reservedSpace0:1;
      uint64_t SMUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_TRAPSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESR0T:1;
      uint64_t ESR1T:1;
      uint64_t reservedSpace0:1;
      uint64_t SMUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_TRAPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESR0T:1;
      uint64_t ESR1T:1;
      uint64_t reservedSpace0:1;
      uint64_t SMUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_TRAPDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LS:1;
      uint64_t reservedSpace1:14;
      uint64_t LSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_LCLCON0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LS:1;
      uint64_t reservedSpace1:14;
      uint64_t LSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_LCLCON1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCLT0:1;
      uint64_t LCLT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_LCLTEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHREV:6;
      uint64_t CHTEC:2;
      uint64_t CHID:8;
      uint64_t EEA:1;
      uint64_t UCODE:7;
      uint64_t FSIZE:4;
      uint64_t SP:2;
      uint64_t SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_CHIPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEPT:5;
      uint64_t MANUF:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_MANID;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBT:1;
      uint64_t Res:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_SAFECON;

  uint8_t res7[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBISTREQ:1;
      uint64_t LBISTREQP:1;
      uint64_t PATTERNS:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_LBISTCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEED:23;
      uint64_t reservedSpace0:1;
      uint64_t SPLITSH:3;
      uint64_t BODY:1;
      uint64_t LBISTFREQU:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_LBISTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGNATURE:24;
      uint64_t reservedSpace0:7;
      uint64_t LBISTDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_LBISTCTRL2;

  uint8_t res8[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIS0:1;
      uint64_t PDIS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PDISC;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVR13TRIM:8;
      uint64_t SDVOUTSEL:8;
      uint64_t RES:14;
      uint64_t SLCK:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRTRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC13V:8;
      uint64_t ADC33V:8;
      uint64_t ADCSWDV:8;
      uint64_t reservedSpace0:7;
      uint64_t VAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRADCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVR13UVVAL:8;
      uint64_t EVR33UVVAL:8;
      uint64_t SWDUVVAL:8;
      uint64_t reservedSpace0:6;
      uint64_t SLCK:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRUVMON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVR13OVVAL:8;
      uint64_t EVR33OVVAL:8;
      uint64_t SWDOVVAL:8;
      uint64_t reservedSpace0:6;
      uint64_t SLCK:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVROVMON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVR13OVMOD:2;
      uint64_t reservedSpace0:2;
      uint64_t EVR13UVMOD:2;
      uint64_t reservedSpace1:2;
      uint64_t EVR33OVMOD:2;
      uint64_t reservedSpace2:2;
      uint64_t EVR33UVMOD:2;
      uint64_t reservedSpace3:2;
      uint64_t SWDOVMOD:2;
      uint64_t reservedSpace4:2;
      uint64_t SWDUVMOD:2;
      uint64_t reservedSpace5:8;
      uint64_t SLCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRMONCTRL;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDFREQSPRD:16;
      uint64_t SDFREQ:8;
      uint64_t SDSTEP:4;
      uint64_t reservedSpace0:2;
      uint64_t SDSAMPLE:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRVP:8;
      uint64_t SDMINMAXDC:8;
      uint64_t DRVN:8;
      uint64_t SDLUT:6;
      uint64_t reservedSpace0:1;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDPWMPRE:8;
      uint64_t SDPID:8;
      uint64_t SDVOKLVL:8;
      uint64_t reservedSpace0:7;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SYNCDIV:3;
      uint64_t reservedSpace1:20;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCTRL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SD5P:8;
      uint64_t SD5I:8;
      uint64_t SD5D:8;
      uint64_t reservedSpace0:7;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCOEFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SD33P:8;
      uint64_t SD33I:8;
      uint64_t SD33D:8;
      uint64_t reservedSpace0:7;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCOEFF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT5REG0:8;
      uint64_t CT5REG1:8;
      uint64_t CT5REG2:8;
      uint64_t reservedSpace0:7;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCOEFF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT5REG3:8;
      uint64_t CT5REG4:8;
      uint64_t reservedSpace0:15;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCOEFF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT33REG0:8;
      uint64_t CT33REG1:8;
      uint64_t CT33REG2:8;
      uint64_t reservedSpace0:7;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCOEFF5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT33REG3:8;
      uint64_t CT33REG4:8;
      uint64_t reservedSpace0:15;
      uint64_t LCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EVRSDCOEFF6;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVEN0:1;
      uint64_t OVEN1:1;
      uint64_t OVEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_OVCENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t reservedSpace0:13;
      uint64_t OVSTRT:1;
      uint64_t OVSTP:1;
      uint64_t DCINVAL:1;
      uint64_t reservedSpace1:5;
      uint64_t OVCONF:1;
      uint64_t POVCONF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_OVCCON;

  uint8_t res12[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t EXIS0:3;
      uint64_t reservedSpace1:1;
      uint64_t FEN0:1;
      uint64_t REN0:1;
      uint64_t LDEN0:1;
      uint64_t EIEN0:1;
      uint64_t INP0:3;
      uint64_t reservedSpace2:5;
      uint64_t EXIS1:3;
      uint64_t reservedSpace3:1;
      uint64_t FEN1:1;
      uint64_t REN1:1;
      uint64_t LDEN1:1;
      uint64_t EIEN1:1;
      uint64_t INP1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EICR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t EXIS0:3;
      uint64_t reservedSpace1:1;
      uint64_t FEN0:1;
      uint64_t REN0:1;
      uint64_t LDEN0:1;
      uint64_t EIEN0:1;
      uint64_t INP0:3;
      uint64_t reservedSpace2:5;
      uint64_t EXIS1:3;
      uint64_t reservedSpace3:1;
      uint64_t FEN1:1;
      uint64_t REN1:1;
      uint64_t LDEN1:1;
      uint64_t EIEN1:1;
      uint64_t INP1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EICR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t EXIS0:3;
      uint64_t reservedSpace1:1;
      uint64_t FEN0:1;
      uint64_t REN0:1;
      uint64_t LDEN0:1;
      uint64_t EIEN0:1;
      uint64_t INP0:3;
      uint64_t reservedSpace2:5;
      uint64_t EXIS1:3;
      uint64_t reservedSpace3:1;
      uint64_t FEN1:1;
      uint64_t REN1:1;
      uint64_t LDEN1:1;
      uint64_t EIEN1:1;
      uint64_t INP1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EICR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t EXIS0:3;
      uint64_t reservedSpace1:1;
      uint64_t FEN0:1;
      uint64_t REN0:1;
      uint64_t LDEN0:1;
      uint64_t EIEN0:1;
      uint64_t INP0:3;
      uint64_t reservedSpace2:5;
      uint64_t EXIS1:3;
      uint64_t reservedSpace3:1;
      uint64_t FEN1:1;
      uint64_t REN1:1;
      uint64_t LDEN1:1;
      uint64_t EIEN1:1;
      uint64_t INP1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EICR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTF0:1;
      uint64_t INTF1:1;
      uint64_t INTF2:1;
      uint64_t INTF3:1;
      uint64_t INTF4:1;
      uint64_t INTF5:1;
      uint64_t INTF6:1;
      uint64_t INTF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_EIFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FS0:1;
      uint64_t FS1:1;
      uint64_t FS2:1;
      uint64_t FS3:1;
      uint64_t FS4:1;
      uint64_t FS5:1;
      uint64_t FS6:1;
      uint64_t FS7:1;
      uint64_t reservedSpace0:8;
      uint64_t FC0:1;
      uint64_t FC1:1;
      uint64_t FC2:1;
      uint64_t FC3:1;
      uint64_t FC4:1;
      uint64_t FC5:1;
      uint64_t FC6:1;
      uint64_t FC7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDR0:1;
      uint64_t PDR1:1;
      uint64_t PDR2:1;
      uint64_t PDR3:1;
      uint64_t PDR4:1;
      uint64_t PDR5:1;
      uint64_t PDR6:1;
      uint64_t PDR7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_PDRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPEN00:1;
      uint64_t IPEN01:1;
      uint64_t IPEN02:1;
      uint64_t IPEN03:1;
      uint64_t IPEN04:1;
      uint64_t IPEN05:1;
      uint64_t IPEN06:1;
      uint64_t IPEN07:1;
      uint64_t reservedSpace0:5;
      uint64_t GEEN0:1;
      uint64_t IGP0:2;
      uint64_t IPEN10:1;
      uint64_t IPEN11:1;
      uint64_t IPEN12:1;
      uint64_t IPEN13:1;
      uint64_t IPEN14:1;
      uint64_t IPEN15:1;
      uint64_t IPEN16:1;
      uint64_t IPEN17:1;
      uint64_t reservedSpace1:5;
      uint64_t GEEN1:1;
      uint64_t IGP1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_IGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPEN00:1;
      uint64_t IPEN01:1;
      uint64_t IPEN02:1;
      uint64_t IPEN03:1;
      uint64_t IPEN04:1;
      uint64_t IPEN05:1;
      uint64_t IPEN06:1;
      uint64_t IPEN07:1;
      uint64_t reservedSpace0:5;
      uint64_t GEEN0:1;
      uint64_t IGP0:2;
      uint64_t IPEN10:1;
      uint64_t IPEN11:1;
      uint64_t IPEN12:1;
      uint64_t IPEN13:1;
      uint64_t IPEN14:1;
      uint64_t IPEN15:1;
      uint64_t IPEN16:1;
      uint64_t IPEN17:1;
      uint64_t reservedSpace1:5;
      uint64_t GEEN1:1;
      uint64_t IGP1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_IGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPEN00:1;
      uint64_t IPEN01:1;
      uint64_t IPEN02:1;
      uint64_t IPEN03:1;
      uint64_t IPEN04:1;
      uint64_t IPEN05:1;
      uint64_t IPEN06:1;
      uint64_t IPEN07:1;
      uint64_t reservedSpace0:5;
      uint64_t GEEN0:1;
      uint64_t IGP0:2;
      uint64_t IPEN10:1;
      uint64_t IPEN11:1;
      uint64_t IPEN12:1;
      uint64_t IPEN13:1;
      uint64_t IPEN14:1;
      uint64_t IPEN15:1;
      uint64_t IPEN16:1;
      uint64_t IPEN17:1;
      uint64_t reservedSpace1:5;
      uint64_t GEEN1:1;
      uint64_t IGP1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_IGCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPEN00:1;
      uint64_t IPEN01:1;
      uint64_t IPEN02:1;
      uint64_t IPEN03:1;
      uint64_t IPEN04:1;
      uint64_t IPEN05:1;
      uint64_t IPEN06:1;
      uint64_t IPEN07:1;
      uint64_t reservedSpace0:5;
      uint64_t GEEN0:1;
      uint64_t IGP0:2;
      uint64_t IPEN10:1;
      uint64_t IPEN11:1;
      uint64_t IPEN12:1;
      uint64_t IPEN13:1;
      uint64_t IPEN14:1;
      uint64_t IPEN15:1;
      uint64_t IPEN16:1;
      uint64_t IPEN17:1;
      uint64_t reservedSpace1:5;
      uint64_t GEEN1:1;
      uint64_t IGP1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_IGCR3;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWER:10;
      uint64_t reservedSpace0:5;
      uint64_t LLU:1;
      uint64_t UPPER:10;
      uint64_t reservedSpace1:4;
      uint64_t SLCK:1;
      uint64_t UOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCU_DTSLIM;

  uint8_t res14[436];

  uint32_t SCU_ACCEN1;
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
  } __attribute__((aligned(4))) SCU_ACCEN0;

};

#define SCU (*(volatile struct SCU_tag *) 0xf0036008)

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
      uint64_t CPU2DSEN:1;
      uint64_t Res_0:1;
      uint64_t CPU2DTEN:1;
      uint64_t CPU2PSEN:1;
      uint64_t Res_1:1;
      uint64_t CPU2PTEN:1;
      uint64_t CPU1DSEN:1;
      uint64_t Res_2:1;
      uint64_t CPU1DTEN:1;
      uint64_t CPU1PSEN:1;
      uint64_t Res_3:1;
      uint64_t CPU1PTEN:1;
      uint64_t LMUEN:1;
      uint64_t MMCDSEN:1;
      uint64_t CPU0DSEN:1;
      uint64_t Res_4:1;
      uint64_t CPU0PSEN:1;
      uint64_t CPU0PTEN:1;
      uint64_t Res_5:1;
      uint64_t CPU0DTEN:1;
      uint64_t CPUXDS2EN:2;
      uint64_t ETHEN:1;
      uint64_t Res_6:3;
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
      uint64_t EMEML4EN:1;
      uint64_t EMEML5EN:1;
      uint64_t EMEML6EN:1;
      uint64_t EMEML7EN:1;
      uint64_t EMEML8EN:1;
      uint64_t EMEML9EN:1;
      uint64_t EMEML10EN:1;
      uint64_t EMEML11EN:1;
      uint64_t EMEML12EN:1;
      uint64_t EMEML13EN:1;
      uint64_t EMEML14EN:1;
      uint64_t EMEML15EN:1;
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
      uint64_t CIF1EN:1;
      uint64_t CIF2EN:1;
      uint64_t STBY2EN:1;
      uint64_t DMAEN:1;
      uint64_t XTMxEN:2;
      uint64_t FFTxEN:2;
      uint64_t Res:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTU_MEMTEST2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Res_0:1;
      uint64_t CPU2DCMAP:1;
      uint64_t CPU2DTMAP:1;
      uint64_t Res_1:1;
      uint64_t CPU2PCMAP:1;
      uint64_t CPU2PTMAP:1;
      uint64_t Res_2:1;
      uint64_t CPU1DCMAP:1;
      uint64_t CPU1DTMAP:1;
      uint64_t Res_3:1;
      uint64_t CPU1PCMAP:1;
      uint64_t CPU1PTMAP:1;
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

